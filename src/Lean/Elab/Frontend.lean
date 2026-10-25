/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
module

prelude
import Init.System.Platform
public import Lean.Language.Lean
public import Lean.Server.References
public import Lean.Util.Profiler
import Lean.Compiler.Options
import Lean.Compiler.InitAttr  -- for `runInitAttrsForModules` on snapshot load
import Lean.Linter.PersistentLintLog
import Lean.Util.ProfilerServer
import Lean.Util.CollectAxioms
import Lean.Util.ModuleUsage
import Lean.Util.UsedByChecks
import Lean.Util.CommandEntries
import Lean.Util.Path
import Lean.Util.ModuleUsage.Reuse

public section

namespace Lean.Elab.Frontend

structure State where
  commandState : Command.State
  parserState  : Parser.ModuleParserState
  cmdPos       : String.Pos.Raw
  commands     : Array Syntax := #[]
deriving Nonempty

structure Context where
  inputCtx : Parser.InputContext

abbrev FrontendM := ReaderT Context $ StateRefT State IO

def setCommandState (commandState : Command.State) : FrontendM Unit :=
  modify fun s => { s with commandState := commandState }

@[inline] def runCommandElabM (x : Command.CommandElabM α) : FrontendM α := do
  let ctx ← read
  let s ← get
  let cmdCtx : Command.Context := {
    cmdPos       := s.cmdPos
    fileName     := ctx.inputCtx.fileName
    fileMap      := ctx.inputCtx.fileMap
    snap?        := none
    cancelTk?    := none
  }
  match (← liftM <| EIO.toIO' <| (x cmdCtx).run s.commandState) with
  | Except.error e      => throw <| IO.Error.userError s!"unexpected internal error: {← e.toMessageData.toString}"
  | Except.ok (a, sNew) => setCommandState sNew; return a

def elabCommandAtFrontend (stx : Syntax) : FrontendM Unit := do
  runCommandElabM do
    Command.elabCommandTopLevel stx

def updateCmdPos : FrontendM Unit := do
  modify fun s => { s with cmdPos := s.parserState.pos }

def getParserState : FrontendM Parser.ModuleParserState := do pure (← get).parserState
def getCommandState : FrontendM Command.State := do pure (← get).commandState
def setParserState (ps : Parser.ModuleParserState) : FrontendM Unit := modify fun s => { s with parserState := ps }
def setMessages (msgs : MessageLog) : FrontendM Unit := modify fun s => { s with commandState := { s.commandState with messages := msgs } }
def getInputContext : FrontendM Parser.InputContext := do pure (← read).inputCtx

def processCommand : FrontendM Bool := do
  updateCmdPos
  let cmdState ← getCommandState
  let ictx ← getInputContext
  let pstate ← getParserState
  let scope := cmdState.scopes.head!
  let pmctx := { env := cmdState.env, options := scope.opts, currNamespace := scope.currNamespace, openDecls := scope.openDecls }
  match profileit "parsing" scope.opts fun _ => Parser.parseCommand ictx pmctx pstate cmdState.messages with
  | (cmd, ps, messages) =>
    modify fun s => { s with commands := s.commands.push cmd }
    setParserState ps
    setMessages messages
    elabCommandAtFrontend cmd
    pure (Parser.isTerminalCommand cmd)

partial def processCommands : FrontendM Unit := do
  let done ← processCommand
  unless done do
    processCommands

end Frontend

open Lean Frontend

structure IncrementalState extends State where
  inputCtx    : Parser.InputContext
  initialSnap : Language.Lean.CommandParsedSnapshot
deriving Nonempty

open Language in
/--
Variant of `IO.processCommands` that allows for potential incremental reuse. Pass in the result of a
previous invocation done with the same state (but usually different input context) to allow for
reuse.
-/
partial def IO.processCommandsIncrementally (inputCtx : Parser.InputContext)
    (parserState : Parser.ModuleParserState) (commandState : Command.State)
    (old? : Option IncrementalState) :
    BaseIO IncrementalState := do
  let task ← Language.Lean.processCommands inputCtx parserState commandState
    (old?.map fun old => (old.inputCtx, old.initialSnap))
  go task.get task #[]
where
  go initialSnap t commands :=
    let snap := t.get
    let commands := commands.push snap
    if let some next := snap.nextCmdSnap? then
      go initialSnap next.task commands
    else
      -- Opting into reuse also enables incremental reporting, so make sure to collect messages from
      -- all snapshots
      let messages := toSnapshotTree initialSnap
        |>.getAll.map (·.diagnostics.msgLog)
        |>.foldl (· ++ ·) {}
      -- In contrast to messages, we should collect info trees only from the top-level command
      -- snapshots as they subsume any info trees reported incrementally by their children.
      let trees := commands.map (·.elabSnap.infoTreeSnap.get.infoTree?) |>.filterMap id |>.toPArray'
      return {
        commandState := { snap.elabSnap.resultSnap.get.cmdState with messages, infoState.trees := trees }
        parserState := snap.parserState
        cmdPos := snap.parserState.pos
        commands := commands.map (·.stx)
        inputCtx, initialSnap
      }

def IO.processCommands (inputCtx : Parser.InputContext) (parserState : Parser.ModuleParserState)
    (commandState : Command.State) : IO State := do
  let st ← IO.processCommandsIncrementally inputCtx parserState commandState none
  return st.toState

def process (input : String) (env : Environment) (opts : Options) (fileName : Option String := none) : IO (Environment × MessageLog) := do
  let fileName   := fileName.getD "<input>"
  let inputCtx   := Parser.mkInputContext input fileName
  let s ← IO.processCommands inputCtx { : Parser.ModuleParserState } (Command.mkState env {} opts)
  pure (s.commandState.env, s.commandState.messages)

/--
Walks the snapshot tree, pairing each node's diagnostics with the syntax of the command that
produced them.
-/
private partial def collectCommandLints (t : Language.SnapshotTree) (cmdStx? : Option Syntax)
    (acc : Array (Option Syntax × MessageLog)) : Array (Option Syntax × MessageLog) :=
  let acc := acc.push (cmdStx?, t.element.diagnostics.msgLog)
  t.children.foldl (init := acc) fun acc child =>
    collectCommandLints child.get (child.stx? <|> cmdStx?) acc

private unsafe def previousLintsImpl (md : ModuleData) : Array Linter.LintEntry :=
  match md.entries.find? (·.1 == ``Linter.lintLogExt) with
  | some (_, es) => unsafeCast es
  | none => #[]

/-- The persistent lint log entries of a module's `.olean` data. -/
@[implemented_by previousLintsImpl]
private opaque previousLints (md : ModuleData) : Array Linter.LintEntry

/--
`Linter.recordLints`, command by command, for a run that kept the commands `kept`; with how many entries each command
added. The snapshot tree lists the header's nodes, then each command's node with its elaboration's nodes, in command
order, and the log lists each command's entries together. A kept command has no diagnostics: its entries are those it
added in the previous build (`previous`, after the header's and those of the commands before it, as their counts
`previousCounts` say), shown for the file `fileName`. A keep requires the previous `.olean`, so `previous` is given
whenever a command is kept.
-/
private def recordLintsByCommand (fileMap : FileMap) (fileName : String) (env : Environment)
    (snap : Language.Lean.InitialSnapshot) (snaps : Language.SnapshotTree) (kept : Array ModuleUsage.KeptCommand)
    (previous : Array Linter.LintEntry) (previousCounts : Array Nat) : BaseIO (Environment × Std.HashMap Nat Nat) := do
  let logSize (env : Environment) := (Linter.lintLogExt.getState env).size
  let all := collectCommandLints snaps none #[]
  let cmds := (Language.Lean.foldCmdSnaps? snap #[] (·.push ·)).getD #[]
  let sizes := cmds.map fun c => (collectCommandLints (Language.toSnapshotTree c.elabSnap) none #[]).size + 1
  let mut start := all.size - sizes.foldl (· + ·) 0
  let mut env ← Linter.recordLints fileMap env (all.extract 0 start)
  let keptIdxs : Std.HashSet Nat := kept.foldl (·.insert ·.i) {}
  let mut counts : Std.HashMap Nat Nat := {}
  -- where command `i`'s entries start in `previous`
  let mut previousStart := previous.size - previousCounts.foldl (· + ·) 0
  for size in sizes, i in [0:sizes.size] do
    let before := logSize env
    if keptIdxs.contains i then
      for e in previous.extract previousStart (previousStart + previousCounts.getD i 0) do
        env := Linter.lintLogExt.addEntry env { e with file := fileName, message := { e.message with fileName } }
    else
      env ← Linter.recordLints fileMap env (all.extract start (start + size))
    counts := counts.insert i (logSize env - before)
    previousStart := previousStart + previousCounts.getD i 0
    start := start + size
  return (env, counts)

/--
The messages a build reports for each command but its parse messages (`SnapshotTree.runAndReport` prints the messages
that are not marked reported, node by node, and a command's nodes are together), each with its position and end
position: `none` for a command whose messages a later build cannot show again as it would, because one's text is made
when it is printed (`MessageData.hasFixedText`), one names another file than the module's, `fileName` (a kept command's
messages are shown for the file it is compiled as; the lint log entries are made from these messages), or its info
trees are reported (`trace.Elab.info`).
-/
private def commandMessages (fileName : String) (snap : Language.Lean.InitialSnapshot) :
    BaseIO (Array (Option (Array (Position × Option Position × Json)))) := do
  let cmds := (Language.Lean.foldCmdSnaps? snap #[] (·.push ·)).getD #[]
  cmds.mapM fun c => do
    unless c.elabSnap.infoTreeSnap.get.diagnostics.msgLog.unreported.isEmpty do return none
    let mut out := #[]
    for node in (Language.toSnapshotTree c.elabSnap).getAll do
      for m in node.diagnostics.msgLog.unreported do
        unless m.fileName == fileName && m.data.hasFixedText do return none
        out := out.push (m.pos, m.endPos, toJson (← m.serialize))
    return some out

/-- The command records `commands` (`CommandRecord` as JSON) with what the run observed of each command after its
records were made: its reported messages (`commandMessages`), which its record holds only if they all lie in its span
(`CommandRecord.messages?`), its lint log entries (`lints`), and, for an elaborated command, its `.ilean` references
(`refs`, by command index, for a run that writes an `.ilean`), whether it read a nondeterministic source
(`nondeterministic`, the indices of those that did) and what it read of its file beyond its source (`reads`,
`FileContextRead` bits by command index: `commandFileContextReads`) with the digests `fileContext`
(`ModuleUsage.fileContextDigests`). A kept command (`keptIdxs`) has the references and read what its previous record
says. -/
private def withRunRecords (commands : Array Json)
    (messages : Array (Option (Array (Position × Option Position × Json)))) (lints : Std.HashMap Nat Nat)
    (refs : Array (Option ModuleUsage.CommandRefs)) (nondeterministic : Std.HashSet Nat)
    (reads : Std.HashMap Nat UInt8) (fileContext : Array (String × ModuleUsage.Digest)) (keptIdxs : Std.HashSet Nat) :
    Array Json :=
  commands.map fun c => Id.run do
    let .ok i := c.getObjValAs? Nat "i" | return c
    let inSpan (ms : Array (Position × Option Position × Json)) : Option (Array Json) := do
      let span ← (c.getObjValAs? ModuleUsage.CommandSpan "span").toOption
      guard <| ms.all fun (pos, endPos?, _) => span.contains pos && endPos?.all span.contains
      return ms.map (·.2.2)
    let recorded := (messages[i]?.getD (some #[])).bind inSpan
    let c := (c.setObjVal! "messages" (toJson recorded)).setObjVal! "lints" (toJson (lints.getD i 0))
    if keptIdxs.contains i then return c
    let c := (c.setObjVal! "refs" (toJson (refs[i]?.join))).setObjVal! "nondeterministic"
      (toJson (nondeterministic.contains i))
    let bits := reads.getD i 0
    let read (k : String) := (k == "fileName" && bits &&& FileContextRead.fileName != 0) ||
      (k == "source" && bits &&& FileContextRead.source != 0)
    return c.setObjVal! "fileContext" (toJson (fileContext.filter (read ·.1)))

/-- The info trees the snapshots of command `c` report: its own node's and those of its elaboration. -/
private def commandTrees (c : Language.Lean.CommandParsedSnapshot) : Array InfoTree :=
  c.infoTree?.toArray ++ (Language.toSnapshotTree c.elabSnap).getAll.filterMap (·.infoTree?)

/-- The record of the references `refs` (`Server.findReferences`) and aliases `aliases` (`Server.fvarAliases`) of a
command's info trees. -/
private def recordRefs (refs : Array Server.Reference) (aliases : Array (Lsp.RefIdent × Lsp.RefIdent)) :
    ModuleUsage.CommandRefs := Id.run do
  let mut idents : Array ModuleUsage.CommandRefIdent := #[]
  let mut identIdxs : Std.HashMap Lsp.RefIdent Nat := {}
  -- the local variables' numbers (`CommandRefIdent.fvar`) by id
  let mut fvars : Std.HashMap String Nat := {}
  let mut parents : Array Name := #[]
  let mut parentIdxs : Std.HashMap Name Nat := {}
  let mut out : Array Int := Array.emptyWithCapacity (4 * refs.size)
  let mut prev : Nat := 0
  for ref in refs do
    let k := identIdxs.getD ref.ident idents.size
    if k == idents.size then
      identIdxs := identIdxs.insert ref.ident k
      match ref.ident with
      | .const m n => idents := idents.push (.const m n)
      | .fvar _ id =>
        idents := idents.push (.fvar fvars.size)
        fvars := fvars.insert id fvars.size
    let mut flags := if ref.isBinder then 1 else 0
    if let some d := ref.ci.parentDecl? then
      let p := parentIdxs.getD d parents.size
      if p == parents.size then
        parentIdxs := parentIdxs.insert d p
        parents := parents.push d
      flags := flags + 4 * (p + 1) + (if ref.parentDeclInfo?.isSome then 2 else 0)
    -- `findReferences` finds only references with a range
    let r := ref.info.range?.getD default
    out := out.push (k : Int) |>.push ((r.start.byteIdx : Int) - prev)
      |>.push ((r.stop.byteIdx : Int) - r.start.byteIdx) |>.push (flags : Int)
    prev := r.start.byteIdx
  let mut pairs : Array (Nat × Nat) := #[]
  for (a, b) in aliases do
    -- `fvarAliases` connects local variables only
    let (.fvar _ a, .fvar _ b) := (a, b) | continue
    let na := fvars.getD a fvars.size
    fvars := fvars.insert a na
    let nb := fvars.getD b fvars.size
    fvars := fvars.insert b nb
    pairs := pairs.push (na, nb)
  return { idents, parents, refs := out, aliases := pairs }

/-- The references and aliases the record `r` of command `i` holds, as `Server.findReferences` and
`Server.fvarAliases` would find them in its info trees, for the module `env` and its file `fileMap`. The record numbers
its local variables per command, so they are named apart from those of every other command. -/
private def recordedRefs (env : Environment) (fileMap : FileMap) (i : Nat) (r : ModuleUsage.CommandRefs) :
    Except String (Array Server.Reference × Array (Lsp.RefIdent × Lsp.RefIdent)) := do
  let mod := env.header.mainModule.toString
  let fvar (n : Nat) : Lsp.RefIdent := .fvar mod s!"{i}:{n}"
  let idents := r.idents.map fun
    | .const m n => Lsp.RefIdent.const m n
    | .fvar n => fvar n
  unless r.refs.size % 4 == 0 do throw "the references are not in fours"
  let mut refs : Array Server.Reference := Array.emptyWithCapacity (r.refs.size / 4)
  let mut prev : Int := 0
  for j in [0:r.refs.size / 4] do
    let (k, s, len) := (r.refs[4 * j]!, r.refs[4 * j + 1]!, r.refs[4 * j + 2]!)
    let flags := (r.refs[4 * j + 3]!).toNat
    let some ident := idents[k.toNat]? | throw s!"no identifier {k}"
    let p := flags / 4
    let parentDecl? : Option Name ← if p == 0 then pure none else
      match r.parents[p - 1]? with
      | some d => pure (some d)
      | none => throw s!"no parent declaration {p - 1}"
    let b := prev + s
    prev := b
    let range : Syntax.Range := ⟨⟨b.toNat⟩, ⟨(b + len).toNat⟩⟩
    -- the final environment holds the kept command's declaration ranges
    let cmdEnv? := if flags % 4 ≥ 2 then some env else none
    refs := refs.push { ident, range := range.toLspRange fileMap, stx := .missing, isBinder := flags % 2 == 1,
                        ci := { env, cmdEnv?, fileMap, ngen := {}, parentDecl? }, info := default }
  return (refs, r.aliases.map fun (a, b) => (fvar a, fvar b))

/-- The `.ilean` references of the module, and the record of each elaborated command's (`recordRefs`, by command index)
if `recording`, from the info trees `trees` its snapshots `snap` report: each command's references are those of its
info trees (`commandTrees`) or, for a command a reuse run kept (`kept`), its record's (`recordedRefs`), and all of them
are combined and deduplicated together (`Server.ModuleRefs.ofReferences`), as `Server.findModuleRefs` does. -/
private def ileanReferences (env : Environment) (fileMap : FileMap) (snap : Language.Lean.InitialSnapshot)
    (trees : Array InfoTree) (kept : Array ModuleUsage.KeptCommand) (recording : Bool) :
    IO (Server.ModuleRefs × Array (Option ModuleUsage.CommandRefs)) := do
  let cmds := (Language.Lean.foldCmdSnaps? snap #[] (·.push ·)).getD #[]
  let cmdTrees := cmds.map commandTrees
  -- the header's trees precede those of the commands
  let headerTrees := trees.extract 0 (trees.size - cmdTrees.foldl (fun n ts => n + ts.size) 0)
  let keptByIdx : Std.HashMap Nat ModuleUsage.KeptCommand := kept.foldl (fun m k => m.insert k.i k) {}
  let mut refs := Server.findReferences fileMap headerTrees
  let mut aliases := Server.fvarAliases headerTrees
  let mut records : Array (Option ModuleUsage.CommandRefs) := #[]
  for ts in cmdTrees, i in [0:cmdTrees.size] do
    if let some k := keptByIdx[i]? then
      let some r := k.record.refs?
        | throw <| IO.userError s!"reuse: internal error: kept command {i} has no recorded references"
      let (rs, als) ← IO.ofExcept <| (recordedRefs env fileMap i r).mapError
        (s!"reuse: the recorded references of kept command {i} cannot be read: {·}")
      refs := refs ++ rs
      aliases := aliases ++ als
      records := records.push none
    else
      let rs := Server.findReferences fileMap ts
      let als := Server.fvarAliases ts
      refs := refs ++ rs
      aliases := aliases ++ als
      records := records.push <| if recording then some (recordRefs rs als) else none
  return (Server.ModuleRefs.ofReferences refs aliases (localVars := false), records)

/--
On-disk wrapper for `--incr-(header-)save`: bundles the snapshot with the indices
`runInitAttrsForModules` walks on load so we skip page-faulting dep-region `Name`s for modules
without `[init]` work.
-/
private structure IncrSnapshot where
  snap        : Language.Lean.InitialSnapshot
  initModIdxs : Array Nat

/--
Assembles `ModuleArtifacts`, the `--incr-save` helper file's format, from flat regions so that
loading can be optimized. This is a subset of `.setup.json` but we don't want to demand `--setup`
being used with save, so we reconstruct the needed information here.
-/
private def regionsToModuleArtifacts (regions : Array CompactedRegion) : Array ModuleArtifacts :=
  Id.run do
    -- base `.olean` path (as string) → its `ModuleArtifacts`, plus first-seen order for stability
    let mut order : Array String := #[]
    let mut byBase : Std.HashMap String ModuleArtifacts := {}
    for region in regions do
      let p := region.filePath
      let (base, upd) : String × (ModuleArtifacts → ModuleArtifacts) :=
        match p.extension with
        | some "server"  => (p.withExtension "" |>.toString, fun a => { a with oleanServer? := p })
        | some "private" => (p.withExtension "" |>.toString, fun a => { a with oleanPrivate? := p })
        | some "ir"      => (p.withExtension "olean" |>.toString, fun a => { a with ir? := p })
        | some "sig"     => (p.withExtension "" |>.withExtension "olean" |>.toString, fun a => { a with irSig? := p })
        | _              => (p.toString, fun a => { a with olean? := p })
      unless byBase.contains base do
        order := order.push base
      byBase := byBase.insert base (upd (byBase.getD base {}))
    return order.map (byBase[·]!)

private unsafe def readModuleArtifactRegions (arts : ModuleArtifacts) :
    IO (Array CompactedRegion) := do
  let mut oleanRegions : Array CompactedRegion := #[]
  for partPath in arts.oleanParts do
    let (_, region) ← CompactedRegion.read (α := ModuleData) partPath oleanRegions
    oleanRegions := oleanRegions.push region
  let mut irRegions : Array CompactedRegion := #[]
  for partPath in arts.irParts do
    let (_, region) ← CompactedRegion.read (α := ModuleData) partPath irRegions
    -- accumulate so `.ir` is read with `.ir.sig` as a dep (its cross-part pointers); cf. olean chain
    irRegions := irRegions.push region
  return oleanRegions ++ irRegions

/-- Loads a snapshot saved by `--incr-(header-)save`. -/
private unsafe def loadIncrSnapshot (fname : System.FilePath) :
    IO IncrSnapshot := do
  let depsFile := fname.addExtension "deps"
  let moduleArts : Array ModuleArtifacts ←
    match Json.parse (← IO.FS.readFile depsFile) >>= fromJson? with
    | .ok arts => pure arts
    | .error e => throw <| IO.userError s!"failed to parse snapshot deps file {depsFile}: {e}"
  -- Modules are mutually independent (cross-module references go through the constant map, not
  -- region pointers), so read them in parallel. Spawn exactly `numWorkers` striped tasks.
  -- Parallelism overlaps each region's cold root-page fault I/O: for an `import Mathlib` snapshot,
  -- sequential cold load is ~16 s, dropping to ~6 s at 4 workers. More workers help cold further
  -- (~3 s at 32) but begin shifting the warm-cache case into a slower mode (`mmap` address-space
  -- lock contention), so the default caps low to keep warm load time unchanged. Raise
  -- `LEAN_IMPORT_WORKERS` to trade warm parity for faster cold loads.
  let defaultNumWorkers := min (System.Platform.Internal.getHardwareConcurrency ()).toNat 4
  let numWorkers := max 1 <|
    ((← IO.getEnv "LEAN_IMPORT_WORKERS").bind (·.toNat?)).getD defaultNumWorkers
  let mut chunkTasks := Array.emptyWithCapacity numWorkers
  for w in 0...numWorkers do
    -- worker `w` handles modules w, w+numWorkers, w+2·numWorkers, … (stripe for load balance)
    chunkTasks := chunkTasks.push (← IO.asTask (do
      let mut regions : Array CompactedRegion := #[]
      let mut i := w
      while i < moduleArts.size do
        regions := regions ++ (← readModuleArtifactRegions moduleArts[i]!)
        i := i + numWorkers
      return regions))
  let mut depRegions : Array CompactedRegion := Array.emptyWithCapacity (moduleArts.size * 4)
  for t in chunkTasks do
    depRegions := depRegions ++ (← IO.ofExcept t.get)
  -- The snapshot region itself references every loaded dep region.
  let (data, _region) ← CompactedRegion.read (α := IncrSnapshot) fname depRegions
  return data

/--
Resolves every `SnapshotTask.cancelTk?` reachable from the given snapshot tree so that the
unresolved `CancelToken.promise` tasks they would otherwise leave behind don't block the
compactor's traversal during the subsequent save.
-/
private partial def resolveCancelTokensForSave (s : Language.SnapshotTree) : BaseIO Unit := do
  for child in s.children do
    if let some tk := child.cancelTk? then
      tk.set
    resolveCancelTokensForSave child.get

/--
Updates the post-import `cmdState`'s `Environment.mainModule` so that subsequent commands
elaborated on top of `snap` produce names under the correct module. Needed when the loader's
main module name differs from the one baked into the saved snapshot (e.g. the snapshot was
saved from `--stdin` but is loaded for a real file). For non-truncated snapshots whose
`mainModule` already matches, this is effectively a no-op.
-/
private def setMainModule (snap : Language.Lean.InitialSnapshot) (m : Name) :
    Language.Lean.InitialSnapshot := Id.run do
  let some parsed := snap.result? | return snap
  let processed := parsed.processedSnap.get
  let some hps := processed.result? | return snap
  if hps.cmdState.env.header.mainModule == m then
    return snap
  let newEnv := hps.cmdState.env.setMainModule m
  -- `Command.mkState` derives `auxDeclNGen.namePrefix` from `mkPrivateName env .anonymous`, which
  -- bakes in `env.mainModule`. Re-derive so aux decls land in the new module's private namespace
  -- (otherwise `delabConst` flags them as inaccessible and pretty-prints them with `✝`).
  let newCmdState := { hps.cmdState with
    env := newEnv
    auxDeclNGen := { hps.cmdState.auxDeclNGen with namePrefix := mkPrivateName newEnv .anonymous } }
  let newProcessed : Language.Lean.HeaderProcessedSnapshot := { processed with
    result? := some { hps with cmdState := newCmdState } }
  { snap with
    result? := some { parsed with
      processedSnap := .finished none newProcessed } }

def runFrontend
    (input : String)
    (opts : Options)
    (fileName : String)
    (mainModuleName : Name)
    (trustLevel : UInt32 := 0)
    (oleanFileName? : Option System.FilePath := none)
    (ileanFileName? : Option System.FilePath := none)
    (jsonOutput : Bool := false)
    (errorOnKinds : Array Name := #[])
    (plugins : Array Plugin := #[])
    (printStats : Bool := false)
    (setup? : Option ModuleSetup := none)
    (incrSaveFileName? : Option System.FilePath := none)
    (incrLoadFileName? : Option System.FilePath := none)
    (incrHeaderSaveFileName? : Option System.FilePath := none)
    (usageFileName? : Option System.FilePath := none)
    (reuse? : Option Reuse.Inputs := none)
    (codegen : Environment → IO Unit := fun _ => pure ())
    : IO (Option Environment) := do
  let startTime := (← IO.monoNanosNow).toFloat / 1000000000
  -- read before recording starts, so that it is no process value of the run (`ModuleUsage.keepPermit`)
  let reuseLib? ← if reuse?.isSome then do pure (some (toString (← getLibDir (← getBuildDir)))) else pure none
  -- the recording logs are global: a frontend this module runs in-process clears or extends them, which `run` detects
  let run ← startFrontendRun (record := oleanFileName?.isSome && usageFileName?.isSome)
  let inputCtx := Parser.mkInputContext input fileName
  -- default `cmdlineSnapshots` to true (not done as default value for API back-compat reasons)
  -- except when full-snapshotting so that enough information for resumption is available
  let opts := Lean.internal.cmdlineSnapshots.setIfNotSet opts incrSaveFileName?.isNone
  -- default to async elaboration; see also `Elab.async` docs
  let opts := Elab.async.setIfNotSet opts true
  let ctx := { inputCtx with }
  let setup stx := do
    if let some setup := setup? then
      liftM <| setup.dynlibs.forM Lean.loadDynlib
      return .ok {
        trustLevel
        package? := setup.package?
        mainModuleName := setup.name
        isModule := strictOr setup.isModule stx.isModule
        imports := setup.imports?.getD stx.imports
        plugins := plugins ++ setup.plugins
        importArts := setup.importArts
        -- override cmdline options with setup options
        opts := opts.mergeBy (fun _ _ hOpt => hOpt) setup.options.toOptions
      }
    else
      return .ok {
        imports := stx.imports
        isModule := stx.isModule
        mainModuleName, opts, trustLevel, plugins
      }
  let old? ← incrLoadFileName?.mapM fun incrFile => do
    let incr ← unsafe loadIncrSnapshot incrFile
    -- A loaded snapshot may have been saved from a different file (e.g. via `--incr-header-save`
    -- on stdin) and so bake in a different `mainModule`. Patch it to match this invocation
    -- so generated names like `_private.<mainModule>.<hash>...` stay consistent.
    let snap := setMainModule incr.snap mainModuleName
    if let some res := snap.processedResult.get then
      withImporting do
        -- The central incr HACK:
        -- Initializers roughly perform one of two functions: initializing their own variable, or
        -- contributing to some IO.Ref whose value will likely end up in the environment. Any
        -- environment changes should already be available in the loaded env, but we still need to
        -- initialize global vars used even after the environment is assembled, so we run all
        -- initializers. This works in practice but at least in theory, it could lead to some
        -- divergence in behavior when strange initializers are involved.
        unsafe Lean.runInitAttrsForModules res.cmdState.env incr.initModIdxs opts
      -- `withImporting` resets the initializer-execution flag in `finally`, but the slow path in
      -- `Language.Lean.process` (taken when the loaded header doesn't match the new file's
      -- imports) calls `importModules`, which in turn requires the flag to be set. Restore it.
      unsafe enableInitializersExecution
    return snap
  -- a reuse run keeps commands from the module's previous build (`Elab.Reuse`); it needs the `.usage` it writes
  let reuseReq? ← if usageFileName?.isSome then
      reuse?.mapM fun reuse => do Reuse.Request.new reuse reuseLib? ileanFileName?.isSome fileName input opts
    else pure none
  let snap ← Language.Lean.process setup old? reuseReq? ctx
  let snaps := Language.toSnapshotTree snap
  let severityOverrides := errorOnKinds.foldl (·.insert · .error) {}

  -- reporting should be done before any early exit from the function
  let hasErrors ← snaps.runAndReport opts jsonOutput severityOverrides

  let some cmdState := Language.Lean.waitForFinalCmdState? snap
    | return none

  let mut env := cmdState.env
  let finalOpts := cmdState.scopes[0]!.opts

  -- the fold cannot fail as `waitForFinalCmdState?` succeeded, so the header was processed
  let codeQualityEntryTasks := Language.Lean.foldCmdSnaps? snap #[]
    (· ++ ·.elabSnap.resultSnap.get.codeQualityEntryTasks) |>.getD #[]
  for task in codeQualityEntryTasks do
    env := Lean.Linter.codeQualityLogExt.modifyState env fun entries => entries ++ task.get

  -- Saves `snapToSave` wrapped with the init-mod indices used by `runInitAttrsForModules` on load.
  -- Writes a `<incrFile>.deps` JSON helper alongside: the dep regions grouped per module (see
  -- `regionsToModuleArtifacts`), needed to map the snapshot back in before we can access `env`.
  let saveSnap (incrFile : System.FilePath) (snapToSave : Language.Lean.InitialSnapshot) :
      IO Unit := do
    let toSave : IncrSnapshot :=
      { snap := snapToSave, initModIdxs := getRegularInitAttrModIdxs env }
    let compactor ← (unsafe CompactedRegion.save incrFile `_snap toSave
      env.header.regions none (allowClosures := true))
    let moduleArts := regionsToModuleArtifacts env.header.regions
    IO.FS.writeFile (incrFile.addExtension "deps") (toJson moduleArts).compress
    Runtime.forget compactor

  -- save full incremental snapshot for next invocation
  if let some incrFile := incrSaveFileName? then
    -- Per-command `CancelToken`s are left unresolved on success; their internal `Promise`
    -- tasks would block the compactor's `lean_task_get`. Fire them all before save.
    -- `truncateToHeader` discards everything below the header so this isn't needed for the
    -- header-only save below.
    resolveCancelTokensForSave (Language.toSnapshotTree snap)
    saveSnap incrFile snap

  -- save header-only snapshot (skips elaborated command bodies)
  if let some incrFile := incrHeaderSaveFileName? then
    saveSnap incrFile (Language.Lean.truncateToHeader snap)

  -- stats should be displayed even if there are (non-import) errors
  if printStats then
    env.displayStats

  if hasErrors then
    return none

  let trees := snaps.getAll.flatMap (match ·.infoTree? with | some t => #[t] | _ => #[])
  let reused? ← reuseReq?.mapM (·.finish)
  let kept := reused?.elim #[] (·.kept)
  let lintCounts ← IO.mkRef ({} : Std.HashMap Nat Nat)
  let usage? ← oleanFileName?.bindM fun oleanFileName => do
    let recorded ← recordedDeclConsts
    -- the digests cover the exported axioms, so both take the stored ones
    let env := if usageFileName?.isSome then storeExportedAxioms env else env
    let usage? ← usageFileName?.mapM fun usageFileName => do
      let pending ← ModuleUsage.startModuleRecords env (sessionChanged := (← lastFrontendRun) != run) kept
        (reused?.elim {} (·.effects)) (reused?.elim {} (·.computed))
      let consts := ModuleUsage.ownConsts env recorded
      let nodes := ModuleUsage.ownNodes env consts
      let own := ModuleUsage.localDigests env nodes
      let stmt := ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own consts
      let payloads ← pending.payloads
      -- a command is kept only after commands whose payloads were final (`Reuse.catchUp`)
      if let some i ← pending.keptContextChanged? then
        throw <| IO.userError s!"reuse: internal error: the context of kept command {i} changed after it was kept"
      -- the `.usage` command records build while the `.olean`, which holds none of them, is written
      let recs ← IO.asTask do
        let recs ← pending.finish env own stmt nodes
        return (recs, ← CommandEntries.parallelMap recs.commands fun r => pure (toJson r))
      let provides := ModuleUsage.ownProvides env
      let indirect := ModuleUsage.ownIndirect env
      return (usageFileName, oleanFileName, nodes, own, ModuleUsage.closureDigest env own provides, provides, indirect,
        stmt, payloads, recs)
    profileitIO ".olean serialization" finalOpts do
      let (env, counts) ← recordLintsByCommand inputCtx.fileMap fileName env snap snaps kept
        (reused?.bind (·.previous?) |>.elim #[] previousLints) (reused?.elim #[] (·.previousLintCounts))
      lintCounts.set counts
      let env := usage?.elim env fun (_, _, _, own, closure, provides, indirect, stmt, payloads, _) =>
        let env := ModuleUsage.setLocalStmt (ModuleUsage.setLocalDigests env own closure provides indirect) stmt
        setCommandEntries env payloads
      writeModule (writeIR := !Compiler.compiler.postponeCompile.get finalOpts) env oleanFileName
    return usage?

  let mut ileanRefs : Array (Option ModuleUsage.CommandRefs) := #[]
  if let some ileanFileName := ileanFileName? then
    let (references, records) ← ileanReferences env inputCtx.fileMap snap trees kept (recording := usage?.isSome)
    ileanRefs := records
    let (moduleRefs, decls) ← references.toLspModuleRefs
    let ilean := {
      module        := mainModuleName
      directImports := Server.collectImports ⟨snap.stx⟩
      references    := moduleRefs
      decls
      : Lean.Server.Ilean
    }
    IO.FS.writeFile ileanFileName $ Json.compress $ toJson ilean

  codegen env

  if let some out := trace.profiler.output.get? opts then
    let traceStates := snaps.getAll.map (·.traces)
    let profile ← Firefox.Profile.export mainModuleName.toString startTime traceStates opts
    IO.FS.writeFile ⟨out⟩ <| Json.compress <| toJson profile
  else if trace.profiler.serve.get finalOpts then
    let traceStates := snaps.getAll.map (·.traces)
    let profile ← Firefox.Profile.export mainModuleName.toString startTime traceStates opts
    Firefox.Profile.serve <| Json.compress <| toJson profile

  -- Last of the outputs: the usage data records every name resolved in writing the others.
  if let some (usageFileName, oleanFileName, nodes, own, closure, provides, indirect, stmt, _, recs) := usage? then
    let (recs, commands) ← IO.ofExcept (← IO.wait recs)
    let used := ModuleUsage.usedFromInfoTrees trees (← usedNames)
    -- the kept commands have no info trees and declared nothing here: their uses are their records'
    let used := kept.foldl (init := used) fun s k =>
      k.record.usesFull.foldl (·.insert ·.1) (k.record.usesStmt.foldl (·.insert ·.1) s)
    let used := (reused?.elim #[] (·.usedUnattributed)).foldl (·.insert ·) used
    let mut nondeterministic : Std.HashSet Nat := {}
    let mut reads : Std.HashMap Nat UInt8 := {}
    for c in commands do
      let .ok i := c.getObjValAs? Nat "i" | continue
      if ← commandReadNondeterministic i then nondeterministic := nondeterministic.insert i
      reads := reads.insert i (← commandFileContextReads i)
    let commands := withRunRecords commands (← commandMessages fileName snap) (← lintCounts.get) ileanRefs
      nondeterministic reads (ModuleUsage.fileContextDigests fileName input)
      (kept.foldl (·.insert ·.i) {})
    ModuleUsage.writeUsage env nodes own closure provides indirect used (← lookedUpSpecKeys) stmt commands
      (incrLoaded := incrLoadFileName?.isSome) usageFileName (← ModuleUsage.fileDigest oleanFileName)
      (noreuseReason? := recs.noreuseReason?) (carried := reused?.elim {} (·.carried))
      (reuse? := reused?.map (·.field))

  -- no point in freeing the snapshot graph and all referenced data this close to process exit
  Runtime.forget snaps
  return some env

end Lean.Elab
