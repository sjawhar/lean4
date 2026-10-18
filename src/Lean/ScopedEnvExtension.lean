/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Attributes
import all Lean.Environment  -- for `EnvExtension.modifyStateAccounted`

public section

namespace Lean

namespace ScopedEnvExtension

inductive Entry (α : Type) where
  | global : α → Entry α
  | scoped : Name → α → Entry α
  deriving Nonempty
structure State (σ : Type) where
  state        : σ
  activeScopes : NameSet := {}
  delimitsLocal : Bool := true -- used for implementing `end_local_scope`.
  /-- Writes to `state` that add no entry: `ScopedEnvExtension.modifyState`, and activations that apply
  scoped entries. A scope push copies the count, so a pop restores it. -/
  modCount     : Nat := 0
  /-- Local entries applied to `state` (`ScopedEnvExtension.addLocalEntry`). -/
  localCount   : Nat := 0
  /-- The push that created this level (`StateStack.pushCount` then), so that a level popped and pushed again is
  told apart from the one it replaces. -/
  generation   : Nat := 0

structure ScopedEntries (β : Type) where
  map : SMap Name (PArray β) := {}
  deriving Inhabited

/-- A write to a scoped extension's stack by one of `ScopedEnvExtension`'s operations, with the entry in its
`.olean` form. `StateStack.ops` logs them so that the writes of an asynchronous branch can be replayed
(`ScopedEnvExtension.replayOps`). -/
inductive Op (α : Type) where
  | push
  | pop
  | setDelimitsLocal (depth : Nat)
  | activate (ns : Name)
  | localEntry (a : α)
  | entry (e : Entry α)
  /-- `ScopedEnvExtension.modifyState`, which no entry expresses. -/
  | modify
  deriving Nonempty

structure StateStack (α : Type) (β : Type) (σ : Type) where
  stateStack    : List (State σ) := {}
  scopedEntries : ScopedEntries β := {}
  newEntries    : List (Entry α) := []
  /-- Scope pushes so far (`ScopedEnvExtension.pushScope`), numbering the levels' `State.generation`. -/
  pushCount     : Nat := 0
  /-- The operations applied since the module's imports, newest first. -/
  ops           : List (Op α) := []
  deriving Inhabited

structure Descr (α : Type) (β : Type) (σ : Type) where
  name           : Name := by exact decl_name%
  mkInitial      : IO σ
  ofOLeanEntry   : σ → α → ImportM β
  toOLeanEntry   : β → α
  addEntry       : σ → β → σ
  finalizeImport : σ → σ := id
  exportEntry?   : Environment → α → OLeanEntries (Option α) := fun _ a => .uniform (some a)

instance [Inhabited α] : Inhabited (Descr α β σ) where
  default := {
    name         := default
    mkInitial    := default
    ofOLeanEntry := default
    toOLeanEntry := default
    addEntry     := fun s _ => s
  }

def mkInitial (descr : Descr α β σ) : IO (StateStack α β σ) :=
  return { stateStack := [ { state := (← descr.mkInitial ) } ] }

def ScopedEntries.insert (scopedEntries : ScopedEntries β) (ns : Name) (b : β) : ScopedEntries β :=
  match scopedEntries.map.find? ns with
  | none    => { map := scopedEntries.map.insert ns <| ({} : PArray β).push b }
  | some bs => { map := scopedEntries.map.insert ns <| bs.push b }

def addImportedFn (descr : Descr α β σ) (as : Array (Array (Entry α))) : ImportM (StateStack α β σ) := do
  let mut s ← descr.mkInitial
  let mut scopedEntries : ScopedEntries β := {}
  for a in as do
    for e in a do
      match e with
      | Entry.global a =>
        let b ← descr.ofOLeanEntry s a
        s := descr.addEntry s b
      | Entry.scoped ns a =>
        let b ← descr.ofOLeanEntry s a
        scopedEntries := scopedEntries.insert ns b
  s := descr.finalizeImport s
  return { stateStack := [ { state := s } ], scopedEntries := scopedEntries }

