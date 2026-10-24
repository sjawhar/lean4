/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.Util.ModuleUsage.Commands
import all Lean.Util.CommandEntries  -- for `KeepPermit.mk`
import all Lean.Environment  -- for the resolver's map, read without recording
import Lean.Util.Path
import Lean.ExtraModUses

public section

/-!
What a module records for reusing its commands in a later build: which command-state changes a payload carries
(`commandStateFields`), each command's payload with its refusals (`commandPayloads`), and the module's payloads,
records and `noreuse` reason (`startModuleRecords`, `PendingRecords.finish`); and what lets a later build keep them: a
permit bound to the environment the module's `.olean` and `.usage` are checked in, where every check Lake makes before
it skips the module holds (`keepPermit`).
-/

namespace Lean.ModuleUsage

/-- How the per-command recorder treats a field of `Elab.Command.State` other than through the command's
extension payload. -/
inductive CommandStateField where
  /-- Carried by the command's extension payload (`recordCommandDelta`). -/
  | env
  /-- Restored for a kept command from its record's `post` (`CommandPost.ofStates`), and covered by later commands'
  `ctx` (`ctxDigest`). -/
  | replayed
  /-- Reset before every command (`Language/Lean.lean`, `doElab`; `messages` also by `elabCommandTopLevel`), so no
  command reads an earlier one's. -/
  | reset
  /-- Read by no later command's elaboration; the reason is at `commandStateFields`. -/
  | unread
  /-- A change refuses the command's payload (`commandStateChanges`). -/
  | refused
  deriving Repr, BEq

/--
Every field of `Elab.Command.State`, classified:
- `env`: the extension payload.
- `messages`, `traceState`, `snapshotTasks`, `codeQualityEntryTasks`: reset before every command, reported per
  command.
- `scopes`: refused when `scopesEnc` differs; a kept command's scopes are not recorded.
- `usedQuotCtxts`, `auxDeclNGen`, `maxRecDepth`, `ngen`: `post` and `ctx`. `ngen` reaches the environment (see
  `CommandPost.ngen`), so a command elaborated from another generator can declare other names or values.
- `nextMacroScope`: `withInitQuotContext` restores it after every top-level command with source; refused otherwise.
- `infoState`: reset by `elabCommandTopLevel` except `enabled`, which is refused when it differs.
- `prevLinterStates`: read only by stateful linters, which run under `withoutModifyingEnv` and only log messages.
-/
def commandStateFields : Array (Name × CommandStateField) := #[
  (`env, .env), (`messages, .reset), (`scopes, .refused), (`usedQuotCtxts, .replayed),
  (`nextMacroScope, .refused), (`maxRecDepth, .replayed), (`ngen, .replayed), (`auxDeclNGen, .replayed),
  (`infoState, .refused), (`traceState, .reset), (`snapshotTasks, .reset), (`codeQualityEntryTasks, .reset),
  (`prevLinterStates, .unread)]

/-- The refusals for the `commandStateFields` a command changed that payloads do not carry. -/
def commandStateChanges (before after : Elab.Command.State) : Array Refusal := Id.run do
  let mut refused := #[]
  unless SharedDiff.sameObject before.scopes after.scopes ||
      (scopesEnc {} before.scopes).finish == (scopesEnc {} after.scopes).finish do
    refused := refused.push (.commandState `scopes)
  if before.nextMacroScope != after.nextMacroScope then
    refused := refused.push (.commandState `nextMacroScope)
  if before.infoState.enabled != after.infoState.enabled then
    refused := refused.push (.commandState `infoState)
  return refused

/-- `ce`, the payload `recordCommandDelta` gave for a command, also refused for the command-state fields the command
changed (`commandStateChanges`, from its states `before` and `after`) and for `refusals`. -/
private def withRefusals (ce : CommandEntries) (before after : Elab.Command.State) (refusals : Array Refusal) :
    CommandEntries :=
  { ce with refusals := Refusal.addNew ce.refusals (commandStateChanges before after ++ refusals) }

