/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.ScopedEnvExtension
import all Lean.Environment  -- for the per-view writes and counters, branches and realizations

public section
namespace Lean

/-- The entries a command added to each non-persistent cache, keyed by the cache's registered name
(`registerCommandCacheExtension`), each erased from the cache's own entry type. -/
structure CommandCaches where
  deltas : Array (Name × Array EnvExtensionEntry) := #[]
  deriving Nonempty

/-- One persistent extension's entries in one view, oldest first. -/
structure ViewEntries where
  view : EnvExtension.View
  ext : Name
  entries : Array EnvExtensionEntry
  deriving Nonempty

/-- The states of an asynchronous branch (an asynchronous constant's own, or a realization's), as changes to the
main-branch view the branch is replayed onto: per persistent extension the entries its state delta gives, per scoped
extension the stack operations (`ScopedEnvExtension.opsSince`, each erased), per command cache its entries. -/
structure BranchStates where
  entries : Array (Name × Array EnvExtensionEntry) := #[]
  scopedOps : Array (Name × Array EnvExtensionEntry) := #[]
  caches : Array (Name × Array EnvExtensionEntry) := #[]
  deriving Nonempty

/-- A constant a command added that a keep re-adds other than by `addDeclCore` on the main branch, or one added in
the branch of such a constant (`readdCommandConstants`). -/
inductive AddedConst where
  /-- Added in the enclosing asynchronous branch without states of its own: re-added there by `addDeclCore`. -/
  | plain (name : Name)
  /-- Added from an asynchronous branch (`addConstAsync`): its branch's states relative to the main-branch view of the
  command's before-environment, and the constants that branch added, in order (itself among them as `plain` where its
  branch added it). -/
  | async (name : Name) (exportedKind? : Option ConstantKind) (states : BranchStates) (nested : Array AddedConst)
  /-- The constants `realize` added itself in one `realizeConst forConst key` call, in order, with the realization's
  states relative to the main-branch view of the realization context's environment. -/
  | realization (forConst key : Name) (consts : Array Name) (states : BranchStates)
  deriving Inhabited

namespace AddedConst

/-- Every constant the record re-adds, once each. -/
partial def names : AddedConst → Array Name
  | .plain n => #[n]
  | .async n _ _ nested => nested.foldl (fun ns a => ns ++ (a.names.filter (· != n))) #[n]
  | .realization _ _ consts _ => consts

end AddedConst

/-- Environment-extension and local scoped-extension payload of one top-level command. -/
structure CommandEntries where
  idx : Nat
  /-- Per view and persistent extension, the entries whose replay onto that view of the command's before-state
  yields its after-state (`PersistentEnvExtension.stateDelta?`), oldest first. Both views of every extension are
  recorded, whatever modes the command's writes were called with. -/
  entries : Array ViewEntries
  /-- Every constant the command added from an asynchronous branch (with the constants its branch added) or through a
  realization, in the order they were added; `readdCommandConstants` re-adds them. -/
  added : Array AddedConst := #[]
  /-- Local constants whose realization context the command registered on the main branch
  (`enableRealizationsForConst`); `finishRealizationContexts` registers them again. -/
  realizationContexts : Array Name := #[]
  locals : Array (Nat × Name × EnvExtensionEntry)
  caches : CommandCaches := {}
  /-- Persistent extensions this command changed that have no conversion from their `.olean` entries back to
  the entries `addEntryFn` accepts (`PersistentEnvExtension.ofOLeanEntry?`). -/
  unreplayable : Array Name := #[]
  /-- Extensions whose state this command changed in a way no entry expresses (`StateDelta.stateOnly`, a change
  to an extension without `stateDelta?`, `Lean.scopeDepthExt` for a change of scope depth, or a branch or realization
  state in `branchStateOnly`). Such a payload is not replayed: the command must be elaborated. -/
  stateOnly : Array Name := #[]
  /-- Per asynchronous constant or realized constant, the extensions whose branch state no record expresses (an
  unaccounted write in the branch, a `stateOnly` delta, a scoped stack written other than by its operations); each
  extension is in `stateOnly` too. -/
  branchStateOnly : Array (Name × Name) := #[]
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

private unsafe def ofModuleDataImpl (md : ModuleData) : Array CommandEntries :=
  ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2.map unsafeCast)).getD #[]

