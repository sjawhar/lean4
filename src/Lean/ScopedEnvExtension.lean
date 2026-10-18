/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Attributes

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
structure StateStack (α : Type) (β : Type) (σ : Type) where
  stateStack    : List (State σ) := {}
  scopedEntries : ScopedEntries β := {}
  newEntries    : List (Entry α) := []
  /-- Scope pushes so far (`ScopedEnvExtension.pushScope`), numbering the levels' `State.generation`. -/
  pushCount     : Nat := 0
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
  | Entry.global b => { s with
      newEntries := (Entry.global (descr.toOLeanEntry b)) :: s.newEntries
      stateStack := s.stateStack.map fun l => { l with state := descr.addEntry l.state b } }
  | Entry.«scoped» ns b => { s with
      scopedEntries := s.scopedEntries.insert ns b
      newEntries    := (Entry.«scoped» ns (descr.toOLeanEntry b)) :: s.newEntries
      stateStack    := s.stateStack.map fun l =>
        if l.activeScopes.contains ns then { l with state := descr.addEntry l.state b } else l }

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
the same length; `scopedEntries` changes only with a new scoped entry; `newEntries` gives the entries;
`pushCount` only numbers pushed levels, and a push that is not popped again changes the stack length. -/
def stackFields : Array Name := #[`stateStack, `scopedEntries, `newEntries, `pushCount]

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
  return ext

@[implemented_by registerScopedEnvExtensionUnsafe]
opaque registerScopedEnvExtension (descr : Descr α β σ) : IO (ScopedEnvExtension α β σ)

/-- Writes the stack without counting the write in `PersistentEnvExtensionState.directWrites`: `stateDelta` encodes
the writes of the operations below itself (`stateFields`, `stackFields`). -/
private def modifyStack (ext : ScopedEnvExtension α β σ) (env : Environment)
    (f : StateStack α β σ → StateStack α β σ) (asyncMode := EnvExtension.AsyncMode.local) : Environment :=
  ext.ext.toEnvExtension.modifyState (asyncMode := asyncMode) env fun ps => { ps with state := f ps.state }

def ScopedEnvExtension.pushScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  modifyStack ext env fun s =>
    match s.stateStack with
    | [] => s
    | state :: stack =>
      { s with
        stateStack := { state with delimitsLocal := true, generation := s.pushCount + 1 } :: state :: stack
        pushCount := s.pushCount + 1 }

def ScopedEnvExtension.popScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  modifyStack ext env fun s =>
    match s.stateStack with
    | _      :: state₂ :: stack => { s with stateStack := state₂ :: stack }
    | _ => s

/-- Modifies `delimitsLocal` flag to `false` on the top `depth` entries of the state stack,
to turn off delimiting of local entries across multiple implicit scope levels
(e.g. those introduced by compound `namespace A.B.C` expansions).
-/
def ScopedEnvExtension.setDelimitsLocal (ext : ScopedEnvExtension α β σ) (env : Environment) (depth : Nat) : Environment :=
  modifyStack ext env fun s =>
    {s with stateStack := go depth s.stateStack}
where
  go : Nat → List (State σ) → List (State σ)
    | 0, stack => stack
    | _, [] => []
    | n + 1, state :: stack => {state with delimitsLocal := false} :: go n stack

def ScopedEnvExtension.addEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  ext.ext.addEntry env (Entry.global b)

def ScopedEnvExtension.addScopedEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) (b : β) : Environment :=
  ext.ext.addEntry env (Entry.«scoped» namespaceName b)

/-- The following function is used to implement `end_local_scope` command.

By default, all states have `delimitsLocal` set to `true`, and the following code modifies only the top element of the stack.
If the top element’s `delimitsLocal` is `false`, the function instead traverses down the stack until it reaches the first state where `delimitsLocal` is `true`.
Intuitively, `delimitsLocal` of each `State` determines whether local entries are delimited. When set to false, it allows traversal through implicit scopes where local entries are not delimited.
-/
def stateStackModify (ext : ScopedEnvExtension α β σ) (states : List (State σ)) (b : β) : List (State σ) :=
  match states with
  | [] => states
  | top :: states =>
    let top := { top with state := ext.descr.addEntry top.state b, localCount := top.localCount + 1 }
    let bot := if top.delimitsLocal then states else stateStackModify ext states b
    top :: bot

def ScopedEnvExtension.addLocalEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  let states := (ext.ext.getState (asyncMode := .local) env).stateStack
  let depth := reachedDepth states (states.length - 1)
  let env := localEntriesExt.modifyState (asyncMode := .local) env
    (·.push (depth, ext.ext.name, eraseEnvExtensionEntry (ext.descr.toOLeanEntry b)))
  modifyStack ext env fun s =>
    {s with stateStack := stateStackModify ext s.stateStack b}

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
  modifyStack ext env fun s =>
    match s.stateStack with
    | top :: stack =>
      if top.activeScopes.contains namespaceName then
        s
      else
        let activeScopes := top.activeScopes.insert namespaceName
        let top :=
          match s.scopedEntries.map.find? namespaceName with
          | none =>
            { top with activeScopes := activeScopes }
          | some bs => Id.run do
            let mut state := top.state
            for b in bs do
              state := ext.descr.addEntry state b
            { top with state, activeScopes, delimitsLocal := true, modCount := top.modCount + 1 }
        { s with stateStack := top :: stack }
    | _ => s

/-- Replaces the top state. Writes outside `addEntry`, `addScopedEntry` and `addLocalEntry` must go through this
function (or `activateScoped`), which counts them in `State.modCount`, so that a command making one is recorded
as `stateOnly` rather than replayed from its entries. A write through the underlying persistent extension
(`ext.ext.modifyState`) is counted in `PersistentEnvExtensionState.directWrites` instead. -/
def ScopedEnvExtension.modifyState (ext : ScopedEnvExtension α β σ) (env : Environment) (f : σ → σ) : Environment :=
  modifyStack ext env (asyncMode := ext.ext.toEnvExtension.asyncMode) fun s =>
    match s.stateStack with
    | top :: stack =>
      { s with stateStack := { top with state := f top.state, modCount := top.modCount + 1 } :: stack }
    | _ => s

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
