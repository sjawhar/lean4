/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.ScopedEnvExtension
import all Lean.Environment  -- for the per-view writes and counters

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
  /-- Per view and persistent extension, the entries whose replay onto that view of the command's before-state
  yields its after-state (`PersistentEnvExtension.stateDelta?`), oldest first. Both views of every extension are
  recorded, whatever modes the command's writes were called with. -/
  entries : Array (EnvExtension.View × Name × Array EnvExtensionEntry)
  /-- Per constant the command added from an asynchronous branch, the entries whose replay onto the before-state's
  main-branch view yields that branch's states (what `getState (asyncDecl := c)` reads), per extension registered
  `.async _` (`readdAsyncConstant`). -/
  asyncConsts : Array (Name × Array (Name × Array EnvExtensionEntry)) := #[]
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

private abbrev ErasedPersistentEnvExtension :=
  PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

/-- What the change of `ext`'s state from `s₀` to `s₁` is: nothing when they are the same object, else the extension's
`stateDelta?`, `stateOnly` without one. -/
private def stateChange (ext : ErasedPersistentEnvExtension) (s₀ s₁ : EnvExtensionState) :
    StateDelta EnvExtensionEntry :=
  if SharedDiff.sameObject s₀ s₁ then .entries #[]
  else (ext.stateDelta?.map (· s₀ s₁)).getD .stateOnly

/-- `ext`'s delta in `view` across a command: `stateOnly` when an unaccounted write reached the view, else
`stateChange`. -/
private def viewDelta (ext : ErasedPersistentEnvExtension) (before after : Environment) (view : EnvExtension.View) :
    StateDelta EnvExtensionEntry :=
  let e := ext.toEnvExtension
  if e.unaccountedWrites before view != e.unaccountedWrites after view then .stateOnly
  else stateChange ext (e.getStateIn before view).state (e.getStateIn after view).state

/-- For each constant `after` holds from an asynchronous branch that `before` does not, not counting realizations
(re-run rather than re-added), its branch's delta relative to `before`'s main-branch view for each extension
registered `.async _`, the ones whose reads with `asyncDecl` consult the branch's states: the entries, or the
extensions it changed in a way no entry expresses (an unaccounted write in the branch, a `stateOnly` delta). -/
private def asyncConstDeltas (pExts : Array ErasedPersistentEnvExtension) (before after : Environment) :
    Array (Name × Array (Name × Array EnvExtensionEntry)) × Array Name := Id.run do
  let consts₀ := before.asyncConstsMap.private
  let consts₁ := after.asyncConstsMap.private
  let mut out := #[]
  let mut stateOnly := #[]
  for c in (consts₁.revList.take (consts₁.size - consts₀.size)).reverse do
    if c.isRealized then continue
    let some exts := c.exts? | continue
    let exts := exts.get
    let writes := (c.branchWrites?.map (·.get)).getD #[]
    let mut states := #[]
    for ext in pExts do
      if excludedExtension ext.name then continue
      let e := ext.toEnvExtension
      unless e.asyncMode matches .async _ do continue
      let written := writes[e.idx]?.getD 0 != before.base.private.unaccountedWrites[e.idx]?.getD 0
      -- safety: `exts` is a kernel environment's extension array, as in `getStateIn`
      let s₁ := unsafe (e.getStateImpl exts).state
      let delta : StateDelta EnvExtensionEntry :=
        if written then .stateOnly else stateChange ext (e.getStateIn before .main).state s₁
      match delta with
      | .entries es => unless es.isEmpty do states := states.push (ext.name, es)
      | .stateOnly => unless stateOnly.contains ext.name do stateOnly := stateOnly.push ext.name
    unless states.isEmpty do out := out.push (c.constInfo.name, states)
  return (out, stateOnly)

