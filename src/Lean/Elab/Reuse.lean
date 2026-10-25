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
A reuse run (`lean --reuse-olean=F --reuse-usage=F`): the frontend reads the module's previous `.olean` and `.usage`
while its header is processed (`Request.new`), takes a keep permit for them once the header is processed
(`Request.start`), then decides for each command in order whether to keep it from its previous payload or to elaborate
it (`Request.decide`), keeps it (`Request.keep`), and at the end hands what it kept to the module's records
(`Request.finish`).

The rule, in terms of the previous build's records: no command is kept when the run's import context read a value
tied to the run, had an effect or still runs a task (`Request.start`). Otherwise command `i` is kept iff the previous
build has a record and a payload for command `i`, the record is of a declaration command that is no `initialize`, the
payload has no refusal, the command read no value tied to this process or this moment
(`CommandRecord.nondeterministic`), every extension the payload has entries for takes them without a conversion
(`CommandEntries.firstUnadmittedConversion`), the payload rebuilds what each realization the command made reported, as
the full run made it and for the run's file (`CommandEntries.firstUnrebuildableRealization?`: a later request of it
reports that again), the command's text digest (`textDigest`) and span (`CommandSpan`: the same source at the same
position) are the record's, no module of its extra uses has another `.olean` than when it was compiled
(`Inputs.changedExtra`), its messages can be shown again as they were (`CommandRecord.messages?`), no stateful
linter's state changed in it, the file name and the source it read beyond its own are unchanged
(`CommandRecord.fileContext`), every constant it used has the digests it recorded (for an import's,
`ModuleUsage.importedUseDigests`; for one of this module's, which the record holds as the module's final digests, that
the constant and what it depends on are as in the previous build, see `Progress.fullDirty`), the environment variables
and working directory it read are unchanged where it starts, and its context (`ctxDigest`, `contextChanged?`) is its
record's. The context hashes the payloads of every command before it, so a command is kept only after commands with the
previous build's payloads in order: the candidate for command `i` is always the previous build's command `i`. An
elaborated command keeps the chain only once its work has settled, which the run checks without waiting on it
(`settledWithin`: code may wait for a later command), when no stateful linter's state changed in it, and when a later
command can observe what its payload does not hold only through what it compares where it is kept
(`refusalsEndKeeps?`): a keep never relies on what may change later. A keep runs no extension code but pure functions;
its replay failing after the record was checked stops the process, which has then written nothing
(`ModuleUsage.reuseReplayFailedExitCode`), and Lake compiles the module again without reuse.

Inputs a run does not record, so that it cannot see them change: the heartbeat counter, which core reads in every
command to enforce its limits; the file name and source read other than through `getFileName` and `getFileMap`, which
core does not do and code outside core is required not to do; the random generator state `IO.stdGenRef` used in an
imported module's initializer other than through the functions that note the use (`IO.noteRandomGeneratorUse`), which
core does not do and code outside core is required not to do; pointer addresses (`ptrAddrUnsafe`); and what a pure
function computes besides its result, which is nothing, as the compiler also assumes.
-/

namespace Lean.Elab.Reuse
open ModuleUsage

/-- What a run is asked to reuse (`lean --reuse-olean`, `--reuse-usage`, `--reuse-declined`, `--reuse-changed-extra`,
`--reuse-retry-marker`, `--reuse-retry-token`). -/
structure Inputs where
  /-- The module's previous `.olean` and `.usage`, or why none are reused (`--reuse-declined`). -/
  previous : Except String (System.FilePath × System.FilePath)
  /-- The workspace modules whose `.olean` differs from the one the previous build's `.usekey` records for them: a
  command with one of them among its extra uses is elaborated. -/
  changedExtra : NameSet := {}
  /-- A file and a token: a run that stops because a keep's replay failed (`ModuleUsage.reuseReplayFailedExitCode`)
  first writes the token to the file, which tells the caller (Lake) that the exit asks for a compile without reuse and
  that no other code of the run exited with that code. -/
  retryMarker? : Option (System.FilePath × String) := none

/-- What the previous build's `.usage` gives a reuse run besides its permit's checks, read without an environment. -/
structure PreviousUsage where
  /-- The previous build's records, by command index. -/
  records : Array CommandRecord
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
  /-- The digest of each process value of the previous `.usage`'s `values`. -/
  valueDigests : Std.HashMap String (Option Digest)

/-- What the previous build gives a reuse run. -/
structure Previous extends PreviousUsage where
  permit : KeepPermit
  /-- The previous build's payloads, by command index. -/
  payloads : Std.HashMap Nat CommandEntries
  /-- The previous build's constants. -/
  consts : NameMap ConstantInfo
  /-- The command of the previous build that added each constant of the module. -/
  ownerCmd : NameMap Nat