/-- The command payloads a module's `.olean` data holds. -/
@[implemented_by ofModuleDataImpl]
opaque CommandEntries.ofModuleData (md : ModuleData) : Array CommandEntries

private def excludedExtension (n : Name) : Bool :=
  let s := n.toString
  n == commandEntriesExt.name || n == `Lean.ModuleUsage.ext || n == `Lean.ModuleUsage.stmtExt ||
    s.endsWith ".exportedAxiomsExt" || s.endsWith ".modPkgExt" ||
    s.endsWith ".deprecatedModuleExt" || s.endsWith "symbolFrequency" || s.endsWith "sineQueNon"

private abbrev ErasedPersistentEnvExtension :=
  PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

private abbrev ErasedScopedEnvExtension :=
  ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

/-- The registered persistent and scoped extensions and command caches, in registration order and by name. -/
private structure Registries where
  persistent : Array ErasedPersistentEnvExtension
  caches : Array CommandCacheExtension
  persistentByName : Std.HashMap Name ErasedPersistentEnvExtension
  scopedByName : Std.HashMap Name ErasedScopedEnvExtension
  cacheByName : Std.HashMap Name CommandCacheExtension

private def Registries.get : IO Registries := do
  let persistent ← persistentEnvExtensionsRef.get
  let caches ← commandCacheExtensionsRef.get
  return {
    persistent, caches
    persistentByName := persistent.foldl (fun m e => m.insert e.name e) {}
    scopedByName := (← scopedEnvExtensionsRef.get).foldl (fun m e => m.insert e.ext.name e) {}
    cacheByName := caches.foldl (fun m e => m.insert e.name e) {} }

/-- What the change of `ext`'s state from `s₀` to `s₁` is: nothing when they are the same object, else the extension's
`stateDelta?`, `stateOnly` without one. -/
private def stateChange (ext : ErasedPersistentEnvExtension) (s₀ s₁ : EnvExtensionState) :
    StateDelta EnvExtensionEntry :=
  if SharedDiff.sameObject s₀ s₁ then .entries #[]
  else (ext.stateDelta?.map (· s₀ s₁)).getD .stateOnly

private unsafe def stateInImpl (ext : ErasedPersistentEnvExtension) (kenv : Kernel.Environment) :
    EnvExtensionState :=
  (ext.toEnvExtension.getStateImpl kenv.extensions).state

/-- `ext`'s state in a kernel environment's extensions. -/
@[implemented_by stateInImpl]
private opaque stateIn (ext : ErasedPersistentEnvExtension) (kenv : Kernel.Environment) : EnvExtensionState

private unsafe def cacheStateInImpl (ext : CommandCacheExtension) (kenv : Kernel.Environment) :
    EnvExtensionState :=
  ext.ext.getStateImpl kenv.extensions

/-- A command cache's state in a kernel environment's extensions. -/
@[implemented_by cacheStateInImpl]
private opaque cacheStateIn (ext : CommandCacheExtension) (kenv : Kernel.Environment) : EnvExtensionState

/-- `ext`'s delta from `k₀` to `k₁`, two kernel environments of the same view: `stateOnly` when an unaccounted write
reached the second, else `stateChange`. -/
private def kenvDelta (ext : ErasedPersistentEnvExtension) (k₀ k₁ : Kernel.Environment) :
    StateDelta EnvExtensionEntry :=
  let idx := ext.toEnvExtension.idx
  if k₀.unaccountedWrites[idx]?.getD 0 != k₁.unaccountedWrites[idx]?.getD 0 then .stateOnly
  else stateChange ext (stateIn ext k₀) (stateIn ext k₁)

private unsafe def scopedOpsSinceImpl (s₀ s₁ : EnvExtensionState) : Option (Array EnvExtensionEntry) :=
  (ScopedEnvExtension.opsSince (α := EnvExtensionEntry) (β := EnvExtensionEntry) (σ := EnvExtensionState)
    (unsafeCast s₀) (unsafeCast s₁)).map (·.map unsafeCast)

/-- `ScopedEnvExtension.opsSince` on two erased stacks, each operation erased. -/
@[implemented_by scopedOpsSinceImpl]
private opaque scopedOpsSince (s₀ s₁ : EnvExtensionState) : Option (Array EnvExtensionEntry)