def addEntryFn (descr : Descr α β σ) (s : StateStack α β σ) (e : Entry β) : StateStack α β σ :=
  match e with
  | Entry.global b =>
    let a := Entry.global (descr.toOLeanEntry b)
    { s with
      newEntries := a :: s.newEntries
      stateStack := s.stateStack.map fun l => { l with state := descr.addEntry l.state b }
      ops := .entry a :: s.ops }
  | Entry.«scoped» ns b =>
    let a := Entry.«scoped» ns (descr.toOLeanEntry b)
    { s with
      scopedEntries := s.scopedEntries.insert ns b
      newEntries    := a :: s.newEntries
      stateStack    := s.stateStack.map fun l =>
        if l.activeScopes.contains ns then { l with state := descr.addEntry l.state b } else l
      ops := .entry a :: s.ops }

def exportEntriesFn (descr : Descr α β σ) (env : Environment) (s : StateStack α β σ) : OLeanEntries (Array (Entry α)) := Id.run do
  let mut exported : Array (Entry α) := #[]
  let mut server   : Array (Entry α) := #[]
  let mut priv     : Array (Entry α) := #[]
  for entry in s.newEntries.toArray.reverse do
    match entry with
    | .global e =>
      let r := descr.exportEntry? env e
      if let some e := r.exported then exported := exported.push (.global e)
      if let some e := r.server   then server   := server.push   (.global e)
      if let some e := r.private  then priv     := priv.push     (.global e)
    | .scoped ns e =>
      let r := descr.exportEntry? env e
      if let some e := r.exported then exported := exported.push (.scoped ns e)
      if let some e := r.server   then server   := server.push   (.scoped ns e)
      if let some e := r.private  then priv     := priv.push     (.scoped ns e)
  return { exported, server, «private» := priv }

/-- The fields of `State`, each encoded by `stateDelta`: `state` is changed by the replayed entries and local
entries; `activeScopes`, `delimitsLocal`, `modCount` and `generation` must be equal, level by level; `localCount`
must account for the replayed local entries (`localEntriesAccountedFor`). -/
def stateFields : Array Name := #[`state, `activeScopes, `delimitsLocal, `modCount, `localCount, `generation]

/-- The fields of `StateStack`, each encoded by `stateDelta`: `stateStack` level by level (`stateFields`) and with
the same length; `scopedEntries` changes only with a new scoped entry; `newEntries` gives the entries.
`pushCount` is outside the replay contract by design: it only numbers pushed levels (`State.generation`), which
elaboration never reads, and a push that is not popped again changes the stack length. `ops` is outside it too: it
logs the operations that changed the other fields, and encodes an asynchronous branch's stack (`opsSince`). -/
def stackFields : Array Name := #[`stateStack, `scopedEntries, `newEntries, `pushCount, `ops]

private def sameShape (l₀ l₁ : State σ) : Bool :=
  l₀.delimitsLocal == l₁.delimitsLocal && l₀.modCount == l₁.modCount && l₀.generation == l₁.generation &&
    (SharedDiff.sameObject l₀.activeScopes l₁.activeScopes ||
      let (added, removed) := NameSet.sharedDiff l₀.activeScopes l₁.activeScopes
      added.isEmpty && removed.isEmpty)

/--
The state delta of a scoped extension (`PersistentEnvExtension.stateDelta?`): the global and scoped entries in
front of the old log, oldest first. `stateOnly` when any field the entries do not express changed (`stateFields`,
`stackFields`): the stack length, a level's `activeScopes`, `delimitsLocal`, `modCount` or `generation`, the
scoped entries without a new scoped entry; when the old log is not a tail of the new one; or when the top state
changed with neither a new entry nor a local entry. The local entries themselves are checked by
`localEntriesAccountedFor`.
-/
def stateDelta (s₀ s₁ : StateStack α β σ) : StateDelta (Entry α) :=
  if s₀.stateStack.length != s₁.stateStack.length ||
      !(s₀.stateStack.zip s₁.stateStack).all fun (l₀, l₁) => sameShape l₀ l₁ then
    .stateOnly
  else match List.newPrefix? s₁.newEntries s₀.newEntries with
    | none => .stateOnly
    | some new =>
      if !new.any (· matches .scoped ..) && !SharedDiff.sameObject s₀.scopedEntries s₁.scopedEntries then
        .stateOnly
      else if !new.isEmpty then
        .entries new.toArray.reverse
      else match s₀.stateStack, s₁.stateStack with
        | top₀ :: _, top₁ :: _ =>
          if SharedDiff.sameObject top₀.state top₁.state || top₀.localCount != top₁.localCount then .entries #[]
          else .stateOnly
        | _, _ => .entries #[]