/-- `ces` as the `.olean` stores them (a payload holding a closure without the parts that hold one,
`CommandEntries.withoutUncompactable`), each with the digest of its contents (`objectsDigests`), digested together so
that what they share is digested once. -/
private def digested (ces : Array CommandEntries) : IO (Array (CommandEntries × Digest)) :=
  (ces.zip (objectsDigests ces)).mapM fun
    | (ce, some d) => return (ce, d)
    | (ce, none) => do
      let ce ← CommandEntries.withoutUncompactable ce
      let some d := (objectsDigests #[ce])[0]?.join |
        throw <| IO.userError s!"command {ce.idx}'s payload holds a value no `.olean` can store outside its parts"
      return (ce, d)

/-- The refusals of command `i`'s payload beyond the recorder's, with the command's contexts `ctxs`
(`commandContexts`): the attributes with handlers outside core Lean it ran (`commandForeignAttributes`), then its
effects on state outside it the runtime noted (`effects`, `RecordedEffects.ofCommand`), both its own and those of the
realizations it used. -/
private def commandRefusals (i : Nat) (ctxs : Array UInt32) (effects : RecordedEffects) : BaseIO (Array Refusal) := do
  return (← commandForeignAttributes i ctxs).map .foreignAttribute ++ (effects.ofCommand i ctxs).map .effect

/-- The command payloads of the observed commands (`observations`, in command order; `commandDeltaRecorder`), each also
refused for the command-state fields it changed (`commandStateChanges`) and for what it and the realizations it used
did beyond the payload (`commandRefusals`), as the `.olean` stores them with the digest of their contents
(`digested`); the commands in parallel (`CommandEntries.parallelBlocks`), one digester per block. A payload a reuse run
computed already (`precomputed`, `commandPayload`, with the refusals beside the recorder's it was computed with) is
taken as it is if the command's refusals are still those. -/
def commandPayloads (observations : Array CommandObservation) (effects : RecordedEffects)
    (precomputed : Std.HashMap Nat (Array Refusal × CommandEntries × Digest) := {}) :
    IO (Array (CommandEntries × Digest)) := do
  let refusals : Std.HashMap Nat (Array Refusal) ← observations.foldlM (init := {}) fun m obs => do
    return m.insert obs.i (← commandRefusals obs.i (← commandContexts obs.i) effects)
  let refusalsOf (i : Nat) := refusals.getD i #[]
  let record ← commandDeltaRecorder
  CommandEntries.parallelBlocks observations fun block => do
    let (done, todo) := block.partition fun obs => precomputed[obs.i]?.any (·.1 == refusalsOf obs.i)
    let computed ← digested <| ← todo.mapM fun obs => do
      let ce ← record obs.before.env obs.after.env obs.i
      return withRefusals ce obs.before obs.after (refusalsOf obs.i)
    let reused := done.filterMap fun obs => precomputed[obs.i]?.map (·.2)
    return (computed ++ reused).qsort (·.1.idx < ·.1.idx)

/-- Command `i`'s payload as `commandPayloads` computes it, alone, from the command's states `before` and `after` and
the effects the runtime noted so far (`effects`), for a reuse run that needs it before the module ends, with the
refusals beside the recorder's it was computed with (for `commandPayloads`' `precomputed`). -/
def commandPayload (i : Nat) (before after : Elab.Command.State) (effects : RecordedEffects) :
    IO (Array Refusal × CommandEntries × Digest) := do
  let ce ← (← commandDeltaRecorder) before.env after.env i
  let refusals ← commandRefusals i (← commandContexts i) effects
  let some p := (← digested #[withRefusals ce before after refusals])[0]? |
    throw <| IO.userError s!"command {i}'s payload was not digested"
  return (refusals, p)

/-- What a module's `.usage` records for reusing its commands: its command records, and why none of its commands may be
kept (`noreuseReason?`). That decides nothing about skipping the module whole (`noskip`). Its payloads are
`PendingRecords.payloads`. -/
structure ModuleRecords where
  commands : Array CommandRecord := #[]
  noreuseReason? : Option String := none

/-- The first part of the module's records (`PendingRecords.finish` completes them), which needs no digest of the
module's own constants: the observations (`commandObservationsRef`), the commands a reuse run kept, and the noted
effects, read once every kernel check of the module has finished (`env.checked`), and the payloads
(`commandPayloads`, and the kept commands'), computed in a task so that the frontend digests the module's constants
meanwhile. -/
structure PendingRecords where
  private mk ::
  observations : Array CommandObservation
  kept : Array KeptCommand
  /-- The records, when the observations are not the module's (`startModuleRecords`). -/
  done? : Option ModuleRecords
  /-- Why no command may be kept, whatever the commands' records say. -/
  wholeModule? : Option String
  payloadsTask : Task (Except IO.Error (Array (CommandEntries × Digest)))

/-- Starts the module's records (`PendingRecords`), with the commands a reuse run kept (`kept`, in command order), the
effects it took from the runtime while it ran (`earlier`, `takeRecordedEffects`) and the payloads it computed already
(`precomputed`, `commandPayloads`):
- a frontend the module ran in-process (`sessionChanged`: another run started, `startFrontendRun`; or a repeated
  command index: `Lean.Elab.process` recorded from index 0 again) leaves observations that are not the module's: none;
- a module-system file is never partially re-elaborated: no payloads, `noreuse`;
- an imported module's initializer or an extension's initial state used process-wide state while the header was
  processed (`RecordedEffects.ofImport`), or read a value that may differ in another run (`importReadNondeterministic`),
  on which every command may depend: `noreuse`. -/
def startModuleRecords (env : Environment) (sessionChanged : Bool) (kept : Array KeptCommand := #[])
    (earlier : RecordedEffects := {}) (precomputed : Std.HashMap Nat (Array Refusal × CommandEntries × Digest) := {}) :
    IO PendingRecords := do
  -- the kernel checks run in their commands' contexts and note effects there
  discard <| IO.wait env.checked
  let observations := (← commandObservations).qsort (·.i < ·.i)
  let effects := earlier ++ (← takeRecordedEffects)
  let nested := sessionChanged ||
    (observations.foldl (fun s o => s.insert o.i) ({} : Std.HashSet Nat)).size != observations.size
  let moduleSystem? := guard env.header.isModule *> some "module-system"
  if nested then
    return { observations, kept, wholeModule? := none, payloadsTask := .pure (.ok #[])
             done? := some { noreuseReason? := moduleSystem? <|> some "command observations of a nested frontend" } }
  let wholeModule? := moduleSystem? <|> (← effects.ofImport)[0]?.map (s!"an imported module's initializer {·}") <|>
    if (← importReadNondeterministic) then
      some "an imported module's initializer read a value that may differ in another run"
    else none
  let payloadsTask ← if env.header.isModule then pure (.pure (.ok #[]))
    else IO.asTask do
      let ps ← commandPayloads observations effects precomputed
      return (ps ++ kept.map fun k => (k.payload, k.digest)).qsort (·.1.idx < ·.1.idx)
  return { observations, kept, done? := none, wholeModule?, payloadsTask }

/-- The module's command payloads, as its `.olean` stores them (`commandPayloads`), once computed. -/
def PendingRecords.payloads (p : PendingRecords) : IO (Array CommandEntries) :=
  return (← IO.ofExcept (← IO.wait p.payloadsTask)).map (·.1)

/-- The module's records and `noreuse` reason, from `p`, the digests of the module's constants (`own`, `stmt`) and its
nodes (`ownNodes`, whose refs include what compiled code mentions):
- a command that used a name no digest stands for: no records, `noreuse` (`commandRecords`);
- a declaration command with a refusal: `noreuse` (`commandEntriesNoreuseReason?`). -/
def PendingRecords.finish (p : PendingRecords) (env : Environment) (own : Array (Name × Digest))
    (stmt : Array (Name × Digest × Digest)) (nodes : Array Node) : IO ModuleRecords := do
  if let some records := p.done? then return records
  let compacted ← IO.ofExcept (← IO.wait p.payloadsTask)
  let payloads := compacted.map (·.1)
  match ← commandRecords env p.observations own stmt compacted (kept := p.kept) (nodes := nodes) with
  | .error unattributed => return { noreuseReason? := p.wholeModule? <|> some unattributed }
  | .ok commands =>
    let declIdxs := commands.foldl (init := ({} : Std.HashSet Nat)) fun s c => if c.isDecl then s.insert c.i else s
    return { commands,
             noreuseReason? := p.wholeModule? <|> commandEntriesNoreuseReason? payloads declIdxs.contains }

/-- What `keepPermit` reads of a module's `.usage` (`writeUsage`). -/
structure KeepRecord where
  module : Name
  /-- The digest of the `.olean` written with the `.usage`. -/
  olean : Digest
  githash : String
  /-- The imports with digests, each with its provides digest (`digestedModules`). -/
  digested : Array (Name × Digest)
  /-- The imports without digests outside the toolchain, each with its `.olean` digest (`untrackedImports`). -/
  untracked : Array (Name × Digest)
  /-- Each direct import's `closureDigest` as the compile imported it. -/
  importedClosures : Array (Name × Digest)
  /-- Each `extra` module's `moduleDigest` as the compile imported it. -/
  importedDigests : Array (Name × Digest)
  resolved : Array (Option Name × Array (Name × UInt8))
  resolvedAll : Bool
  specLookups : Array (Digest × Digest)
  /-- The process values the compile read, with their digests (`writeUsage`'s `values`). -/
  values : Array (String × Option Digest)
  noreuse : Bool

/-- The `KeepRecord` a `.usage` holds. -/
def KeepRecord.ofUsage (j : Json) : Except String KeepRecord := do
  let pairs (k : String) : Except String (Array (Name × Digest)) :=
    return (← j.getObjValAs? (Array (JName × Digest)) k).map fun (m, d) => (m.name, d)
  return {
    module := ← nameOfJson? (← j.getObjVal? "module")
    olean := ← j.getObjValAs? Digest "olean"
    githash := ← j.getObjValAs? String "githash"
    digested := ← pairs "digested"
    untracked := ← pairs "untracked"
    importedClosures := ← pairs "importedClosures"
    importedDigests := ← pairs "importedDigests"
    resolved := ← resolvedOfJson (← j.getObjVal? "resolved")
    resolvedAll := ← j.getObjValAs? Bool "resolvedAll"
    specLookups := ← j.getObjValAs? (Array (Digest × Digest)) "specLookups"
    values := ← j.getObjValAs? (Array (String × Option Digest)) "values"
    noreuse := ← j.getObjValAs? Bool "noreuse" }

/-- The module `n` resolves to in `env` (`Environment.getModuleIdxFor?`), without recording the lookup (`noteResolved`):
a check of what the module's compile resolved must not add to what this one's records. -/
private def moduleIdxUnrecorded? (env : Environment) (n : Name) : Option ModuleIdx :=
  env.base.get env |>.const2ModIdx[n]?

/-- The reason the closure checks of `keepPermit` fail for `r` in `env`, if one does; `lib` is the toolchain's library
directory. -/
private def closureChanged? (env : Environment) (r : KeepRecord) (lib : String) : IO (Option String) := do
  let s := state env
  let recordedDigested : NameSet := r.digested.foldl (·.insert ·.1) {}
  let untracked : NameMap Digest := r.untracked.foldl (fun m (n, d) => m.insert n d) {}
  let closure : NameSet := env.header.moduleNames.foldl (·.insert ·) {}
  let joined (m : Name) := s!"`{m}` is in the import closure and was not when the module was compiled"
  let mut digestedNow : NameSet := {}
  -- every import carries digests as when the module was compiled, or is pinned by its `.olean` or the githash
  for (m, i) in env.header.moduleNames.zipIdx do
    if s.hasEntries i then
      unless recordedDigested.contains m do
        return some <| if untracked.contains m then
          s!"`{m}` carries usage digests, which it did not when the module was compiled" else joined m
      digestedNow := digestedNow.insert m
    else
      let olean ← findOLean m
      if (toString olean).startsWith lib then continue
      if recordedDigested.contains m then
        return some s!"`{m}` carried usage digests when the module was compiled and does not here"
      let some d := untracked.find? m | return some (joined m)
      unless d == (← fileDigest olean) do
        return some s!"`{m}`, which carries no usage digests, is not the `.olean` the module was compiled against"
  if let some (m, _) := r.digested.find? (!digestedNow.contains ·.1) then
    return some <| if closure.contains m then
      s!"`{m}` carried usage digests when the module was compiled and does not here"
    else s!"`{m}` was in the import closure when the module was compiled and is not here"
  -- the closure's cross-module compiler tables and the modules the compile used whole, as the compile imported them
  for (field, recorded, sel) in #[("closure", r.importedClosures, fun (d : Digest × Digest) => d.2),
      ("module digest", r.importedDigests, fun (d : Digest × Digest) => d.1)] do
    for (m, d) in recorded do
      let now? := (env.getModuleIdx? m).bind s.importedDigests?
      unless now?.map sel == some d do
        return some s!"the {field} of `{m}` is not what the module was compiled against"
  -- every name resolution, unrecorded
  let describe (m? : Option Name) (k : UInt8) : String :=
    m?.elim "the module itself or no module" fun m => s!"`{m}` (kinds {k})"
  for (m?, ns) in r.resolved do
    for (n, k) in ns do
      let i? := moduleIdxUnrecorded? env n
      let now? := i?.map (env.header.moduleNames[·.toNat]!)
      let k' := i?.elim 0 (providedKinds env · n)
      unless now? == m? && k' == k do
        return some s!"resolution changed: `{n}` resolved to {describe m? k} when the module was compiled, and \
          resolves to {describe now? k'} here"
  let providesNow := digestedModules env
  if r.resolvedAll && providesNow != r.digested then
    return some "resolution changed: the compile read the defining module of every name, and the imported modules' \
      provides differ here"
  -- a name the compile resolved that an import whose provides changed gives a non-local attribute: a fresh compile that
  -- records an extra module use of the name (`recordExtraModUseFromDecl`) records that import too
  let changed : NameSet := providesNow.foldl (init := {}) fun s (m, d) =>
    if r.digested.contains (m, d) then s else s.insert m
  unless changed.isEmpty do
    let indirect := indirectModUseExt.getState env
    for (_, ns) in r.resolved do
      for (n, _) in ns do
        for i in indirect[n]?.getD #[] do
          let m := env.header.moduleNames[i.toNat]!
          if changed.contains m then
            return some s!"`{m}`, whose provides changed, gives `{n}`, a name the module resolved, a non-local attribute"
  -- the specialization-cache keys the compile looked up, with their providers
  unless specProvidersIn env (r.specLookups.map (·.1)) == r.specLookups do
    return some "the providers of a specialization-cache key the module looked up changed"
  return none

/-- The reason a process value the module's compile read (`values`) differs in this process, if one does: a command
may have read it, as an environment variable, the working directory, the executable's path, a file of the
toolchain at the recorded root, or the bytes of the SAT solver it ran (`currentRecordedValue?`). -/
private def valuesChanged? (r : KeepRecord) : IO (Option String) := do
  for (k, d?) in r.values do
    let now? ← try valueDigest? <$> currentRecordedValue? k
      catch e => return some s!"the compile read the process value {k}, which this Lean cannot read: {e}"
    unless now? == d? do
      return some s!"the process value {k} is not what it was when the module was compiled"
  return none

/-- What `keepPermit` reads of a module's `.olean` and `.usage`, which needs no environment (`readPermitFiles`). Each
failure is kept, for `keepPermit` to report where its checks reach it. -/
structure PermitFiles where
  /-- The `.usage`'s text. -/
  text : String
  /-- Its first line (`parseUsageHead`). -/
  head : Except String Json
  record : Except String KeepRecord
  /-- The `.olean`'s digest (`fileDigest`). -/
  olean : Except IO.Error Digest
  /-- The `.olean`'s data and command payloads (`CommandEntries.ofModuleData?`), read only if the `.usage` is this
  Lean's and was written with that `.olean`. -/
  data? : Option (Except IO.Error (ModuleData × Except String (Array CommandEntries)))

/-- Reads the module's `.olean` at `olean` and the `.usage` at `usage` written with it, as `keepPermit` does, so that a
caller can read them before its environment is made (`keepPermitOf`). -/
def readPermitFiles (olean usage : System.FilePath) : IO PermitFiles := do
  let text ← IO.FS.readFile usage
  let head := parseUsageHead text
  let record := head >>= KeepRecord.ofUsage
  let digest ← (fileDigest olean).toBaseIO
  let read : IO (ModuleData × Except String (Array CommandEntries)) := do
    let (data, _) ← readModuleData olean
    return (data, CommandEntries.ofModuleData? data)
  let data? ← match record, digest with
    | .ok r, .ok d => if r.githash == Lean.githash && r.olean == d then some <$> read.toBaseIO else pure none
    | _, _ => pure none
  return { text, head, record, olean := digest, data? }

/-- `keepPermitOf`, with the `noreuse` check only if `checkNoreuse`. -/
private def keepPermitCore (env : Environment) (module : Name) (files : PermitFiles) (checkNoreuse : Bool)
    (lib? : Option String) : IO (Except String KeepPermit) := do
  let lib ← lib?.getDM do return toString (← getLibDir (← getBuildDir))
  let r ← IO.ofExcept files.record
  unless r.module == module do return .error s!"the `.usage` is of `{r.module}`, not `{module}`"
  unless env.mainModule == module do return .error s!"the environment is of `{env.mainModule}`, not `{module}`"
  unless r.githash == Lean.githash do return .error s!"the `.usage` was written by another Lean ({r.githash})"
  if checkNoreuse && r.noreuse then return .error "the module's commands cannot be kept (`noreuse`)"
  unless (← MonadExcept.ofExcept files.olean) == r.olean do
    return .error "the `.usage` was not written with this `.olean`"
  if let some reason ← closureChanged? env r lib then return .error reason
  if let some reason ← valuesChanged? r then return .error reason
  let some data? := files.data? | throw <| IO.userError "the `.olean` was not read"
  let (data, payloads?) ← MonadExcept.ofExcept data?
  let payloads ← match payloads? with
    | .ok payloads => pure payloads
    | .error e => return .error s!"the `.olean`'s command payloads cannot be read: {e}"
  return .ok { module, data, payloads, imports := env.header.moduleData }

/--
A keep permit (`KeepPermit`) for module `module`'s command payloads in `env`, from its `.olean` at `olean` and the
`.usage` at `usage` written with it, if every check holds; otherwise the reason, and none of the module's commands is
kept. The `.usage` is the module's (`module`), was written with that `.olean` (`olean`, its digest) by this Lean
(`githash`), and lets commands be kept (`noreuse`). Then the checks Lake makes on the module's import closure before it
skips the module (`Module.usageUpToDate`), asked of `env` directly:
- every import carries usage digests as when the module was compiled (`UsageSidecar.coversClosure`), and one without
  them outside the toolchain is the same `.olean` (`untrackedImports`; Lake's `modsysHash`);
- every direct import's `closureDigest` (`closureHash`) and every `extra` module's `moduleDigest` are as the compile
  imported them (Lake also compares an extra module's `.olean` bytes, through the `.usekey`, which the compile does not
  record);
- every recorded name resolves to the same module, which provides it with the same kinds, and, where the compile read
  the resolver's whole map, every import with digests provides the same names (`UsageSidecar.resolvedUnchanged`); these
  lookups are not recorded (`moduleIdxUnrecorded?`); no import whose provides changed gives one of those names a
  non-local attribute (`indirectModUseExt`, Lake's check of `UsageImport.indirect`);
- every specialization-cache key the compile looked up has the same providers (`UsageSidecar.specProvidersUnchanged`).
Then every process value the compile read (an environment variable, the working directory, the executable's path, the
toolchain root of a toolchain file a command read) is the same in this process (`valuesChanged?`), which Lake's checks
do not cover.
The module's own inputs, and what each command used (its record's uses), are its caller's to check. `lib?` is the
toolchain's library directory, which a run that records usage reads before recording starts (`getLibDir`, through the
executable's path): read here, it would be one of the run's process values. -/
def keepPermit (env : Environment) (module : Name) (olean usage : System.FilePath) (lib? : Option String := none) :
    IO (Except String KeepPermit) := do
  keepPermitCore env module (← readPermitFiles olean usage) (checkNoreuse := true) lib?

/-- `keepPermit`, with its files read already (`readPermitFiles`). -/
def keepPermitOf (env : Environment) (module : Name) (files : PermitFiles) (lib? : Option String := none) :
    IO (Except String KeepPermit) :=
  keepPermitCore env module files (checkNoreuse := true) lib?

namespace Testing

/-- Test support: `keepPermit` also for a module whose commands its records say cannot be kept (`noreuse`), so that a
test can replay their payloads. -/
def keepPermit (env : Environment) (module : Name) (olean usage : System.FilePath) :
    IO (Except String KeepPermit) := do
  keepPermitCore env module (← readPermitFiles olean usage) (checkNoreuse := false) none

end Testing

end Lean.ModuleUsage