private unsafe def opOfEntryImpl (e : EnvExtensionEntry) : ScopedEnvExtension.Op EnvExtensionEntry := unsafeCast e

@[implemented_by opOfEntryImpl]
private opaque opOfEntry (e : EnvExtensionEntry) : ScopedEnvExtension.Op EnvExtensionEntry

/-- The change of every persistent extension and command cache from `base` to `branch`, two main-branch views, as
`BranchStates`; and the extensions whose change none expresses (an unaccounted write, a `stateOnly` delta, a scoped
stack written other than by its operations). -/
private def branchStates (regs : Registries) (base branch : Kernel.Environment) : BranchStates × Array Name := Id.run do
  let mut st : BranchStates := {}
  let mut refused := #[]
  for ext in regs.persistent do
    if excludedExtension ext.name then continue
    if regs.scopedByName.contains ext.name then
      let idx := ext.toEnvExtension.idx
      let s₀ := stateIn ext base
      let s₁ := stateIn ext branch
      if base.unaccountedWrites[idx]?.getD 0 != branch.unaccountedWrites[idx]?.getD 0 then
        refused := refused.push ext.name
      else if !SharedDiff.sameObject s₀ s₁ then
        match scopedOpsSince s₀ s₁ with
        | some ops => unless ops.isEmpty do st := { st with scopedOps := st.scopedOps.push (ext.name, ops) }
        | none => refused := refused.push ext.name
    else
      match kenvDelta ext base branch with
      | .entries es => unless es.isEmpty do st := { st with entries := st.entries.push (ext.name, es) }
      | .stateOnly => refused := refused.push ext.name
  for cache in regs.caches do
    let es := cache.stateDelta (cacheStateIn cache base) (cacheStateIn cache branch)
    unless es.isEmpty do st := { st with caches := st.caches.push (cache.name, es) }
  return (st, refused)