/-- Whether replaying `n` local entries (`ScopedEnvExtension.addLocalEntry`, which counts each on the levels it
reaches) onto `s₀` gives `s₁`'s local-entry counts, level by level: every local entry the command applied is one the
payload replays. Meaningful once `stateDelta s₀ s₁` accepted the stacks. -/
def localEntriesAccountedFor (s₀ s₁ : StateStack α β σ) (n : Nat) : Bool :=
  go s₀.stateStack s₁.stateStack true
where
  go : List (State σ) → List (State σ) → Bool → Bool
    | l₀ :: r₀, l₁ :: r₁, reached =>
      l₁.localCount == l₀.localCount + (if reached then n else 0) && go r₀ r₁ (reached && !l₁.delimitsLocal)
    | [], [], _ => true
    | _, _, _ => false

namespace StateStack

/-- Pushes a copy of the top level (`ScopedEnvExtension.pushScope`). -/
def push (s : StateStack α β σ) : StateStack α β σ :=
  let s := { s with ops := .push :: s.ops }
  match s.stateStack with
  | [] => s
  | state :: stack =>
    { s with
      stateStack := { state with delimitsLocal := true, generation := s.pushCount + 1 } :: state :: stack
      pushCount := s.pushCount + 1 }

/-- Drops the top level unless it is the last (`ScopedEnvExtension.popScope`). -/
def pop (s : StateStack α β σ) : StateStack α β σ :=
  let s := { s with ops := .pop :: s.ops }
  match s.stateStack with
  | _ :: state₂ :: stack => { s with stateStack := state₂ :: stack }
  | _ => s

/-- Clears `delimitsLocal` on the top `depth` levels (`ScopedEnvExtension.setDelimitsLocal`). -/
def setDelimitsLocal (s : StateStack α β σ) (depth : Nat) : StateStack α β σ :=
  { s with stateStack := go depth s.stateStack, ops := .setDelimitsLocal depth :: s.ops }
where
  go : Nat → List (State σ) → List (State σ)
    | 0, stack => stack
    | _, [] => []
    | n + 1, state :: stack => { state with delimitsLocal := false } :: go n stack

/-- Activates `ns` on the top level, applying its scoped entries (`ScopedEnvExtension.activateScoped`). -/
def activate (descr : Descr α β σ) (s : StateStack α β σ) (ns : Name) : StateStack α β σ :=
  let s := { s with ops := .activate ns :: s.ops }
  match s.stateStack with
  | top :: stack =>
    if top.activeScopes.contains ns then
      s
    else
      let activeScopes := top.activeScopes.insert ns
      let top :=
        match s.scopedEntries.map.find? ns with
        | none =>
          { top with activeScopes := activeScopes }
        | some bs => Id.run do
          let mut state := top.state
          for b in bs do
            state := descr.addEntry state b
          { top with state, activeScopes, delimitsLocal := true, modCount := top.modCount + 1 }
      { s with stateStack := top :: stack }
  | _ => s

/-- Applies `b` to the top level and, through levels that do not delimit local entries, the ones below
(`ScopedEnvExtension.addLocalEntry`); `a` is `b`'s `.olean` form. -/
def addLocal (descr : Descr α β σ) (s : StateStack α β σ) (a : α) (b : β) : StateStack α β σ :=
  { s with stateStack := go s.stateStack, ops := .localEntry a :: s.ops }
where
  go : List (State σ) → List (State σ)
    | [] => []
    | top :: states =>
      let top := { top with state := descr.addEntry top.state b, localCount := top.localCount + 1 }
      top :: if top.delimitsLocal then states else go states

