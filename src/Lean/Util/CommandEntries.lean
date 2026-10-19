/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.ScopedEnvExtension
import all Lean.Environment  -- for the per-view writes and counters, branches, realizations and their contexts

public section
namespace Lean

/-- The change of one view of an environment's extension states from one point to a later one: per persistent
extension the entries its state delta gives (`PersistentEnvExtension.stateDelta?`), per scoped extension the stack
operations it logged (`ScopedEnvExtension.stackDelta`, each erased; the main-branch view only: a scoped stack's change
in the checked view is not expressed, and refuses the command), per command cache the entries it added in this view.
A command's change, an asynchronous branch's, a realization's and a realization context's all use it. -/
structure ViewStates where
  entries : Array (Name × Array EnvExtensionEntry) := #[]
  scopedOps : Array (Name × Array EnvExtensionEntry) := #[]
  caches : Array (Name × Array EnvExtensionEntry) := #[]
  deriving Nonempty

/-- What a command added on its main branch, or an asynchronous constant's branch added, in order: everything a keep
re-adds (`readdCommandConstants`). -/
inductive AddedConst where
  /-- A constant without states of its own: re-added by `addDeclCore` where it was added (with its inductive or mutual
  block, or found there already). -/
  | plain (name : Name)
  /-- Added from an asynchronous branch (`addConstAsync`): its branch's states relative to the main-branch view of the
  command's before-environment, and what that branch added, in order (itself among them as `plain` where its branch
  added it; absent when the kernel environment held it already, as for an inductive's auxiliary recursors). -/
  | async (name : Name) (exportedKind? : Option ConstantKind) (states : ViewStates) (nested : Array AddedConst)
  /-- The constants `realize` added itself in one `realizeConst forConst key` call, in order, with the realization's
  states relative to the main-branch view of the realization context's environment, and the realizations
  (`(forConst, key)`) whose cached results it merged while it ran, in order (`Environment.realizationMerges`). -/
  | realization (forConst key : Name) (consts : Array Name) (states : ViewStates) (merges : Array (Name × Name))
  /-- A realization an earlier command made (the before-environment's kernel holds its constants), which this branch
  merged from the realization cache: merged again, so that the branch's constant map holds its constants as the full
  run's does. The merge's extension writes are in the enclosing states. -/
  | merged (forConst key : Name) (consts : Array Name)
  /-- The realization context of `forConst` the command registered (`enableRealizationsForConst`), with the options it
  was registered with and its environment's states in both views relative to the command's before-environment. -/
  | context (forConst : Name) (opts : Options) (main checked : ViewStates)
  deriving Inhabited

/-- Why a command's payload is not replayed: a keep elaborates the command again instead. `at?` is the asynchronous
constant, realized constant or realization context whose record the change is in (`none`: the command's own views). -/
inductive Refusal where
  /-- A change to an extension's state that no entry expresses: an unaccounted write, a `stateOnly` delta, a scoped
  stack written other than by its operations. -/
  | inexpressible (ext : Name) (at? : Option Name := none)
  /-- A change to an extension whose state payloads do not carry (`PersistentEnvExtension.PerCommand.notCarried`). -/
  | notCarried (ext : Name) (at? : Option Name := none)
  /-- Entries for a persistent extension without `ofOLeanEntry?`, which cannot replay them. -/
  | unreplayable (ext : Name) (at? : Option Name := none)
  /-- A write to the non-persistent extension at this index, which is no command cache. -/
  | unrecorded (idx : Nat) (at? : Option Name := none)
  /-- A declaration whose kernel constant checking the elaborator's would not give (`Kernel.Environment.divergentAdds`:
  added unchecked, or rejected by the kernel). -/
  | divergentKernelAdd
  /-- An attribute whose handlers may run code outside core Lean (`foreignAttributesByCommandRef`). -/
  | foreignAttribute (attr : Name)
  /-- A realization whose constants the before-environment holds only part of. -/
  | partlyHeldRealization (const : Name)
  /-- A constant marked as realized outside any realization record. -/
  | realizedWithoutRealization (const : Name)
  /-- A realization that ran in a context the payload cannot provide (one registered inside another branch). -/
  | foreignRealizationContext (const : Name)
  /-- A constant map whose new cells do not end in the map it extends. -/
  | unrelatedConstMap (at? : Option Name := none)
  /-- A change to the command state's field `field`, which payloads do not carry. -/
  | commandState (field : Name)
  deriving Inhabited, BEq

namespace Refusal

/-- The extension the refusal names, if any. -/
def ext? : Refusal → Option Name
  | inexpressible ext _ | notCarried ext _ | unreplayable ext _ => some ext
  | _ => none

private def inRecord : Option Name → String
  | some c => s!" in the record of {c}"
  | none => ""

protected def toString : Refusal → String
  | inexpressible ext at? => s!"a change to {ext} that no entry expresses{inRecord at?}"
  | notCarried ext at? => s!"a change to {ext}, whose state payloads do not carry{inRecord at?}"
  | unreplayable ext at? => s!"entries for {ext}, which has no `ofOLeanEntry?` to replay them{inRecord at?}"
  | unrecorded idx at? => s!"a write to extension {idx}, neither persistent nor a command cache{inRecord at?}"
  | divergentKernelAdd => "a declaration whose kernel constant is not what checking the elaborator's would give"
  | foreignAttribute attr => s!"the attribute {attr}, whose handlers may run code outside core Lean"
  | partlyHeldRealization c => s!"the realization of {c}, part of which an earlier command added"
  | realizedWithoutRealization c => s!"{c}, marked as realized outside a realization"
  | foreignRealizationContext c => s!"the realization of {c}, in a context the payload cannot provide"
  | unrelatedConstMap at? => s!"a constant map that does not extend the one before it{inRecord at?}"
  | commandState field => s!"a change to the command state's {field}"

instance : ToString Refusal := ⟨Refusal.toString⟩

end Refusal

/-- The payload of one top-level command: everything a keep needs to make the environment the command left. -/
structure CommandEntries where
  idx : Nat
  /-- The change of the main-branch view across the command. -/
  main : ViewStates
  /-- The change of the checked view across the command. -/
  checked : ViewStates
  /-- What the command added on its main branch and the realization contexts it registered, in order
  (`readdCommandConstants`). -/
  added : Array AddedConst := #[]
  /-- Why the payload is not replayed: empty for a payload a keep replays. -/
  refusals : Array Refusal := #[]
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
    perCommand := .recorder
  }

