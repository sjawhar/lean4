import Lean
/-! Every field of the states a declaration command can change behaves as the recorder classifies it, and the test
throws when a field is added, removed or misclassified. For `Elab.Command.State` (`ModuleUsage.commandStateFields`)
each field is changed on its own and must show its class: the payload for `env`, `post` and `ctx` for `replayed`, a
`stateOnly` marker for `stateOnly`; a `reset` field must be empty when a later command starts although the command
before it left the field non-empty, and an `unread` field must not change what the next command declares. Every
field of `Elab.Command.Scope` must change `scopesEnc`. Every field of a scoped extension's `ScopedEnvExtension.State`
and `StateStack` is changed on its own and must give the state delta (`ScopedEnvExtension.stateDelta`,
`localEntriesAccountedFor`) its documented result. The fields with a case must be exactly the structure's fields. -/
open Lean Elab Command

def expect (cond : Bool) (msg : String) : IO Unit :=
  unless cond do throw <| IO.userError msg

/-- The cases cover exactly the structure's fields. -/
def coverage (label : String) (fields cases : Array Name) : IO Unit := do
  let missing := fields.filter (!cases.contains ·)
  let stale := cases.filter (!fields.contains ·)
  expect (missing.isEmpty && stale.isEmpty) s!"{label}: no case for {missing}, case for no field {stale}"
  IO.println s!"{label}: {fields.size} fields, each covered"

def quotDigest (s : NameSet) : ModuleUsage.NameSetDigest := s.foldl (·.insert ·) {}

def ctxOf (st : Command.State) : ModuleUsage.Digest := ModuleUsage.ctxDigest st (quotDigest st.usedQuotCtxts) default

def deltaStr : StateDelta α → String
  | .entries es => s!"entries {es.size}"
  | .stateOnly => "stateOnly"

/-- A module that reports, as string constants, what a command sees of the fields reset before every command: once
as the first command, once directly after `leave_state`, which leaves a message, a trace and a snapshot task in its
state. `trace.profiler.output` keeps the trace from being turned into a message when the command ends, as when
profiling, so the command leaves it in its state. -/
def resetModule : String := "import Lean\nopen Lean Elab Command\n\
  syntax \"report \" ident : command\n\
  elab_rules : command | `(report $n) => do\n\
  \x20 let s := s!\"messages={(← get).messages.toList.length} traceState={(← get).traceState.traces.size} \
    snapshotTasks={(← get).snapshotTasks.size}\"\n\
  \x20 elabCommand (← `(def $n : String := $(Syntax.mkStrLit s)))\n\
  elab \"leave_state\" : command => do\n\
  \x20 logWarning \"a warning\"\n\
  \x20 addTrace `debug m!\"a trace\"\n\
  \x20 modify fun s => { s with \
    snapshotTasks := s.snapshotTasks.push { stx? := none, task := .pure default, cancelTk? := none } }\n\
  report resetFirst\n\
  set_option trace.profiler.output \"unused\"\n\
  leave_state\n\
  report resetAfter\n"

/-- How much of `field`, a field reset before every command, `st` holds, counted as `resetModule`'s `report` counts
it. -/
def resetSize (st : Command.State) : Name → Option Nat
  | `messages => some st.messages.toList.length
  | `traceState => some st.traceState.traces.size
  | `snapshotTasks => some st.snapshotTasks.size
  | _ => none

/-- The observations of elaborating `src` as module `M`. -/
unsafe def observe (src : String) : IO (Array ModuleUsage.CommandObservation) := do
  enableInitializersExecution
  usageRecordingRef.set true
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend src {} "M.lean" `M | throw <| IO.userError s!"elaboration failed:\n{src}"
  return (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)

