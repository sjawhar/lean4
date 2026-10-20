/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.Util.ModuleUsage.Commands

public section

/-!
What a module records for reusing its commands in a later build: which command-state changes a payload carries
(`commandStateFields`), each command's payload with its refusals (`commandPayloads`), and the module's payloads,
records and `noskip` reason (`moduleRecords`).
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

/-- The command payloads of the observed commands (`observations`, in command order; `recordCommandDeltas`), each also
refused for the command-state fields it changed (`commandStateChanges`), the attributes with handlers outside core
Lean it ran (`foreignAttributesByCommand`) and the code it evaluated that its environment does not keep
(`evaluatedByCommand`), as the `.olean` stores them (`CommandEntries.compact`), with the digest of their compacted
bytes. -/
def commandPayloads (observations : Array CommandObservation) : IO (Array (CommandEntries × Digest)) := do
  let foreign : Std.HashMap Nat (Array Refusal) := (← foreignAttributesByCommand).reverse.foldl (init := {})
    fun m (i, attr) => m.alter i fun rs => some ((rs.getD #[]).push (.foreignAttribute attr))
  let evaluated : Std.HashMap Nat (Array Name) := (← evaluatedByCommand).foldl (init := {})
    fun m (i, n) => m.alter i fun o => some ((o.getD #[]).push n)
  let deltas ← recordCommandDeltas (observations.map fun obs => (obs.before.env, obs.after.env, obs.i))
  (observations.zip deltas).mapM fun (obs, ce) => do
    let discarded := ((evaluated.getD obs.i #[]).find? (!obs.after.env.contains ·)).map Refusal.ranCode
    let extra := commandStateChanges obs.before obs.after ++ foreign.getD obs.i #[] ++ discarded.toArray
    let (ce, bytes) ← CommandEntries.compact
      { ce with refusals := extra.foldl (fun rs r => if rs.contains r then rs else rs.push r) ce.refusals }
    return (ce, Digest.ofBytes bytes)

/-- What a module records for reuse: its command payloads, its `.usage` command records, and why it is `noskip`. -/
structure ModuleRecords where
  payloads : Array CommandEntries := #[]
  commands : Array CommandRecord := #[]
  noskipReason? : Option String := none

/-- The module's payloads, records and `noskip` reason, from the observations (`commandObservationsRef`):
- a frontend the module ran in-process (`sessionChanged`: another run started, `startFrontendRun`; or a repeated
  command index: `Lean.Elab.process` recorded from index 0 again) leaves observations that are not the module's: none;
- a module-system file is never partially re-elaborated: no payloads, `noskip`;
- a command that used a name no digest stands for: no records, `noskip` (`commandRecords`);
- a declaration command with a refusal: `noskip` (`commandEntriesNoskipReason?`). -/
def moduleRecords (env : Environment) (own : Array (Name × Digest)) (stmt : Array (Name × Digest × Digest))
    (sessionChanged : Bool) : IO ModuleRecords := do
  let observations := (← commandObservations).qsort (·.i < ·.i)
  let nested := sessionChanged ||
    (observations.foldl (fun s o => s.insert o.i) ({} : Std.HashSet Nat)).size != observations.size
  let moduleSystem? := guard env.header.isModule *> some "module-system"
  if nested then
    return { noskipReason? := moduleSystem? <|> some "command observations of a nested frontend" }
  let compacted ← if env.header.isModule then pure #[] else commandPayloads observations
  let payloads := compacted.map (·.1)
  match ← commandRecords env observations own stmt compacted with
  | .error unattributed => return { payloads, noskipReason? := moduleSystem? <|> some unattributed }
  | .ok commands =>
    let declIdxs := commands.foldl (init := ({} : Std.HashSet Nat)) fun s c => if c.isDecl then s.insert c.i else s
    return { payloads, commands,
             noskipReason? := moduleSystem? <|> commandEntriesNoskipReason? payloads declIdxs.contains }

end Lean.ModuleUsage