/-- A keep `Request.decide` allows. -/
structure Plan where
  i : Nat
  stx : Syntax
  span : CommandSpan
  record : CommandRecord
  payload : CommandEntries
  ctx : Digest

/-- An elaborated command whose payload the context chain does not cover yet (`Request.elaborated`). -/
structure Pending where
  i : Nat
  stx : Syntax
  span : CommandSpan
  before : Elab.Command.State
  after : Elab.Command.State
  /-- The command's info trees with their lazy parts substituted (`InfoState.substituteLazy`). -/
  info : Task Elab.InfoState

/-- What a reuse run has done so far, in command order. -/
structure Progress where
  chain : CtxChain := {}
  /-- Whether every command so far has the previous build's payload, in order, final, and refusals no later command
  can observe otherwise than through what it compares (`refusalsEndKeeps?`). A command's context hashes the payloads
  before it, so none after a command with another payload is kept. -/
  intact : Bool := true
  /-- Why the chain broke, once `intact` is false: the reason of every later command with a record. -/
  breakReason : String := "ctx"
  /-- The elaborated commands whose payloads `chain` does not cover yet, in order. -/
  pending : Array Pending := #[]
  /-- Per command so far: whether a constant it added may have another full digest than in the previous build. A
  kept command's constants are the previous ones, and so are those of an elaborated command with the previous payload
  whose constants are equal to them (`catchUp`); their full digests differ only if one they depend on changed its own:
  a kept command compared the full digests of its full uses (`usesFull`) when it was kept, so only a statement use
  (`usesStmt`) can, an import's whose full digest is not the previous `.usage`'s, or one of this module's whose
  command's may. Any other elaborated command's may. -/
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
  /-- The payloads of elaborated commands computed while the run went on, with their refusals beside the recorder's
  (`commandPayload`). -/
  computed : Std.HashMap Nat (Array Refusal × CommandEntries × Digest) := {}
  /-- How many elaborated commands with effects outside them kept the chain (`refusalsEndKeeps?`), and how many
  commands were kept after the first of them: the keeps those effects did not end (the `reuse` field's
  `effectsAccepted` and `keptAfterEffects`). -/
  effectsAccepted : Nat := 0
  keptAfterEffects : Nat := 0

inductive Status where
  /-- No command is kept, for `reason`; `effects` are the runtime's notes the run took before it declined
  (`Request.start`), which the module's records still need. -/
  | declined (reason : String) (effects : RecordedEffects := {})
  | active (prev : Previous) (progress : IO.Ref Progress)

/-- What a reuse run reads of the module's previous `.olean` and `.usage` while its header is processed
(`Request.new`): the files of its keep permit (`readPermitFiles`), why the `.usage` is no JSON object if it is not
(`parseUsage`), and what the `.usage` gives besides the permit's checks. -/
structure Prefetched where
  files : PermitFiles
  unreadable? : Option String
  usage : Except String PreviousUsage

private def prefetch (olean usage : System.FilePath) (opts : Options) : IO Prefetched :=
  profileitIO "reuse prefetch" opts do
    let files ← readPermitFiles olean usage
    match files.head >>= parseUsageWithHead files.text with
    | .error e => return { files, unreadable? := some e, usage := .error e }
    | .ok j => return { files, unreadable? := none, usage := files.record >>= ofJson j }