/-- Probe commands whose declarations depend on what a later command may read: a plain definition, a command
elaborator that names a declaration with `mkFreshId`, and a proof-mode theorem, whose value carries generated names. -/
def probeSource : String := "import Lean\nimport Std.Tactic.Do\nopen Lean Elab Command Std.Do\n\
  elab \"fresh_def\" : command => do\n\
  \x20 let .num _ i ← liftCoreM mkFreshId | throwError \"unexpected identifier\"\n\
  \x20 elabCommand (← `(def $(mkIdent (.mkSimple s!\"fieldGuardFresh{i}\")) : Nat := 0))\n\
  def fieldGuardProbe (n : Nat) : Nat := n + 1\n\
  fresh_def\n\
  theorem fieldGuardPm (σs : List Type) (Q : SPred σs) : Q ⊢ₛ Q := by\n  mstart\n  mintro HQ\n  mexact HQ\n"

/-- The names and values a command declares when elaborated from `st`. -/
def declares (st : Command.State) (stx : Syntax) : IO (Array (Name × Option Expr)) := do
  let ctx : Command.Context :=
    { fileName := "M.lean", fileMap := probeSource.toFileMap, snap? := none, cancelTk? := none }
  let (_, after) ← ((elabCommandTopLevel stx).run ctx |>.run st).toIO fun _ => IO.userError "probe failed"
  return after.env.constants.foldStage2 (fun (acc : Array (Name × Option Expr)) n c =>
    if st.env.contains n then acc else acc.push (n, c.value? (allowOpaque := true))) #[]

def sameDecls (a b : Array (Name × Option Expr)) : Bool :=
  let sort (xs : Array (Name × Option Expr)) := xs.qsort (Name.quickLt ·.1 ·.1)
  let a := sort a
  let b := sort b
  a.size == b.size && (a.zip b).all fun ((n, v), (m, w)) => n == m && match v, w with
    | some v, some w => v.equal w
    | none, none => true
    | _, _ => false

