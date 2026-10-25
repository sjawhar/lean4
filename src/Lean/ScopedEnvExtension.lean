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
  /--
  Whether this state may differ from the enclosing scope's state because of changes made since this
  scope was pushed: local entries, entries of namespaces activated in this scope, and
  `ScopedEnvExtension.modifyState`. Popping a scope with this flag set bumps the generation to a
  fresh value (see `PersistentEnvExtensionDescrCore.trackGen`) and, for an extension with
  `logWrites`, logs `scopeChangedDecls`. Only tracked for extensions with
  `Descr.tracksScopes`.
  -/
  scopeChanged : Bool := false
  /--
  The declarations of the entries added since this scope was pushed, which popping it removes again;
  collected only for extensions with `Descr.entryDecl?`.
  -/
  scopeChangedDecls : Array Name := #[]

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
  /-- That the `.olean` entry is the entry (`α = β`). With it, neither `toOLeanEntry` nor `ofOLeanEntry` is ever
  called: the entry a command adds is the one its `.olean` holds (`Descr.oleanEntry`), and the import and a reuse run's
  replay of the command's entry operations (`replayOps`) add that entry as it is (`Descr.entryOfOLean`), so both give
  the state the command's elaboration gave, whatever the two functions compute. Without it, a reuse run keeps no
  command with an entry operation of the extension (`CommandEntries.firstUnadmittedConversion`): the conversion is an
  `ImportM` action, which may do any `IO`. `registerSimpleScopedEnvExtension` sets it. -/
  oleanEntryIsEntry? : Option (PLift (α = β)) := none
  toOLeanEntry   : β → α
  addEntry       : σ → β → σ
  finalizeImport : σ → σ := id
  exportEntry?   : Environment → α → OLeanEntries (Option α) := fun _ a => .uniform (some a)
  /-- See `PersistentEnvExtensionDescrCore.trackGen`. -/
  trackGen : Bool := false
  /-- See `EnvExtension.logWrites`. -/
  logWrites : Bool := false
  /--
  The declaration an entry is about. Required with `logWrites`: adding an entry and scope
  operations adding or removing entries log their declarations (`Environment.logDeclChange`).
  -/
  entryDecl? : Option (β → Name) := none

/--
Whether scope operations that change the effective state must be recorded like content changes;
see `State.scopeChanged`.
-/
def Descr.tracksScopes (descr : Descr α β σ) : Bool :=
  descr.trackGen || descr.logWrites

/-- Notes on `s` that the entry `b` was added to it; see `State.scopeChanged`. -/
def Descr.noteScopeChange (descr : Descr α β σ) (s : State σ) (b : β) : State σ :=
  if descr.tracksScopes then
    { s with
      scopeChanged := true
      scopeChangedDecls := match descr.entryDecl? with
        | some decl => s.scopeChangedDecls.push (decl b)
        | none      => s.scopeChangedDecls }
  else
    s

/-- The `.olean` entry of the entry `b`: `b` itself with `oleanEntryIsEntry?`, else `toOLeanEntry b`. -/
def Descr.oleanEntry (descr : Descr α β σ) (b : β) : α :=
  match descr.oleanEntryIsEntry? with
  | some ⟨h⟩ => cast h.symm b
  | none => descr.toOLeanEntry b

/-- The entry the `.olean` entry `a` stands for, on the state `s`: `a` itself with `oleanEntryIsEntry?`, else
`ofOLeanEntry s a`. -/
def Descr.entryOfOLean (descr : Descr α β σ) (s : σ) (a : α) : ImportM β :=
  match descr.oleanEntryIsEntry? with
  | some ⟨h⟩ => pure (cast h a)
  | none => descr.ofOLeanEntry s a

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
        let b ← descr.entryOfOLean s a
        s := descr.addEntry s b
      | Entry.scoped ns a =>
        let b ← descr.entryOfOLean s a
        scopedEntries := scopedEntries.insert ns b
  s := descr.finalizeImport s
  return { stateStack := [ { state := s } ], scopedEntries := scopedEntries }

