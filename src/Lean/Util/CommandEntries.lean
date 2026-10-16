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
  entries : Array (Name × Array EnvExtensionEntry)
  locals : Array (Nat × Name × EnvExtensionEntry)
  caches : CommandCaches := {}
  /-- Persistent extensions this command changed that have no conversion from their `.olean` entries back to
  the entries `addEntryFn` accepts (`PersistentEnvExtension.ofOLeanEntry?`). -/
  unreplayable : Array Name := #[]
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

/-- Captures one command's exported-entry multiset delta, its scoped local entries, and its typed cache
deltas. Comparing compacted bytes works for arbitrary type-erased extension entries and does not rely on
sorted exporters preserving an array prefix. -/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO Environment :=
  IO.FS.withTempDir fun dir => do
    let beforeEntries := (← before.computeExtEntries).private
    let afterEntries := (← after.computeExtEntries).private
    let beforeByName : Std.HashMap Name (Array EnvExtensionEntry) :=
      beforeEntries.foldl (fun m (n, es) => m.insert n es) {}
    let pExtByName : Std.HashMap Name
        (PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :=
      (← persistentEnvExtensionsRef.get).foldl (fun m ext => m.insert ext.name ext) {}
    let scopedNames := (← scopedEnvExtensionsRef.get).foldl (fun s ext => s.insert ext.ext.name) ({} : NameSet)
    let mut entries := #[]
    let mut unreplayable := #[]
    for (name, es) in afterEntries do
      unless excludedExtension name do
        let delta ← entryDelta dir name (beforeByName.getD name #[]) es
        unless delta.isEmpty do
          entries := entries.push (name, delta)
          unless scopedNames.contains name || (pExtByName[name]?.any (·.ofOLeanEntry?.isSome)) do
            unreplayable := unreplayable.push name
    let beforeLocals := localEntriesExt.getState (asyncMode := .local) before |>.size
    let afterLocals := localEntriesExt.getState (asyncMode := .local) after
    let locals := afterLocals.extract beforeLocals afterLocals.size
    let caches := (← commandCacheExtensionsRef.get).filterMap fun ext =>
      let delta := ext.delta before after
      if delta.isEmpty then none else some (ext.name, delta)
    return commandEntriesExt.addEntry after
      { idx, entries, locals, caches := { deltas := caches }, unreplayable }

/-- Replaces the current module's command payload with `entries` before writing its `.olean`. -/
def setCommandEntries (env : Environment) (entries : Array CommandEntries) : Environment :=
  commandEntriesExt.modifyState env fun _ => entries

/-- Why the module's command payloads cannot be replayed, if a command changed an unreplayable extension. -/
def commandEntriesNoskipReason? (entries : Array CommandEntries) : Option String := do
  let name ← entries.findSome? (·.unreplayable[0]?)
  return s!"unreplayable extension {name}"

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
