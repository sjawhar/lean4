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

structure ScopedEntries (β : Type) where
  map : SMap Name (PArray β) := {}
  deriving Inhabited

/-- A write to a scoped extension's stack by one of `ScopedEnvExtension`'s operations, with the entry in its
`.olean` form. `StateStack.ops` logs them; a command's or an asynchronous branch's writes are the operations it logged
(`ScopedEnvExtension.stackDelta`), replayed by `ScopedEnvExtension.replayOps`. -/
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
  /-- The operations applied since the start of the current top-level command (`clearScopedOps`), newest first; an
  asynchronous branch or a realization continues the log of the environment it started from. -/
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

/-- The fields of `State`. Each changes only through an operation `StateStack.ops` logs, so replaying the log
(`replayOps`) reproduces it. -/
def stateFields : Array Name := #[`state, `activeScopes, `delimitsLocal]

/-- The fields of `StateStack`. `stateStack`, `scopedEntries` and `newEntries` change only through an operation
`ops` logs, so replaying the log reproduces them; `ops` is the log itself, and a replay appends to it. -/
def stackFields : Array Name := #[`stateStack, `scopedEntries, `newEntries, `ops]

/-- Whether replaying `ops` onto any stack leaves every level present before them as it was, so that the stack after
them equals the one before in every field but `ops`: each operation acts only on levels the sequence pushed itself,
and they are popped by its end. `open Foo in` around a declaration is such a sequence. -/
def transient (ops : Array (Op α)) : Bool := Id.run do
  -- per level pushed by `ops` and not yet popped, whether it delimits local entries (`none`: not known statically)
  let mut pushed : List (Option Bool) := []
  for op in ops do
    match op with
    | .push => pushed := some true :: pushed
    | .pop =>
      let _ :: rest := pushed | return false
      pushed := rest
    | .setDelimitsLocal depth =>
      if depth > pushed.length then return false
      pushed := (pushed.take depth).map (fun _ => some false) ++ pushed.drop depth
    | .activate _ =>
      -- applying scoped entries sets `delimitsLocal`; activating without entries leaves it
      let top :: rest := pushed | return false
      pushed := (if top == some true then some true else none) :: rest
    | .localEntry _ =>
      -- reaches the levels down to the first that delimits local entries
      unless pushed.any (· == some true) do return false
    | .entry _ | .modify => return false
  return pushed.isEmpty

/--
The writes that turned `s₀` into `s₁`, a later state of the same stack: the operations logged in front of `s₀`'s log
(`StateStack.ops`), oldest first, and none for a sequence that leaves the stack as it was (`transient`). `none` when
`s₀`'s log is not a tail of `s₁`'s, when an operation is a `ScopedEnvExtension.modifyState`, which no entry expresses,
or when the stack changed with no operation logged. `replayOps` re-applies them.
-/
def stackDelta (s₀ s₁ : StateStack α β σ) : Option (Array (Op α)) := do
  if SharedDiff.sameObject s₀ s₁ then return #[]
  let new := (← List.newPrefix? s₁.ops s₀.ops).toArray.reverse
  guard <| !new.isEmpty && !new.any (· matches .modify)
  return if transient new then #[] else new

namespace StateStack

/-- Pushes a copy of the top level (`ScopedEnvExtension.pushScope`). -/
def push (s : StateStack α β σ) : StateStack α β σ :=
  let s := { s with ops := .push :: s.ops }
  match s.stateStack with
  | [] => s
  | state :: stack => { s with stateStack := { state with delimitsLocal := true } :: state :: stack }

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
          { top with state, activeScopes, delimitsLocal := true }
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
      let top := { top with state := descr.addEntry top.state b }
      top :: if top.delimitsLocal then states else go states

/-- Replaces the top state (`ScopedEnvExtension.modifyState`). -/
def modifyTop (s : StateStack α β σ) (f : σ → σ) : StateStack α β σ :=
  let s := { s with ops := .modify :: s.ops }
  match s.stateStack with
  | top :: stack => { s with stateStack := { top with state := f top.state } :: stack }
  | _ => s

end StateStack

/-- Applies `ops` (from `stackDelta`) to `s`, converting each entry with `descr.ofOLeanEntry` on the top state. -/
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

unsafe def registerScopedEnvExtensionUnsafe (descr : Descr α β σ) : IO (ScopedEnvExtension α β σ) := do
  let ext ← registerPersistentEnvExtension {
    name            := descr.name
    mkInitial       := mkInitial descr
    addImportedFn   := addImportedFn descr
    addEntryFn      := addEntryFn descr
    exportEntriesFnEx := exportEntriesFn descr
    -- no `stateDelta?`: the per-command recorder takes the stack's change from its operation log (`stackDelta`)
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
descriptor). `f` is one of the `StateStack` operations, each of which logs itself in `StateStack.ops`. -/
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
  modifyStack ext env (·.addLocal ext.descr (ext.descr.toOLeanEntry b) b)

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

def ScopedEnvExtension.activateScoped (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) : Environment :=
  modifyStack ext env (·.activate ext.descr namespaceName)

/-- Replaces the top state. Writes outside `addEntry`, `addScopedEntry` and `addLocalEntry` must go through this
function (or `activateScoped`), which logs them as `Op.modify`, so that a command or asynchronous branch making one is
recorded as `stateOnly` rather than replayed (`stackDelta`). A write through the underlying persistent extension
(`ext.ext.modifyState`) is counted in `EnvExtension.unaccountedWrites` instead. -/
def ScopedEnvExtension.modifyState (ext : ScopedEnvExtension α β σ) (env : Environment) (f : σ → σ) : Environment :=
  modifyStack ext env (asyncMode := ext.ext.toEnvExtension.asyncMode) (·.modifyTop f)

/-- Replays `ops` (`ScopedEnvExtension.stackDelta`) onto `ext`'s stack in `view` of `env`, as a sanctioned writer. -/
def ScopedEnvExtension.replayOpsIn (ext : ScopedEnvExtension α β σ) (env : Environment)
    (view : EnvExtension.View) (ops : Array (Op α)) : ImportM Environment := do
  let s ← replayOps ext.descr (ext.ext.toEnvExtension.getStateIn env view).state ops
  return ext.ext.toEnvExtension.writeView env view (.accounted (descrIdentity ext)) fun ps => { ps with state := s }

/-- Starts every scoped extension's operation log afresh in the main-branch view, so that it holds the operations of
one top-level command (`StateStack.ops`); the frontend calls it before each command. Extensions registered after
`env` was created (by initializers an `#eval` ran) have no state in it and are skipped. -/
def clearScopedOps (env : Environment) : BaseIO Environment := do
  let mut env := env
  for ext in ← scopedEnvExtensionsRef.get do
    if ext.ext.toEnvExtension.idx < env.base.private.extensions.size &&
        !(ext.ext.getState (asyncMode := .local) env).ops.isEmpty then
      env := modifyStack ext env fun s => { s with ops := [] }
  return env

def pushScope [Monad m] [MonadEnv m] [MonadLiftT (ST IO.RealWorld) m] : m Unit := do
  for ext in (← scopedEnvExtensionsRef.get) do
    modifyEnv ext.pushScope
def popScope [Monad m] [MonadEnv m] [MonadLiftT (ST IO.RealWorld) m] : m Unit := do
  for ext in (← scopedEnvExtensionsRef.get) do
    modifyEnv ext.popScope
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