unsafe def main : IO Unit := do
  initSearchPath (← getBuildDir)
  enableInitializersExecution
  let obs ← observe probeSource
  let probes := obs.extract (obs.size - 3) obs.size
  let some first := probes[0]? | throw <| IO.userError "no observation"
  let st := first.before
  let env := st.env
  -- `Elab.Command.State`
  let classOf (f : Name) := (ModuleUsage.commandStateFields.find? (·.1 == f)).map (·.2)
  coverage "Elab.Command.State classification" (getStructureFields env ``Command.State)
    (ModuleUsage.commandStateFields.map (·.1))
  let changed : Array (Name × (Command.State → Command.State)) := #[
    (`env, fun st => { st with env := addAlias st.env `FieldGuardAlias `Nat }),
    (`messages, fun st => { st with messages := st.messages.add { fileName := "F", pos := ⟨1, 0⟩, data := "m" } }),
    (`scopes, fun st => { st with scopes := match st.scopes with
      | s :: rest => { s with opts := autoImplicit.set s.opts (!autoImplicit.get s.opts) } :: rest
      | [] => [] }),
    (`usedQuotCtxts, fun st => { st with usedQuotCtxts := st.usedQuotCtxts.insert `q }),
    (`nextMacroScope, fun st => { st with nextMacroScope := st.nextMacroScope + 1 }),
    (`maxRecDepth, fun st => { st with maxRecDepth := st.maxRecDepth + 1 }),
    (`ngen, fun st => { st with ngen := { st.ngen with idx := st.ngen.idx + 1000000 } }),
    (`auxDeclNGen, fun st => { st with auxDeclNGen := st.auxDeclNGen.mkChild.2 }),
    (`infoState, fun st => { st with infoState := { st.infoState with enabled := !st.infoState.enabled } }),
    (`traceState, fun st => { st with traceState := { st.traceState with tid := st.traceState.tid + 1 } }),
    (`snapshotTasks, fun st => { st with
      snapshotTasks := st.snapshotTasks.push ({ stx? := none, task := .pure default, cancelTk? := none }) }),
    (`prevLinterStates, fun st => { st with prevLinterStates := some (.pure #[]) })]
  coverage "Elab.Command.State cases" (getStructureFields env ``Command.State) (changed.map (·.1))
  let (resetFirst, resetAfter, resetLeft) ← do
    let resetObs ← observe resetModule
    let adds (n : Name) (o : ModuleUsage.CommandObservation) := !o.before.env.contains n && o.after.env.contains n
    let some reportObs := resetObs.find? (adds `resetAfter) |
      throw <| IO.userError "no observation of `report resetAfter`"
    let some prev := resetObs.find? (·.i + 1 == reportObs.i) |
      throw <| IO.userError "no command before `report resetAfter`"
    let str (n : Name) : String :=
      match (((reportObs.after.env.find? n).bind (·.value?)).map (·.consumeMData) : Option Expr) with
      | some (.lit (.strVal s)) => s
      | _ => "?"
    pure (str `resetFirst, str `resetAfter, prev.after)
  for (field, change) in changed do
    let some cls := classOf field | throw <| IO.userError s!"{field} unclassified"
    let st' := change st
    let markers := ModuleUsage.commandStateChanges st st'
    let marker := `Lean.Elab.Command ++ field
    let ctxChanged := ctxOf st != ctxOf st'
    let postChanged := !(ModuleUsage.CommandPost.ofStates st st' == ModuleUsage.CommandPost.ofStates st st)
    let shown ← match cls with
      | .env =>
        let recorded ← recordCommandDelta st.env st'.env 0
        let some ce := (commandEntriesExt.getState recorded).back? | throw <| IO.userError "no payload"
        expect (!ce.entries.isEmpty && markers.isEmpty) s!"{field}: no payload entry"
        pure s!"payload {ce.entries.map fun (v, n, _) => s!"{n}.{v}"}"
      | .replayed =>
        expect (postChanged && ctxChanged && markers.isEmpty) s!"{field}: post {postChanged}, ctx {ctxChanged}"
        pure "post and ctx change"
      | .stateOnly =>
        expect (markers == #[marker]) s!"{field}: markers {markers}"
        pure s!"marker {marker}"
      | .reset =>
        let seen (s : String) := (s.splitOn " ").find? (·.startsWith s!"{field}=")
        expect ((seen resetFirst).isSome && seen resetFirst == seen resetAfter && markers.isEmpty && !ctxChanged)
          s!"{field}: the first command sees {resetFirst}, a later one {resetAfter}"
        let left := resetSize resetLeft field
        expect (left.any (· != 0))
          s!"{field}: the command before the later one leaves {left}, so no reset is exercised"
        pure s!"a later command sees what the first does ({(seen resetAfter).getD "?"}) although the command before \
          it leaves the field non-empty"
      | .unread =>
        let mut same := true
        for o in probes do
          same := same && sameDecls (← declares o.before o.stx) (← declares (change o.before) o.stx)
        expect (same && markers.isEmpty && !ctxChanged && !postChanged) s!"{field}: a later command differs"
        pure "later commands declare the same"
    IO.println s!"{field} ({repr cls}): {shown}"
  let scope := st.scopes.head!
  -- `Elab.Command.Scope`
  let binder := Unhygienic.run `(Parser.Term.bracketedBinderF| (x : Nat))
  let attr := Unhygienic.run `(Parser.Term.attrInstance| simp)
  let scopeCases : Array (Name × Command.Scope) := #[
    (`header, { scope with header := "x" }),
    (`opts, { scope with opts := autoImplicit.set scope.opts (!autoImplicit.get scope.opts) }),
    (`currNamespace, { scope with currNamespace := `Foo }),
    (`openDecls, { scope with openDecls := .simple `Foo [] :: scope.openDecls }),
    (`levelNames, { scope with levelNames := `u :: scope.levelNames }),
    (`varDecls, { scope with varDecls := scope.varDecls.push ⟨binder⟩ }),
    (`varUIds, { scope with varUIds := scope.varUIds.push `x }),
    (`includedVars, { scope with includedVars := `x :: scope.includedVars }),
    (`omittedVars, { scope with omittedVars := `x :: scope.omittedVars }),
    (`isNoncomputable, { scope with isNoncomputable := !scope.isNoncomputable }),
    (`isPublic, { scope with isPublic := !scope.isPublic }),
    (`isMeta, { scope with isMeta := !scope.isMeta }),
    (`attrs, { scope with attrs := attr :: scope.attrs })]
  coverage "Elab.Command.Scope cases" (getStructureFields env ``Command.Scope) (scopeCases.map (·.1))
  coverage "Elab.Command.Scope encoding" (getStructureFields env ``Command.Scope) ModuleUsage.scopeFields
  for (field, scope') in scopeCases do
    expect ((ModuleUsage.scopesEnc {} [scope]).finish != (ModuleUsage.scopesEnc {} [scope']).finish)
      s!"Scope.{field} does not change scopesEnc"
  IO.println "every Scope field changes scopesEnc"
  -- `ScopedEnvExtension.State` and `StateStack`: two levels; `n` local entries recorded for the extension
  let lvl : ScopedEnvExtension.State Nat := { state := 0 }
  let s₀ : ScopedEnvExtension.StateStack Name Name Nat := { stateStack := [lvl, lvl] }
  let top (f : ScopedEnvExtension.State Nat → ScopedEnvExtension.State Nat) :
      ScopedEnvExtension.StateStack Name Name Nat :=
    { s₀ with stateStack := [f lvl, lvl] }
  -- (field, case, before, after, local entries replayed, expected delta, expected accounting)
  let cases : Array (Name × String × ScopedEnvExtension.StateStack Name Name Nat ×
      ScopedEnvExtension.StateStack Name Name Nat × Nat × String × Bool) := #[
    (`state, "changed alone, without an entry or a local entry", s₀, top ({ · with state := 1 }), 0,
      "stateOnly", true),
    (`activeScopes, "a namespace activated", s₀, top ({ · with activeScopes := ({} : NameSet).insert `Foo }), 0,
      "stateOnly", true),
    (`delimitsLocal, "changed", s₀, top ({ · with delimitsLocal := false }), 0, "stateOnly", true),
    (`modCount, "a write without an entry", s₀, top ({ · with modCount := 1 }), 0, "stateOnly", true),
    (`generation, "a level replaced", s₀, top ({ · with generation := 1 }), 0, "stateOnly", true),
    (`localCount, "a local entry the payload replays", s₀, top ({ · with localCount := 1 }), 1, "entries 0", true),
    (`localCount, "a local entry the payload does not replay", s₀, top ({ · with localCount := 1 }), 0,
      "entries 0", false),
    (`stateStack, "a level pushed", s₀, { s₀ with stateStack := [lvl, lvl, lvl] }, 0, "stateOnly", false),
    (`scopedEntries, "changed without a scoped entry", s₀,
      { s₀ with scopedEntries := { map := ({} : SMap Name (PArray Name)).insert `Foo {} } }, 0, "stateOnly", true),
    (`newEntries, "an entry in front of the old log", s₀, { s₀ with newEntries := [.global `e] }, 0,
      "entries 1", true),
    (`newEntries, "the old log not a tail", { s₀ with newEntries := [.global `old] },
      { s₀ with newEntries := [.global `e] }, 0, "stateOnly", true),
    -- numbers levels for `generation` only; outside the replay contract
    (`pushCount, "advanced", s₀, { s₀ with pushCount := 1 }, 0, "entries 0", true)]
  let stateFields := getStructureFields env ``ScopedEnvExtension.State
  let stackFields := getStructureFields env ``ScopedEnvExtension.StateStack
  let caseFields := (cases.map (·.1)).toList.eraseDups.toArray
  coverage "ScopedEnvExtension.State cases" stateFields (caseFields.filter stateFields.contains)
  coverage "ScopedEnvExtension.StateStack cases" stackFields (caseFields.filter (!stateFields.contains ·))
  coverage "ScopedEnvExtension.State encoding" stateFields ScopedEnvExtension.stateFields
  coverage "ScopedEnvExtension.StateStack encoding" stackFields ScopedEnvExtension.stackFields
  for (field, label, b, a, n, delta, accounted) in cases do
    let got := deltaStr (ScopedEnvExtension.stateDelta b a)
    let acc := ScopedEnvExtension.localEntriesAccountedFor b a n
    expect (got == delta && acc == accounted) s!"{field} {label}: delta {got}, accounted {acc}"
    IO.println s!"scoped {field}, {label}: {got}, local entries accounted for {acc}"

#eval main