private unsafe def ofModuleDataImpl (md : ModuleData) : Array CommandEntries :=
  ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2.map unsafeCast)).getD #[]

/-- The command payloads a module's `.olean` data holds. -/
@[implemented_by ofModuleDataImpl]
opaque CommandEntries.ofModuleData (md : ModuleData) : Array CommandEntries

private abbrev ErasedPersistentEnvExtension :=
  PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

private abbrev ErasedScopedEnvExtension :=
  ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

/-- The registered persistent and scoped extensions and command caches, in registration order and by name, and the
extension indices they cover. -/
private structure Registries where
  persistent : Array ErasedPersistentEnvExtension
  caches : Array CommandCacheExtension
  persistentByName : Std.HashMap Name ErasedPersistentEnvExtension
  scopedByName : Std.HashMap Name ErasedScopedEnvExtension
  cacheByName : Std.HashMap Name CommandCacheExtension
  /-- The indices of the persistent extensions and command caches; every other extension has no payload. -/
  recordedIdxs : Std.HashSet Nat

private def Registries.get : IO Registries := do
  let persistent ← persistentEnvExtensionsRef.get
  let caches ← commandCacheExtensionsRef.get
  return {
    persistent, caches
    persistentByName := persistent.foldl (fun m e => m.insert e.name e) {}
    scopedByName := (← scopedEnvExtensionsRef.get).foldl (fun m e => m.insert e.ext.name e) {}
    cacheByName := caches.foldl (fun m e => m.insert e.name e) {}
    recordedIdxs := caches.foldl (·.insert ·.ext.idx) (persistent.foldl (·.insert ·.toEnvExtension.idx) {}) }

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