/-- Records one command's payload: for every persistent extension, in each view (`EnvExtension.View`), its typed
state delta (`viewDelta`); for every constant added from an asynchronous branch, that branch's states
(`CommandEntries.asyncConsts`); the scoped local entries it added; and its cache deltas. A change is `stateOnly` when
a delta says so or the extension has no delta; when the command made a write the delta may not see
(`EnvExtension.unaccountedWrites`, in either view or the branch); when a scoped extension's local entries are not the
ones the payload replays (`ScopedEnvExtension.localEntriesAccountedFor`); or when a scoped extension got both entries
and installed local entries, which replay applies entries first and so possibly in another order. Takes time
proportional to what the command changed, apart from the per-extension state reads. -/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO Environment := do
  let scopedByName : Std.HashMap Name
      (ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :=
    (← scopedEnvExtensionsRef.get).foldl (fun m ext => m.insert ext.ext.name ext) {}
  let dStart := scopeDepth before
  let beforeLocals := localEntriesExt.getState (asyncMode := .local) before |>.size
  let afterLocals := localEntriesExt.getState (asyncMode := .local) after
  let locals := afterLocals.extract beforeLocals afterLocals.size
  let pExts ← persistentEnvExtensionsRef.get
  let mut entries := #[]
  let mut unreplayable := #[]
  let mut stateOnly := #[]
  for ext in pExts do
    if excludedExtension ext.name then continue
    let scopedExt? := scopedByName[ext.name]?
    let mut changed := false
    for view in [EnvExtension.View.checked, .main] do
      let delta : StateDelta EnvExtensionEntry := match viewDelta ext before after view, scopedExt?, view with
        -- a scoped extension's stack and local entries live in the main-branch view
        | .entries es, some scopedExt, .main =>
          let installed := locals.foldl (init := 0) fun n ((depth, name, _) : Nat × Name × EnvExtensionEntry) =>
            if name == ext.name && depth ≤ dStart then n + 1 else n
          if installed > 0 && !es.isEmpty then .stateOnly
          else if scopedExt.localEntriesAccountedForIn before after installed then .entries es
          else .stateOnly
        | delta, _, _ => delta
      match delta with
      | .entries es =>
        unless es.isEmpty do
          entries := entries.push (view, ext.name, es)
          changed := true
      | .stateOnly =>
        unless stateOnly.contains ext.name do stateOnly := stateOnly.push ext.name
        changed := true
    if changed && !(scopedExt?.isSome || ext.ofOLeanEntry?.isSome) then
      unreplayable := unreplayable.push ext.name
  let (asyncConsts, asyncStateOnly) := asyncConstDeltas pExts before after
  for name in asyncStateOnly do
    unless stateOnly.contains name do stateOnly := stateOnly.push name
  if dStart != scopeDepth after then
    stateOnly := stateOnly.push `Lean.scopeDepthExt
  let caches := (← commandCacheExtensionsRef.get).filterMap fun ext =>
    let delta := ext.delta before after
    if delta.isEmpty then none else some (ext.name, delta)
  return commandEntriesExt.addEntry after
    { idx, entries, asyncConsts, locals, caches := { deltas := caches }, unreplayable, stateOnly }

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

/-- The mode whose `getState` reads `view`. -/
private def readMode : EnvExtension.View → EnvExtension.AsyncMode
  | .checked => .sync
  | .main => .local

/-- Replays `entries`, recorded for the persistent extension `name` in `view`, into that view of `env`. -/
private def replayViewEntries (env : Environment) (view : EnvExtension.View) (name : Name)
    (entries : Array EnvExtensionEntry) (opts : Options) : IO Environment := do
  let scopedExts ← scopedEnvExtensionsRef.get
  let mut env := env
  if let some scopedExt := scopedExts.find? (·.ext.name == name) then
    for entry in entries do
      let state := scopedExt.getState (asyncMode := readMode view) env
      match scopedEntryOfEntry entry with
      | .global a =>
        let b ← scopedExt.descr.ofOLeanEntry state a |>.run { env, opts }
        env := scopedExt.ext.addEntryIn env view (.global b)
      | .scoped ns a =>
        let b ← scopedExt.descr.ofOLeanEntry state a |>.run { env, opts }
        env := scopedExt.ext.addEntryIn env view (.scoped ns b)
  else
    let some ext := (← persistentEnvExtensionsRef.get).find? (·.name == name) |
      throw <| IO.userError s!"unknown environment extension {name}"
    let some ofOLeanEntry := ext.ofOLeanEntry? |
      throw <| IO.userError s!"unreplayable extension {name}"
    for entry in entries do
      let b ← ofOLeanEntry (ext.getState env (asyncMode := readMode view)) entry |>.run { env, opts }
      env := ext.addEntryIn env view b
  return env

/-- Replays a command payload into `env`: each extension's entries into the view they were recorded in. Entries
reached only inside a deeper transient scope remain in the local-entry log but are not installed in the current
scoped state. Throws on a payload with `stateOnly` changes. A constant the command added from an asynchronous
branch is re-added by `readdAsyncConstant`, before this. -/
def replayCommandEntries (env : Environment) (ce : CommandEntries) (dStart : Nat) (opts : Options) :
    IO Environment := do
  unless ce.stateOnly.isEmpty do
    throw <| IO.userError
      s!"command {ce.idx} changed {ce.stateOnly} without entries; it must be elaborated again"
  let scopedExts ← scopedEnvExtensionsRef.get
  let scopedByName : Std.HashMap Name
      (ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :=
    scopedExts.foldl (fun m ext => m.insert ext.ext.name ext) {}
  let order (es : Array (EnvExtension.View × Name × Array EnvExtensionEntry)) :=
    es.filter (isIR ·.2.1) ++ es.filter (isLCNF ·.2.1) ++ es.filter (fun e => !isIR e.2.1 && !isLCNF e.2.1)
  let mut env := env
  for (view, name, entries) in order ce.entries do
    env ← replayViewEntries env view name entries opts
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

/-- Adds `info`, a constant a kept command added from an asynchronous branch, as that command did: as an asynchronous
constant whose branch states (what `getState (asyncDecl := info.name)` reads) are `env`'s main-branch states with
`states`, the command's `CommandEntries.asyncConsts` record for it, replayed; `env`'s main-branch view is unchanged.
Call it on the command's before-environment, ahead of `replayCommandEntries`, which replays the checked view. -/
def readdAsyncConstant (env : Environment) (info : ConstantInfo)
    (states : Array (Name × Array EnvExtensionEntry)) (opts : Options) : IO Environment := do
  let decl : Declaration ← match info with
    | .thmInfo v => pure (.thmDecl v)
    | .defnInfo v => pure (.defnDecl v)
    | .opaqueInfo v => pure (.opaqueDecl v)
    | .axiomInfo v => pure (.axiomDecl v)
    | _ => throw <| IO.userError s!"readdAsyncConstant: {info.name} is not a definition, theorem, opaque or axiom"
  let res ← env.addConstAsync info.name (.ofConstantInfo info)
  let mut branch ← match res.asyncEnv.addDeclCore 0 0 decl none with
    | .ok branch => pure branch
    | .error _ => throw <| IO.userError s!"readdAsyncConstant: the kernel rejected {info.name}"
  for (name, entries) in states do
    branch ← replayViewEntries branch .main name entries opts
  res.commitConst branch (info? := some info)
  res.commitCheckEnv branch
  return res.mainEnv

/-- `target` with the state of every persistent extension in both views, every command cache and the local-entry
log taken from `source`: for replaying a command's payload onto its after-environment rolled back to its
before-states, and comparing the result with the full run. -/
def withReplayStateOf (source target : Environment) : IO Environment := do
  let mut target := target
  for ext in ← persistentEnvExtensionsRef.get do
    let e := ext.toEnvExtension
    let checked := e.getStateIn source .checked
    let main := e.getStateIn source .main
    -- safety: both arrays hold `e`'s state at `e.idx`
    target := { target with
      checked := target.checked.map (sync := true) fun kenv =>
        { kenv with extensions := unsafe e.setStateImpl kenv.extensions checked }
      base.private.extensions := unsafe e.setStateImpl target.base.private.extensions main }
  for ext in ← commandCacheExtensionsRef.get do
    target := ext.copyState source target
  return localEntriesExt.setState target (localEntriesExt.getState source (asyncMode := .local)) (asyncMode := .local)

end Lean