def addEntryFn (descr : Descr α β σ) (s : StateStack α β σ) (e : Entry β) : StateStack α β σ :=
  match e with
  | Entry.global b =>
    let a := Entry.global (descr.oleanEntry b)
    { s with
      newEntries := a :: s.newEntries
      stateStack := s.stateStack.map fun l => { l with state := descr.addEntry l.state b }
      ops := .entry a :: s.ops }
  | Entry.«scoped» ns b =>
    let a := Entry.«scoped» ns (descr.oleanEntry b)
    { s with
      scopedEntries := s.scopedEntries.insert ns b
      newEntries    := a :: s.newEntries
      stateStack    := s.stateStack.map fun l =>
        if l.activeScopes.contains ns then descr.noteScopeChange { l with state := descr.addEntry l.state b } b
        else l
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
def stateFields : Array Name := #[`state, `activeScopes, `delimitsLocal, `scopeChanged, `scopeChangedDecls]

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
  -- the new scope starts as a copy of the current state
  | state :: stack => { s with stateStack :=
    { state with delimitsLocal := true, scopeChanged := false, scopeChangedDecls := #[] } :: state :: stack }

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
      let top := if let some bs := s.scopedEntries.map.find? ns then
        bs.foldl (init := { top with activeScopes, delimitsLocal := true }) fun top b =>
          descr.noteScopeChange { top with state := descr.addEntry top.state b } b
      else
        { top with activeScopes }
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
      let top := descr.noteScopeChange { top with state := descr.addEntry top.state b } b
      top :: if top.delimitsLocal then states else go states

/-- Replaces the top state (`ScopedEnvExtension.modifyState`). -/
def modifyTop (descr : Descr α β σ) (s : StateStack α β σ) (f : σ → σ) : StateStack α β σ :=
  let s := { s with ops := .modify :: s.ops }
  match s.stateStack with
  | top :: stack =>
    let scopeChanged := top.scopeChanged || descr.tracksScopes
    { s with stateStack := { top with state := f top.state, scopeChanged } :: stack }
  | _ => s

end StateStack

/-- Applies `ops` (from `stackDelta`) to `s`, each entry taken as the import takes it (`Descr.entryOfOLean`, on the top
state); `admittedOnly` refuses a descriptor without `oleanEntryIsEntry?`, whose conversion it would run. -/
def replayOps (descr : Descr α β σ) (s : StateStack α β σ) (ops : Array (Op α)) (admittedOnly := false) :
    ImportM (StateStack α β σ) := do
  let mut s := s
  for op in ops do
    let top : σ ← match s.stateStack with
      | top :: _ => pure top.state
      | [] => throw <| IO.userError s!"replaying an operation of {descr.name} on an empty stack"
    let convert (a : α) : ImportM β := do
      if admittedOnly && descr.oleanEntryIsEntry?.isNone then
        throw <| IO.userError s!"entry conversion of {descr.name} is not admitted"
      descr.entryOfOLean top a
    match op with
    | .push => s := s.push
    | .pop => s := s.pop
    | .setDelimitsLocal depth => s := s.setDelimitsLocal depth
    | .activate ns => s := s.activate descr ns
    | .localEntry a => s := s.addLocal descr a (← convert a)
    | .entry (.global a) => s := addEntryFn descr s (.global (← convert a))
    | .entry (.scoped ns a) => s := addEntryFn descr s (.scoped ns (← convert a))
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
  if descr.logWrites && descr.entryDecl?.isNone then
    throw <| IO.userError s!"scoped environment extension `{descr.name}` with `logWrites` \
      must set `entryDecl?`"
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
    trackGen        := descr.trackGen
    logWrites       := descr.logWrites
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
descriptor). `f` is one of the `StateStack` operations, each of which logs itself in `StateStack.ops`. `bumpGen` and
`log` as in `EnvExtension.modifyState`. -/
private def modifyStack (ext : ScopedEnvExtension α β σ) (env : Environment)
    (f : StateStack α β σ → StateStack α β σ) (asyncMode := EnvExtension.AsyncMode.local) (bumpGen := false)
    (log : EnvExtension.WriteLog := .unlogged) : Environment :=
  ext.ext.toEnvExtension.modifyStateAccounted (asyncMode := asyncMode) (bumpGen := bumpGen) (log := log) env
    (descrIdentity ext) fun ps => { ps with state := f ps.state }

/--
Applies a scope-stack operation `f`. `changed` must be set exactly when `f` changes the state in
effect (see `State.scopeChanged`), with `changedDecls` the declarations of the entries it adds or
removes. For extensions with `Descr.tracksScopes` this is recorded like a content change: the
generation of a generation-tracked extension is bumped, and one with `logWrites` logs
`changedDecls`.
-/
private def ScopedEnvExtension.modifyScopes (ext : ScopedEnvExtension α β σ) (env : Environment)
    (changed : Bool) (f : StateStack α β σ → StateStack α β σ) (changedDecls : Array Name := #[]) :
    Environment :=
  let record := changed && ext.descr.tracksScopes
  let env := if record && ext.descr.logWrites then
    changedDecls.foldl Environment.logDeclChange env
  else env
  -- unlogged: logged above if the state in effect changes
  modifyStack ext env (bumpGen := record) (log := .unlogged) f

def ScopedEnvExtension.pushScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  ext.modifyScopes env (changed := false) (·.push)

def ScopedEnvExtension.popScope (ext : ScopedEnvExtension α β σ) (env : Environment) :
    Environment := Id.run do
  let top :: _ :: _ := (ext.ext.getState (asyncMode := .local) env).stateStack | return modifyStack ext env (·.pop)
  ext.modifyScopes env (changed := top.scopeChanged) (changedDecls := top.scopeChangedDecls) (·.pop)

/-- Modifies `delimitsLocal` flag to `false` on the top `depth` entries of the state stack,
to turn off delimiting of local entries across multiple implicit scope levels
(e.g. those introduced by compound `namespace A.B.C` expansions).
-/
def ScopedEnvExtension.setDelimitsLocal (ext : ScopedEnvExtension α β σ) (env : Environment) (depth : Nat) : Environment :=
  -- only affects where later local entries go
  ext.modifyScopes env (changed := false) (·.setDelimitsLocal depth)

/-- How to log a write of `b`. -/
@[inline] private def ScopedEnvExtension.writeLog (ext : ScopedEnvExtension α β σ) (b : β) :
    EnvExtension.WriteLog :=
  -- NOTE: `Descr.entryDecl?` is set whenever `logWrites` is, and without
  -- `logWrites` the named declaration is ignored.
  .decl (if let some decl := ext.descr.entryDecl? then decl b else .anonymous)

def ScopedEnvExtension.addEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  ext.ext.addEntry (log := ext.writeLog b) env (Entry.global b)

def ScopedEnvExtension.addScopedEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) (b : β) : Environment :=
  ext.ext.addEntry (log := ext.writeLog b) env (Entry.«scoped» namespaceName b)

def ScopedEnvExtension.addLocalEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  modifyStack ext env (bumpGen := true) (log := ext.writeLog b) (·.addLocal ext.descr (ext.descr.oleanEntry b) b)

def ScopedEnvExtension.addCore (env : Environment) (ext : ScopedEnvExtension α β σ) (b : β) (kind : AttributeKind) (namespaceName : Name) : Environment :=
  match kind with
  | AttributeKind.global => ext.addEntry env b
  | AttributeKind.local  => ext.addLocalEntry env b
  | AttributeKind.scoped => ext.addScopedEntry env namespaceName b

def ScopedEnvExtension.add [Monad m] [MonadResolveName m] [MonadEnv m] (ext : ScopedEnvExtension α β σ) (b : β) (kind := AttributeKind.global) : m Unit := do
  let ns ← getCurrNamespace
  modifyEnv (ext.addCore · b kind ns)

/-- Returns the state in effect. For `genRecorded`, see `EnvExtension.getState`. -/
def ScopedEnvExtension.getState [Inhabited σ] (ext : ScopedEnvExtension α β σ)
    (env : Environment) (asyncMode := ext.ext.toEnvExtension.asyncMode)
    (genRecorded := false) : σ :=
  match ext.ext.getState (asyncMode := asyncMode) (genRecorded := genRecorded) env |>.stateStack with
  | top :: _ => top.state
  | _        => unreachable!

def ScopedEnvExtension.activateScoped (ext : ScopedEnvExtension α β σ) (env : Environment)
    (namespaceName : Name) : Environment := Id.run do
  let s := ext.ext.getState (asyncMode := .local) env
  let top :: _ := s.stateStack | return modifyStack ext env (·.activate ext.descr namespaceName)
  let bs? := if top.activeScopes.contains namespaceName then none else s.scopedEntries.map.find? namespaceName
  let decls := match bs?, ext.descr.entryDecl? with
    | some bs, some decl => bs.foldl (init := #[]) fun ds b => ds.push (decl b)
    | _, _ => #[]
  ext.modifyScopes env (changed := bs?.isSome) (changedDecls := decls) (·.activate ext.descr namespaceName)

/-- Replaces the top state. Writes outside `addEntry`, `addScopedEntry` and `addLocalEntry` must go through this
function (or `activateScoped`), which logs them as `Op.modify`, so that a command or asynchronous branch making one is
recorded as `stateOnly` rather than replayed (`stackDelta`). A write through the underlying persistent extension
(`ext.ext.modifyState`) is counted in `EnvExtension.unaccountedWrites` instead. -/
def ScopedEnvExtension.modifyState (ext : ScopedEnvExtension α β σ) (env : Environment) (f : σ → σ) : Environment :=
  modifyStack ext env (asyncMode := ext.ext.toEnvExtension.asyncMode) (bumpGen := true) (log := .missing)
    (·.modifyTop ext.descr f)

/-- Replays `ops` (`ScopedEnvExtension.stackDelta`) onto `ext`'s stack in `view` of `env`, as a sanctioned writer;
`admittedOnly` as in `replayOps`. -/
def ScopedEnvExtension.replayOpsIn (ext : ScopedEnvExtension α β σ) (env : Environment)
    (view : EnvExtension.View) (ops : Array (Op α)) (admittedOnly := false) : ImportM Environment := do
  let s ← replayOps ext.descr (ext.ext.toEnvExtension.getStateIn env view).state ops admittedOnly
  return ext.ext.toEnvExtension.writeView env view (.accounted (descrIdentity ext)) fun ps => { ps with state := s }

/-- Starts every scoped extension's operation log afresh in the main-branch view, so that it holds the operations of
one top-level command (`StateStack.ops`); the frontend calls it before each command. Extensions registered after
`env` was created (by initializers an `#eval` ran) have no state in it and are skipped. -/
def clearScopedOps (env : Environment) : BaseIO Environment := do
  let mut env := env
  for ext in ← scopedEnvExtensionsRef.get do
    if ext.ext.toEnvExtension.idx < env.base.private.extensions.size &&
        !(ext.ext.getState (asyncMode := .local) env).ops.isEmpty then
      -- clears the operation log only, which no reader of the state in effect sees
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
  /-- See `PersistentEnvExtensionDescrCore.trackGen`. -/
  trackGen : Bool := false
  /-- See `EnvExtension.logWrites`. -/
  logWrites : Bool := false
  /-- See `ScopedEnvExtension.Descr.entryDecl?`. -/
  entryDecl? : Option (α → Name) := none

def registerSimpleScopedEnvExtension (descr : SimpleScopedEnvExtension.Descr α σ) : IO (SimpleScopedEnvExtension α σ) := do
  registerScopedEnvExtension {
    name           := descr.name
    mkInitial      := return descr.initial
    addEntry       := descr.addEntry
    -- never called: `oleanEntryIsEntry?` stands for both
    toOLeanEntry   := id
    ofOLeanEntry   := fun _ a => return a
    oleanEntryIsEntry? := some ⟨rfl⟩
    finalizeImport := descr.finalizeImport
    exportEntry?   := descr.exportEntry?
    trackGen       := descr.trackGen
    logWrites      := descr.logWrites
    entryDecl?     := descr.entryDecl?
  }

end Lean