/-- The constants of `cs` (from the constant map `level`, oldest first) that `outer`, the map `level`'s branch forked
from, does not name, as `AddedConst`s: one record per realization, an `async` record with its nested constants (those
of its own map that `level` does not name, and itself as `plain` where its branch added it) for a constant with
states of its own, and, with `listPlain` (inside a branch), the others as `plain`; inside the branch of `self?`,
`self?` too. Also the (constant, extension) pairs whose state no record expresses, with constants marked realized that
their realization did not add itself. Branch states are taken relative to `before`, the command's
before-environment's main-branch view; an async record's exported kind is `exportedKind` of the constant. -/
private partial def addedConsts (regs : Registries) (before : Kernel.Environment) (outer level : AsyncConsts)
    (cs : List AsyncConst) (listPlain : Bool) (exportedKind : AsyncConst → Option ConstantKind)
    (self? : Option Name := none) : Array AddedConst × Array (Name × Name) := Id.run do
  let mut out : Array AddedConst := #[]
  let mut refused := #[]
  let mut realizations : Std.HashMap (Name × Name) Nat := {}
  for c in cs do
    let name := c.constInfo.name
    if self? == some name then
      out := out.push (.plain name)
      continue
    if (outer.find? name).isSome then continue
    match c.realization?, c.branchKEnv? with
    | some info, some kenv =>
      if let some i := realizations[(info.forConst, info.constName)]? then
        out := out.modify i fun
          | .realization f k consts s => .realization f k (consts.push name) s
          | a => a
      else
        let (states, r) := branchStates regs info.base kenv.get
        refused := refused ++ r.map (name, ·)
        realizations := realizations.insert (info.forConst, info.constName) out.size
        out := out.push (.realization info.forConst info.constName #[name] states)
    | none, some kenv =>
      if c.isRealized then
        refused := refused.push (name, `Lean.Environment.realizeConst)
      else
        let (states, r) := branchStates regs before kenv.get
        let inner := c.aconsts.get
        let (nested, r') := addedConsts regs before level inner inner.revList.reverse (listPlain := true)
          (fun c => some c.constInfo.kind) (self? := some name)
        refused := refused ++ r.map (name, ·) ++ r'
        out := out.push (.async name (exportedKind c) states nested)
    | _, none =>
      if listPlain then out := out.push (.plain name)
  return (out, refused)

/-- `ext`'s delta in `view` across a command (`kenvDelta` on that view's kernel environments). -/
private def viewDelta (ext : ErasedPersistentEnvExtension) (before after : Environment) (view : EnvExtension.View) :
    StateDelta EnvExtensionEntry :=
  kenvDelta ext (EnvExtension.viewEnv before view) (EnvExtension.viewEnv after view)

/-- Records one command's payload: for every persistent extension, in each view (`EnvExtension.View`), its typed
state delta (`viewDelta`); every constant added from an asynchronous branch or through a realization, with its
states and nested constants (`CommandEntries.added`); the realization contexts it registered; the scoped local
entries it added; and its cache deltas. A change is `stateOnly` when a delta says so or the extension has no delta;
when the command made a write the delta may not see (`EnvExtension.unaccountedWrites`, in either view or a branch);
when a scoped extension's local entries are not the ones the payload replays
(`ScopedEnvExtension.localEntriesAccountedFor`); when a scoped extension got both entries and installed local entries,
which replay applies entries first and so possibly in another order; or when a branch's or realization's state is not
expressed (`CommandEntries.branchStateOnly`). Takes time proportional to what the command changed, apart from the
per-extension state reads. -/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO Environment := do
  let regs ← Registries.get
  let dStart := scopeDepth before
  let beforeLocals := localEntriesExt.getState (asyncMode := .local) before |>.size
  let afterLocals := localEntriesExt.getState (asyncMode := .local) after
  let locals := afterLocals.extract beforeLocals afterLocals.size
  let mut entries : Array ViewEntries := #[]
  let mut unreplayable := #[]
  let mut stateOnly := #[]
  for ext in regs.persistent do
    if excludedExtension ext.name then continue
    let scopedExt? := regs.scopedByName[ext.name]?
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
          entries := entries.push { view, ext := ext.name, entries := es }
          changed := true
      | .stateOnly =>
        unless stateOnly.contains ext.name do stateOnly := stateOnly.push ext.name
        changed := true
    if changed && !(scopedExt?.isSome || ext.ofOLeanEntry?.isSome) then
      unreplayable := unreplayable.push ext.name
  let consts₀ := before.asyncConstsMap.private
  let consts₁ := after.asyncConstsMap.private
  let exportedKind (c : AsyncConst) := (after.asyncConstsMap.public.find? c.constInfo.name).map (·.constInfo.kind)
  let (added, branchStateOnly) := addedConsts regs before.base.private consts₀ consts₁
    (consts₁.revList.take (consts₁.size - consts₀.size)).reverse (listPlain := false) exportedKind
  for (_, ext) in branchStateOnly do
    unless stateOnly.contains ext do stateOnly := stateOnly.push ext
  if dStart != scopeDepth after then
    stateOnly := stateOnly.push `Lean.scopeDepthExt
  let realizationContexts :=
    (NameMap.sharedDiff before.localRealizationCtxMap after.localRealizationCtxMap).1.map (·.1)
  let caches := regs.caches.filterMap fun ext =>
    let delta := ext.delta before after
    if delta.isEmpty then none else some (ext.name, delta)
  return commandEntriesExt.addEntry after
    { idx, entries, added, realizationContexts, locals, caches := { deltas := caches }, unreplayable, stateOnly,
      branchStateOnly }

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
      if !isDecl ce.idx then none
      else if let some (c, ext) := ce.branchStateOnly[0]? then
        some s!"state-only change to {ext} in the branch of {c} in declaration command {ce.idx}"
      else ce.stateOnly[0]?.map (s!"state-only change to {·} in declaration command {ce.idx}")

private def isIR (n : Name) : Bool := n == `Lean.IR.declMapExt
private def isLCNF (n : Name) : Bool := (`Lean.Compiler.LCNF).isPrefixOf n

/-- Replays `entries`, recorded for the persistent extension `name` in `view`, into that view of `env`. -/
private def replayViewEntries (regs : Registries) (env : Environment) (view : EnvExtension.View) (name : Name)
    (entries : Array EnvExtensionEntry) (opts : Options) : IO Environment := do
  let mut env := env
  if let some scopedExt := regs.scopedByName[name]? then
    for entry in entries do
      let state := match (scopedExt.ext.toEnvExtension.getStateIn env view).state.stateStack with
        | top :: _ => top.state
        | [] => default
      match scopedEntryOfEntry entry with
      | .global a =>
        let b ← scopedExt.descr.ofOLeanEntry state a |>.run { env, opts }
        env := scopedExt.ext.addEntryIn env view (.global b)
      | .scoped ns a =>
        let b ← scopedExt.descr.ofOLeanEntry state a |>.run { env, opts }
        env := scopedExt.ext.addEntryIn env view (.scoped ns b)
  else
    let some ext := regs.persistentByName[name]? |
      throw <| IO.userError s!"unknown environment extension {name}"
    let some ofOLeanEntry := ext.ofOLeanEntry? |
      throw <| IO.userError s!"unreplayable extension {name}"
    for entry in entries do
      let b ← ofOLeanEntry (ext.toEnvExtension.getStateIn env view).state entry |>.run { env, opts }
      env := ext.addEntryIn env view b
  return env
where
  scopedEntryOfEntry (entry : EnvExtensionEntry) : ScopedEnvExtension.Entry EnvExtensionEntry :=
    unsafe unsafeCast entry

/-- Replays `states` into the main-branch view of `env`, an asynchronous branch or a realization's environment. -/
private def replayBranchStates (regs : Registries) (env : Environment) (states : BranchStates) (opts : Options) :
    IO Environment := do
  let mut env := env
  for (name, entries) in states.entries do
    env ← replayViewEntries regs env .main name entries opts
  for (name, ops) in states.scopedOps do
    let some ext := regs.scopedByName[name]? |
      throw <| IO.userError s!"unknown scoped environment extension {name}"
    env ← ext.replayOpsIn env .main (ops.map opOfEntry) |>.run { env, opts }
  for (name, entries) in states.caches do
    let some cache := regs.cacheByName[name]? |
      throw <| IO.userError s!"unknown command cache extension {name}"
    env := cache.replayIn env .main entries
  return env

/-- Replays a command payload into `env`: each extension's entries into the view they were recorded in. Entries
reached only inside a deeper transient scope remain in the local-entry log but are not installed in the current
scoped state. Throws on a payload with `stateOnly` changes. The command's constants are re-added before this, by
`readdCommandConstants`. -/
def replayCommandEntries (env : Environment) (ce : CommandEntries) (dStart : Nat) (opts : Options) :
    IO Environment := do
  unless ce.stateOnly.isEmpty do
    throw <| IO.userError
      s!"command {ce.idx} changed {ce.stateOnly} without entries; it must be elaborated again"
  let regs ← Registries.get
  let order (es : Array ViewEntries) :=
    es.filter (isIR ·.ext) ++ es.filter (isLCNF ·.ext) ++ es.filter (fun e => !isIR e.ext && !isLCNF e.ext)
  let mut env := env
  for e in order ce.entries do
    env ← replayViewEntries regs env e.view e.ext e.entries opts
  for (depth, name, entry) in ce.locals do
    if depth ≤ dStart then
      let some ext := regs.scopedByName[name]? |
        throw <| IO.userError s!"unknown scoped environment extension {name}"
      let state := ext.getState (asyncMode := .local) env
      let b ← ext.descr.ofOLeanEntry state entry |>.run { env, opts }
      env := ext.addLocalEntry env b
    else
      env := appendLocalEntries env #[(depth, name, entry)]
  for (name, delta) in ce.caches.deltas do
    let some ext := regs.cacheByName[name]? |
      throw <| IO.userError s!"unknown command cache extension {name}"
    env := ext.replayIn env ext.view delta
  return env

/-- The kernel's limits while a keep re-checks constants (`Environment.addDeclCore`); `0` is unlimited. -/
structure ReaddLimits where
  maxHeartbeats : USize := 0
  maxRecDepth : USize := 0

/-- The declaration that adds `info` and the names it adds: a non-safe definition with its whole mutual block
(`mutualDefnDecl`, which adds every member before checking any body), an inductive type with the other types of its
block and their constructors (the kernel adds the recursors). Constructors and recursors have none: their inductive's
declaration adds them. -/
private def declOf (infos : NameMap ConstantInfo) (info : ConstantInfo) : Except String (Declaration × List Name) := do
  let get (n : Name) : Except String ConstantInfo :=
    match infos.find? n with
    | some info => pure info
    | none => throw s!"{n}, in the block of {info.name}, is not among the command's constants"
  let decl : Declaration ← match info with
    | .thmInfo v => pure (.thmDecl v)
    | .axiomInfo v => pure (.axiomDecl v)
    | .opaqueInfo v => pure (.opaqueDecl v)
    | .defnInfo v =>
      if v.safety == .safe then pure (.defnDecl v)
      else .mutualDefnDecl <$> v.all.mapM fun n => do
        let .defnInfo v ← get n | throw s!"{n}, in the block of {info.name}, is not a definition"
        pure v
    | .inductInfo v => do
      let types ← v.all.mapM fun n => do
        let .inductInfo t ← get n | throw s!"{n}, in the block of {info.name}, is not an inductive type"
        let ctors ← t.ctors.mapM fun c => do
          let .ctorInfo ctor ← get c | throw s!"{c} is not a constructor"
          pure { name := ctor.name, type := ctor.type : Constructor }
        pure { name := t.name, type := t.type, ctors : InductiveType }
      pure (.inductDecl v.levelParams v.numParams types v.isUnsafe)
    | .quotInfo _ => pure .quotDecl
    | .ctorInfo _ | .recInfo _ => throw s!"{info.name} is added by its inductive type's declaration"
  return (decl, decl.getNames)

/-- Adds `decl` with the kernel's check, putting the kernel's message in the error. -/
private def addDeclChecked (env : Environment) (decl : Declaration) (limits : ReaddLimits) : IO Environment := do
  match env.addDeclCore limits.maxHeartbeats limits.maxRecDepth decl none with
  | .ok env => return env
  | .error ex =>
    throw <| IO.userError s!"reuse: kernel rejected kept declaration {decl.getTopLevelNames}: \
      {← (ex.toMessageData {}).toString}"

private def infoOf (infos : NameMap ConstantInfo) (n : Name) : IO ConstantInfo := do
  let some info := infos.find? n |
    throw <| IO.userError s!"reuse: the kept command's constant {n} is not among its constants"
  return info

/-- Re-adds `a` to `env` as the full run added it: a `plain` constant by `addDeclCore` (unless its block is already
there); an `async` one through `addConstAsync`, its nested constants and itself added in its branch in their recorded
order (itself not when the kernel environment already holds it, as `addAuxRecs` does for an inductive's auxiliary
recursors), its states replayed into the branch's main-branch view, then `commitConst` and `commitCheckEnv`; a
realization through `Environment.readdRealizeConst` in its context (registered with `env` when `env` has none, as for
a constant the command added), its constants added without a check that the merge's kernel check repeats, and its
states replayed. `env` holds every constant `a`'s constants depend on outside `a`. -/
private partial def readdAdded (regs : Registries) (infos : NameMap ConstantInfo) (opts : Options)
    (limits : ReaddLimits) (env : Environment) : AddedConst → IO Environment
  | .plain n => do
    if env.containsOnBranch n then return env
    let (decl, _) ← IO.ofExcept (declOf infos (← infoOf infos n))
    addDeclChecked env decl limits
  | .async n exportedKind? states nested => do
    let info ← infoOf infos n
    let kernelHeld := (env.toKernelEnv.find? n).isSome
    let res ← env.addConstAsync n (.ofConstantInfo info) (exportedKind? := exportedKind?)
    let addSelf (branch : Environment) : IO Environment := do
      if kernelHeld then return branch
      let (decl, _) ← IO.ofExcept (declOf infos info)
      addDeclChecked branch decl limits
    let mut branch := res.asyncEnv
    let mut selfAdded := false
    for a in nested do
      if (match a with | .plain m => m == n | _ => false) then
        branch ← addSelf branch
        selfAdded := true
      else
        branch ← readdAdded regs infos opts limits branch a
    unless selfAdded do
      branch ← addSelf branch
    branch ← replayBranchStates regs branch states opts
    res.commitConst branch (info? := some info)
    res.commitCheckEnv branch
    return res.mainEnv
  | .realization forConst key consts states => do
    let env ← if env.areRealizationsEnabledForConst forConst then pure env
      else env.setRealizationContext opts forConst env
    let infos' ← consts.mapM (infoOf infos)
    let (env, ex) ← env.readdRealizeConst forConst key fun realizeEnv realizeOpts => do
      let mut realizeEnv := realizeEnv
      for info in infos' do
        let (decl, _) ← IO.ofExcept (declOf infos info)
        match realizeEnv.addDeclCore 0 0 decl none (doCheck := false) with
        | .ok e => realizeEnv := e
        | .error ex => throw <| IO.userError s!"adding {info.name}: {← (ex.toMessageData {}).toString}"
      replayBranchStates regs realizeEnv states realizeOpts
    if let some ex := ex.get then
      throw <| IO.userError s!"reuse: kernel rejected the realization {key} for {forConst}: \
        {← (ex.toMessageData {}).toString}"
    return env

/--
Plan §1.4 step 1 for a kept command: adds `infos`, the constants the command added (its declarations, auxiliaries and
realized constants, from the previous `.olean`), to `env`, its before-environment, dependency-first, each as the full
run added it. A constant of a `CommandEntries.added` record goes in with its record (`readdAdded`: an asynchronous
constant with its branch's states and nested constants, a realization in its context); every other one by
`addDeclCore` on the main branch, an inductive type with its block and a non-safe definition with its mutual block.
The kernel checks every constant with `limits`, as it does realized constants with none, and a rejection is a hard
error carrying the kernel's message. Run `replayCommandEntries` (step 3) and then `finishRealizationContexts` after.
-/
partial def readdCommandConstants (env : Environment) (ce : CommandEntries) (infos : NameMap ConstantInfo)
    (opts : Options) (limits : ReaddLimits := {}) : IO Environment := do
  let regs ← Registries.get
  let records := ce.added
  let route : Std.HashMap Name Nat := Id.run do
    let mut route := {}
    for h : i in [:records.size] do
      for n in records[i].names do
        route := route.insert n i
    return route
  let envRef ← IO.mkRef env
  let done ← IO.mkRef ({} : NameSet)
  let rec visit (n : Name) : IO Unit := do
    if (← done.get).contains n then return
    let some info := infos.find? n | return
    let mut names := [n]
    let mut record? : Option AddedConst := none
    if let some i := route[n]? then
      names := records[i]!.names.toList
      record? := some records[i]!
    else match info with
      | .ctorInfo v => visit v.induct
      | .recInfo v => visit v.getMajorInduct
      | _ => names := (← IO.ofExcept (declOf infos info)).2
    done.modify fun s => names.foldl (·.insert ·) s
    for m in names do
      if let some info := infos.find? m then
        for d in info.getUsedConstantsAsSet do
          visit d
    match record?, info with
    | some a, _ => envRef.set (← readdAdded regs infos opts limits (← envRef.get) a)
    | none, .ctorInfo _ | none, .recInfo _ =>
      unless (← envRef.get).containsOnBranch n do
        throw <| IO.userError s!"reuse: {n} is not added by its inductive type's declaration"
    | none, _ =>
      let (decl, _) ← IO.ofExcept (declOf infos info)
      envRef.set (← addDeclChecked (← envRef.get) decl limits)
  for (n, _) in infos do
    visit n
  envRef.get

/-- Plan §1.4 step 7: makes the realization contexts the kept command registered run in `env`, its environment after
steps 1 and 3, keeping the realizations step 1 cached in them. -/
def finishRealizationContexts (env : Environment) (ce : CommandEntries) (opts : Options) : BaseIO Environment :=
  ce.realizationContexts.foldlM (init := env) fun env' c => env'.setRealizationContext opts c env

namespace CommandEntries.Testing

/-- Test support: `target` with the state of every persistent extension in both views, every command cache and the
local-entry log taken from `source`, each written as an unaccounted write, for replaying a command's payload onto
its after-environment rolled back to its before-states and comparing the result with the full run. -/
def rollbackTo (source target : Environment) : IO Environment := do
  let regs ← Registries.get
  let mut target := target
  for ext in regs.persistent do
    let e := ext.toEnvExtension
    for view in [EnvExtension.View.checked, .main] do
      let s := e.getStateIn source view
      target := e.writeView target view .unaccounted fun _ => s
  for cache in regs.caches do
    for view in [EnvExtension.View.checked, .main] do
      let s := cache.ext.getStateIn source view
      target := cache.ext.writeView target view .unaccounted fun _ => s
  return localEntriesExt.setState target (localEntriesExt.getState source (asyncMode := .local)) (asyncMode := .local)

end CommandEntries.Testing

end Lean
