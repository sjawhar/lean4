import Lean
/-! The keep-in-order class test (`decl2f-delta4-review.md`): every command of a module is kept in order, each on the
previous keep's result, from the module's post-import environment with fresh realization caches, as a reuse run in a
new process does; a command whose payload is `stateOnly` is elaborated instead. After each command the chain is
compared with the full run: the constants it added, per-view entry counts, per-declaration reads of each added
constant (persistent extensions, command caches, scoped stacks), and the next command's messages. Modules: the
review's probes (realized constants and their contexts R4, R6, R7, a second requester of a realization, a context's
options, matcher and header shapes), constants nested in a theorem's branch, nested inductives' auxiliary recursors, a
matcher the same command creates, `@[inherit_doc]` of an asynchronously elaborated theorem, and a module importing
extensions of every mode written from theorems' branches and scopes (a raw write in a branch and a scoped
`modifyState` on the main branch are refused). Every kept command must equal the full run.
Negative controls: a realization record tampered so that its rebuild fails, and a constant corrupted so that the
kernel rejects it, must make the keep throw (the latter with the kernel's message). -/
open Lean Elab Command

def newConsts (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

/-- KEEP_ONE: plan §1.4's keep of one command at this toolchain. -/
def keepOne (env : Environment) (ce : CommandEntries) (infos : NameMap ConstantInfo) (_before : Environment) :
    IO Environment := do
  CommandEntries.Testing.keep env ce infos {}

/-- FRESH: `env` with fresh realization caches. -/
def fresh (env : Environment) : IO Environment := CommandEntries.Testing.freshRealizationCaches env

def elabOn (src : String) (st : Command.State) (env : Environment) (stx : Syntax) :
    IO (Command.State × List String) := do
  let ctx : Command.Context := { fileName := "M.lean", fileMap := src.toFileMap, snap? := none, cancelTk? := none }
  let scopes := st.scopes.map fun sc => { sc with opts := Elab.async.set sc.opts false }
  let st : Command.State := { st with env, scopes, messages := .empty }
  let (_, after) ← ((elabCommandTopLevel stx).run ctx |>.run st).toIO fun _ => IO.userError "elab failed"
  let msgs ← after.messages.toList.mapM fun m => return s!"{match m.severity with | .error => "error" | .warning => "warning" | .information => "info"}: {← m.toString}"
  return (after, msgs)

abbrev Erased := PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

def deltaSize (e : Erased) (s₀ s₁ : EnvExtensionState) : Int :=
  match e.stateDelta? with
  | none => -2
  | some d => match d s₀ s₁ with
    | .entries es => es.size
    | .stateOnly => -1

def skipExt (n : Name) : Bool :=
  let s := n.toString
  n == `Lean.commandEntriesExt || n == `Lean.ModuleUsage.ext || n == `Lean.ModuleUsage.stmtExt ||
    s.endsWith "symbolFrequency" || s.endsWith "sineQueNon"

unsafe def stackShape (s : EnvExtensionState) : String :=
  let st : ScopedEnvExtension.StateStack EnvExtensionEntry EnvExtensionEntry EnvExtensionState := unsafeCast s
  s!"{st.stateStack.map fun l => (l.activeScopes.toList, l.delimitsLocal)}/{st.newEntries.length}"

/-- Everything the comparison reads after one command, counted from `start`, the module's post-import environment
(`consts`: what the command added). -/
unsafe def observe (scopedExts : NameSet) (start _before after : Environment) (consts : List Name) :
    IO (Array (String × String)) := do
  let mut out := #[]
  for e in (← persistentEnvExtensionsRef.get) do
    if skipExt e.name then continue
    let te := e.toEnvExtension
    let isScoped := scopedExts.contains e.name
    for v in [EnvExtension.View.checked, .main] do
      let s₁ := (te.getStateIn after v).state
      out := out.push (s!"{e.name}@{v}", if isScoped then stackShape s₁
        else toString (deltaSize e (te.getStateIn start v).state s₁))
    let declMode? : Option EnvExtension.AsyncMode :=
      if te.asyncMode matches .async _ then some te.asyncMode
      else if e.name == `Lean.Meta.Match.Extension.extension then some (.async .asyncEnv)
      else none
    if let some m := declMode? then
      for c in consts do
        let s₁ := (te.getState (asyncMode := m) (asyncDecl := c) after).state
        out := out.push (s!"{e.name}@{c}", if isScoped then stackShape s₁
          else toString (deltaSize e (te.getStateIn start .main).state s₁))
  for cache in (← commandCacheExtensionsRef.get) do
    out := out.push (s!"cache {cache.name}",
      toString (cache.stateDelta (cache.ext.getStateIn start cache.view) (cache.ext.getStateIn after cache.view)).size)
    if cache.ext.asyncMode matches .async _ then
      for c in consts do
        let s₁ := cache.ext.getState (asyncMode := cache.ext.asyncMode) (asyncDecl := c) after
        out := out.push (s!"cache {cache.name}@{c}",
          toString (cache.stateDelta (cache.ext.getStateIn start .main) s₁).size)
  return out


def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

/-- Elaborates `src` as `lean -o` does; its command observations and payloads. -/
unsafe def elabModule (dir : System.FilePath) (src : String) :
    IO (Array ModuleUsage.CommandObservation × Array CommandEntries) := do
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  usageRecordingRef.set true
  ModuleUsage.commandObservationsRef.set #[]
  let some _ ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  return (obs, CommandEntries.ofModuleData md)

/-- Keeps every command of `src` in order and prints how many were kept and refused, and every difference. -/
unsafe def chain (dir : System.FilePath) (label src : String) : IO Unit := do
  let (obs, payloads) ← elabModule dir src
  let some o0 := obs[0]? | throw <| IO.userError s!"{label}: no commands"
  let scopedExts : NameSet := (← scopedEnvExtensionsRef.get).foldl (·.insert ·.ext.name) {}
  let mut env ← fresh o0.before.env
  let mut kept := 0
  let mut refused := #[]
  let mut lines := #[]
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | continue
    let chainBefore := env
    let infos := newConsts o.before.env o.after.env
    let consts := infos.toList.map (·.1)
    if !ce.stateOnly.isEmpty then
      env := (← elabOn src o.before env o.stx).1.env
      refused := refused.push o.i
    else
      try
        env ← keepOne env ce infos o.before.env
        kept := kept + 1
      catch e =>
        lines := lines.push s!"  command {o.i}: keep threw: {e}"
        env := (← elabOn src o.before env o.stx).1.env
    -- a refused command is elaborated synchronously here, so only the next command's messages compare
    unless refused.contains o.i do
      let chainConsts := (newConsts chainBefore env).toList.map (·.1)
      unless chainConsts.toArray.qsort Name.quickLt == consts.toArray.qsort Name.quickLt do
        lines := lines.push s!"  command {o.i}: constants: full {consts}, chain {chainConsts}"
      let vf ← observe scopedExts o0.before.env o.before.env o.after.env consts
      let vk ← observe scopedExts o0.before.env chainBefore env consts
      for ((l, a), (_, b)) in vf.zip vk do
        if a != b then lines := lines.push s!"  command {o.i}: {l}: full {a}, chain {b}"
    if let some next := obs.find? (·.i == o.i + 1) then
      let (_, mFull) ← elabOn src o.after o.after.env next.stx
      let (_, mChain) ← elabOn src o.after env next.stx
      unless mFull == mChain do
        lines := lines.push s!"  command {o.i}: next command's messages: full {mFull}, chain {mChain}"
  IO.println s!"{label}: {obs.size} commands, {kept} kept, refused {refused}, {lines.size} differences"
  for l in lines do IO.println l

/-- `f` applied to every record, nested ones first. -/
partial def mapRecords (f : AddedConst → AddedConst) : AddedConst → AddedConst
  | .async n k s nested => f (.async n k s (nested.map (mapRecords f)))
  | a => f a

partial def hasRealization : AddedConst → Bool
  | .realization .. => true
  | .async _ _ _ nested => nested.any hasRealization
  | _ => false

/-- The first command of `src` whose payload re-adds a realization, kept with `tamper` applied to its records. -/
unsafe def tamperedKeep (dir : System.FilePath) (label src : String)
    (tamper : AddedConst → AddedConst) : IO Unit := do
  let (obs, payloads) ← elabModule dir src
  let some o0 := obs[0]? | throw <| IO.userError s!"{label}: no commands"
  let mut env ← fresh o0.before.env
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | continue
    let infos := newConsts o.before.env o.after.env
    if ce.added.any hasRealization then
      let r ← try
          discard <| keepOne env { ce with added := ce.added.map (mapRecords tamper) } infos o.before.env
          pure "kept"
        catch _ => pure "threw"
      IO.println s!"{label}, command {o.i} with a tampered realization record: {r}"
      return
    if ce.stateOnly.isEmpty then env ← keepOne env ce infos o.before.env
    else env := (← elabOn src o.before env o.stx).1.env
  IO.println s!"{label}: no realization record"

/-- Command `i` of `src` kept with constant `n`'s value replaced by `True.intro`. -/
unsafe def corruptedKeep (dir : System.FilePath) (label src : String) (i : Nat) (n : Name) : IO Unit := do
  let (obs, payloads) ← elabModule dir src
  let some o := obs.find? (·.i == i) | throw <| IO.userError s!"{label}: no command {i}"
  let some ce := payloads.find? (·.idx == i) | throw <| IO.userError s!"{label}: no payload {i}"
  let infos := newConsts o.before.env o.after.env
  let some info := infos.find? n | throw <| IO.userError s!"{label}: no {n}"
  let bad : ConstantInfo := match info with
    | .thmInfo v => .thmInfo { v with value := mkConst ``True.intro }
    | .defnInfo v => .defnInfo { v with value := mkConst ``True.intro }
    | info => info
  let r ← try
      discard <| keepOne (← fresh o.before.env) ce (infos.insert n bad) o.before.env
      pure "kept"
    catch e => pure s!"threw, with the kernel's message: {decide ((e.toString.splitOn "(kernel)").length > 1)}"
  IO.println s!"{label}: {r}"

def modules : List (String × String) := [
  ("chain", "def f : Nat → Nat\n  | 0 => 1\n  | n+1 => n\ntheorem c1 : f 0 = 1 := by simp [f]\nset_option backward.defeqAttrib.useBackward true in\ntheorem d1 : f 0 = 1 := by dsimp only [f.eq_1]\ndef g {α : Type} [DecidableEq α] (x : Nat) : Nat := x + 1\ntheorem cg (a b : Nat) (h : a = b) : g (α := Nat) a = g (α := Nat) b := by simp [h]\ntheorem cg2 (a b : Nat) (h : a = b) : g (α := Nat) (a + 1) = g (α := Nat) (b + 1) := by simp [h]\ndef cnt : Nat → Nat\n  | 0 => 0\n  | n+1 => cnt n\ntheorem k1 (n : Nat) : cnt n = 0 := by fun_induction cnt n <;> simp_all\ntheorem k2 (n : Nat) : cnt n = 0 := by fun_induction cnt n <;> simp_all\ndef hm (x : Option Nat) : Nat := match x with | some n => n | none => 0\ntheorem m1 (x : Option Nat) : hm x ≤ hm x := by unfold hm; split <;> exact Nat.le_refl _\ntheorem m2 (x : Option Nat) : hm x = hm x := by unfold hm; split <;> rfl\nnamespace Foo\ndef y : Nat := 0\nend Foo\nopen Foo in theorem t3 : y = 0 := rfl\ntheorem A.B.t4 : True := trivial\ntheorem t5 : Foo.y = 0 := by open Foo in rfl\n"),
  ("R4", "import Lean\n@[simp, grind] def f : Nat → Nat\n  | 0 => 0\n  | n + 1 => f n\ntheorem b (n : Nat) : f n = 0 := by fun_induction f n <;> simp_all\n"),
  ("R6", "import Lean\ndef f : Nat → Nat\n  | 0 => 0\n  | n + 1 => f n\ntheorem b (n : Nat) : f n = 0 := by fun_induction f n <;> simp_all\n"),
  ("R7", "import Lean\ndef f : Nat → Nat\n  | 0 => 0\n  | n + 1 => f n\ntheorem s : f 0 = 0 := by simp [f]\ntheorem r (n : Nat) : f (n + 1) = f n := by rw [f]\ntheorem u : f 0 = 0 := by unfold f; rfl\ntheorem e : f 0 = 0 := rfl\n"),
  ("secondRealizer", "def f : Nat → Nat\n  | 0 => 1\n  | n+1 => n\ntheorem c1 : f 0 = 1 := by simp [f]\ntheorem c2 : f 1 = 0 := by simp [f]\ntheorem c3 : f 2 = 1 := by simp [f]\n"),
  ("options", "import Lean\nopen Lean Meta Elab Command in\nelab \"realize_hb \" id:ident : command => liftTermElabM do\n  let f ← realizeGlobalConstNoOverload id\n  let n := f ++ `hb\n  realizeConst f n do\n    let v := maxHeartbeats.get (← getOptions)\n    addDecl (Declaration.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkNatLit v) .abbrev .safe [n]))\nset_option maxHeartbeats 400000 in\ndef f2 : Nat := 0\nrealize_hb f2\ntheorem hbIs : f2.hb = 400000 := rfl\n"),
  ("h2", "def h2 (x : Nat) : Nat := match x with | 0 => 1 | _ => 2\ntheorem t12 : h2 0 = 1 := by simp [h2]\ntheorem t13 : h2 1 = 2 := by unfold h2; rfl\ntheorem t14 : h2 5 = 2 := by simp [h2]\n"),
  ("header", "theorem t6 (x : Option Nat) : (match x with | some n => n | none => 0) ≤ (match x with | some n => n | none => 0) := by\n  split <;> exact Nat.le_refl _\ntheorem t7 (x : Option Nat) : (match x with | some n => n | none => 0) ≤ (match x with | some n => n | none => 0) + 1 := by\n  split <;> omega\nexample (x : Option Nat) : (match x with | some n => n | none => 0) ≥ 0 := by split <;> omega\n"),
  ("kernel", "def f : Nat → Nat\n  | 0 => 1\n  | n+1 => f n\ntheorem c1 : f 0 = 1 := by simp [f]\n"),
  ("nestedHelper", "theorem t (n : Nat) : True := by\n  have := go n\n  exact match n with | 0 => trivial | _ + 1 => trivial\nwhere\n  @[irreducible] go (n : Nat) : Nat := n\ndef k : Nat := by\n  first\n  | (have : t.go 0 = 0 := rfl; exact 1)\n  | exact 2\n"),
  ("wfHelper", "theorem t (n : Nat) : True := by\n  have := go n\n  trivial\nwhere\n  go (n : Nat) : Nat := if h : n = 0 then 0 else go (n - 1)\n  termination_by n\n"),
  ("docHelper", "theorem t (n : Nat) : True := by\n  have := go n\n  trivial\nwhere\n  /-- doc of go -/\n  go (n : Nat) : Nat := n\n"),
  ("tree", "/-- doc of Tree -/\ninductive Tree where\n  | node : List Tree → Tree\ntheorem useTree : @Tree.rec_1 = @Tree.rec_1 := rfl\n"),
  ("rose", "structure Rose where\n  kids : List Rose\ntheorem useRose : @Rose.rec_1 = @Rose.rec_1 := rfl\n"),
  ("matcher", "/-- doc of tm -/\ntheorem tm : (match (0 : Nat) with | 0 => True | _ => False) := trivial\ntheorem after : True := trivial\n"),
  ("inheritDoc", "import Lean\n/-- doc of t -/\ntheorem t : True := trivial\n@[inherit_doc t] def g : Nat := 0\n")
]

def xSource : String := "import Lean\nopen Lean Elab Tactic\ninitialize localLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension {\n  addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .local }\ninitialize syncLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension {\n  addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .sync }\ninitialize cacheLogExt : EnvExtension NameSet ← do\n  let ext ← registerEnvExtension (pure {}) (asyncMode := .local)\n  registerCommandCacheExtension `cacheLog ext (fun before after => (NameSet.sharedDiff before after).1)\n    (fun s n => s.insert n)\ninitialize scopeExt : SimpleScopedEnvExtension Name NameSet ← registerSimpleScopedEnvExtension {\n  addEntry := fun s n => s.insert n, initial := {} }\ninitialize registerBuiltinAttribute {\n  name := `scope_attr, descr := \"t\", add := fun decl _ kind => scopeExt.add decl kind }\ninitialize registerBuiltinAttribute {\n  name := `log_main, descr := \"t\", add := fun _ _ _ => modifyEnv fun env => localLog.addEntry env `mainSide }\nelab \"record_in_branch\" : tactic => do\n  modifyEnv fun env => localLog.addEntry env `fromBranch\n  modifyEnv fun env => syncLog.addEntry env `fromBranch\n  modifyEnv fun env => cacheLogExt.modifyState env fun s => s.insert `fromBranch\nelab \"raw_write_in_branch\" : tactic =>\n  modifyEnv fun env => scopeExt.ext.toEnvExtension.modifyState (asyncMode := .local) env fun ps =>\n    { ps with state := { ps.state with stateStack := ps.state.stateStack.map fun l =>\n      { l with state := l.state.insert `rawSide } } }\nelab \"scoped_modify\" : command => modifyEnv (scopeExt.modifyState · fun s => s.insert `modSide)\nsyntax \"thm_log \" ident : command\nmacro_rules\n  | `(thm_log $n) => return mkNullNode #[← `(theorem $n : True := trivial), ← `(attribute [log_main] $n)]\n"

def branchSource : String := "import X\ndef x : Nat := 0\nnamespace Foo\ndef y : Nat := 0\nattribute [scoped scope_attr] y\nend Foo\ntheorem t : True := by record_in_branch; trivial\nthm_log t2\nopen Foo in theorem t3 : True := by trivial\nattribute [local scope_attr] x in theorem t4 : True := trivial\nopen Foo in attribute [local scope_attr] x\nattribute [local scope_attr] x\ntheorem t5 : True := by raw_write_in_branch; trivial\nscoped_modify\ntheorem t6 : True := trivial\n"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  for (label, src) in modules do
    chain dir label src
  chain dir "branchStates" branchSource
  tamperedKeep dir "chain" (modules.lookup "chain").get! fun
    | .realization f k cs s => .realization f k cs { s with entries := s.entries.push (`noSuchExtension, #[]) }
    | a => a
  corruptedKeep dir "corrupted theorem" "theorem a : 1 = 1 := rfl\ndef b : Nat := 1\n" 0 `a
  corruptedKeep dir "corrupted definition" "theorem a : 1 = 1 := rfl\ndef b : Nat := 1\n" 1 `b

#eval main