private unsafe def stackDeltaImpl (s₀ s₁ : EnvExtensionState) : Option (Array EnvExtensionEntry) :=
  (ScopedEnvExtension.stackDelta (α := EnvExtensionEntry) (β := EnvExtensionEntry) (σ := EnvExtensionState)
    (unsafeCast s₀) (unsafeCast s₁)).map (·.map unsafeCast)

/-- `ScopedEnvExtension.stackDelta` on two erased stacks, each operation erased. -/
@[implemented_by stackDeltaImpl]
private opaque stackDelta (s₀ s₁ : EnvExtensionState) : Option (Array EnvExtensionEntry)

private unsafe def opOfEntryImpl (e : EnvExtensionEntry) : ScopedEnvExtension.Op EnvExtensionEntry := unsafeCast e

@[implemented_by opOfEntryImpl]
private opaque opOfEntry (e : EnvExtensionEntry) : ScopedEnvExtension.Op EnvExtensionEntry

/-- The change of `view` from `k₀` to `k₁`, two kernel environments of that view (`ViewStates`), and why it is not
replayable, each refusal naming `at?`: a change no entry expresses (an unaccounted write, a `stateOnly` delta, a scoped
stack written other than by its operations), a change to an extension payloads do not carry, entries an extension
cannot replay, and a write to an extension that is neither persistent nor a command cache. Extensions registered after
the environments were created (by initializers an `#eval` ran) have no state in them and are skipped. -/
private def viewStates (regs : Registries) (view : EnvExtension.View) (k₀ k₁ : Kernel.Environment)
    (at? : Option Name := none) : ViewStates × Array Refusal := Id.run do
  let mut st : ViewStates := {}
  let mut refused := #[]
  for ext in regs.persistent do
    if ext.perCommand == .recorder then continue
    let idx := ext.toEnvExtension.idx
    unless idx < k₀.extensions.size && idx < k₁.extensions.size do continue
    let s₀ := stateIn ext k₀
    let s₁ := stateIn ext k₁
    if ext.perCommand == .notCarried then
      unless SharedDiff.sameObject s₀ s₁ do refused := refused.push (.notCarried ext.name at?)
      continue
    let isScoped := regs.scopedByName.contains ext.name
    if k₀.unaccountedWrites[idx]?.getD 0 != k₁.unaccountedWrites[idx]?.getD 0 then
      refused := refused.push (.inexpressible ext.name at?)
    else if isScoped && view == .main then
      match stackDelta s₀ s₁ with
      | some ops => unless ops.isEmpty do st := { st with scopedOps := st.scopedOps.push (ext.name, ops) }
      | none => refused := refused.push (.inexpressible ext.name at?)
    else
      match stateChange ext s₀ s₁ with
      | .entries es =>
        unless es.isEmpty do
          if isScoped || ext.ofOLeanEntry?.isSome then st := { st with entries := st.entries.push (ext.name, es) }
          else refused := refused.push (.unreplayable ext.name at?)
      | .stateOnly => refused := refused.push (.inexpressible ext.name at?)
  for cache in regs.caches do
    let idx := cache.ext.idx
    unless idx < k₀.extensions.size && idx < k₁.extensions.size do continue
    let es := cache.stateDelta (cacheStateIn cache k₀) (cacheStateIn cache k₁)
    unless es.isEmpty do st := { st with caches := st.caches.push (cache.name, es) }
  for idx in [0:min k₀.extensions.size k₁.extensions.size] do
    if regs.recordedIdxs.contains idx then continue
    let sameState := match k₀.extensions[idx]?, k₁.extensions[idx]? with
      | some s₀, some s₁ => SharedDiff.sameObject s₀ s₁
      | _, _ => true
    unless sameState && k₀.unaccountedWrites[idx]?.getD 0 == k₁.unaccountedWrites[idx]?.getD 0 do
      refused := refused.push (.unrecorded idx at?)
  return (st, refused)

/-- The cells of `l` in front of its tail `stop` (by cell identity), oldest first, each with the list after it. -/
private unsafe def cellsSinceImpl (l stop : List AsyncConst) : Option (List (AsyncConst × List AsyncConst)) :=
  go l []
where
  go (l : List AsyncConst) (acc : List (AsyncConst × List AsyncConst)) :
      Option (List (AsyncConst × List AsyncConst)) :=
    if ptrAddrUnsafe l == ptrAddrUnsafe stop then some acc
    else match l with
      | [] => none
      | c :: rest => go rest ((c, rest) :: acc)

