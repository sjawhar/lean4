import Lean
/-! The keep-in-order class test: every command of a module is kept in order, each on the previous keep's result and
the chain's command state (a kept command restores its record's counters and the persistent tier of the type class
resolution cache), from the module's post-import environment
with fresh realization caches, as a reuse run in a new process does; a command whose payload is refused is elaborated
instead, on the chain's state, as the frontend would. Before each command the chain clears its scoped stacks'
operation logs, as the frontend does. After each command (kept or refused) the chain is compared with the full run:
the constants it added (names, level parameters, types and values by `Expr.equal`); per persistent extension with a
state delta, the entries since the module's start, and per recorded extension without one, its exported entries, in
each view and in the per-declaration reads of each added constant in both asynchronous modes (a multiset of hashes of
each entry's compacted bytes); per command cache, the entries since the module's start; per scoped extension, each
level's active namespaces and whether it delimits local entries, its exported entries and, in each view, the
operations the command applied as the recorder takes them (`ScopedEnvExtension.stackDelta`); and the next command's messages and constants, elaborated on copies with fresh realization caches so that
what it realizes there is not cached for its own keep (twice on the full run's: only what both agree on compares). A
level's state itself is not compared: a local entry shows in the operations that added it. Process state (an imported
module's `IO.Ref`) is not compared either, as the full run in this process moved it already:
`commandEntriesTwoProcess` keeps in a second process.
Modules: the review's probes (realized constants and their contexts R4, R6, R7, a second requester of a realization, a
context's options, matcher and header shapes, a realization a definition merged from the cache on the main branch,
`mainMerge`), a command that fits its heartbeats only through the tier a kept one filled, constants nested in a
theorem's branch, nested inductives' auxiliary recursors, a matcher the same
command creates, `@[inherit_doc]` of an asynchronously elaborated theorem, a module importing extensions of every mode
written from theorems' branches and scopes, scoped and local `simp` entries in those shapes (`scopedCore`), the
suite's `doLogicTests.lean` and `issue11211.lean` (a realization that merged another one it requested, merged again
inside a third), and, without comparisons between commands (a reuse frontend keeps the next command while a refused
one's tasks still run), a keep merging a realization a refused command's branch makes late. Refused: a raw write in a
branch and a scoped `modifyState` on the main branch, writes to non-persistent extensions that are no command cache,
an attribute registered outside core (those core's `register_simp_attr` and `register_label_attr` register are
kept), a write to a reference no command created (`Refusal.effect`), and every kernel constant that checking the
elaborator's would not give: added unchecked (by `addDeclCore`, by `debug.skipKernelTC`, by `replayConsts` for an
unsafe constant), `addDecl`'s fallback axioms, an elaborator constant the kernel never received (committed, its commit
dropped, or rejected by `replayConsts`), a kernel constant the elaborator never received (through `promiseChecked`), a
realization the kernel rejects when it is merged. Every kept command must equal the full run in what is compared.
Negative controls: realization records tampered so that their rebuild fails must make each keep that rebuilds one
throw; a kept docstring replaced by another, the entry count unchanged, must differ; a scoped stack's operations
dropped, an entry forged into an extension without a state delta, and the tier entries a kept command added dropped must
differ; a constant corrupted so that the kernel rejects it must make the keep throw with the kernel's message. -/
open Lean Elab Command

