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

/-- The command payloads of the observed commands (`observations`, in command order; `commandDeltaRecorder`), each also
refused for the command-state fields it changed (`commandStateChanges`), the attributes with handlers outside core
Lean it ran (`foreignAttributesByCommand`) and its effects on state outside it the runtime noted (`effects`,
`RecordedEffects.byCommand`), as the `.olean` stores them (`CommandEntries.compact`), with the digest of their compacted
bytes; the commands in parallel (`CommandEntries.parallelMap`). -/
def commandPayloads (observations : Array CommandObservation) (effects : Array (Nat × String)) :
    IO (Array (CommandEntries × Digest)) := do
  let byCommand (records : Array (Nat × Refusal)) : Std.HashMap Nat (Array Refusal) :=
    records.foldl (init := {}) fun m (i, r) => m.alter i fun rs => some ((rs.getD #[]).push r)
  let foreign := byCommand <| (← foreignAttributesByCommand).reverse.toArray.map fun (i, attr) =>
    (i, .foreignAttribute attr)
  let effects := byCommand <| effects.map fun (i, what) => (i, .effect what)
  let record ← commandDeltaRecorder
  CommandEntries.parallelMap observations fun obs => do
    let ce ← record obs.before.env obs.after.env obs.i
    let extra := commandStateChanges obs.before obs.after ++ foreign.getD obs.i #[] ++ effects.getD obs.i #[]
    let (ce, bytes) ← CommandEntries.compact { ce with refusals := Refusal.addNew ce.refusals extra }
    return (ce, Digest.ofBytes bytes)

/-- What a module's `.usage` records for reusing its commands: its command records, and why none of its commands may be
kept (`noreuseReason?`). That decides nothing about skipping the module whole (`noskip`). Its payloads are
`PendingRecords.payloads`. -/
structure ModuleRecords where
  commands : Array CommandRecord := #[]
  noreuseReason? : Option String := none

/-- The first part of the module's records (`PendingRecords.finish` completes them), which needs no digest of the
module's own constants: the observations (`commandObservationsRef`) and the noted effects, read once every kernel
check of the module has finished (`env.checked`), and the payloads (`commandPayloads`), computed in a task so that the
frontend digests the module's constants meanwhile. -/
structure PendingRecords where
  private mk ::
  observations : Array CommandObservation
  /-- The records, when the observations are not the module's (`startModuleRecords`). -/
  done? : Option ModuleRecords
  /-- Why no command may be kept, whatever the commands' records say. -/
  wholeModule? : Option String
  payloadsTask : Task (Except IO.Error (Array (CommandEntries × Digest)))

/-- Starts the module's records (`PendingRecords`):
- a frontend the module ran in-process (`sessionChanged`: another run started, `startFrontendRun`; or a repeated
  command index: `Lean.Elab.process` recorded from index 0 again) leaves observations that are not the module's: none;
- a module-system file is never partially re-elaborated: no payloads, `noreuse`;
- an imported module's initializer or an extension's initial state used process-wide state while the header was
  processed (`RecordedEffects.atImport`), on which every command may depend: `noreuse`. -/
def startModuleRecords (env : Environment) (sessionChanged : Bool) : IO PendingRecords := do
  -- the kernel checks run in their commands' contexts and note effects there
  discard <| IO.wait env.checked
  let observations := (← commandObservations).qsort (·.i < ·.i)
  let effects ← takeRecordedEffects
  let nested := sessionChanged ||
    (observations.foldl (fun s o => s.insert o.i) ({} : Std.HashSet Nat)).size != observations.size
  let moduleSystem? := guard env.header.isModule *> some "module-system"
  if nested then
    return { observations, wholeModule? := none, payloadsTask := .pure (.ok #[])
             done? := some { noreuseReason? := moduleSystem? <|> some "command observations of a nested frontend" } }
  let wholeModule? := moduleSystem? <|> effects.atImport[0]?.map (s!"an imported module's initializer {·}")
  let payloadsTask ← if env.header.isModule then pure (.pure (.ok #[]))
    else IO.asTask (commandPayloads observations effects.byCommand)
  return { observations, done? := none, wholeModule?, payloadsTask }

/-- The module's command payloads, as its `.olean` stores them (`commandPayloads`), once computed. -/
def PendingRecords.payloads (p : PendingRecords) : IO (Array CommandEntries) :=
  return (← IO.ofExcept (← IO.wait p.payloadsTask)).map (·.1)

/-- The module's records and `noreuse` reason, from `p` and the digests of the module's constants (`own`, `stmt`):
- a command that used a name no digest stands for: no records, `noreuse` (`commandRecords`);
- a declaration command with a refusal: `noreuse` (`commandEntriesNoreuseReason?`). -/
def PendingRecords.finish (p : PendingRecords) (env : Environment) (own : Array (Name × Digest))
    (stmt : Array (Name × Digest × Digest)) : IO ModuleRecords := do
  if let some records := p.done? then return records
  let compacted ← IO.ofExcept (← IO.wait p.payloadsTask)
  let payloads := compacted.map (·.1)
  match ← commandRecords env p.observations own stmt compacted with
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

/-- The reason the closure checks of `keepPermit` fail for `r` in `env`, if one does. -/
private def closureChanged? (env : Environment) (r : KeepRecord) : IO (Option String) := do
  let s := state env
  let lib := toString (← getLibDir (← getBuildDir))
  let recordedDigested : NameSet := r.digested.foldl (·.insert ·.1) {}
  let untracked : NameMap Digest := r.untracked.foldl (fun m (n, d) => m.insert n d) {}
  let mut digestedNow : NameSet := {}
  -- every import carries digests as when the module was compiled, or is pinned by its `.olean` or the githash
  for (m, i) in env.header.moduleNames.zipIdx do
    if s.hasEntries i then
      unless recordedDigested.contains m do
        return some s!"`{m}` carries usage digests, which it did not when the module was compiled"
      digestedNow := digestedNow.insert m
    else
      let olean ← findOLean m
      if (toString olean).startsWith lib then continue
      unless untracked.find? m == some (← fileDigest olean) do
        return some s!"`{m}`, which carries no usage digests, is not the `.olean` the module was compiled against"
  if let some (m, _) := r.digested.find? (!digestedNow.contains ·.1) then
    return some s!"`{m}` carried usage digests when the module was compiled and does not here"
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
  if r.resolvedAll && digestedModules env != r.digested then
    return some "resolution changed: the compile read the defining module of every name, and the imported modules' \
      provides differ here"
  -- the specialization-cache keys the compile looked up, with their providers
  unless specProvidersIn env (r.specLookups.map (·.1)) == r.specLookups do
    return some "the providers of a specialization-cache key the module looked up changed"
  return none

/-- The reason a process value the module's compile read (`values`) differs in this process, if one does: a command
may have read it, as an environment variable, the working directory, the executable's path, or a file of the
toolchain at the recorded root. -/
private def valuesChanged? (r : KeepRecord) : IO (Option String) := do
  for (k, d?) in r.values do
    let now? ← try valueDigest? <$> currentValue? k
      catch _ => return some s!"the compile read the process value {k}, which this Lean does not read"
    unless now? == d? do
      return some s!"the process value {k} is not what it was when the module was compiled"
  return none

/-- `keepPermit`, with the `noreuse` check only if `checkNoreuse`. -/
private def keepPermitCore (env : Environment) (module : Name) (olean usage : System.FilePath)
    (checkNoreuse : Bool) : IO (Except String KeepPermit) := do
  let r ← IO.ofExcept <| KeepRecord.ofUsage (← IO.ofExcept <| Json.parse (← IO.FS.readFile usage))
  unless r.module == module do return .error s!"the `.usage` is of `{r.module}`, not `{module}`"
  unless env.mainModule == module do return .error s!"the environment is of `{env.mainModule}`, not `{module}`"
  unless r.githash == Lean.githash do return .error s!"the `.usage` was written by another Lean ({r.githash})"
  if checkNoreuse && r.noreuse then return .error "the module's commands cannot be kept (`noreuse`)"
  unless (← fileDigest olean) == r.olean do return .error "the `.usage` was not written with this `.olean`"
  if let some reason ← closureChanged? env r then return .error reason
  if let some reason ← valuesChanged? r then return .error reason
  let (data, _) ← readModuleData olean
  let payloads ← match CommandEntries.ofModuleData? data with
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
  lookups are not recorded (`moduleIdxUnrecorded?`);
- every specialization-cache key the compile looked up has the same providers (`UsageSidecar.specProvidersUnchanged`).
Then every process value the compile read (an environment variable, the working directory, the executable's path, the
toolchain root of a toolchain file a command read) is the same in this process (`valuesChanged?`), which Lake's checks
do not cover.
The module's own inputs, and what each command used (its record's uses), are its caller's to check. -/
def keepPermit (env : Environment) (module : Name) (olean usage : System.FilePath) :
    IO (Except String KeepPermit) :=
  keepPermitCore env module olean usage (checkNoreuse := true)

namespace Testing

/-- Test support: `keepPermit` also for a module whose commands its records say cannot be kept (`noreuse`), so that a
test can replay their payloads. -/
def keepPermit (env : Environment) (module : Name) (olean usage : System.FilePath) :
    IO (Except String KeepPermit) :=
  keepPermitCore env module olean usage (checkNoreuse := false)

end Testing

end Lean.ModuleUsage