where
  ofJson (j : Json) (record : KeepRecord) : Except String PreviousUsage := do
    let records ← j.getObjValAs? (Array CommandRecord) "commands"
    unless records.zipIdx.all fun (r, i) => r.i == i do
      throw "the previous `.usage`'s records are not in command order"
    let usedJ ← j.getObjValAs? (Array (JName × Array (JName × Digest))) "used"
    let used : NameMap (Array (Name × Digest)) := usedJ.foldl (init := {}) fun m (mod, cs) =>
      cs.foldl (fun m (c, d) => m.insert c.name ((m.getD c.name #[]).push (mod.name, d))) m
    let recorded : NameSet := records.foldl (init := {}) fun s r =>
      r.usesFull.foldl (·.insert ·.1) (r.usesStmt.foldl (·.insert ·.1) s)
    return {
      records, used
      usedUnattributed := used.foldl (init := #[]) fun out n _ => if recorded.contains n then out else out.push n
      resolved := record.resolved.flatMap fun (_, ns) => ns.map (·.1)
      resolvedAll := record.resolvedAll
      specKeys := record.specLookups.map (·.1)
      allExtra := ← j.getObjValAs? Bool "allExtra"
      valueDigests := record.values.foldl (init := {}) fun m (k, d?) => m.insert k d? }

/-- A reuse run's state, shared by the frontend's command loop and the end of `runFrontend`. -/
structure Request where
  inputs : Inputs
  /-- The toolchain's library directory, read before recording started (`keepPermit`'s `lib?`). -/
  lib? : Option String
  /-- Whether the run writes an `.ilean`, which then holds the kept commands' references from their records
  (`CommandRecord.refs?`). -/
  writesIlean : Bool
  /-- The digests of this run's file name and source, which a kept command that read them requires unchanged
  (`CommandRecord.fileContext`, `ModuleUsage.fileContextDigests`). -/
  fileContext : Std.HashMap String Digest
  /-- The previous outputs, read in a task from `new` on, when `inputs` gives them. -/
  prefetched? : Option (Task (Except IO.Error Prefetched))
  status : IO.Ref Status

/-- The request for `inputs`, which starts reading the previous outputs (`Prefetched`); declined until `start` takes a
permit. `fileName` and `source` are the module's. -/
def Request.new (inputs : Inputs) (lib? : Option String) (writesIlean : Bool) (fileName source : String)
    (opts : Options) : BaseIO Request := do
  let reason := match inputs.previous with
    | .error reason => reason
    | .ok _ => "the header was not processed"
  let prefetched? ← match inputs.previous with
    | .error _ => pure none
    | .ok (olean, usage) => some <$> IO.asTask (prefetch olean usage opts)
  let fileContext := (fileContextDigests fileName source).foldl (fun m (k, d) => m.insert k d) {}
  -- accounted (`mkAccountedRef`): the commands write them, and no command's result depends on them
  return { inputs, lib?, writesIlean, fileContext, prefetched?, status := ← mkAccountedRef (.declined reason) }

private partial def addedNames : AddedConst → Array Name
  | .plain n => #[n]
  | .async n _ _ nested => #[n] ++ nested.flatMap addedNames
  | .realization _ _ cs _ _ => cs
  | .merged .. => #[]
  | .context .. => #[]

/-- The constants a payload re-adds, in order. -/
def addedConstants (ce : CommandEntries) : Array Name :=
  ce.added.flatMap addedNames

private def readPrevious (env : Environment) (pre : Prefetched) (lib? : Option String) :
    IO (Except String Previous) := do
  if let some e := pre.unreadable? then return .error s!"the previous `.usage` cannot be read: {e}"
  let permit ← match ← keepPermitOf env env.mainModule pre.files lib? with
    | .ok permit => pure permit
    | .error reason => return .error reason
  -- a kept command has no snapshot whose code quality entries the end of the run would add, and the entries do not
  -- say which command logged them
  if permit.data.entries.any fun (n, es) => n == `Lean.Linter.codeQualityLogExt && !es.isEmpty then
    return .error "the previous build logged code quality entries"
  let usage ← match pre.usage with
    | .ok usage => pure usage
    | .error e => return .error s!"the previous `.usage` cannot be read: {e}"
  let md := permit.data
  let prev : Previous := {
    toPreviousUsage := usage, permit
    payloads := permit.payloads.foldl (fun m ce => m.insert ce.idx ce) {}
    consts := (md.constNames.zip md.constants).foldl (fun m (n, c) => m.insert n c) {}
    ownerCmd := permit.payloads.foldl (init := {}) fun m ce =>
      (addedConstants ce).foldl (fun m n => if m.contains n then m else m.insert n ce.idx) m }
  -- a use no record lists (a name compiled code or the interpreter resolved, `recordUsedName`) may be any command's
  let s := state env
  if let some n := prev.usedUnattributed.find? fun n =>
      (prev.used.getD n #[]).any fun (m, d) => ((env.getModuleIdx? m).bind (s.findAt? · n)) != some d then
    return .error s!"`{n}`, which the module used and no command record lists, changed"
  return .ok prev

/-- Takes a keep permit for the module of `env`, the environment after its header, from its previous `.olean` and
`.usage` (`keepPermitOf`, on the files `new` read); without one, every command is elaborated and the module's `.usage`
says why. Imported modules' initializers and extensions' initial states ran in the import context while the header was
processed: what they did there is in every command's result and no record holds it, so a run whose import context
read a value tied to the run (`import-nondeterministic`), had an effect (`import-effect`) or still runs a task that may
do either later (`import-unsettled`) keeps nothing. -/
def Request.start (req : Request) (env : Environment) (opts : Options) : IO Unit := do
  let some prefetched := req.prefetched? | return
  let status : Status ← profileitIO "reuse permit" opts do
    try
      if env.header.isModule then pure (.declined "module-system") else
      -- the permit's reads of the values the previous build read are not this run's (`valuesChanged?`)
      match ← withoutValueReads (readPrevious env (← MonadExcept.ofExcept (← IO.wait prefetched)) req.lib?) with
      | .ok prev => pure (.active prev (← mkAccountedRef {}))
      | .error reason => pure (.declined reason)
    catch e => pure (.declined s!"the previous outputs cannot be read: {e}")
  let .active _ progress := status | req.status.set status
  -- once no task of the import context runs, none of its code can note anything later
  let unsettled := (← unfinishedImportTasks) > 0
  let taken ← takeRecordedEffects
  progress.modify ({ · with effects := taken })
  let reason? ←
    if unsettled then pure (some "import-unsettled")
    else if (← importReadNondeterministic) then pure (some "import-nondeterministic")
    else if !(← taken.ofImport).isEmpty then pure (some "import-effect")
    else pure none
  req.status.set <| reason?.elim status (.declined · taken)

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

/-- Whether `ci` is the constant `old` term for term, binder names included. -/
private def sameConstant (ci old : ConstantInfo) : Bool :=
  ci == old && ci.type.equal old.type && match ci.value? (allowOpaque := true), old.value? (allowOpaque := true) with
    | some v, some w => v.equal w
    | none, none => true
    | _, _ => false

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

/-- Why command `i`'s record `r` does not allow keeping it in `env` for what it used, if it does not. Its lookups of the
previous build's uses are no lookups of the run: callers run it under `withoutResolvedNotes`. -/
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

/-- Whether the snapshot tasks `ts` and, recursively, the tasks of their snapshots have finished. Waits for none. -/
private partial def snapshotsFinished (ts : Array (Language.SnapshotTask Language.SnapshotTree)) : BaseIO Bool :=
  ts.allM fun t => do
    unless ← IO.hasFinished t.task do return false
    snapshotsFinished t.task.get.children

/-- Whether code of this process can change the process value `key` (`takeValueReads`) while a module is compiled:
an environment variable or the working directory. The others (the executable's path, the toolchain, the SAT solver's
bytes) are fixed for the process. -/
private def changeableValue (key : String) : Bool :=
  key.startsWith "env:" || key == "workingDirectory"

/-- The first value among `keys` that code of this process can change (`changeableValue`) and that is not now what the
previous build read (`PreviousUsage.valueDigests`). Read without recording: the check is no read of the run's. -/
private def valueChangedNow (prev : Previous) (keys : Array String) : IO (Option String) := withoutValueReads do
  for k in keys do
    unless changeableValue k do continue
    unless prev.valueDigests[k]? == some (valueDigest? (← currentValue? k)) do return some k
  return none

/-- The kind of a refusal, as a reason names it. -/
private def refusalKind : Refusal → String
  | .inexpressible .. => "inexpressible"
  | .notCarried .. => "notCarried"
  | .unreplayable .. => "unreplayable"
  | .unrecorded .. => "unrecorded"
  | .divergentKernelAdd .. => "divergentKernelAdd"
  | .foreignAttribute .. => "foreignAttribute"
  | .partlyHeldRealization .. => "partlyHeldRealization"
  | .realizedWithoutRealization .. => "realizedWithoutRealization"
  | .foreignRealizationContext .. => "foreignRealizationContext"
  | .unrelatedConstMap .. => "unrelatedConstMap"
  | .commandState field => field.toString
  | .uncompactable .. => "uncompactable"
  | .effect .. => "effect"

/-- Why an elaborated command's refusals end the keeps, if one does. An elaborated command with the previous build's
payload (`catchUp`) keeps the chain only if a later command can observe what its payload does not hold only through
what the command after it compares where it is kept:
- an effect that writes or removes an environment variable or changes the working directory (a kept command's reads of
  them are compared at its keep, `valueChangedNow`), or that writes the standard output or error, which no command
  reads. Every other effect, the note standing for effects the runtime did not note one by one included, is a change
  the payload does not hold in full (`effect-unrecorded`).
- a change of the scopes or of the next macro scope, which the next command's context holds (`ctxDigest`). Every other
  refusal stands for state no digest of the chain holds (`unexpressed-` and its kind): that the command's inputs are the
  record's does not make that state the previous build's, for a command may compute it from a value no record holds. -/
private def refusalsEndKeeps? (refusals : Array Refusal) : Option String :=
  refusals.findSome? fun
    | .effect what =>
      if ["writes the environment variable ", "unsets the environment variable ", "changes the working directory to "].any
          (fun (p : String) => what.startsWith p) || what == "uses the standard output" ||
          what == "uses the standard error" then
        none
      else some "effect-unrecorded"
    | .commandState field => if field == `scopes || field == `nextMacroScope then none else some s!"unexpressed-{field}"
    | r => some s!"unexpressed-{refusalKind r}"

/-- Whether the work of the elaborated command `pend` that the run knows of has finished (its kernel checks, its
snapshot tasks such as proofs, compilation and linters, its stateful linters' states, its info trees) and no task the
command or a realization it used started is unfinished (`unfinishedCommandTasks`). Waits for none of it: code a command
runs (a tactic, a linter, a task it registers as a snapshot) may wait for a later command, which the command loop
reaches only after the decision. -/
private def settled (pend : Pending) : BaseIO Bool := do
  unless ← IO.hasFinished pend.after.env.checked do return false
  unless ← snapshotsFinished pend.after.snapshotTasks do return false
  unless ← pend.after.codeQualityEntryTasks.allM IO.hasFinished do return false
  if let some t := pend.after.prevLinterStates then
    unless ← IO.hasFinished t do return false
  unless ← IO.hasFinished pend.info do return false
  return (← unfinishedCommandTasks pend.i) == 0

/-- How long the run lets an elaborated command's work settle (`settled`) before it keeps no later command, in steps of
a millisecond's sleep (`settledWithin`). -/
private def settleSteps : Nat := 10000

/-- Whether `pend` is settled (`settled`) within `steps` checks a millisecond apart. -/
private partial def settledWithin (pend : Pending) (steps : Nat) : BaseIO Bool := do
  if ← settled pend then return true
  if steps == 0 then return false
  IO.sleep 1
  settledWithin pend (steps - 1)

/-- Extends the chain over the pending elaborated commands while each has the previous build's payload, final: the
command's work settles (`settledWithin`, never waiting on it beyond `settleSteps`), so that no effect is noted for it
after its payload is computed (`commandPayload`); no stateful linter's state changed in it (a kept command after it
would read the state a fresh build gives, which no record holds: `linterStateChanged`); and a later command can observe
what its payload does not hold only through what it compares (`refusalsEndKeeps?`). A keep never depends on a payload
that may change later. -/
private def catchUp (prev : Previous) : StateT Progress IO Unit := do
  let pending := (← get).pending
  modify ({ · with pending := #[] })
  let linterInits ← Elab.Command.initialLinterStates
  for pend in pending do
    unless (← get).intact do return
    unless ← settledWithin pend settleSteps do
      modify ({ · with intact := false, breakReason := "unsettled" })
      return
    let kenv := pend.after.env.checked.get
    let taken ← takeRecordedEffects
    modify fun p => { p with effects := p.effects ++ taken }
    let (rs, ce, d) ← commandPayload pend.i pend.before pend.after (← get).effects
    let (ctx, chain) := (← get).chain.ctx pend.before
    let text := textDigest pend.stx
    let old? ← previousDigest prev pend.i
    let mut broken? : Option String := some "ctx"
    if let (some r, some old) := (prev.records[pend.i]?, old?) then
      if old == d then
        broken? := none
        -- a payload names its constants without their values: where they are the previous build's, their full
        -- digests differ only if a constant they use changed its own
        let same := (addedConstants ce).all fun n => match kenv.find? n, prev.consts.find? n with
          | some ci, some old => sameConstant ci old
          | _, _ => false
        let (uses?, p) ← withoutResolvedNotes do return (usesChanged prev pend.before.env r).run (← get)
        let dirty := !same || uses?.isSome || r.usesStmt.any fun (n, _) =>
          if prev.ownerCmd.contains n then ownFullDirty prev p n else importedFullChanged prev pend.before.env n
        set { p with fullDirty := p.fullDirty.insert pend.i dirty }
        if linterStateChanged linterInits pend.before pend.after then
          broken? := some "linter-state"
        else unless ce.refusals.isEmpty do
          broken? := refusalsEndKeeps? ce.refusals
          if broken?.isNone && ce.refusals.any (· matches .effect _) then
            modify fun p => { p with effectsAccepted := p.effectsAccepted + 1 }
    modify fun p => { p with
      chain := chain.push ce d text ctx, intact := broken?.isNone, breakReason := broken?.getD p.breakReason
      computed := p.computed.insert pend.i (rs, ce, d) }

/-- Why the context of command `i`, the command starting from `st`, is not its previous record's (`contextMatches`), if
it is not, with the context it has. The pending commands before it are caught up (`catchUp`) already. -/
private def contextChanged? (st : Elab.Command.State) (r : CommandRecord) :
    StateT Progress IO (Option String × Digest) := do
  let (ctx, chain) := (← get).chain.ctx st
  modify ({ · with chain })
  unless (← get).intact do return (some (← get).breakReason, ctx)
  return (if contextMatches r ctx then none else some "ctx", ctx)

/-- Why command `i`, `stx` at `span` starting from `st`, is elaborated instead of kept from `r` and its payload `ce`. -/
private def decideWith (req : Request) (prev : Previous) (i : Nat) (stx : Syntax) (span : CommandSpan)
    (st : Elab.Command.State) (r : CommandRecord) (ce : CommandEntries) : StateT Progress IO (Except String Plan) := do
  if !r.isDecl then return .error "nonconst"
  if r.isInit then return .error "initialize"
  -- after a command whose payload is not the previous build's, no context is a record's (`Progress.intact`)
  unless (← get).intact do return .error (← get).breakReason
  unless ce.refusals.isEmpty do return .error "refused"
  -- its result may hold a value another run reads otherwise (`CommandRecord.nondeterministic`)
  if r.nondeterministic then return .error "nondeterministic"
  -- a keep runs no extension code but pure functions: it replays only entries core states need no conversion
  if (← ce.firstUnadmittedConversion).isSome then return .error "conversion"
  -- a later request of a kept command's realization reports what its `realize` reported in the previous build, which
  -- the payload rebuilds only for a result as the full run made it (`RealizationResult.report`) and for the run's file
  let runsOn (f : String) := (fileContextDigests f "").all fun (k, d) => k != "fileName" || req.fileContext[k]? == some d
  if (ce.firstUnrebuildableRealization? runsOn).isSome then return .error "realization-result"
  unless r.text == textDigest stx do return .error "text"
  unless r.span == span do return .error "position"
  if r.extra.any (req.inputs.changedExtra.contains ·.1) then return .error "extra"
  -- a kept command shows its previous messages, which only a message with a fixed text in its span allows
  if r.messages?.isNone then return .error "messages"
  -- a kept command's `.ilean` references are its record's (`CommandRecord.refs?`), which a build writing none lacks
  if req.writesIlean && r.refs?.isNone then return .error "refs"
  if r.linterState then return .error "linter-state"
  if let some (what, _) := r.fileContext.find? fun (what, d) => req.fileContext[what]? != some d then
    return .error what
  -- the checks below depend on the commands elaborated before: whether their constants changed (`Progress.fullDirty`),
  -- the process values their work set, and their payloads, which the context hashes
  (fun p => profileitIO "reuse context check" st.scopes.head!.opts ((catchUp prev).run p) :
    StateT Progress IO Unit)
  unless (← get).intact do return .error (← get).breakReason
  let (changed?, p) ← withoutResolvedNotes do return (usesChanged prev st.env r).run (← get)
  set p
  if let some reason := changed? then return .error reason
  -- the permit compared the process values when the header was processed; an earlier command may have changed one
  if (← valueChangedNow prev r.values).isSome then return .error "value"
  let (changed?, ctx) ← contextChanged? st r
  if let some reason := changed? then return .error reason
  return .ok { i, stx, span, record := r, payload := ce, ctx }

/-- Decides whether command `i`, `stx` at `span`, is kept from the previous build, the command starting from `st`:
the plan to keep it, or `none` to elaborate it (then `Request.elaborated`). A decision that fails elaborates the command
and keeps no later one. -/
def Request.decide (req : Request) (i : Nat) (stx : Syntax) (span : CommandSpan) (st : Elab.Command.State) :
    BaseIO (Option Plan) := do
  let .active prev progress ← req.status.get | return none
  if Parser.isTerminalCommand stx then return none
  let p₀ ← progress.get
  let p₀ := { p₀ with total := p₀.total + 1 }
  let decided ← (profileitIO "reuse decision" st.scopes.head!.opts <| (do
      let some r := prev.records[i]? | return .error "new"
      let some ce := prev.payloads[i]? | return .error "new"
      decideWith req prev i stx span st r ce : StateT Progress IO (Except String Plan)).run p₀).toBaseIO
  match decided with
  | .ok (.ok plan, p) => progress.set p; return some plan
  | .ok (.error reason, p) => progress.set { p with reasons := p.reasons.push (i, reason) }; return none
  | .error e =>
    progress.set { p₀ with reasons := p₀.reasons.push (i, s!"keep failed: {e}"), intact := false,
                           breakReason := "keep-failed" }
    return none

/-- Notes that command `i`, `stx` at `span`, was elaborated from `before` to `after`, with its info trees `info`. -/
def Request.elaborated (req : Request) (i : Nat) (stx : Syntax) (span : CommandSpan) (before after : Elab.Command.State)
    (info : Task Elab.InfoState) : BaseIO Unit := do
  let .active _ progress ← req.status.get | return
  if Parser.isTerminalCommand stx then return
  progress.modify fun p => { p with
    pending := if p.intact then p.pending.push { i, stx, span, before, after, info } else p.pending
    fullDirty := p.fullDirty.insert i true }

/-- Notes that keeping command `i` failed with `error` before it changed anything (`Request.keep` threw): the record
does not fit the run, so the module's previous outputs are inconsistent; the command is elaborated as in a build
without reuse, and no later command is kept. -/
def Request.keepFailed (req : Request) (i : Nat) (error : String) : BaseIO Unit := do
  let .active _ progress ← req.status.get | return
  progress.modify fun p => { p with
    reasons := p.reasons.push (i, s!"keep failed: {error}"), intact := false, breakReason := "keep-failed" }

/-- The message a build reported, as its record holds it (`CommandRecord.messages?`), shown for the file `fileName`: the
same text, kind, severity and position. -/
private def replayedMessage (fileName : String) (j : Json) : Except String Message := do
  return { (← fromJson? (α := SerialMessage) j).toShownMessage with fileName }

/-- Stops the process: the replay of a kept command `i` failed after its record was checked whole, which no in-process
fallback can undo; the replay runs no extension code but pure functions (`CommandEntries.firstUnadmittedConversion`), so
this is an internal inconsistency, or core code with an effect outside the command. The run has written no output. It
first writes the token of `Inputs.retryMarker?` to its file, which tells Lake that this exit asks for a compile without
reuse in a fresh process (`ModuleUsage.reuseReplayFailedExitCode`). Nothing before the keep had effects that outlive the
process: a command is kept only after commands whose effects are no more than those `refusalsEndKeeps?` lets pass. -/
private def replayFailed (req : Request) (i : Nat) (detail : String) : IO α := do
  IO.eprintln s!"declaration reuse replay failed; compile without reuse (command {i}: {detail})"
  (← IO.getStdout).flush
  (← IO.getStderr).flush
  -- without the marker, Lake takes the exit as a failure
  if let some (marker, token) := req.inputs.retryMarker? then
    try IO.FS.writeFile marker token catch _ => pure ()
  IO.Process.exit reuseReplayFailedExitCode

/-- Runs `act`, part of the keep of command `i`, in the command's context: what it throws (`.error`) and, if the runtime
noted an effect outside the command for it, stops the process (`replayFailed`); the other contexts' notes go to
`progress`. Its reads of process values, clocks and names are not the command's (a kept command's are its record's). -/
private def keepStep (req : Request) (progress : IO.Ref Progress) (i : Nat) (act : IO α) : IO (Except IO.Error α) := do
  let a ← (withoutValueReads <| withoutNondeterministicReads <| withoutResolvedNotes act).toBaseIO
  let taken ← takeRecordedEffects
  let others : RecordedEffects := { taken with byCommand := taken.byCommand.filter (·.1 != i) }
  progress.modify fun p => { p with effects := p.effects ++ others }
  if let some (_, what) := taken.byCommand.find? (·.1 == i) then replayFailed req i s!"it {what}"
  return a

/-- Keeps the command `plan` allows, the command starting from `st`, in the command's context: re-adds and replays its
previous payload (`readdCommandConstants`, `replayCommandEntries`) and restores the command state its record's `post`
gives. The state has the messages the command reported in the previous build, shown for the file `fileName`, and one
info tree, for the command alone.

The record is checked whole first; a record that does not fit the run throws before anything runs (the module's
previous outputs are inconsistent: `Request.keepFailed`). The replay adds the payload's extension entries without
converting them (`admittedOnly`: `Request.decide` keeps only payloads whose every extension needs no conversion); a
replay that throws or has an effect outside the command stops the process (`replayFailed`). The realizations the keep
made are cached for later commands only once it succeeded. -/
def Request.keep (req : Request) (plan : Plan) (st : Elab.Command.State) (fileMap : FileMap) (fileName : String) :
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
  let ngen ← IO.ofExcept (r.post.restoreNgen st.ngen |>.mapError (s!"reuse: command {plan.i}: {·}"))
  let messages ← IO.ofExcept <| (r.messages?.getD #[]).foldlM (init := MessageLog.empty) fun log j => do
    return log.add (← (replayedMessage fileName j).mapError (s!"reuse: command {plan.i}'s messages: {·}"))
  if let some refs := r.refs? then
    IO.ofExcept <| refs.validate fileMap.source.utf8ByteSize |>.mapError (s!"reuse: command {plan.i}'s references: {·}")
  let p ← progress.get
  let (some digest, p) ← (previousDigest prev plan.i).run p |
    throw <| IO.userError s!"reuse: command {plan.i}'s previous payload has no digest"
  let limits : ReaddLimits :=
    { maxHeartbeats := (Core.getMaxHeartbeats opts).toUSize, maxRecDepth := (maxRecDepth.get opts).toUSize }
  -- as before an elaboration (`Language.Lean.process`): the stacks' logs then hold this command's operations
  let st := { st with env := ← clearScopedOps st.env }
  let env ← match ← keepStep req progress plan.i <| profileitIO "reuse kernel replay" opts do
      let (env, publish) ← readdCommandConstants permit st.env ce infos opts limits (admittedOnly := true)
      let env ← replayCommandEntries permit env ce opts (admittedOnly := true)
      publish
      return env with
    | .ok env => pure env
    | .error e => replayFailed req plan.i (toString e)
  let g := r.post.auxDeclNGen
  let tree := InfoTree.context (.commandCtx { env, fileMap, ngen })
    (.node (.ofCommandInfo { elaborator := `Lean.Elab.Reuse.kept, stx := plan.stx }) PersistentArray.empty)
  let after : Elab.Command.State := { st with
    env, ngen, messages, traceState := {}, snapshotTasks := #[], codeQualityEntryTasks := #[]
    auxDeclNGen := .ofRecord { namePrefix := g.namePrefix, idx := g.idx, parentIdxs := g.parentIdxs }
    usedQuotCtxts := r.post.quotCtxts.foldl (·.insert ·) st.usedQuotCtxts
    maxRecDepth := r.post.maxRecDepth
    infoState := { st.infoState with trees := PersistentArray.empty.push tree } }
  let dirty := r.usesStmt.any fun (n, _) =>
    if prev.ownerCmd.contains n then ownFullDirty prev p n else importedFullChanged prev env n
  -- the values code can change (`changeableValue`) are read again here, in the command's context, so that the runtime
  -- records them in the order a fresh build reads them; `valueChangedNow` found them to be the previous ones
  for k in r.values do
    if changeableValue k then discard <| currentValue? k
  -- `p` is from before the replay, which only added effect notes of other contexts
  let p := { p with effects := (← progress.get).effects }
  progress.set { p with
    chain := p.chain.push ce digest r.text plan.ctx
    fullDirty := p.fullDirty.insert plan.i dirty
    keptIdxs := p.keptIdxs.insert plan.i
    kept := p.kept.push { i := plan.i, stx := plan.stx, span := plan.span, before := st, after, record := r,
                          payload := ce, digest }
    keptAfterEffects := if p.effectsAccepted > 0 then p.keptAfterEffects + 1 else p.keptAfterEffects }
  return after