def newConsts (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

/-- Elaborates `stx` on `env` with `st`'s scopes, synchronously unless `asFrontend`, which keeps the scopes' options as
the frontend set them (a refused command is elaborated again by the frontend). -/
def elabOn (src : String) (st : Command.State) (env : Environment) (stx : Syntax) (asFrontend := false) :
    IO (Command.State × List String) := do
  let ctx : Command.Context := { fileName := "M.lean", fileMap := src.toFileMap, snap? := none, cancelTk? := none }
  let scopes := if asFrontend then st.scopes else st.scopes.map fun sc => { sc with opts := Elab.async.set sc.opts false }
  let st : Command.State := { st with env, scopes, messages := .empty }
  let (_, after) ← ((elabCommandTopLevel stx).run ctx |>.run st).toIO fun _ => IO.userError "elab failed"
  let msgs ← after.messages.toList.mapM fun m => return s!"{match m.severity with | .error => "error" | .warning => "warning" | .information => "info"}: {← m.toString}"
  return (after, msgs)

abbrev ErasedExt := PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

/-- Where entry values are compacted, and per object address the object (kept alive, so the address is not reused)
with the hash of its compacted bytes. -/
structure Memo where
  path : System.FilePath
  hashes : IO.Ref (Std.HashMap USize (NonScalar × UInt64))

unsafe def entryHash (memo : Memo) (e : α) : IO UInt64 := do
  let addr := ptrAddrUnsafe e
  if let some (_, h) := (← memo.hashes.get)[addr]? then return h
  let _ ← CompactedRegion.save memo.path `keepChainEntry e #[] none (allowClosures := true)
  let h := (← IO.FS.readBinFile memo.path).hash
  memo.hashes.modify (·.insert addr (unsafeCast e, h))
  return h

/-- The multiset of `es`' value hashes. -/
unsafe def valuesOf (memo : Memo) (es : Array α) : IO String := do
  return toString ((← es.mapM (entryHash memo)).qsort (· < ·)).toList

/-- The entries `e`'s state delta gives from `s₀` to `s₁`; without a delta (or with a `stateOnly` one), the exported
entries of a recorded extension stand for its state (`env`: the environment `s₁` is read from). -/
unsafe def deltaVal (memo : Memo) (e : ErasedExt) (env : Environment) (s₀ s₁ : EnvExtensionState) : IO String := do
  let exported : IO String :=
    if e.perCommand == .recorded then valuesOf memo (e.exportEntriesFn env s₁).private else pure ""
  match e.stateDelta? with
  | none => return s!"no delta {← exported}"
  | some d => match d s₀ s₁ with
    | .entries es => valuesOf memo es
    | .stateOnly => return s!"stateOnly {← exported}"

/-- Constants structurally equal, binder names and annotations included (`Expr.equal`). -/
def strictEq (c c' : ConstantInfo) : Bool :=
  c.levelParams == c'.levelParams && c.type.equal c'.type &&
    match c.value? (allowOpaque := true), c'.value? (allowOpaque := true) with
    | some v, some w => v.equal w
    | none, none => true
    | _, _ => false

/-- Differences between the constants `full` and `chain` added: missing, extra, or not `strictEq`. -/
def constDiffs (what : String) (full chain : NameMap ConstantInfo) : Array String := Id.run do
  let mut out := #[]
  for (n, c) in full do
    match chain.find? n with
    | none => out := out.push s!"{what}: {n} missing on the chain"
    | some c' => unless strictEq c c' do out := out.push s!"{what}: {n} differs"
  for (n, _) in chain do
    unless full.contains n do out := out.push s!"{what}: {n} only on the chain"
  return out

/-- Extensions the recording itself writes, which payloads never carry. -/
def skipExt (e : ErasedExt) : Bool := e.perCommand == .recorder

/-- A scoped stack after a command (`s₁`): each level's active namespaces and whether it delimits local entries, its
exported entries, and, with the stack before the command (`s₀?`, for the command's own views), the operations the
command applied as the recorder takes them (`ScopedEnvExtension.stackDelta`, in order; `none` for a change no operation
expresses). A per-declaration read of a realized constant reads its realization context's stack, which does not extend
the command's. -/
unsafe def stackShape (memo : Memo) (s₀? : Option EnvExtensionState) (s₁ : EnvExtensionState) : IO String := do
  let st : ScopedEnvExtension.StateStack EnvExtensionEntry EnvExtensionEntry EnvExtensionState := unsafeCast s₁
  let ops ← match s₀? with
    | none => pure ""
    | some s₀ => match ScopedEnvExtension.stackDelta (unsafeCast s₀ : ScopedEnvExtension.StateStack EnvExtensionEntry
        EnvExtensionEntry EnvExtensionState) st with
      | some ops => pure s!"/ops {(← ops.mapM (entryHash memo)).toList}"
      | none => pure "/ops none"
  return s!"{st.stateStack.map fun l => (l.activeScopes.toList, l.delimitsLocal)}/{← valuesOf memo st.newEntries.toArray}\
    {ops}"

/-- Everything the comparison reads after one command (from `before` to `after`), counted from `start`, the module's
post-import environment (`consts`: what the command added): each extension's and cache's state in both views, and its
per-declaration read of each added constant in both asynchronous modes. -/
unsafe def observe (memo : Memo) (scopedExts : NameSet) (start before after : Environment) (consts : List Name) :
    IO (Array (String × String)) := do
  let mut out := #[]
  let declModes : List (String × EnvExtension.AsyncMode) := [("asyncEnv", .async .asyncEnv), ("mainEnv", .async .mainEnv)]
  for e in (← persistentEnvExtensionsRef.get) do
    if skipExt e then continue
    let te := e.toEnvExtension
    let isScoped := scopedExts.contains e.name
    for v in [EnvExtension.View.checked, .main] do
      let s₁ := (te.getStateIn after v).state
      out := out.push (s!"{e.name}@{v}", ← if isScoped then stackShape memo (some (te.getStateIn before v).state) s₁
        else deltaVal memo e after (te.getStateIn start v).state s₁)
    for (ml, m) in declModes do
      for c in consts do
        let s₁ := (te.getState (asyncMode := m) (asyncDecl := c) after).state
        out := out.push (s!"{e.name}@{c}@{ml}", ← if isScoped then stackShape memo none s₁
          else deltaVal memo e after (te.getStateIn start .main).state s₁)
  for cache in (← commandCacheExtensionsRef.get) do
    for v in [EnvExtension.View.checked, .main] do
      out := out.push (s!"cache {cache.name}@{v}", ← valuesOf memo
        (cache.stateDelta (cache.ext.getStateIn start v) (cache.ext.getStateIn after v)))
    for (ml, m) in declModes do
      for c in consts do
        let s₁ := cache.ext.getState (asyncMode := m) (asyncDecl := c) after
        out := out.push (s!"cache {cache.name}@{c}@{ml}",
          ← valuesOf memo (cache.stateDelta (cache.ext.getStateIn start .main) s₁))
  return out

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

/-- The keep permit for `M`'s payloads in `env` (`ModuleUsage.Testing.keepPermit`). -/
def permitFor (dir : System.FilePath) (env : Environment) : IO KeepPermit := do
  IO.ofExcept (← ModuleUsage.Testing.keepPermit env `M (dir / "M.olean") (dir / "M.usage"))

