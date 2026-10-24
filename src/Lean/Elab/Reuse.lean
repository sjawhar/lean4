/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.Util.ModuleUsage.Reuse
public import Lean.Parser.Module

public section

/-!
A reuse run (`lean --reuse-olean=F --reuse-usage=F`): the frontend takes a keep permit for the module's previous `.olean`
and `.usage` once its header is processed (`Request.start`), then decides for each command in order whether to keep it
from its previous payload or to elaborate it (`Request.decide`), keeps it (`Request.keep`), and at the end hands what it
kept to the module's records (`Request.finish`).

The rule, in terms of the previous build's records: command `i` is kept iff the previous build has a record and a
payload for command `i`, the record is of a declaration command that is no `initialize`, the payload has no refusal,
the command's text digest (`textDigest`) and span (`CommandSpan`: the same source at the same position) are the record's,
no module of its extra uses has another `.olean` than when it was compiled (`Inputs.changedExtra`), every constant it
used has the digests it recorded (for an import's, `ModuleUsage.importedUseDigests`; for one of this module's, which the
record holds as the module's final digests, that the constant and what it depends on are as in the previous build, see
`Progress.fullDirty`), and its context (`ctxDigest`, `contextUnchanged`) is its record's. The context hashes the
payloads of every command before it, so a command is kept only after commands with the previous build's payloads in
order: the candidate for command `i` is always the previous build's command `i`.
-/

namespace Lean.Elab.Reuse
open ModuleUsage

/-- What a run is asked to reuse (`lean --reuse-olean`, `--reuse-usage`, `--reuse-ilean`, `--reuse-declined`,
`--reuse-changed-extra`). -/
structure Inputs where
  /-- The module's previous `.olean` and `.usage`, or why none are reused (`--reuse-declined`). -/
  previous : Except String (System.FilePath × System.FilePath)
  /-- The module's previous `.ilean`, whose references of kept commands the new one holds. -/
  ilean? : Option System.FilePath := none
  /-- The workspace modules whose `.olean` differs from the one the previous build's `.usekey` records for them: a
  command with one of them among its extra uses is elaborated. -/
  changedExtra : NameSet := {}

/-- What the previous build's `.usage` gives a reuse run besides its records. -/
structure Previous where
  permit : KeepPermit
  /-- The previous build's records, by command index. -/
  records : Array CommandRecord
  /-- The previous build's payloads, by command index. -/
  payloads : Std.HashMap Nat CommandEntries
  /-- The previous build's constants. -/
  consts : NameMap ConstantInfo
  /-- The command of the previous build that added each constant of the module. -/
  ownerCmd : NameMap Nat
  /-- Per imported constant of the previous `.usage`'s `used`: each module with its digest there. -/
  used : NameMap (Array (Name × Digest))
  /-- The names of `used` that no record lists among its uses. -/
  usedUnattributed : Array Name
  /-- Every name of the previous `.usage`'s `resolved`. -/
  resolved : Array Name
  resolvedAll : Bool
  /-- The specialization-cache keys of the previous `.usage`'s `specLookups`. -/
  specKeys : Array Digest
  /-- The previous `.usage`'s `allExtra`. -/
  allExtra : Bool

/-- A keep `Request.decide` allows. -/
structure Plan where
  i : Nat
  stx : Syntax
  span : CommandSpan
  record : CommandRecord
  payload : CommandEntries
  ctx : Digest