/-- Replaces the top state (`ScopedEnvExtension.modifyState`). -/
def modifyTop (s : StateStack α β σ) (f : σ → σ) : StateStack α β σ :=
  let s := { s with ops := .modify :: s.ops }
  match s.stateStack with
  | top :: stack => { s with stateStack := { top with state := f top.state, modCount := top.modCount + 1 } :: stack }
  | _ => s

end StateStack

/-- The operations that turned `s₀` into `s₁`, oldest first, when `s₁` is `s₀` with operations applied and none of
them is a `ScopedEnvExtension.modifyState`; `replayOps` re-applies them. -/
def opsSince (s₀ s₁ : StateStack α β σ) : Option (Array (Op α)) := do
  let new ← List.newPrefix? s₁.ops s₀.ops
  guard <| !new.any (· matches .modify)
  return new.toArray.reverse

/-- Applies `ops` (from `opsSince`) to `s`, converting each entry with `descr.ofOLeanEntry` on the top state. -/
def replayOps (descr : Descr α β σ) (s : StateStack α β σ) (ops : Array (Op α)) : ImportM (StateStack α β σ) := do
  let mut s := s
  for op in ops do
    let top : σ ← match s.stateStack with
      | top :: _ => pure top.state
      | [] => throw <| IO.userError s!"replaying an operation of {descr.name} on an empty stack"
    match op with
    | .push => s := s.push
    | .pop => s := s.pop
    | .setDelimitsLocal depth => s := s.setDelimitsLocal depth
    | .activate ns => s := s.activate descr ns
    | .localEntry a => s := s.addLocal descr a (← descr.ofOLeanEntry top a)
    | .entry (.global a) => s := addEntryFn descr s (.global (← descr.ofOLeanEntry top a))
    | .entry (.scoped ns a) => s := addEntryFn descr s (.scoped ns (← descr.ofOLeanEntry top a))
    | .modify => throw <| IO.userError s!"an operation of {descr.name} that no entry expresses cannot be replayed"
  return s

end ScopedEnvExtension

open ScopedEnvExtension

structure ScopedEnvExtension (α : Type) (β : Type) (σ : Type) where
  descr : Descr α β σ
  ext   : PersistentEnvExtension (Entry α) (Entry β) (StateStack α β σ)
  deriving Inhabited

builtin_initialize scopedEnvExtensionsRef : IO.Ref (Array (ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState)) ← IO.mkRef #[]