/-- Elaborates `src` as `lean -o --usage` does; its command observations and payloads. -/
unsafe def elabModule (dir : System.FilePath) (src : String) :
    IO (Array ModuleUsage.CommandObservation × KeepPermit) := do
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  discard <| startFrontendRun (record := true)
  let some _ ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError "elaboration failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let some o0 := obs[0]? | throw <| IO.userError "no commands"
  return (obs, ← permitFor dir o0.before.env)

/-- What a chain of keeps did: how many were kept, the refused commands with their refusals, the throwing commands,
every difference. -/
structure ChainResult where
  commands : Nat
  kept : Nat := 0
  refused : Array (Nat × Array String) := #[]
  threw : Array Nat := #[]
  lines : Array String := #[]

/-- `st` after a kept command whose full run went from `before` to `after`: the counters it restores from its record's
`post` (`CommandPost.ofStates`). -/
def applyPost (st before after : Command.State) : IO Command.State := do
  let post := ModuleUsage.CommandPost.ofStates before after
  let g := post.auxDeclNGen
  return { st with
    ngen := ← IO.ofExcept (post.restoreNgen st.ngen)
    auxDeclNGen := .ofRecord { namePrefix := g.namePrefix, idx := g.idx, parentIdxs := g.parentIdxs }
    maxRecDepth := post.maxRecDepth
    usedQuotCtxts := post.quotCtxts.foldl (·.insert ·) st.usedQuotCtxts }

/-- Keeps every command of `src` in order, each payload first passed through `tamper`, on the chain's command state
(a kept command restores its record's counters, `applyPost`; a refused one is elaborated again on the chain's state as
the frontend would), and compares each with the full run. With `waits := false` the chain compares nothing between
commands, so a refused command's asynchronous tasks may still run when the next command is kept, as in a reuse
frontend, and compares the constants once at the end. -/
unsafe def runChain (dir : System.FilePath) (src : String) (tamper : CommandEntries → CommandEntries := id)
    (waits := true) : IO ChainResult := do
  let (obs, permit) ← elabModule dir src
  let some o0 := obs[0]? | throw <| IO.userError "no commands"
  let permit := CommandEntries.Testing.substitutePayloads permit (·.map tamper)
  let payloads := permit.payloads
  let scopedExts : NameSet := (← scopedEnvExtensionsRef.get).foldl (·.insert ·.ext.name) {}
  let memo : Memo := { path := dir / "entry.bin", hashes := ← IO.mkRef {} }
  let fresh := CommandEntries.Testing.freshRealizationCaches
  let mut st : Command.State := { o0.before with env := ← fresh o0.before.env }
  let mut r : ChainResult := { commands := obs.size }
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload for command {o.i}"
    -- as the frontend does before each command: the stacks' logs then hold this command's operations
    st := { st with env := ← clearScopedOps st.env }
    let chainBefore := st.env
    let infos := newConsts o.before.env o.after.env
    let consts := infos.toList.map (·.1)
    if !ce.refusals.isEmpty then
      st := (← elabOn src st st.env o.stx (asFrontend := true)).1
      r := { r with refused := r.refused.push (o.i, ce.refusals.map toString) }
    else
      try
        st ← applyPost { st with env := ← CommandEntries.Testing.keep permit st.env ce infos {} } o.before o.after
        r := { r with kept := r.kept + 1 }
      catch e =>
        r := { r with threw := r.threw.push o.i, lines := r.lines.push s!"  command {o.i}: keep threw: {e}" }
        -- a failed keep leaves its realizations' failures in the caches it shares
        st := (← elabOn src st (← fresh chainBefore) o.stx (asFrontend := true)).1
    unless waits do continue
    for d in constDiffs "constants" infos (newConsts chainBefore st.env) do
      r := { r with lines := r.lines.push s!"  command {o.i}: {d}" }
    let vf ← observe memo scopedExts o0.before.env o.before.env o.after.env consts
    let vk ← observe memo scopedExts o0.before.env chainBefore st.env consts
    for ((l, a), (_, b)) in vf.zip vk do
      if a != b then r := { r with lines := r.lines.push s!"  command {o.i}: {l}: full {a}, chain {b}" }
    if let some next := obs.find? (·.i == o.i + 1) then
      -- on copies with fresh realization caches: what the next command realizes here must not be cached for its keep;
      -- twice on the full run's, and only what both of those agree on is compared
      let fullEnv ← fresh o.after.env
      let (sFull, mFull) ← elabOn src o.after fullEnv next.stx
      let fullEnv' ← fresh o.after.env
      let (sFull', mFull') ← elabOn src o.after fullEnv' next.stx
      let chainEnv ← fresh st.env
      let (sChain, mChain) ← elabOn src st chainEnv next.stx
      unless mFull != mFull' || mFull == mChain do
        r := { r with lines := r.lines.push s!"  command {o.i}: next command's messages: full {mFull}, chain {mChain}" }
      let cFull := newConsts fullEnv sFull.env
      if (constDiffs "" cFull (newConsts fullEnv' sFull'.env)).isEmpty then
        for d in constDiffs "next command's constants" cFull (newConsts chainEnv sChain.env) do
          r := { r with lines := r.lines.push s!"  command {o.i}: {d}" }
  unless waits do
    if let some last := obs.back? then
      for d in constDiffs "final constants" (newConsts o0.before.env last.after.env) (newConsts o0.before.env st.env) do
        r := { r with lines := r.lines.push s!"  {d}" }
  return r