/-- What a reuse run has done so far, in command order. -/
structure Progress where
  chain : CtxChain := {}
  /-- Whether every command so far has the previous build's payload, in order. A command's context hashes the payloads
  before it, so none after a command with another payload is kept. -/
  intact : Bool := true
  /-- The elaborated commands whose payloads `chain` does not cover yet, in order, with their states. -/
  pending : Array (Nat × Syntax × Elab.Command.State × Elab.Command.State) := #[]
  /-- Per command so far: whether a constant it added may have another full digest than in the previous build. An
  elaborated command's may. A kept command's constants are the previous ones, and their full digests differ only if one
  they depend on changed its own: the command compared the full digests of its full uses (`usesFull`) when it was
  kept, so only a statement use (`usesStmt`) can, an import's whose full digest is not the previous `.usage`'s, or one
  of this module's whose command's may. -/
  fullDirty : Std.HashMap Nat Bool := {}
  /-- Per constant of an elaborated command: whether its statement digest may differ from the previous build's. -/
  stmtDirty : NameMap Bool := {}
  /-- The previous payloads' digests, as computed. -/
  oldDigests : Std.HashMap Nat Digest := {}
  kept : Array KeptCommand := #[]
  keptIdxs : Std.HashSet Nat := {}
  /-- Each command elaborated with a record to keep it from, and why. -/
  reasons : Array (Nat × String) := #[]
  /-- The commands seen, the terminal one excluded. -/
  total : Nat := 0
  /-- The runtime's effect notes taken while the run went on (`takeRecordedEffects`). -/
  effects : RecordedEffects := {}

inductive Status where
  | declined (reason : String)
  | active (prev : Previous) (progress : IO.Ref Progress)

/-- A reuse run's state, shared by the frontend's command loop and the end of `runFrontend`. -/
structure Request where
  inputs : Inputs
  /-- The toolchain's library directory, read before recording started (`keepPermit`'s `lib?`). -/
  lib? : Option String
  status : IO.Ref Status

/-- The request for `inputs`; declined until `start` takes a permit. -/
def Request.new (inputs : Inputs) (lib? : Option String) : BaseIO Request := do
  let reason := match inputs.previous with
    | .error reason => reason
    | .ok _ => "the header was not processed"
  -- accounted (`mkAccountedRef`): the commands write them, and no command's result depends on them
  return { inputs, lib?, status := ← mkAccountedRef (.declined reason) }

private partial def addedNames : AddedConst → Array Name
  | .plain n => #[n]
  | .async n _ _ nested => #[n] ++ nested.flatMap addedNames
  | .realization _ _ cs _ _ => cs
  | .merged .. => #[]
  | .context .. => #[]

/-- The constants a payload re-adds, in order. -/
def addedConstants (ce : CommandEntries) : Array Name :=
  ce.added.flatMap addedNames