@[implemented_by cellsSinceImpl]
private opaque cellsSince (l stop : List AsyncConst) : Option (List (AsyncConst × List AsyncConst))

private unsafe def contextEnvImpl (ctx : RealizationContext) : Environment := unsafeCast ctx.env

@[implemented_by contextEnvImpl]
private opaque contextEnv (ctx : RealizationContext) : Environment

private unsafe def contextStartedFromImpl (env : Environment) (forConst : Name) (base : Kernel.Environment) : Bool :=
  (env.realizationContext? forConst).any fun ctx => ptrAddrUnsafe (contextEnv ctx).base.private == ptrAddrUnsafe base

/-- Whether the realization context `forConst` resolves to in `env` (`Environment.realizationContext?`: the import
context, or a local one an earlier command or this command registered on the main branch) has `base` as its
environment's main-branch view: a realization that started from `base` ran in that context, which a keep provides. -/
@[implemented_by contextStartedFromImpl]
private opaque contextStartedFrom (env : Environment) (forConst : Name) (base : Kernel.Environment) : Bool

/-- What the recorder collects while walking a command's additions. -/
private structure Walk where
  /-- The command's after-environment, whose realization contexts realizations must have run in. -/
  after : Environment
  /-- The main-branch view of the command's before-environment, which branch states are relative to. -/
  before : Kernel.Environment
  /-- The checked view of the command's before-environment. -/
  beforeKernel : Kernel.Environment