/-- Keeps every command of `src` in order (`runChain`) and prints how many were kept, each refused command's refusals,
and every difference. -/
unsafe def chain (dir : System.FilePath) (label src : String) (tamper : CommandEntries → CommandEntries := id)
    (waits := true) : IO Unit := do
  let r ← runChain dir src tamper waits
  IO.println s!"{label}: {r.commands} commands, {r.kept} kept, refused {r.refused.map (·.1)}, {r.lines.size} differences"
  for (i, rs) in r.refused do IO.println s!"  command {i} refused: {rs}"
  for l in r.lines do IO.println l

/-- `f` applied to every record, nested ones first. -/
partial def mapRecords (f : AddedConst → AddedConst) : AddedConst → AddedConst
  | .async n k s nested => f (.async n k s (nested.map (mapRecords f)))
  | a => f a

partial def hasRealization : AddedConst → Bool
  | .realization .. => true
  | .async _ _ _ nested => nested.any hasRealization
  | _ => false

/-- Every realization record's states gain an entry for an unknown extension, so that rebuilding any of them throws. -/
def breakRealizations (ce : CommandEntries) : CommandEntries :=
  { ce with added := ce.added.map <| mapRecords fun
    | .realization f k cs s ms => .realization f k cs { s with entries := s.entries.push (`noSuchExtension, #[]) } ms
    | a => a }

/-- `src` kept with every realization record tampered: the commands with such a record, and those whose keep threw. -/
unsafe def tamperedChain (dir : System.FilePath) (label src : String) : IO Unit := do
  let (_, permit) ← elabModule dir src
  let withRecords := permit.payloads.filterMap fun ce => if ce.added.any hasRealization then some ce.idx else none
  let r ← runChain dir src breakRealizations
  IO.println s!"{label} with every realization record tampered: records in commands {withRecords}, \
    keeps threw at {r.threw}"

/-- Command `i`'s docstring entries replaced by another docstring. -/
unsafe def swapDoc (i : Nat) (ce : CommandEntries) : CommandEntries :=
  if ce.idx != i then ce else
  let swap (es : Array (Name × Array EnvExtensionEntry)) := es.map fun (n, xs) =>
    if n == `Lean.docStringExt then
      (n, xs.map fun x => let (d, _) : Name × String := unsafeCast x; unsafeCast (d, "tampered docstring"))
    else (n, xs)
  { ce with main := { ce.main with entries := swap ce.main.entries },
            checked := { ce.checked with entries := swap ce.checked.entries } }

/-- `src` kept with command 0's docstring replaced: whether the docstring extension differs there. -/
unsafe def swappedDocChain (dir : System.FilePath) (label src : String) : IO Unit := do
  let r ← runChain dir src (swapDoc 0)
  IO.println s!"{label} with command 0's docstring replaced: kept {r.kept}, docstrings differ at command 0: \
    {r.lines.any (·.startsWith "  command 0: Lean.docStringExt@")}"

/-- Command `i` of `src` kept with constant `n`'s value replaced by `True.intro`. -/
unsafe def corruptedKeep (dir : System.FilePath) (label src : String) (i : Nat) (n : Name) : IO Unit := do
  let (obs, permit) ← elabModule dir src
  let some o := obs.find? (·.i == i) | throw <| IO.userError s!"{label}: no command {i}"
  let some ce := permit.payloads.find? (·.idx == i) | throw <| IO.userError s!"{label}: no payload {i}"
  let infos := newConsts o.before.env o.after.env
  let some info := infos.find? n | throw <| IO.userError s!"{label}: no {n}"
  let bad : ConstantInfo := match info with
    | .thmInfo v => .thmInfo { v with value := mkConst ``True.intro }
    | .defnInfo v => .defnInfo { v with value := mkConst ``True.intro }
    | info => info
  let r ← try
      discard <| CommandEntries.Testing.keep permit (← CommandEntries.Testing.freshRealizationCaches o.before.env) ce
        (infos.insert n bad) {}
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
  ("inheritDoc", "import Lean\n/-- doc of t -/\ntheorem t : True := trivial\n@[inherit_doc t] def g : Nat := 0\n"),
  ("plainUnchecked", "import X2\nplain_write a\nplain_sync_write b\ntheorem t : True := trivial\n#plain\nadd_unchecked bogus\ntheorem t2 : True := trivial\n#check bogus\n@[ref_tag] def c : Nat := 0\n#plain\n"),
  ("uncheckedOption", "import Lean\nset_option debug.skipKernelTC true in\ntheorem fast : 2 + 2 = 4 := rfl\ntheorem t : True := trivial\n"),
  ("axiomFallback", "import Lean\nopen Lean\n#guard_msgs (drop error) in\n#eval addDecl <| .axiomDecl { name := `ax1, levelParams := [], type := .app (.sort 0) (.sort 0), isUnsafe := false }\n#check ax1\n#guard_msgs (drop error) in\n#eval addDecl <| .opaqueDecl { name := `op1, levelParams := [], type := .const ``Nat [], value := .const ``True [], isUnsafe := false, all := [`op1] }\n#check op1\n#guard_msgs (drop error) in\n#eval addDecl <| .axiomDecl { name := `ax2, levelParams := [`u], type := .sort (.param `v), isUnsafe := false }\n#check ax2\n"),
  ("syncFallback", "import Lean\nopen Lean\nrun_meta do\n  try addDecl <| .inductDecl [] 0 [{ name := `Bad, type := .sort 1, ctors := [{ name := `Bad.mk, type := .forallE `f (.forallE `x (.const `Bad []) (.const ``Nat []) .default) (.const `Bad []) .default }] }] false\n  catch _ => pure ()\n#check Bad\ntheorem after : True := trivial\n"),
  ("elabOnly", "import Lean\nopen Lean\n#eval show CoreM Unit from do\n  let async ← (← getEnv).addConstAsync `ghost .axiom\n  async.commitConst async.asyncEnv\n    (some (.axiomInfo { name := `ghost, levelParams := [], type := mkConst ``True, isUnsafe := false }))\n  async.commitCheckEnv async.asyncEnv\n  setEnv async.mainEnv\n#check ghost\ntheorem after : True := trivial\n"),
  ("droppedCommit", "import Lean\nopen Lean\n#eval show CoreM Unit from do\n  let async ← (← getEnv).addConstAsync `ghost .axiom\n  async.commitConst async.asyncEnv\n    (some (.axiomInfo { name := `ghost, levelParams := [], type := mkConst ``True, isUnsafe := false }))\n  setEnv async.mainEnv\n#check ghost\ntheorem after : True := trivial\n"),
  ("kernelOnly", "import Lean\nopen Lean\n#eval show CoreM Unit from do\n  let res ← (← getEnv).promiseChecked\n  match res.asyncEnv.addDeclCore 0 0 (.axiomDecl { name := `__reserved__Environment_promiseChecked.k, levelParams := [], type := mkConst ``True, isUnsafe := false }) none with\n  | .ok env => res.commitChecked env\n  | .error _ => throwError \"rejected\"\n  setEnv res.mainEnv\ntheorem after : True := trivial\n"),
  ("scopedCore", "import Lean\nopen Lean\ndef x : Nat := 0\nnamespace Foo\ndef y : Nat := 0\nattribute [scoped simp] y\nend Foo\nopen Foo in theorem t3 : y = 0 := by simp\nattribute [local simp] x in theorem t4 : x = 0 := by simp\nopen Foo in attribute [local simp] x\nattribute [local simp] x\ntheorem t6 : x = 0 := by simp\nsyntax \"thm_simp \" ident : command\nmacro_rules\n  | `(thm_simp $n) => return mkNullNode #[← `(theorem $n : x = 0 := rfl), ← `(attribute [simp] $n)]\nthm_simp t7\ntheorem t8 : x + 0 = 0 := by simp\n"),
  ("mainMerge", "def f : Nat → Nat\n  | 0 => 0\n  | n + 1 => f n\ntheorem t1 : f 0 = 0 := by simp [f]\ndef g : f 0 = 0 := by simp [f]\ntheorem t3 : f 2 = 0 := by as_aux_lemma => simp [f]\ntheorem t4 : f 3 = 0 := by simp [f]\n"),
  ("realizationRejected", "import Lean\nopen Lean Meta\ndef base : Nat := 0\n#guard_msgs (drop error) in\nrun_meta do\n  try realizeConst ``base `base.bad do addDecl <| .thmDecl { name := `base.bad, levelParams := [], type := mkConst ``False, value := mkConst ``True.intro }\n  catch _ => pure ()\ntheorem after : True := trivial\n"),
  ("coreHelperAttrs", "import X2\n@[x2_simp] theorem s : True := trivial\n@[x2_label] theorem l : True := trivial\nattribute [x2_simp] Nat.add_zero\ntheorem t : True := trivial\n")
]

def xSource : String := "import Lean\nopen Lean Elab Tactic\ninitialize localLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension {\n  addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .local }\ninitialize syncLog : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension {\n  addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, asyncMode := .sync }\ninitialize cacheLogExt : EnvExtension NameSet ← do\n  let ext ← registerEnvExtension (pure {}) (asyncMode := .local)\n  registerCommandCacheExtension `cacheLog ext (fun before after => (NameSet.sharedDiff before after).1)\n    (fun s n => s.insert n)\ninitialize scopeExt : SimpleScopedEnvExtension Name NameSet ← registerSimpleScopedEnvExtension {\n  addEntry := fun s n => s.insert n, initial := {} }\ninitialize registerBuiltinAttribute {\n  name := `scope_attr, descr := \"t\", add := fun decl _ kind => scopeExt.add decl kind }\ninitialize registerBuiltinAttribute {\n  name := `log_main, descr := \"t\", add := fun _ _ _ => modifyEnv fun env => localLog.addEntry env `mainSide }\nelab \"record_in_branch\" : tactic => do\n  modifyEnv fun env => localLog.addEntry env `fromBranch\n  modifyEnv fun env => syncLog.addEntry env `fromBranch\n  modifyEnv fun env => cacheLogExt.modifyState env fun s => s.insert `fromBranch\nelab \"raw_write_in_branch\" : tactic =>\n  modifyEnv fun env => scopeExt.ext.toEnvExtension.modifyState (asyncMode := .local) env fun ps =>\n    { ps with state := { ps.state with stateStack := ps.state.stateStack.map fun l =>\n      { l with state := l.state.insert `rawSide } } }\nelab \"scoped_modify\" : command => modifyEnv (scopeExt.modifyState · fun s => s.insert `modSide)\nsyntax \"thm_log \" ident : command\nmacro_rules\n  | `(thm_log $n) => return mkNullNode #[← `(theorem $n : True := trivial), ← `(attribute [log_main] $n)]\n"

def branchSource : String := "import X\ndef x : Nat := 0\nnamespace Foo\ndef y : Nat := 0\nattribute [scoped scope_attr] y\nend Foo\ntheorem t : True := by record_in_branch; trivial\nthm_log t2\nopen Foo in theorem t3 : True := by trivial\nattribute [local scope_attr] x in theorem t4 : True := trivial\nopen Foo in attribute [local scope_attr] x\nattribute [local scope_attr] x\ntheorem t5 : True := by raw_write_in_branch; trivial\nscoped_modify\ntheorem t6 : True := trivial\n"

/-- Non-persistent extensions that are no command cache, written by commands; an attribute registered outside core
whose handler writes an `IO.Ref`, and attributes core's helpers register; and a command that adds a theorem without
the kernel checking it. -/
def x2Source : String := "import Lean
open Lean Elab Command
register_simp_attr x2_simp
register_label_attr x2_label
initialize plainExt : EnvExtension NameSet ← registerEnvExtension (pure {}) (asyncMode := .local)
initialize plainSyncExt : EnvExtension NameSet ← registerEnvExtension (pure {}) (asyncMode := .sync)
initialize taggedRef : IO.Ref NameSet ← IO.mkRef {}
initialize registerBuiltinAttribute {
  name := `ref_tag, descr := \"t\", add := fun decl _ _ => taggedRef.modify (·.insert decl) }
elab \"plain_write \" id:ident : command => modifyEnv (plainExt.modifyState · (·.insert id.getId))
elab \"plain_sync_write \" id:ident : command => modifyEnv (plainSyncExt.modifyState · (·.insert id.getId))
elab \"#plain\" : command => do
  logInfo m!\"plain: {(plainExt.getState (← getEnv)).toList}; sync: {(plainSyncExt.getState (← getEnv)).toList}; \\
    tagged: {(← taggedRef.get).toList}\"
elab \"add_unchecked \" id:ident : command => liftTermElabM do
  let decl : Declaration :=
    .thmDecl { name := id.getId, levelParams := [], type := mkConst ``False, value := mkConst ``True.intro }
  match (← getEnv).addDeclCore 0 0 decl none (doCheck := false) with
  | .ok env => setEnv env
  | .error _ => throwError \"rejected\"
"

/-- Commands that install constants through `Environment.replayConsts`: one the kernel rejects there (it keeps the old
kernel environment while the elaborator keeps the constant), and an unsafe one it adds unchecked. -/
def dxSource : String := "import Lean
open Lean Elab Command Meta

/-- adds `id : False` unchecked to a copy, then `Environment.replayConsts` copies it back: the kernel rejects it there,
and the elaborator keeps it -/
elab \"add_via_replay \" id:ident : command => liftTermElabM do
  let env ← getEnv
  let decl : Declaration := .thmDecl { name := id.getId, levelParams := [], type := mkConst ``False, value := mkConst ``True.intro }
  match env.addDeclCore 0 0 decl none (doCheck := false) with
  | .ok env' => setEnv (← env.replayConsts env env')
  | .error _ => throwError \"rejected\"

/-- the same with an unsafe definition whose value has the wrong type: `replayConsts` adds unsafe constants unchecked -/
elab \"add_unsafe_via_replay \" id:ident : command => liftTermElabM do
  let env ← getEnv
  let decl : Declaration :=
    .defnDecl (mkDefinitionValEx id.getId [] (mkConst ``Nat) (mkStrLit \"not a Nat\") .opaque .unsafe [id.getId])
  match env.addDeclCore 0 0 decl none (doCheck := false) with
  | .ok env' => setEnv (← env.replayConsts env env')
  | .error _ => throwError \"rejected\"
"

/-- Realizations requested from theorems' branches and commands: a keep of the command after a refused one may look up
a realization the refused command's asynchronous branch has not made yet. -/
def rxSource : String := "import Lean
open Lean Meta Elab Command Term Tactic

def mkR (n : Name) (v : Expr) : MetaM Unit :=
  addDecl (.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) v .abbrev .safe [n]))

/-- `f.r3 := 3` -/
def r3 (f : Name) : MetaM Unit := realizeConst f (f ++ `r3) (mkR (f ++ `r3) (mkNatLit 3))
/-- requests `r3`, then `f.r2 := f.r3` -/
def r2 (f : Name) : MetaM Unit := realizeConst f (f ++ `r2) do r3 f; mkR (f ++ `r2) (mkConst (f ++ `r3))
/-- requests `r2` (which requests `r3`) and `r3` again, then `f.r1 := f.r2` -/
def r1 (f : Name) : MetaM Unit := realizeConst f (f ++ `r1) do r2 f; r3 f; mkR (f ++ `r1) (mkConst (f ++ `r2))
/-- requests `r1`, then `f.r0 := f.r1` -/
def r0 (f : Name) : MetaM Unit := realizeConst f (f ++ `r0) do r1 f; mkR (f ++ `r0) (mkConst (f ++ `r1))
/-- in `f`'s context, requests `r2` for `g` -/
def q1 (f g : Name) : MetaM Unit := realizeConst f (f ++ `q1) do r2 g; mkR (f ++ `q1) (mkConst (g ++ `r2))

def byKey (k f : Name) : MetaM Unit :=
  match k with
  | `r0 => r0 f | `r1 => r1 f | `r2 => r2 f | `r3 => r3 f | _ => throwError \"unknown key {k}\"

elab \"#real \" k:ident f:ident : command => liftTermElabM do
  byKey k.getId (← realizeGlobalConstNoOverload f)
elab \"real_tac \" k:ident f:ident : tactic => do
  byKey k.getId (← realizeGlobalConstNoOverload f)
elab \"#q1 \" f:ident g:ident : command => liftTermElabM do
  q1 (← realizeGlobalConstNoOverload f) (← realizeGlobalConstNoOverload g)
elab \"q1_tac \" f:ident g:ident : tactic => do
  q1 (← realizeGlobalConstNoOverload f) (← realizeGlobalConstNoOverload g)

initialize rSync : EnvExtension NameSet ← registerEnvExtension (pure {}) (asyncMode := .sync)
/-- a write to a non-persistent extension: the command is refused (`unrecorded`) -/
elab \"refuse_tac\" : tactic => modifyEnv fun env => rSync.modifyState env (·.insert `x)
elab \"sleep_tac \" n:num : tactic => IO.sleep n.getNat.toUInt32
"

/-- Command 4 fits its heartbeats only through the persistent tier of the type class resolution cache command 3 filled. -/
def synthTierSource : String := "class D (n : Nat) where\n  x : Nat := n\ninstance d0 : D 0 := {}\n\
  instance ds {n : Nat} [D n] : D (n+1) := {}\ndef a : Nat := (inferInstance : D 40).x\n\
  set_option synthInstance.maxHeartbeats 1 in\ndef b : Nat := (inferInstance : D 40).x\n"

/-- Command `i`'s additions to the persistent tier dropped. -/
def dropTierEntries (i : Nat) (ce : CommandEntries) : CommandEntries :=
  if ce.idx != i then ce else { ce with counters := { ce.counters with synthTierSet := #[] } }

/-- NC2: command `i`'s scoped stack operations dropped. -/
def dropScoped (i : Nat) (ce : CommandEntries) : CommandEntries :=
  if ce.idx != i then ce else { ce with main := { ce.main with scopedOps := #[] } }

/-- NC3: command `i` also adds a linter set (`Lean.Linter.linterSetsExt`, an extension without a state delta). -/
unsafe def addLinterSet (i : Nat) (ce : CommandEntries) : CommandEntries :=
  if ce.idx != i then ce else
  let e : EnvExtensionEntry := unsafeCast ((`tamperedSet, ({} : NameSet).insert `linter.unusedVariables) : Name × NameSet)
  { ce with main := { ce.main with entries := ce.main.entries.push (`Lean.Linter.linterSetsExt, #[e]) } }

/-- `src` kept with `tamper`: whether the chain differs from the full run, and where first. -/
unsafe def tamperedDiffers (dir : System.FilePath) (label src : String) (tamper : CommandEntries → CommandEntries) :
    IO Unit := do
  let r ← runChain dir src tamper
  IO.println s!"{label}: differs {!r.lines.isEmpty}{(r.lines[0]?.map (s!", first at {·.trimAscii.takeWhile (· != ':')}")).getD ""}"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  IO.FS.writeFile (dir / "X2.lean") x2Source
  runLean dir #["-o", "X2.olean", "--usage=X2.usage", "X2.lean"]
  IO.FS.writeFile (dir / "DX.lean") dxSource
  runLean dir #["-o", "DX.olean", "--usage=DX.usage", "DX.lean"]
  IO.FS.writeFile (dir / "RX.lean") rxSource
  runLean dir #["-o", "RX.olean", "--usage=RX.usage", "RX.lean"]
  initSearchPath (← getBuildDir) [dir]
  for (label, src) in modules do
    chain dir label src
  chain dir "branchStates" branchSource
  chain dir "synthTier" synthTierSource
  chain dir "replayRejected" "import DX\nadd_via_replay bogus\ntheorem t : True := trivial\n"
  chain dir "replayUnsafe" "import DX\nadd_unsafe_via_replay bad\ntheorem t : True := trivial\n"
  -- the refused theorem's branch realizes `f.r1` only after its sleep: the next command's keep must wait for it
  chain dir "R1 without waits" "import RX\ndef f : Nat := 0\ntheorem a : True := by refuse_tac; sleep_tac 3000; real_tac r1 f; trivial\n#real r1 f\ntheorem t : f.r1 = 3 := rfl\n" (waits := false)
  -- test files of the suite: realizations merged from the cache on the main branch, many keeps after them; a
  -- realization that merged another one it requested, merged again inside a third
  chain dir "doLogicTests" (← IO.FS.readFile "doLogicTests.lean")
  chain dir "issue11211" (← IO.FS.readFile "issue11211.lean")
  for label in ["chain", "secondRealizer", "R7"] do
    tamperedChain dir label (modules.lookup label).get!
  swappedDocChain dir "doc" "/-- doc of a -/\ndef a : Nat := 1\ntheorem t : True := trivial\n"
  -- negative controls of the state comparison: a scoped level's local entry lost, an entry forged into an extension
  -- without a state delta
  tamperedDiffers dir "localSimp with command 1's scoped operations dropped"
    "def x : Nat := 0\nattribute [local simp] x\ntheorem u : True := trivial\n" (dropScoped 1)
  tamperedDiffers dir "plain with a linter set forged into command 0"
    "theorem a : True := trivial\ntheorem b : True := trivial\n" (addLinterSet 0)
  tamperedDiffers dir "synthTier with command 3's tier entries dropped" synthTierSource (dropTierEntries 3)
  corruptedKeep dir "corrupted theorem" "theorem a : 1 = 1 := rfl\ndef b : Nat := 1\n" 0 `a
  corruptedKeep dir "corrupted definition" "theorem a : 1 = 1 := rfl\ndef b : Nat := 1\n" 1 `b

#eval main