builtin_initialize localEntriesExt :
    EnvExtension (Array (Nat × Name × EnvExtensionEntry)) ←
  registerEnvExtension (pure #[]) (asyncMode := .local)

builtin_initialize scopeDepthExt : EnvExtension Nat ←
  registerEnvExtension (pure 0) (asyncMode := .local)

def localEntryCount (env : Environment) : Nat :=
  (localEntriesExt.getState (asyncMode := .local) env).size

def scopeDepth (env : Environment) : Nat :=
  scopeDepthExt.getState (asyncMode := .local) env

def appendLocalEntries (env : Environment) (es : Array (Nat × Name × EnvExtensionEntry)) : Environment :=
  localEntriesExt.modifyState (asyncMode := .local) env (· ++ es)

private def reachedDepth (states : List (ScopedEnvExtension.State σ)) (depth : Nat) : Nat :=
  match states with
  | [] => depth
  | state :: rest => if state.delimitsLocal then depth else reachedDepth rest (depth - 1)


unsafe def registerScopedEnvExtensionUnsafe (descr : Descr α β σ) : IO (ScopedEnvExtension α β σ) := do
  let ext ← registerPersistentEnvExtension {
    name            := descr.name
    mkInitial       := mkInitial descr
    addImportedFn   := addImportedFn descr
    addEntryFn      := addEntryFn descr
    exportEntriesFnEx := exportEntriesFn descr
    stateDelta?     := some stateDelta
    statsFn         := fun s => format "number of local entries: " ++ format s.newEntries.length
    -- We restrict addition of global and `scoped` entries to the main thread but allow addition of
    -- scopes and local entries in any thread, which are visible only in that thread (see uses of
    -- `AsyncMode.local` below). Allowing the latter is important for tactics such as -- `classical`
    -- or `open in`.
    asyncMode       := .mainOnly
  }
  let ext := { descr := descr, ext := ext : ScopedEnvExtension α β σ }
  scopedEnvExtensionsRef.modify fun exts => exts.push (unsafeCast ext)
  EnvExtension.setIdentity ext.ext.toEnvExtension.idx
    (·.map ({ · with scopedDescr? := some (ptrAddrUnsafe ext.descr) }))
  return ext

@[implemented_by registerScopedEnvExtensionUnsafe]
opaque registerScopedEnvExtension (descr : Descr α β σ) : IO (ScopedEnvExtension α β σ)

private unsafe def descrIdentityImpl (ext : ScopedEnvExtension α β σ) : EnvExtensionIdentity :=
  PersistentEnvExtension.identityImpl ext.ext (some (ptrAddrUnsafe ext.descr))

/-- The identity a write through `ext`'s stack presents: its persistent extension's, with its descriptor. -/
@[implemented_by descrIdentityImpl]
private opaque descrIdentity (ext : ScopedEnvExtension α β σ) : EnvExtensionIdentity

/-- Writes the stack as a sanctioned writer (`EnvExtension.modifyStateAccounted`, presenting the registered
descriptor): `stateDelta` encodes the writes of the operations below itself (`stateFields`, `stackFields`). -/
private def modifyStack (ext : ScopedEnvExtension α β σ) (env : Environment)
    (f : StateStack α β σ → StateStack α β σ) (asyncMode := EnvExtension.AsyncMode.local) : Environment :=
  ext.ext.toEnvExtension.modifyStateAccounted (asyncMode := asyncMode) env (descrIdentity ext)
    fun ps => { ps with state := f ps.state }

def ScopedEnvExtension.pushScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  modifyStack ext env (·.push)

def ScopedEnvExtension.popScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  modifyStack ext env (·.pop)

/-- Modifies `delimitsLocal` flag to `false` on the top `depth` entries of the state stack,
to turn off delimiting of local entries across multiple implicit scope levels
(e.g. those introduced by compound `namespace A.B.C` expansions).
-/
def ScopedEnvExtension.setDelimitsLocal (ext : ScopedEnvExtension α β σ) (env : Environment) (depth : Nat) : Environment :=
  modifyStack ext env (·.setDelimitsLocal depth)

def ScopedEnvExtension.addEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  ext.ext.addEntry env (Entry.global b)

def ScopedEnvExtension.addScopedEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) (b : β) : Environment :=
  ext.ext.addEntry env (Entry.«scoped» namespaceName b)

def ScopedEnvExtension.addLocalEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  let states := (ext.ext.getState (asyncMode := .local) env).stateStack
  let depth := reachedDepth states (states.length - 1)
  let a := ext.descr.toOLeanEntry b
  let env := localEntriesExt.modifyState (asyncMode := .local) env
    (·.push (depth, ext.ext.name, eraseEnvExtensionEntry a))
  modifyStack ext env (·.addLocal ext.descr a b)

def ScopedEnvExtension.addCore (env : Environment) (ext : ScopedEnvExtension α β σ) (b : β) (kind : AttributeKind) (namespaceName : Name) : Environment :=
  match kind with
  | AttributeKind.global => ext.addEntry env b
  | AttributeKind.local  => ext.addLocalEntry env b
  | AttributeKind.scoped => ext.addScopedEntry env namespaceName b

def ScopedEnvExtension.add [Monad m] [MonadResolveName m] [MonadEnv m] (ext : ScopedEnvExtension α β σ) (b : β) (kind := AttributeKind.global) : m Unit := do
  let ns ← getCurrNamespace
  modifyEnv (ext.addCore · b kind ns)

def ScopedEnvExtension.getState [Inhabited σ] (ext : ScopedEnvExtension α β σ)
    (env : Environment) (asyncMode := ext.ext.toEnvExtension.asyncMode) : σ :=
  match ext.ext.getState (asyncMode := asyncMode) env |>.stateStack with
  | top :: _ => top.state
  | _        => unreachable!