private def readPrevious (env : Environment) (olean usage : System.FilePath) (lib? : Option String) :
    IO (Except String Previous) := do
  let j ← match parseUsage (← IO.FS.readFile usage) with
    | .ok j => pure j
    | .error e => return .error s!"the previous `.usage` cannot be read: {e}"
  let permit ← match ← keepPermit env env.mainModule olean usage lib? with
    | .ok permit => pure permit
    | .error reason => return .error reason
  -- a kept command has no snapshot whose code quality entries the end of the run would add, and the entries do not
  -- say which command logged them
  if permit.data.entries.any fun (n, es) => n == `Lean.Linter.codeQualityLogExt && !es.isEmpty then
    return .error "the previous build logged code quality entries"
  let parse : Except String Previous := do
    let records ← j.getObjValAs? (Array CommandRecord) "commands"
    unless records.zipIdx.all fun (r, i) => r.i == i do
      throw "the previous `.usage`'s records are not in command order"
    let payloads : Std.HashMap Nat CommandEntries := permit.payloads.foldl (fun m ce => m.insert ce.idx ce) {}
    let md := permit.data
    let consts : NameMap ConstantInfo := (md.constNames.zip md.constants).foldl (fun m (n, c) => m.insert n c) {}
    let ownerCmd : NameMap Nat := permit.payloads.foldl (init := {}) fun m ce =>
      (addedConstants ce).foldl (fun m n => if m.contains n then m else m.insert n ce.idx) m
    let usedJ ← j.getObjValAs? (Array (JName × Array (JName × Digest))) "used"
    let used : NameMap (Array (Name × Digest)) := usedJ.foldl (init := {}) fun m (mod, cs) =>
      cs.foldl (fun m (c, d) => m.insert c.name ((m.getD c.name #[]).push (mod.name, d))) m
    let recorded : NameSet := records.foldl (init := {}) fun s r =>
      r.usesFull.foldl (·.insert ·.1) (r.usesStmt.foldl (·.insert ·.1) s)
    let usedUnattributed := used.foldl (init := #[]) fun out n _ => if recorded.contains n then out else out.push n
    let resolved := (← resolvedOfJson (← j.getObjVal? "resolved")).flatMap fun (_, ns) => ns.map (·.1)
    return {
      permit, records, payloads, consts, ownerCmd, used, usedUnattributed, resolved
      resolvedAll := ← j.getObjValAs? Bool "resolvedAll"
      specKeys := (← j.getObjValAs? (Array (Digest × Digest)) "specLookups").map (·.1)
      allExtra := ← j.getObjValAs? Bool "allExtra" }
  let prev ← match parse with
    | .ok prev => pure prev
    | .error e => return .error s!"the previous `.usage` cannot be read: {e}"
  -- a use no record lists (a name compiled code or the interpreter resolved, `recordUsedName`) may be any command's
  let s := state env
  if let some n := prev.usedUnattributed.find? fun n =>
      (prev.used.getD n #[]).any fun (m, d) => ((env.getModuleIdx? m).bind (s.findAt? · n)) != some d then
    return .error s!"`{n}`, which the module used and no command record lists, changed"
  return .ok prev

/-- Takes a keep permit for the module of `env`, the environment after its header, from its previous `.olean` and
`.usage` (`keepPermit`); without one, every command is elaborated and the module's `.usage` says why. -/
def Request.start (req : Request) (env : Environment) : IO Unit := do
  let .ok (olean, usage) := req.inputs.previous | return
  let status ← try
      if env.header.isModule then pure (.declined "module-system") else
      match ← readPrevious env olean usage req.lib? with
      | .ok prev => pure (.active prev (← mkAccountedRef {}))
      | .error reason => pure (.declined reason)
    catch e => pure (.declined s!"the previous outputs cannot be read: {e}")
  req.status.set status

/-- Whether the context `ctx` of a command is the one its previous record `r` was elaborated in: the single place a
reuse run compares contexts. -/
def contextMatches (r : CommandRecord) (ctx : Digest) : Bool :=
  r.ctx == ctx

private def previousDigest (prev : Previous) (i : Nat) : StateT Progress IO (Option Digest) := do
  if let some d := (← get).oldDigests[i]? then return some d
  let some ce := prev.payloads[i]? | return none
  let some d := (objectsDigests #[ce])[0]?.join | return none
  modify fun p => { p with oldDigests := p.oldDigests.insert i d }
  return some d

/-- Extends the chain over the pending elaborated commands, each with its payload computed now (`commandPayload`, after
its kernel checks), while each payload is the previous build's. -/
private def catchUp (prev : Previous) : StateT Progress IO Unit := do
  let pending := (← get).pending
  modify ({ · with pending := #[] })
  for (j, stx, before, after) in pending do
    unless (← get).intact do return
    discard <| IO.wait after.env.checked
    let taken ← takeRecordedEffects
    modify fun p => { p with effects := p.effects ++ taken }
    let (ce, d) ← commandPayload j before after (← get).effects
    let (ctx, chain) := (← get).chain.ctx before
    let text := textDigest stx
    let same ← match prev.records[j]?, ← previousDigest prev j with
      | some r, some old => pure (old == d && (ce.refusals.isEmpty || (r.text == text && contextMatches r ctx)))
      | _, _ => pure false
    modify fun p => { p with chain := chain.push ce d text ctx, intact := same }

/-- Whether command `i`'s context, the command starting from `st`, is its previous record's (`contextMatches`), with
the context it has. -/
private def contextUnchanged (prev : Previous) (st : Elab.Command.State) (r : CommandRecord) :
    StateT Progress IO (Bool × Digest) := do
  catchUp prev
  let (ctx, chain) := (← get).chain.ctx st
  modify ({ · with chain })
  return ((← get).intact && contextMatches r ctx, ctx)

/-- Whether the full digest of `n`, an imported constant the previous `.usage` lists in `used`, may differ from the
digests listed there. -/
private def importedFullChanged (prev : Previous) (env : Environment) (n : Name) : Bool :=
  let s := state env
  match prev.used.find? n with
  | none => true
  | some ds => ds.any fun (m, d) => ((env.getModuleIdx? m).bind (s.findAt? · n)) != some d

/-- Whether `n`, a constant the previous build's command added, may have another full digest (`Progress.fullDirty`). -/
private def ownFullDirty (prev : Previous) (p : Progress) (n : Name) : Bool :=
  match prev.ownerCmd.find? n with
  | some k => p.fullDirty[k]?.getD true
  | none => true

/-- Whether `n`, a constant of this module, may have another statement digest than in the previous build: its command
was elaborated and its type, or the meaning of a constant in it, may differ. A kept command's constants have their
statements: the command compared every use their types have when it was kept. -/
private partial def ownStmtDirty (prev : Previous) (env : Environment) (n : Name) : StateT Progress Id Bool := do
  let some k := prev.ownerCmd.find? n | return true
  if (← get).keptIdxs.contains k then return false
  if let some b := (← get).stmtDirty.find? n then return b
  -- no cycle through `n` itself: a constant's type mentions constants added before it
  modify fun p => { p with stmtDirty := p.stmtDirty.insert n true }
  let dirty ← compute k
  modify fun p => { p with stmtDirty := p.stmtDirty.insert n dirty }
  return dirty
where
  compute (k : Nat) : StateT Progress Id Bool := do
    let some ci := env.find? n | return true
    let some old := prev.consts.find? n | return true
    if ci.levelParams != old.levelParams || !ci.type.equal old.type then return true
    let some r := prev.records[k]? | return true
    let s := state env
    for c in ci.type.getUsedConstants do
      if prev.ownerCmd.contains c then
        if (env.find? c).any isStmtOnly then
          if ← ownStmtDirty prev env c then return true
        else if ownFullDirty prev (← get) c then return true
      else
        let some m := env.getModuleIdxFor? c | return true
        let changed := match importedUseDigests env s m k c, r.usesStmt.find? (·.1 == c),
            r.usesFull.find? (·.1 == c) with
          | .ok (.digests _ core _), some (_, d), _ => core != d
          | .ok (.digests full _ _), none, some (_, d, _) => full != d
          | .ok .untracked, none, none => false
          | _, _, _ => true
        if changed then return true
    return false

/-- Why command `i`'s record `r` does not allow keeping it in `env` for what it used, if it does not. -/
private def usesChanged (prev : Previous) (env : Environment) (r : CommandRecord) : StateT Progress Id (Option String) := do
  let s := state env
  for (n, d, a) in r.usesFull do
    if prev.ownerCmd.contains n then
      if !env.contains n then return some "vanished"
      if ownFullDirty prev (← get) n then return some "full"
    else if !env.contains n then
      -- a compiler-only node the command's compiled code mentions
      if s.digestOf env n != some d then return some "full"
    else
      let some m := env.getModuleIdxFor? n | return some "vanished"
      match importedUseDigests env s m r.i n with
      | .ok (.digests full _ attrs) =>
        if full != d then return some "full"
        if attrs != a then return some "attrs"
      | _ => return some "full"
  for (n, d) in r.usesStmt do
    let some ci := env.find? n | return some "vanished"
    if !isStmtOnly ci then return some "kind"
    if prev.ownerCmd.contains n then
      if ← ownStmtDirty prev env n then return some "stmt"
    else
      let some m := env.getModuleIdxFor? n | return some "vanished"
      match importedUseDigests env s m r.i n with
      | .ok (.digests _ core _) => if core != d then return some "stmt"
      | _ => return some "stmt"
  return none

/-- Why command `i`, `stx` at `span` starting from `st`, is elaborated instead of kept from `r` and its payload `ce`. -/
private def decideWith (inputs : Inputs) (prev : Previous) (i : Nat) (stx : Syntax) (span : CommandSpan)
    (st : Elab.Command.State) (r : CommandRecord) (ce : CommandEntries) : StateT Progress IO (Except String Plan) := do
  if !r.isDecl then return .error "nonconst"
  if r.isInit then return .error "initialize"
  unless ce.refusals.isEmpty do return .error "refused"
  unless r.text == textDigest stx do return .error "text"
  unless r.span == span do return .error "position"
  if r.extra.any (inputs.changedExtra.contains ·.1) then return .error "extra"
  let (changed?, p) := (usesChanged prev st.env r).run (← get)
  set p
  if let some reason := changed? then return .error reason
  -- last: the context waits for the payloads of the commands elaborated before
  let (same, ctx) ← fun p => profileitIO "reuse context check" st.scopes.head!.opts ((contextUnchanged prev st r).run p)
  unless same do return .error "ctx"
  return .ok { i, stx, span, record := r, payload := ce, ctx }

/-- Decides whether command `i`, `stx` at `span`, is kept from the previous build, the command starting from `st`:
the plan to keep it, or `none` to elaborate it (then `Request.elaborated`). -/
def Request.decide (req : Request) (i : Nat) (stx : Syntax) (span : CommandSpan) (st : Elab.Command.State) :
    IO (Option Plan) := do
  let .active prev progress ← req.status.get | return none
  if Parser.isTerminalCommand stx then return none
  let (out, p) ← (do
      modify fun p => { p with total := p.total + 1 }
      let some r := prev.records[i]? | return .error "new"
      let some ce := prev.payloads[i]? | return .error "new"
      decideWith req.inputs prev i stx span st r ce : StateT Progress IO (Except String Plan)).run (← progress.get)
  match out with
  | .ok plan => progress.set p; return some plan
  | .error reason => progress.set { p with reasons := p.reasons.push (i, reason) }; return none

/-- Notes that command `i`, `stx`, was elaborated from `before` to `after`. -/
def Request.elaborated (req : Request) (i : Nat) (stx : Syntax) (before after : Elab.Command.State) : BaseIO Unit := do
  let .active _ progress ← req.status.get | return
  if Parser.isTerminalCommand stx then return
  progress.modify fun p => { p with
    pending := if p.intact then p.pending.push (i, stx, before, after) else p.pending
    fullDirty := p.fullDirty.insert i true }

/-- Keeps the command `plan` allows, the command starting from `st`: re-adds and replays its previous payload
(`readdCommandConstants`, `replayCommandEntries`) and restores the command state its record's `post` gives. The state
has no messages and one info tree, for the command alone. Fails on a payload or record that does not fit the
environment: the module's previous outputs are inconsistent. -/
def Request.keep (req : Request) (plan : Plan) (st : Elab.Command.State) (fileMap : FileMap) :
    IO Elab.Command.State := do
  let .active prev progress ← req.status.get | throw <| IO.userError "reuse: keep without a permit"
  let permit := prev.permit
  let r := plan.record
  let ce := plan.payload
  let opts := st.scopes.head!.opts
  let infos ← (addedConstants ce).foldlM (init := ({} : NameMap ConstantInfo)) fun m n => do
    let some c := prev.consts.find? n |
      throw <| IO.userError s!"reuse: command {plan.i}'s record names the constant {n}, which the previous `.olean` lacks"
    return m.insert n c
  let limits : ReaddLimits :=
    { maxHeartbeats := (Core.getMaxHeartbeats opts).toUSize, maxRecDepth := (maxRecDepth.get opts).toUSize }
  -- as before an elaboration (`Language.Lean.process`): the stacks' logs then hold this command's operations
  let st := { st with env := ← clearScopedOps st.env }
  let env ← profileitIO "reuse kernel replay" opts do
    let (env, publish) ← readdCommandConstants permit st.env ce infos opts limits
    let env ← replayCommandEntries permit env ce opts
    publish
    return env
  let ngen ← IO.ofExcept (r.post.restoreNgen st.ngen |>.mapError (s!"reuse: command {plan.i}: {·}"))
  let g := r.post.auxDeclNGen
  let tree := InfoTree.context (.commandCtx { env, fileMap, ngen })
    (.node (.ofCommandInfo { elaborator := `Lean.Elab.Reuse.kept, stx := plan.stx }) PersistentArray.empty)
  let after : Elab.Command.State := { st with
    env, ngen, messages := .empty, traceState := {}, snapshotTasks := #[], codeQualityEntryTasks := #[]
    auxDeclNGen := .ofRecord { namePrefix := g.namePrefix, idx := g.idx, parentIdxs := g.parentIdxs }
    usedQuotCtxts := r.post.quotCtxts.foldl (·.insert ·) st.usedQuotCtxts
    maxRecDepth := r.post.maxRecDepth
    infoState := { st.infoState with trees := PersistentArray.empty.push tree } }
  let p ← progress.get
  let (some digest, p) ← (previousDigest prev plan.i).run p |
    throw <| IO.userError s!"reuse: command {plan.i}'s previous payload has no digest"
  let dirty := r.usesStmt.any fun (n, _) =>
    if prev.ownerCmd.contains n then ownFullDirty prev p n else importedFullChanged prev env n
  progress.set { p with
    chain := p.chain.push ce digest r.text plan.ctx
    fullDirty := p.fullDirty.insert plan.i dirty
    keptIdxs := p.keptIdxs.insert plan.i
    kept := p.kept.push { i := plan.i, stx := plan.stx, span := plan.span, before := st, after, record := r,
                          payload := ce, digest } }
  return after