/--
`cells`, the constants one constant map gained (oldest first, each with the list after it, which is the map an
asynchronous constant's branch forked from), as `AddedConst`s in order, each with the index of its cell: an `async`
record with its branch's own additions (`cellsSince` its map and the tail after it) for a constant with states of its
own; one record per realization, with all the constants `realize` added itself, at the position of the last of them (a
realization requested inside another one merged its constants into the outer one's before the outer one's own, so its
record comes first; the outer record's `merges`, which `attachMerges` fills, lists it); `plain` for the rest; `self?`
(inside its own branch) as `plain`. A realization whose constants the before-environment already holds was made by an
earlier command and merged here from the cache: it is a `merged` record. Also why the records cannot be replayed.
-/
private partial def addedConsts (regs : Registries) (w : Walk) (cells : List (AsyncConst × List AsyncConst))
    (exportedKind : AsyncConst → Option ConstantKind) (self? : Option Name := none) :
    Array (Nat × AddedConst) × Array Refusal := Id.run do
  -- per realization key, the index of its last constant
  let mut last : Std.HashMap (Name × Name) Nat := {}
  for h : k in [:cells.length] do
    if let some info := cells[k].1.realization? then
      last := last.insert (info.forConst, info.constName) k
  let mut out : Array (Nat × AddedConst) := #[]
  let mut refused := #[]
  -- per realization key, its constants so far and how many of them the before-environment holds
  let mut realized : Std.HashMap (Name × Name) (Array Name × Nat) := {}
  for (k, (c, tail)) in (List.range cells.length).zip cells do
    let name := c.constInfo.name
    if self? == some name then
      out := out.push (k, .plain name)
      continue
    match c.realization?, c.kenv? with
    | some info, some kenv =>
      let key := (info.forConst, info.constName)
      let (names, held) := realized.getD key (#[], 0)
      let names := names.push name
      let held := held + if (w.beforeKernel.find? name).isSome then 1 else 0
      realized := realized.insert key (names, held)
      unless last[key]? == some k do continue
      if held == names.size then
        out := out.push (k, .merged info.forConst info.constName names)
      else if held > 0 then
        refused := refused.push (.partlyHeldRealization name)
      else if !contextStartedFrom w.after info.forConst info.base then
        refused := refused.push (.foreignRealizationContext name)
      else
        let (states, r) := viewStates regs .main info.base kenv.get (at? := name)
        refused := refused ++ r
        out := out.push (k, .realization info.forConst info.constName names states #[])
    | none, some kenv =>
      if c.isRealized then
        refused := refused.push (.realizedWithoutRealization name)
      else
        let (states, r) := viewStates regs .main w.before kenv.get (at? := name)
        refused := refused ++ r
        match cellsSince c.aconsts.get.revList tail with
        | some own =>
          let (nested, r') := addedConsts regs w own (fun c => some c.constInfo.kind) (self? := some name)
          refused := refused ++ r'
          out := out.push (k, .async name (exportedKind c) states (nested.map (·.2)))
        | none => refused := refused.push (.unrelatedConstMap name)
    | _, none => out := out.push (k, .plain name)
  return (out, refused)

/-- The realization contexts the command registered on the main branch, in registration order, each as a `context`
record with its position among the command's main-branch constants (how many of them its environment held). -/
private def addedContexts (regs : Registries) (before after : Environment) :
    Array (Nat × AddedConst) × Array Refusal := Id.run do
  let n₀ := before.asyncConstsMap.private.size
  let mut ctxs : Array (Nat × Nat × AddedConst) := #[]
  let mut refused := #[]
  for (c, ctx) in (NameMap.sharedDiff before.localRealizationCtxMap after.localRealizationCtxMap).1 do
    let ctxEnv := contextEnv ctx
    let (main, r₁) := viewStates regs .main before.base.private ctxEnv.base.private (at? := c)
    let (checked, r₂) := viewStates regs .checked before.checked.get ctxEnv.checked.get (at? := c)
    refused := refused ++ r₁ ++ r₂
    ctxs := ctxs.push (ctxEnv.asyncConstsMap.private.size - n₀, ctxEnv.localRealizationCtxMap.size,
      .context c ctx.opts main checked)
  -- a context's environment holds the contexts registered before it: their count orders them
  let sorted := ctxs.qsort fun (p₁, o₁, _) (p₂, o₂, _) => p₁ < p₂ || (p₁ == p₂ && o₁ < o₂)
  return (sorted.map fun (p, _, a) => (p, a), refused)

/-- `recs` (each with its cell index) and `ctxs` (each with the number of cells its environment held), both in order,
merged: a context before the first record whose cell its environment did not hold. -/
private def mergeAtPositions (recs ctxs : Array (Nat × AddedConst)) : Array AddedConst := Id.run do
  let mut out := #[]
  let mut j := 0
  for (k, r) in recs do
    while h : j < ctxs.size do
      unless ctxs[j].1 ≤ k do break
      out := out.push ctxs[j].2
      j := j + 1
    out := out.push r
  return out ++ (ctxs.extract j).map (·.2)

/-- `a` with each `realization` record's `merges` read from the result its context caches in `after`
(`Environment.realizationMerges`), in nested records too. -/
private partial def attachMerges (after : Environment) : AddedConst → BaseIO AddedConst
  | .realization forConst key consts states _ =>
    return .realization forConst key consts states (← after.realizationMerges forConst key)
  | .async n exportedKind? states nested => return .async n exportedKind? states (← nested.mapM (attachMerges after))
  | a => return a

/-- One command's payload: the change of each view (`viewStates`); what the command added on its main branch, with
each asynchronous constant's branch additions and states, each realization's constants, states and the realizations
it merged, each realization merged from the cache, and each realization context it registered with its options and
states, in order (`CommandEntries.added`); and why it cannot be replayed (`CommandEntries.refusals`), including a
declaration whose kernel constant checking the elaborator's would not give (`Kernel.Environment.divergentAdds`; a
realization adds its constants unchecked in its own environment and is checked where it is merged, so only the
command's own count). Takes time proportional to what the command changed, apart from the per-extension state reads.
-/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO CommandEntries := do
  let regs ← Registries.get
  let (main, r₁) := viewStates regs .main before.base.private after.base.private
  let (checked, r₂) := viewStates regs .checked before.checked.get after.checked.get
  let mut refusals := r₁ ++ r₂
  if before.checked.get.divergentAdds != after.checked.get.divergentAdds then
    refusals := refusals.push .divergentKernelAdd
  let w : Walk := { after, before := before.base.private, beforeKernel := before.checked.get }
  let exportedKind (c : AsyncConst) := (after.asyncConstsMap.public.find? c.constInfo.name).map (·.constInfo.kind)
  let mut added := #[]
  match cellsSince after.asyncConstsMap.private.revList before.asyncConstsMap.private.revList with
  | none => refusals := refusals.push (.unrelatedConstMap none)
  | some cells =>
    let (ctxs, rc) := addedContexts regs before after
    let (recs, r) := addedConsts regs w cells exportedKind
    added ← (mergeAtPositions recs ctxs).mapM (attachMerges after)
    refusals := refusals ++ rc ++ r
  let distinct := refusals.foldl (init := #[]) fun rs r => if rs.contains r then rs else rs.push r
  return { idx, main, checked, added, refusals := distinct }

/-- Replaces the current module's command payload with `entries` before writing its `.olean`. -/
def setCommandEntries (env : Environment) (entries : Array CommandEntries) : Environment :=
  commandEntriesExt.modifyState env fun _ => entries

/-- Why the module's command payloads cannot be replayed: a declaration command (`isDecl` of its index) has a refusal.
A non-declaration command with one is elaborated again rather than replayed, so it does not prevent reuse. -/
def commandEntriesNoskipReason? (entries : Array CommandEntries) (isDecl : Nat → Bool) : Option String :=
  entries.findSome? fun ce =>
    if isDecl ce.idx then ce.refusals[0]?.map (s!"declaration command {ce.idx}: {·}") else none

private def isIR (n : Name) : Bool := n == `Lean.IR.declMapExt
private def isLCNF (n : Name) : Bool := (`Lean.Compiler.LCNF).isPrefixOf n

/-- Replays `entries`, recorded for the persistent extension `name` in `view`, into that view of `env`. -/
private def replayViewEntries (regs : Registries) (env : Environment) (view : EnvExtension.View) (name : Name)
    (entries : Array EnvExtensionEntry) (opts : Options) : IO Environment := do
  let mut env := env
  let some ext := regs.persistentByName[name]? |
    throw <| IO.userError s!"unknown environment extension {name}"
  let some ofOLeanEntry := ext.ofOLeanEntry? |
    throw <| IO.userError s!"unreplayable extension {name}"
  for entry in entries do
    let b ← ofOLeanEntry (ext.toEnvExtension.getStateIn env view).state entry |>.run { env, opts }
    env := ext.addEntryIn env view b
  return env

/-- Replays changes recorded per view (`ViewStates`) into those views of `env`: persistent extensions' entries with the
IR declarations first, then the LCNF extensions, then the rest (later conversions may read the compiled code), then
scoped stacks, then command caches. Every keep path (a command, a branch, a realization, a context) uses it. -/
private def replayStates (regs : Registries) (env : Environment) (parts : Array (EnvExtension.View × ViewStates))
    (opts : Options) : IO Environment := do
  let entries := parts.flatMap fun (view, st) => st.entries.map fun (n, es) => (view, n, es)
  let order := entries.filter (isIR ·.2.1) ++ entries.filter (isLCNF ·.2.1) ++
    entries.filter fun e => !isIR e.2.1 && !isLCNF e.2.1
  let mut env := env
  for (view, name, es) in order do
    env ← replayViewEntries regs env view name es opts
  for (view, st) in parts do
    for (name, ops) in st.scopedOps do
      let some ext := regs.scopedByName[name]? |
        throw <| IO.userError s!"unknown scoped environment extension {name}"
      env ← ext.replayOpsIn env view (ops.map opOfEntry) |>.run { env, opts }
    for (name, es) in st.caches do
      let some cache := regs.cacheByName[name]? |
        throw <| IO.userError s!"unknown command cache extension {name}"
      env := cache.replayIn env view es
  return env

/-- Plan §1.4 step 3: replays a command payload's change of both views into `env`, the environment after
`readdCommandConstants`. Throws on a payload with refusals. -/
def replayCommandEntries (env : Environment) (ce : CommandEntries) (opts : Options) : IO Environment := do
  unless ce.refusals.isEmpty do
    throw <| IO.userError s!"command {ce.idx} is not replayable ({ce.refusals}); it must be elaborated again"
  replayStates (← Registries.get) env #[(.checked, ce.checked), (.main, ce.main)] opts

/-- The kernel's limits while a keep re-checks constants (`Environment.addDeclCore`); `0` is unlimited. -/
structure ReaddLimits where
  maxHeartbeats : USize := 0
  maxRecDepth : USize := 0

/-- The declaration that adds `info`: a non-safe definition with its whole mutual block (`mutualDefnDecl`, which adds
every member before checking any body), an inductive type with the other types of its block and their constructors
(the kernel adds the recursors). Constructors and recursors have none: their inductive's declaration adds them. -/
private def declOf (infos : NameMap ConstantInfo) (info : ConstantInfo) : Except String Declaration := do
  let get (n : Name) : Except String ConstantInfo :=
    match infos.find? n with
    | some info => pure info
    | none => throw s!"{n}, in the block of {info.name}, is not among the command's constants"
  match info with
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

/-- Re-adds a `plain` constant where its record lists it: by `addDeclCore`, unless an earlier record's block added it
already (an inductive's constructors and recursors, a mutual block's other members). -/
private def readdPlain (infos : NameMap ConstantInfo) (limits : ReaddLimits) (env : Environment) (n : Name) :
    IO Environment := do
  if env.containsOnBranch n then return env
  addDeclChecked env (← IO.ofExcept (declOf infos (← infoOf infos n))) limits

/-- Re-adds `a` to `env` as the full run added it, each part in recorded order:
- `plain`: `readdPlain`;
- `async`: `addConstAsync`, then in its branch what the branch added, the constant itself where the record lists it
  (and otherwise the kernel environment must hold it already), the recorded states replayed into the branch's
  main-branch view, `commitConst` and `commitCheckEnv`;
- `realization`: `Environment.readdRealizeConst` in the context `env` holds for `forConst`, whose `build` first merges
  the cached results of the realizations it merged (`merges`, cached by their own records or an earlier command's
  keep; a missing one is an error), as the full run's realization did, then adds its constants without a check (the
  merge's kernel check checks them) and replays the states (when the context's cache already holds the key, `build`
  does not run and the cached result is merged);
- `merged`: the same, with the context's cache holding the key (an earlier command's keep put it there): the cached
  result is merged, and a missing one is an error;
- `context`: the context rebuilt from its record (`env` with the recorded states replayed into both views, so that it
  holds the constants and contexts re-added before it) and registered with its options.
-/
private partial def readdAdded (regs : Registries) (infos : NameMap ConstantInfo) (opts : Options)
    (limits : ReaddLimits) (env : Environment) : AddedConst → IO Environment
  | .plain n => readdPlain infos limits env n
  | .async n exportedKind? states nested => do
    let info ← infoOf infos n
    let res ← env.addConstAsync n (.ofConstantInfo info) (exportedKind? := exportedKind?)
    let mut branch := res.asyncEnv
    for a in nested do
      if (match a with | .plain m => m == n | _ => false) then
        branch ← addDeclChecked branch (← IO.ofExcept (declOf infos info)) limits
      else
        branch ← readdAdded regs infos opts limits branch a
    unless (branch.toKernelEnv.find? n).isSome do
      throw <| IO.userError s!"reuse: {n} is neither added in its branch nor held by the kernel environment"
    branch ← replayStates regs branch #[(.main, states)] opts
    res.commitConst branch (info? := some info)
    res.commitCheckEnv branch
    return res.mainEnv
  | .realization forConst key consts states merges => do
    unless env.areRealizationsEnabledForConst forConst do
      throw <| IO.userError s!"reuse: no realization context for {forConst}, which {key}'s realization ran in"
    let infos' ← consts.mapM (infoOf infos)
    let (env, ex) ← env.readdRealizeConst forConst key fun realizeEnv realizeOpts => do
      let mut realizeEnv := realizeEnv
      for (forConst', key') in merges do
        let (e, ex) ← realizeEnv.readdRealizeConst forConst' key' (replayExts := true) fun _ _ =>
          throw <| IO.userError s!"the realization {key'} for {forConst'} that it merged is not cached"
        if let some ex := ex.get then
          throw <| IO.userError s!"merging {key'}: {← (ex.toMessageData {}).toString}"
        realizeEnv := e
      for info in infos' do
        match realizeEnv.addDeclCore 0 0 (← IO.ofExcept (declOf infos info)) none (doCheck := false) with
        | .ok e => realizeEnv := e
        | .error ex => throw <| IO.userError s!"adding {info.name}: {← (ex.toMessageData {}).toString}"
      replayStates regs realizeEnv #[(.main, states)] realizeOpts
    if let some ex := ex.get then
      throw <| IO.userError s!"reuse: kernel rejected the realization {key} for {forConst}: \
        {← (ex.toMessageData {}).toString}"
    return env
  | .merged forConst key _ => do
    let (env, ex) ← env.readdRealizeConst forConst key fun _ _ =>
      throw <| IO.userError s!"reuse: the realization {key} for {forConst} that the command merged is not cached"
    if let some ex := ex.get then
      throw <| IO.userError s!"reuse: kernel rejected the realization {key} for {forConst}: \
        {← (ex.toMessageData {}).toString}"
    return env
  | .context forConst ctxOpts main checked => do
    let ctxEnv ← replayStates regs env #[(.checked, checked), (.main, main)] ctxOpts
    env.registerRealizationContext forConst ctxEnv ctxOpts

/--
Plan §1.4 step 1 for a kept command: re-adds what the command added (`CommandEntries.added`) to `env`, its
before-environment, in recorded order (`readdAdded`): its constants as the full run added them, synchronously,
asynchronously with their branches, or through their realizations, and each realization context it registered,
rebuilt from its record at its position. `infos` are the command's constants (its declarations, auxiliaries and
realized constants, from the previous `.olean`). The kernel checks every constant with `limits` (realized constants
with none, as in a full run), and a rejection is a hard error carrying the kernel's message; so is a constant of
`infos` the records do not re-add. Run `replayCommandEntries` (step 3) after.
-/
def readdCommandConstants (env : Environment) (ce : CommandEntries) (infos : NameMap ConstantInfo)
    (opts : Options) (limits : ReaddLimits := {}) : IO Environment := do
  let regs ← Registries.get
  let env ← ce.added.foldlM (readdAdded regs infos opts limits) env
  let kenv := env.toKernelEnv
  for (n, _) in infos do
    unless (kenv.find? n).isSome do
      throw <| IO.userError s!"reuse: the kept command's constant {n} is not re-added by its records"
  return env

namespace CommandEntries.Testing

/-- Test support: `target` with the state of every persistent extension and command cache in both views taken from
`source`, each written as an unaccounted write, for replaying a command's payload onto its after-environment rolled
back to its before-states and comparing the result with the full run. -/
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
  return target

/-- Test support: plan §1.4 steps 1 and 3 for one command (`readdCommandConstants`, `replayCommandEntries`). -/
def keep (env : Environment) (ce : CommandEntries) (infos : NameMap ConstantInfo) (opts : Options)
    (limits : ReaddLimits := {}) : IO Environment := do
  replayCommandEntries (← readdCommandConstants env ce infos opts limits) ce opts

/-- Test support: `env` with fresh realization caches (the import context's and every local one's), as a new process
would start: a keep onto it re-adds every realization instead of finding the full run's results. -/
def freshRealizationCaches (env : Environment) : BaseIO Environment := do
  let importRealizationCtx? ← env.importRealizationCtx?.mapM fun ctx => return { ctx with
    realizeMapRef := ← IO.mkRef {} }
  let mut localRealizationCtxMap : NameMap RealizationContext := {}
  for (c, ctx) in env.localRealizationCtxMap do
    localRealizationCtxMap := localRealizationCtxMap.insert c { ctx with realizeMapRef := ← IO.mkRef {} }
  return { env with importRealizationCtx?, localRealizationCtxMap }

/-- Test support: `ext.view` for each extension `keep` accepts among `ce`'s entries in both views and its scoped stack
operations (main view). -/
def shownEntries (ce : CommandEntries) (keep : Name → Bool) : Array String :=
  let named (view : String) (es : Array (Name × Array EnvExtensionEntry)) :=
    es.filterMap fun (n, _) => if keep n then some s!"{n}.{view}" else none
  named "checked" ce.checked.entries ++ named "main" ce.main.entries ++ named "main" ce.main.scopedOps

end CommandEntries.Testing

end Lean