/-- `ScopedEnvExtension.localEntriesAccountedFor` on the extension's stacks in two environments. -/
def ScopedEnvExtension.localEntriesAccountedForIn (ext : ScopedEnvExtension α β σ) (env₀ env₁ : Environment)
    (n : Nat) : Bool :=
  localEntriesAccountedFor (ext.ext.getState (asyncMode := .local) env₀) (ext.ext.getState (asyncMode := .local) env₁) n

def ScopedEnvExtension.activateScoped (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) : Environment :=
  modifyStack ext env (·.activate ext.descr namespaceName)

/-- Replaces the top state. Writes outside `addEntry`, `addScopedEntry` and `addLocalEntry` must go through this
function (or `activateScoped`), which counts them in `State.modCount` and logs them as `Op.modify`, so that a
command or asynchronous branch making one is recorded as `stateOnly` rather than replayed. A write through the
underlying persistent extension (`ext.ext.modifyState`) is counted in `EnvExtension.unaccountedWrites` instead. -/
def ScopedEnvExtension.modifyState (ext : ScopedEnvExtension α β σ) (env : Environment) (f : σ → σ) : Environment :=
  modifyStack ext env (asyncMode := ext.ext.toEnvExtension.asyncMode) (·.modifyTop f)

/-- Replays `ops` (`ScopedEnvExtension.opsSince`) onto `ext`'s stack in `view` of `env`, as a sanctioned writer.
The local-entry log (`localEntriesExt`) is not written. -/
def ScopedEnvExtension.replayOpsIn (ext : ScopedEnvExtension α β σ) (env : Environment)
    (view : EnvExtension.View) (ops : Array (Op α)) : ImportM Environment := do
  let s ← replayOps ext.descr (ext.ext.toEnvExtension.getStateIn env view).state ops
  return ext.ext.toEnvExtension.writeView env view (.accounted (descrIdentity ext)) fun ps => { ps with state := s }

def pushScope [Monad m] [MonadEnv m] [MonadLiftT (ST IO.RealWorld) m] : m Unit := do
  for ext in (← scopedEnvExtensionsRef.get) do
    modifyEnv ext.pushScope
  modifyEnv fun env => scopeDepthExt.modifyState (asyncMode := .local) env (· + 1)
def popScope [Monad m] [MonadEnv m] [MonadLiftT (ST IO.RealWorld) m] : m Unit := do
  for ext in (← scopedEnvExtensionsRef.get) do
    modifyEnv ext.popScope
  modifyEnv fun env => scopeDepthExt.modifyState (asyncMode := .local) env (· - 1)
/-- Used to implement `end_local_scope` command, that disables delimiting local entries of ScopedEnvExtension
across `depth` scope levels.
-/
def setDelimitsLocal [Monad m] [MonadEnv m] [MonadLiftT (ST IO.RealWorld) m] (depth : Nat) : m Unit := do
  for ext in (← scopedEnvExtensionsRef.get) do
    modifyEnv (ext.setDelimitsLocal · depth)

def activateScoped [Monad m] [MonadEnv m] [MonadLiftT (ST IO.RealWorld) m] (namespaceName : Name) : m Unit := do
  for ext in (← scopedEnvExtensionsRef.get) do
    modifyEnv (ext.activateScoped · namespaceName)

abbrev SimpleScopedEnvExtension (α : Type) (σ : Type) := ScopedEnvExtension α α σ

structure SimpleScopedEnvExtension.Descr (α : Type) (σ : Type) where
  name           : Name := by exact decl_name%
  addEntry       : σ → α → σ
  initial        : σ
  finalizeImport : σ → σ := id
  exportEntry?   : Environment → α → OLeanEntries (Option α) := fun _ a => .uniform (some a)

def registerSimpleScopedEnvExtension (descr : SimpleScopedEnvExtension.Descr α σ) : IO (SimpleScopedEnvExtension α σ) := do
  registerScopedEnvExtension {
    name           := descr.name
    mkInitial      := return descr.initial
    addEntry       := descr.addEntry
    toOLeanEntry   := id
    ofOLeanEntry   := fun _ a => return a
    finalizeImport := descr.finalizeImport
    exportEntry?   := descr.exportEntry?
  }

end Lean