/-- What a reuse run leaves for the module's outputs. -/
structure Outcome where
  /-- The `.usage` `reuse` field: `{kept, total, reElab, elabReasons}`, or `{declined}`. -/
  field : Json
  kept : Array KeptCommand := #[]
  /-- The runtime's effect notes the run took (`takeRecordedEffects`). -/
  effects : RecordedEffects := {}
  /-- The previous `.usage`'s observations for the kept commands (`ModuleUsage.Carried`). -/
  carried : Carried := {}
  /-- The names the previous `.usage` lists in `used` that no record lists among its uses, for the kept commands. -/
  usedUnattributed : Array Name := #[]
  /-- The previous `.olean`'s data, when a command was kept. -/
  previous? : Option ModuleData := none

/-- The run's outcome, once every command is processed. -/
def Request.finish (req : Request) : IO Outcome := do
  match ← req.status.get with
  | .declined reason => return { field := Json.mkObj [("declined", reason)] }
  | .active prev progress =>
    let p ← progress.get
    let counts := p.reasons.foldl (init := ({} : Std.HashMap String Nat)) fun m (_, r) => m.insert r (m.getD r 0 + 1)
    let field := Json.mkObj [("kept", p.kept.size), ("total", p.total),
      ("reElab", toJson (p.reasons.map (·.1))),
      ("elabReasons", Json.mkObj (counts.toList.map fun (r, n) => (r, toJson n)))]
    if p.kept.isEmpty then return { field, effects := p.effects }
    let carried : Carried :=
      { extra := p.kept.flatMap (·.record.extra), resolved := prev.resolved, resolvedAll := prev.resolvedAll
        specKeys := prev.specKeys, allExtra := prev.allExtra }
    return { field, kept := p.kept, effects := p.effects, carried, usedUnattributed := prev.usedUnattributed
             previous? := some prev.permit.data }

end Lean.Elab.Reuse