/-- What a reuse run leaves for the module's outputs. -/
structure Outcome where
  /-- The `.usage` `reuse` field: `{kept, total, reElab, elabReasons}`, with `effectsAccepted` and `keptAfterEffects`
  when an elaborated command's effects kept the chain (`Progress`), or `{declined}`. -/
  field : Json
  kept : Array KeptCommand := #[]
  /-- The runtime's effect notes the run took (`takeRecordedEffects`). -/
  effects : RecordedEffects := {}
  /-- The payloads of elaborated commands the run computed (`Progress.computed`). -/
  computed : Std.HashMap Nat (Array Refusal × CommandEntries × Digest) := {}
  /-- The previous `.usage`'s observations for the kept commands (`ModuleUsage.Carried`). -/
  carried : Carried := {}
  /-- The names the previous `.usage` lists in `used` that no record lists among its uses, for the kept commands. -/
  usedUnattributed : Array Name := #[]
  /-- The previous `.olean`'s data, when a command was kept. -/
  previous? : Option ModuleData := none
  /-- How many lint log entries each command added in the previous build, by command index (`CommandRecord.lints`),
  when a command was kept. -/
  previousLintCounts : Array Nat := #[]

/-- The run's outcome, once every command is processed. -/
def Request.finish (req : Request) : IO Outcome := do
  match ← req.status.get with
  | .declined reason effects => return { field := Json.mkObj [("declined", reason)], effects }
  | .active prev progress =>
    let p ← progress.get
    let counts := p.reasons.foldl (init := ({} : Std.HashMap String Nat)) fun m (_, r) => m.insert r (m.getD r 0 + 1)
    -- with the elaborated commands whose effects kept the chain, the commands kept after the first of them
    let accepted := if p.effectsAccepted == 0 then [] else
      [("effectsAccepted", toJson p.effectsAccepted), ("keptAfterEffects", toJson p.keptAfterEffects)]
    let field := Json.mkObj <| [("kept", toJson p.kept.size), ("total", toJson p.total),
      ("reElab", toJson (p.reasons.map (·.1))),
      ("elabReasons", Json.mkObj (counts.toList.map fun (r, n) => (r, toJson n)))] ++ accepted
    if p.kept.isEmpty then return { field, effects := p.effects, computed := p.computed }
    -- `kept` is in command order: the first kept command that read a value is the first one found; a value code can
    -- change was read again where the command was kept (`Request.keep`), so the runtime recorded it
    let firsts := p.kept.foldl (init := ({} : Std.HashMap String Nat)) fun m k =>
      k.record.values.foldl (fun m key => if m.contains key || changeableValue key then m else m.insert key k.i) m
    let carried : Carried :=
      { extra := p.kept.flatMap (·.record.extra), resolved := prev.resolved, resolvedAll := prev.resolvedAll
        specKeys := prev.specKeys, allExtra := prev.allExtra
        values := firsts.toArray.filterMap fun (k, i) => (prev.valueDigests[k]?).map (k, ·, i) }
    return { field, kept := p.kept, effects := p.effects, computed := p.computed, carried
             usedUnattributed := prev.usedUnattributed, previous? := some prev.permit.data
             previousLintCounts := prev.records.map (·.lints) }

end Lean.Elab.Reuse
