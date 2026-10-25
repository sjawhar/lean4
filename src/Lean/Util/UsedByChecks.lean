/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Data.NameMap.Basic
public import Lean.Declaration
public import Init.System.IO
public import Lean.Data.PersistentHashMap
public import Lean.Data.PersistentHashSet
public import Std.Data.HashMap.Basic
import Init.Data.Array.QSort
import Lean.Util.FoldConsts
import Lean.Util.Path
import Init.Data.String.TakeDrop
import Init.Data.ToString.Macro
public section
namespace Lean

/-!
Process state the usage data reads (`runFrontend`, `ModuleUsage.writeUsage`). The references are private, and the
public functions only switch recording on, add to what is recorded, read it, or start a run (`startFrontendRun`), so
code that a module runs while it is elaborated cannot clear or switch off what its usage data will say unnoticed: a
run that finds another run started after it (`lastFrontendRun`) does not take the logs as its own.
-/

/-- Marks `r` as accounted: the runtime's effect notes skip writes to it (`takeRecordedEffects`). Only for references
whose state across commands a command payload carries or no command's result depends on: the usage recorders' own
logs, and the caches whose writes the payloads record. -/
@[extern "lean_io_mark_ref_accounted"]
opaque markRefAccounted {α : Type} (r : @& IO.Ref α) : BaseIO Unit

/-- `IO.mkRef a`, marked accounted (`markRefAccounted`). -/
def mkAccountedRef {α : Type} (a : α) : BaseIO (IO.Ref α) := do
  let r ← IO.mkRef a
  markRefAccounted r
  return r

/-- Whether this process records usage: switched on by `runFrontend` when it will write an `.olean` and its
`.usage` (`--usage`), never off. Off in the language server, which writes neither. -/
private builtin_initialize usageRecordingRef : IO.Ref Bool ← mkAccountedRef false
/-- Constants of every declaration given to `addDecl` in this process, including those elaborated in an
environment that is then discarded (`example`, `#eval`, `#guard`), the names `recordUsedName` adds, and the constants
a command or a realization consulted without a reference (`recordUsedByCommand`). -/
private builtin_initialize usedByChecksRef : IO.Ref NameSet ← mkAccountedRef {}
/-- The keys looked up in the specialization cache while recording is on (`recordSpecLookup`). -/
private builtin_initialize specLookupsRef : IO.Ref (Array Expr) ← mkAccountedRef #[]

/-- Switches on the recording of resolved names (`noteResolved`), in `src/library/usage_digest.cpp`. -/
@[extern "lean_usage_enable_resolved"]
private opaque enableResolvedRecording : BaseIO Unit

/-- Switches usage recording on for the rest of the process. -/
def enableUsageRecording : BaseIO Unit := do
  usageRecordingRef.set true
  enableResolvedRecording

/-- Whether usage recording is on. -/
def usageRecordingEnabled : BaseIO Bool :=
  usageRecordingRef.get

/--
Records `n` as used when recording is on: names that reach the current module's compiled code or elaboration
without occurring in any of its terms, namely a specialization the specialization cache returns (possibly another
module's), the replacement of a `@[csimp]` theorem, and every declaration the IR interpreter resolves (called from
`src/library/ir_interpreter.cpp`, possibly on several threads).
-/
@[export lean_usage_record_used]
def recordUsedName (n : Name) : BaseIO Unit := do
  if (← usageRecordingRef.get) then usedByChecksRef.modify (·.insert n)

/-- The names recorded as used so far. -/
def usedNames : BaseIO NameSet :=
  usedByChecksRef.get

/--
Records a lookup of `key` in the specialization cache when recording is on: whether an imported module provides
the key, and which one, decides whether the module's compile reuses another module's specialization or makes its
own, so the module's usage data records the key (`ModuleUsage.writeUsage`).
-/
def recordSpecLookup (key : Expr) : BaseIO Unit := do
  if (← usageRecordingRef.get) then specLookupsRef.modify (·.push key)

/-- The specialization-cache keys looked up so far (`recordSpecLookup`). -/
def lookedUpSpecKeys : BaseIO (Array Expr) :=
  specLookupsRef.get

/--
Returns `x`, recording `n` when usage recording is on as a name whose defining module was looked up
(`Environment.getModuleIdxFor?`, which wraps its answer in it), hits and misses alike. The names are kept in
`src/library/usage_digest.cpp`, where code can only add to them; the recording, which no result depends on, cannot be
optimized away.
-/
@[never_extract, extern "lean_usage_note_resolved"]
def noteResolved {α : Type} (n : @& Name) (x : α) : α := x

/-- Returns `x`, recording when usage recording is on that the defining module of every name was read at once
(`Environment.const2ModIdx`). -/
@[never_extract, extern "lean_usage_note_all_resolved"]
def noteAllResolved {α : Type} (x : α) : α := x

/-- The names recorded by `noteResolved` so far, in no particular order. -/
@[extern "lean_usage_resolved_names"]
opaque resolvedNames : BaseIO (Array Name)

/-- Whether `noteAllResolved` recorded a read. -/
@[extern "lean_usage_all_resolved"]
opaque allResolved : BaseIO Bool

@[extern "lean_usage_set_resolved_unrecorded"]
private opaque setResolvedUnrecorded (b : Bool) : BaseIO Bool

/-- Runs `act` without recording the lookups it makes on the running thread (`noteResolved`, `noteAllResolved`; a task
it starts records its own): a run's check of what a previous run resolved is no lookup of the run's own. Nested uses
restore the setting of the enclosing one. -/
def withoutResolvedNotes [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (act : m α) : m α := do
  let prev ← (setResolvedUnrecorded true : BaseIO Bool)
  try act finally (discard (setResolvedUnrecorded prev) : BaseIO Unit)

/-- See `recordCompilerCode`. -/
private builtin_initialize compilerCodeRef : IO.Ref Bool ← mkAccountedRef false

/--
Records that a compile in this process ran code or read state the module's used names do not cover: passes or
constant folders beyond the built-in ones (`Lean.Compiler.LCNF.PassManager.run`), an implementation of `compileDecls`
other than the compiler's own or reserved-name predicates other than those an environment starts with
(`Lean.runCompileDecls`), a predicate a plugin registers (`Lean.registerReservedNamePredicate`), or instance
resolution inside the compile (`recordIfCompiling`). The module's usage data then makes every
imported module with digests an extra use (`ModuleUsage.writeUsage`). Never cleared. Unlike the other recorders it
does not wait for `enableUsageRecording`: plugins are loaded before `runFrontend` switches recording on.
-/
def recordCompilerCode : BaseIO Unit :=
  compilerCodeRef.set true

/-- Whether `recordCompilerCode` ran in this process. -/
def compilerCodeSeen : BaseIO Bool :=
  compilerCodeRef.get

/-- Whether a plugin's initializers are running (`withPluginLoading`). -/
private builtin_initialize pluginLoadingRef : IO.Ref Bool ← IO.mkRef false

/-- Runs `act`, a plugin's initializers (`Lean.loadPlugin`), marked as such for `pluginLoading`. -/
def withPluginLoading (act : IO α) : IO α := do
  pluginLoadingRef.set true
  try act finally pluginLoadingRef.set false

/-- Whether a plugin's initializers are running: state they set up before an environment exists is part of every
environment created afterwards, unlike that of an imported module's initializers. -/
def pluginLoading : BaseIO Bool :=
  pluginLoadingRef.get

/-- The option `Lean.Compiler.LCNF.main` sets while it compiles. Not a registered option: only `main` sets it,
`PassManager.run` drops it from the options it stores for a postponed compile, and `recordIfCompiling` and
`recordHintsIfCompiling` read it. -/
def inCompileOption : Name := `_inCompile

/-- Records compiler code (`recordCompilerCode`) if `opts` are a compile's (`inCompileOption`). Instance resolution
calls it: it reads the instance table, its priorities and scoped activation, which no used name records. -/
def recordIfCompiling (opts : Options) : BaseIO Unit := do
  if opts.get inCompileOption false then recordCompilerCode

/-- The unification hints that matched inside a compile in this process (`recordHintsIfCompiling`). -/
private builtin_initialize compileHintsRef : IO.Ref NameSet ← mkAccountedRef {}

/-- Records `hints`, the unification hints that match a query, if `opts` are a compile's (`inCompileOption`). A hint
from an imported module with digests makes every such module an extra use of the module (`ModuleUsage.writeUsage`):
the hint table is cross-module state no used name records. A toolchain hint is pinned by the Lean githash, and an
instance it resolves is recorded by `recordIfCompiling`. -/
def recordHintsIfCompiling (opts : Options) (hints : Array Name) : BaseIO Unit := do
  if opts.get inCompileOption false then compileHintsRef.modify fun s => hints.foldl (·.insert ·) s

/-- The unification hints recorded by `recordHintsIfCompiling`. -/
def compileHints : BaseIO NameSet :=
  compileHintsRef.get

/-- The constants of a declaration's type and value, with that type and value. -/
structure DeclConsts where
  type : Expr
  value? : Option Expr
  consts : NameSet

/-- Per name, the `DeclConsts` of the last axiom, definition, theorem or opaque given to `addDecl` under that
name, so that `ModuleUsage.refs` does not walk a kept constant's type and value again. -/
private builtin_initialize declConstsRef : IO.Ref (NameMap DeclConsts) ← mkAccountedRef {}

/-- `(name, type, value?)` of each constant `decl` adds as given: those of axioms, definitions, theorems and
opaques. `none` for inductive and quotient declarations. -/
private def declConstVals : Declaration → Option (Array (Name × Expr × Option Expr))
  | .axiomDecl v => some #[(v.name, v.type, none)]
  | .defnDecl v => some #[(v.name, v.type, some v.value)]
  | .thmDecl v => some #[(v.name, v.type, some v.value)]
  | .opaqueDecl v => some #[(v.name, v.type, some v.value)]
  | .mutualDefnDecl vs => some (vs.toArray.map fun v => (v.name, v.type, some v.value))
  | _ => none

/-- When recording is on, records the constants of `decl` as used and, per constant it adds as given, its
`DeclConsts`, computed here from `decl` itself; returns the constants, `none` when recording is off. -/
def recordDeclConsts (decl : Declaration) : BaseIO (Option NameSet) := do
  unless (← usageRecordingRef.get) do return none
  let some vals := declConstVals decl | do
    let used := decl.foldExprM (m := Id) (fun s e => e.foldConsts s fun c s => s.insert c) ({} : NameSet)
    usedByChecksRef.modify fun acc => used.foldl (·.insert ·) acc
    return some used
  -- one walk of type and value, so that a subterm they share is visited once
  let recs := vals.map fun (n, type, value?) =>
    let consts := (value?.elim type (.app type ·)).foldConsts ({} : NameSet) fun c s => s.insert c
    (n, ({ type, value?, consts } : DeclConsts))
  let used := recs.foldl (fun acc (_, r) => r.consts.foldl (·.insert ·) acc) ({} : NameSet)
  usedByChecksRef.modify fun acc => used.foldl (·.insert ·) acc
  declConstsRef.modify fun m => recs.foldl (fun m (n, r) => m.insert n r) m
  return some used

/-- The `DeclConsts` recorded so far. -/
def recordedDeclConsts : BaseIO (NameMap DeclConsts) :=
  declConstsRef.get

/-- The number of `runFrontend` runs started in this process (`startFrontendRun`). -/
private builtin_initialize frontendRunsRef : IO.Ref Nat ← mkAccountedRef 0
/-
The recorders below file what code observed by the task context it ran in (`getTaskContext`): a command's, or a
realization's, which counts for every command that used the realization (`commandContexts`). Each is indexed by context
as it records, so that looking up a command's or a realization's contexts costs what those contexts recorded, except
the log of every context's declarations, which the module's records read once in recording order (`declsByContext`).
Lists are newest first: a global ref's value is multi-threaded and so never exclusive, and `Array.push` on it would copy
the whole log at every record; the maps and sets are persistent for the same reason.
-/
/-- The declarations and dependencies submitted to `addDecl`, by task context. -/
private builtin_initialize declsByContextRef : IO.Ref (List (UInt32 × Array Name × NameSet)) ← mkAccountedRef []
/-- Per realization context, the declarations and dependencies its code submitted to `addDecl`, newest first. -/
private builtin_initialize realizationDeclsRef : IO.Ref (PersistentHashMap UInt32 (List (Array Name × NameSet))) ←
  mkAccountedRef {}
/-- Per task context, the constants whose values its code consulted without leaving a reference in the elaborated
term. -/
private builtin_initialize usedByContextRef : IO.Ref (PersistentHashMap UInt32 NameSet) ← mkAccountedRef {}
/-- Per task context, the attributes whose handlers may run code outside core Lean (`Lean.provenAttribute`) that its code
ran, newest first. Such a handler may write state no command payload carries. -/
private builtin_initialize foreignAttributesByContextRef : IO.Ref (PersistentHashMap UInt32 (List Name)) ←
  mkAccountedRef {}
/-- Per task context, what its code read of the module's file beyond its command's own source
(`recordFileContextRead`). -/
private builtin_initialize fileContextByContextRef : IO.Ref (PersistentHashMap UInt32 UInt8) ← mkAccountedRef {}
/-- Per task context, the extra module uses its code recorded (`recordContextExtraModUse`): module, exported, meta. -/
private builtin_initialize extraModUsesByContextRef :
    IO.Ref (PersistentHashMap UInt32 (PersistentHashSet (Name × Bool × Bool))) ← mkAccountedRef {}
/-- Per realization a keep re-added and published (`recordRealizationObservations`), the process values the realization
read in the build the kept payload is from, which no read of this run records. -/
private builtin_initialize carriedValuesByContextRef : IO.Ref (PersistentHashMap UInt32 (Array String)) ←
  mkAccountedRef {}

@[extern "lean_io_set_task_context"]
private opaque setTaskContext (c : UInt32) : BaseIO Unit

/-- The runtime's task context of the running code: a word every task inherits from the thread that creates it, in
force while the task runs. `0` outside any command; `i + 1` while the frontend elaborates command `i` with recording
on (`withCommandContext`), in that command's asynchronous work too; a realization's own while its `realize` runs
(`withRealizationContext`). -/
@[extern "lean_io_get_task_context"]
opaque getTaskContext : BaseIO UInt32

/-- The task context of imported modules' initializers and extension initial states while a module's header is
processed (`withImportContext`). -/
def importContext : UInt32 := 0xFFFFFFFE

/-- The first task context of a realization (`withRealizationContext`): command contexts lie below it, the import
context above every realization's. -/
def realizationContextBase : UInt32 := 0x80000000

/-- Command `i`'s task context (`withCommandContext`). -/
def commandContext (i : Nat) : UInt32 := (i + 1).toUInt32

/-- Whether `c` is a realization's task context (`withRealizationContext`). -/
def isRealizationContext (c : UInt32) : Bool :=
  realizationContextBase ≤ c && c < importContext

/-- A new realization's handle while recording is on: this process's epoch, which a handle another process made (a
realization cache loaded from a snapshot) lacks, and a task context no code had before, for the realization's `realize`
to run in (`withRealizationContext`), from `realizationContextBase`; `0` with recording off. -/
@[extern "lean_io_new_realization_context"]
opaque newRealizationContext : BaseIO UInt64

/-- Records that the running code's task context used the realization with the handle `r` (`newRealizationContext`):
what the realization's code observed counts as the context's (`contextClosure`). Nothing for `0`, for another process's
handle, or outside any context. -/
@[extern "lean_io_note_context_use"]
opaque noteRealizationUse (r : UInt64) : BaseIO Unit

/-- Runs `act`, a realization's `realize`, in the task context of its handle `r` (`newRealizationContext`), restoring
the previous context after: what `act` and the tasks it creates record is the realization's. For `0`, `act` runs in the
running context. -/
def withRealizationContext [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (r : UInt64) (act : m α) : m α := do
  if r == 0 then return ← act
  let old ← (getTaskContext : BaseIO UInt32)
  (setTaskContext r.toUInt32 : BaseIO Unit)
  try act finally (setTaskContext old : BaseIO Unit)

/-- `c` and the task contexts of the realizations its code used (`noteRealizationUse`), directly or through other
realizations, `c` first. -/
@[extern "lean_io_context_closure"]
opaque contextClosure (c : UInt32) : BaseIO (Array UInt32)

/-- The task contexts whose code counts as command `i`'s: its own (`withCommandContext`) and those of the realizations
it used, directly or through other realizations (`contextClosure`), however many other commands used them too, so that
what a command observed is the same whether it ran a realization or got the cached result. -/
def commandContexts (i : Nat) : BaseIO (Array UInt32) :=
  contextClosure (commandContext i)

@[extern "lean_io_live_tasks"]
private opaque liveTasks (c : UInt32) : BaseIO UInt32

/-- How many of the tasks that run code which `ctxs` created while recording was on are not finished. -/
private def unfinishedTasksOf (ctxs : Array UInt32) : BaseIO Nat :=
  ctxs.foldlM (init := 0) fun n c => return n + (← liveTasks c).toNat

/-- How many tasks that run code command `i` created while recording was on (in its task context, `withCommandContext`),
or a realization it used (`commandContexts`), are not finished: queued, running, or waiting for another task. Promises
are not counted: whoever resolves one runs in its own context. While none is, the code of the command and of its
realizations cannot note an effect or use another realization any more (`takeRecordedEffects`). -/
def unfinishedCommandTasks (i : Nat) : BaseIO Nat := do
  unfinishedTasksOf (← commandContexts i)

/-- How many tasks that code of the import context (`withImportContext`), or a realization it used, created while
recording was on are not finished. While none is, imported modules' initializers and extensions' initial states cannot
note an effect or a nondeterministic read any more (`RecordedEffects.ofImport`, `importReadNondeterministic`). -/
def unfinishedImportTasks : BaseIO Nat := do
  unfinishedTasksOf (← contextClosure importContext)

@[extern "lean_io_set_effect_recording"]
private opaque setEffectRecording (on : Bool) (pinned : @& Array String) (root solver : @& String) : BaseIO Unit

@[extern "lean_io_take_effects"]
private opaque takeEffects : BaseIO (Array (UInt32 × String))

/-- The process values read in any context since recording was switched on (`startFrontendRun`), sorted by key: each
environment variable (`env:NAME`), the running executable's path (`appPath`), the working directory
(`workingDirectory`), and the toolchain directories (`toolchain`) when a command read a file in them or ran the
toolchain's SAT solver on its own files (`pinnedToolchainDirs`), which the runtime then does not note as an effect,
with the solver's path (`solver`) in the latter case; each with the value first read (`none`: absent), whether a
later read saw another value, and the task contexts that read it, commands' and realizations' (`withCommandContext`,
`withRealizationContext`, the tasks they start included; a read outside any command or in the import context is the
module's alone), sorted: `commandValueKeys` gives each command's. Takes them. -/
@[extern "lean_io_take_value_reads"]
opaque takeValueReads : BaseIO (Array (String × Option String × Bool × Array UInt32))

@[extern "lean_io_context_value_keys"]
private opaque contextValueKeys (cs : @& Array UInt32) : BaseIO (Array String)

/-- `xs` sorted by `lt`, without repeats. -/
private def sortedDistinct [BEq α] (lt : α → α → Bool) (xs : Array α) : Array α :=
  (xs.qsort lt).foldl (init := #[]) fun out x => if out.back? == some x then out else out.push x

/-- Per command of `cmds`, the process values its contexts (`commandContexts`) read: those `reads` (`takeValueReads`)
lists for one of them, and those a realization it used carried from the build a keep took it from
(`recordRealizationObservations`); sorted, without repeats. Commands that read none have no entry. -/
def commandValueKeys (reads : Array (String × Option String × Bool × Array UInt32)) (cmds : Array Nat) :
    BaseIO (Std.HashMap Nat (Array String)) := do
  let byContext : Std.HashMap UInt32 (Array String) := reads.foldl (init := {}) fun m (k, _, _, cs) =>
    cs.foldl (fun m c => m.insert c ((m.getD c #[]).push k)) m
  let carried ← carriedValuesByContextRef.get
  let mut out : Std.HashMap Nat (Array String) := {}
  for i in cmds do
    let keys := (← commandContexts i).foldl (init := #[]) fun ks c => ks ++ byContext.getD c #[] ++ carried.findD c #[]
    unless keys.isEmpty do out := out.insert i (sortedDistinct (· < ·) keys)
  return out

@[extern "lean_io_set_value_reads_unrecorded"]
private opaque setValueReadsUnrecorded (b : Bool) : BaseIO Bool

/-- Runs `act` without recording the process values it reads on the running thread (`takeValueReads`; a task it starts
records its own): a run's check of the values a previous run read is no read of the run's own. Nested uses restore the
setting of the enclosing one. -/
def withoutValueReads [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (act : m α) : m α := do
  let prev ← (setValueReadsUnrecorded true : BaseIO Bool)
  try act finally (discard (setValueReadsUnrecorded prev) : BaseIO Unit)

/-- The value of the process value `key` (`takeValueReads`) in this process now, `none` if absent or unreadable;
throws for an unknown key. -/
def currentValue? (key : String) : IO (Option String) := do
  if let some name := key.dropPrefix? "env:" then return ← IO.getEnv name.copy
  let read : Option (IO System.FilePath) := match key with
    | "appPath" => some IO.appPath
    | "workingDirectory" => some IO.currentDir
    | "toolchain" => some getBuildDir
    | _ => none
  let some read := read | throw <| IO.userError s!"unknown process value {key}"
  try return some (toString (← read)) catch _ => return none

/-- The directories under the running Lean's root that the Lean githash pins (its executables, headers and library),
whose files a command reads without an effect, and the SAT solver it ships (`bv_decide`'s default), which a command
runs without an effect on files it created, with no environment and no file named as compressed, the solver reading
and writing only the files its command line names: the root is recorded as the value `toolchain` instead, and the
solver's path as `solver` (`ModuleUsage.recordedValue?` records its bytes). -/
def pinnedToolchainDirs : IO (String × Array String × String) := do
  let root ← getBuildDir
  return (toString root, #[toString (root / "bin"), toString (root / "include"), toString (← getLibDir root)],
    toString ((root / "bin" / "cadical").withExtension System.FilePath.exeExtension))

/-- The actions that clear the per-run logs of other modules (`registerRunLog`). -/
private builtin_initialize runLogClearsRef : IO.Ref (Array (BaseIO Unit)) ← mkAccountedRef #[]

/-- Registers `clear`, which empties a per-run log another module keeps, for `startFrontendRun`. Only during
initialization. -/
def registerRunLog (clear : BaseIO Unit) : IO Unit := do
  unless (← IO.initializing) do
    throw (IO.userError "failed to register a per-run usage log, logs can only be registered during initialization")
  runLogClearsRef.modify (·.push clear)

/--
Starts a `runFrontend` run and returns its number, which no earlier run got. With `record`, switches recording on
(`enableUsageRecording`) with the runtime's effect notes and value reads (`takeRecordedEffects`, `takeValueReads`;
`pinnedToolchainDirs`), and clears the per-run logs: the names `addDecl` and `recordUsedName` recorded, the per-context
logs, the effect notes, the value reads, the uses of realizations, and the logs other modules registered
(`registerRunLog`). The names the resolver looked up (`resolvedNames`) are kept for the whole process. The logs are
global, so a frontend that runs in-process during a run (an `#eval` calling `runFrontend`) clears or extends them; the
run detects it by `lastFrontendRun` at its end.
-/
def startFrontendRun (record : Bool) : BaseIO Nat := do
  let run ← frontendRunsRef.modifyGet fun n => (n + 1, n + 1)
  if record then
    -- before recording starts: reading the executable's path here is no read of the run's
    let (root, pinned, solver) ← (pinnedToolchainDirs.toBaseIO : BaseIO _) <&> (·.toOption.getD ("", #[], ""))
    enableUsageRecording
    usedByChecksRef.set {}
    declsByContextRef.set []
    realizationDeclsRef.set {}
    usedByContextRef.set {}
    foreignAttributesByContextRef.set {}
    fileContextByContextRef.set {}
    extraModUsesByContextRef.set {}
    carriedValuesByContextRef.set {}
    setEffectRecording true pinned root solver
    for clear in ← runLogClearsRef.get do clear
  return run

/-- The number of the last run started (`startFrontendRun`). -/
def lastFrontendRun : BaseIO Nat :=
  frontendRunsRef.get

/-- Runs `act`, the elaboration of command `i`, with the task context `i + 1` while recording is on (`getTaskContext`),
restoring the previous context after: what `act` and the tasks it creates record is attributed to command `i`. -/
def withCommandContext [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (i : Nat) (act : m α) : m α := do
  unless (← (usageRecordingRef.get : BaseIO Bool)) do return ← act
  let old ← (getTaskContext : BaseIO UInt32)
  (setTaskContext (commandContext i) : BaseIO Unit)
  try act finally (setTaskContext old : BaseIO Unit)

/-- Runs `act`, which runs imported modules' initializers or computes the initial states of environment extensions
while a module's header is processed, in the import context (`importContext`) when recording is on outside any command:
its uses of process-wide state concern every command of the module (`RecordedEffects.atImport`). Inside a command (an
import a command makes), `act` stays the command's. -/
def withImportContext [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (act : m α) : m α := do
  unless (← (usageRecordingRef.get : BaseIO Bool)) do return ← act
  unless (← (getTaskContext : BaseIO UInt32)) == 0 do return ← act
  (setTaskContext importContext : BaseIO Unit)
  try act finally (setTaskContext 0 : BaseIO Unit)

/-- The running code's task context when recording is on and the code is a command's or a realization's: where the
recorders file what it observed. -/
private def recordingContext? : BaseIO (Option UInt32) := do
  unless (← usageRecordingRef.get) do return none
  let c ← getTaskContext
  return if c == 0 || c == importContext then none else some c

/-- Records, when recording is on and inside a command or a realization (`recordingContext?`), that it submitted the
declarations `names` to `addDecl`, with the constants `used` of their types and values; a realization's also by its
context (`realizationObservations`). -/
def recordCommandDecls (names : Array Name) (used : NameSet) : BaseIO Unit := do
  if let some c ← recordingContext? then
    declsByContextRef.modify ((c, names, used) :: ·)
    if isRealizationContext c then realizationDeclsRef.modify fun m => m.insert c ((names, used) :: m.findD c [])

/-- Records, when recording is on and inside a command or a realization (`recordingContext?`), that it consulted the
value of `n` without leaving a reference to it: for the context (`usedByContexts`), and for the module (`usedNames`),
as a kept command's record adds it to a reuse run's. -/
def recordUsedByCommand (n : Name) : BaseIO Unit := do
  if let some c ← recordingContext? then
    unless ((← usedByContextRef.get).find? c).any (·.contains n) do
      usedByContextRef.modify fun m => m.insert c ((m.findD c {}).insert n)
    unless (← usedByChecksRef.get).contains n do usedByChecksRef.modify (·.insert n)

/-- Records, when recording is on and inside a command or a realization (`recordingContext?`), that it ran a handler of
the attribute `attr` that may run code outside core Lean. -/
def recordForeignAttribute (attr : Name) : BaseIO Unit := do
  if let some c ← recordingContext? then foreignAttributesByContextRef.modify fun m => m.insert c (attr :: m.findD c [])

/-- The file name of the module being elaborated (`commandFileContextReads`). -/
def FileContextRead.fileName : UInt8 := 1
/-- The module's source, beyond the syntax of the command reading it (`commandFileContextReads`). -/
def FileContextRead.source : UInt8 := 2

/-- Records, when recording is on and inside a command or a realization (`recordingContext?`), that it read `what`
(`FileContextRead`) through the elaborators' accessors (`MonadLog.getFileName`, `MonadFileMap.getFileMap`). Core reads
of positions and text of the command's own syntax, and of the file name for message metadata, use other accessors and
are not recorded: a reuse run compares the command's source and position (`CommandSpan`), and shows its messages with
the file name it runs on. -/
def recordFileContextRead (what : UInt8) : BaseIO Unit := do
  if let some c ← recordingContext? then
    let bits := ((← fileContextByContextRef.get).find? c).getD 0
    unless bits ||| what == bits do
      fileContextByContextRef.modify fun m => m.insert c (m.findD c 0 ||| what)

/-- Records, when recording is on and inside a command or a realization (`recordingContext?`), the extra module use of
`module` (`Lean.recordExtraModUse`) with its visibility and phase, writing the log only when the use is new. -/
@[noinline] def recordContextExtraModUse (module : Name) (isExported isMeta : Bool) : BaseIO Unit := do
  if let some c ← recordingContext? then
    let u := (module, isExported, isMeta)
    unless ((← extraModUsesByContextRef.get).find? c).any (·.contains u) do
      extraModUsesByContextRef.modify fun m => m.insert c ((m.findD c {}).insert u)

/-- `own` followed by the elements of `others` it lacks, sorted by `lt`, without repeats: what a command observed
through its own context, in order, then through the realizations it used, in an order that does not depend on which
command ran them or when. -/
private def withRealizations [BEq α] (lt : α → α → Bool) (own others : Array α) : Array α :=
  (sortedDistinct lt others).foldl (init := own) fun out x => if out.contains x then out else out.push x

/-- The records of `recordCommandDecls`, oldest first, each with the task context that made it. -/
def declsByContext : BaseIO (Array (UInt32 × Array Name × NameSet)) :=
  return (← declsByContextRef.get).toArray.reverse

/-- The constants the task contexts `ctxs` used without a reference (`recordUsedByCommand`). -/
def usedByContexts (ctxs : Array UInt32) : BaseIO NameSet := do
  let m ← usedByContextRef.get
  return ctxs.foldl (init := {}) fun s c => (m.findD c {}).foldl (·.insert ·) s

/-- What the task contexts `ctxs` read of the module's file (`FileContextRead` bits, `recordFileContextRead`). -/
def fileContextReadsOf (ctxs : Array UInt32) : BaseIO UInt8 := do
  let m ← fileContextByContextRef.get
  return ctxs.foldl (init := 0) fun bits c => bits ||| m.findD c 0

/-- What command `i` read of the module's file (`FileContextRead` bits), through its contexts (`commandContexts`). -/
def commandFileContextReads (i : Nat) : BaseIO UInt8 := do
  fileContextReadsOf (← commandContexts i)

/-- Orders extra module uses by module, then visibility and phase. -/
private def extraLt (a b : Name × Bool × Bool) : Bool :=
  let k (u : Name × Bool × Bool) := 2 * u.2.1.toNat + u.2.2.toNat
  Name.quickLt a.1 b.1 || (a.1 == b.1 && k a < k b)

/-- The extra module uses (module, exported, meta) the task contexts `ctxs` recorded (`recordContextExtraModUse`),
sorted, without repeats. -/
def extraModUsesOf (ctxs : Array UInt32) : BaseIO (Array (Name × Bool × Bool)) := do
  let m ← extraModUsesByContextRef.get
  return sortedDistinct extraLt (ctxs.foldl (init := #[]) fun us c => (m.findD c {}).fold (·.push ·) us)

/-- The attributes with handlers outside core Lean that command `i`, with the contexts `ctxs` (`commandContexts`), ran
(`recordForeignAttribute`): those its own code ran, in order, then those its realizations ran (`withRealizations`). -/
def commandForeignAttributes (i : Nat) (ctxs : Array UInt32) : BaseIO (Array Name) := do
  let own := commandContext i
  let m ← foreignAttributesByContextRef.get
  let ofOwn := (m.findD own []).toArray.reverse
  if ctxs.size ≤ 1 then return ofOwn
  let ofRealizations := ctxs.foldl (init := #[]) fun as c => if c == own then as else as ++ (m.findD c []).toArray
  return withRealizations Name.quickLt ofOwn ofRealizations

/-- What a realization's code observed that a command which used it observed too (`commandContexts`), as a command
payload's realization record carries it (`CommandEntries`), so that a keep, which re-adds the realization without
running `realize`, hands it to every later request (`recordRealizationObservations`): the process values it read, the
constants it used without a reference, what it read of the module's file (`FileContextRead` bits), its extra module
uses (module, exported, meta), and the declarations it submitted to `addDecl` that the command's environment after it
lacks (an `evalExpr`'s, whose uses count as the command's, `ModuleUsage.commandRecords`) with the constants of their
types and values; each sorted. Its effects and reads of values tied to the run are not among them: they refuse every
command that used the realization and mark it as not to be kept, so no kept command has any. -/
structure RealizationObservations where
  values : Array String := #[]
  uses : Array Name := #[]
  fileContext : UInt8 := 0
  extra : Array (Name × Bool × Bool) := #[]
  decls : Array (Array Name × Array Name) := #[]
  deriving Inhabited, BEq

@[extern "lean_io_realization_context_of"]
private opaque realizationContextOf (r : UInt64) : BaseIO UInt32

/-- Orders names arrays lexicographically by `Name.quickLt`. -/
private def namesLt (a b : Array Name) : Bool := Id.run do
  for x in a, y in b do
    if Name.quickLt x y then return true
    if Name.quickLt y x then return false
  return a.size < b.size

/-- What the realization with the handle `r` (`newRealizationContext`) observed (`RealizationObservations`), through its
own task context and those of the realizations it used (`contextClosure`); of its declarations, those `lacks` (the
requesting command's environment lacks one of them); nothing for `0` or another process's handle. -/
def realizationObservations (lacks : Array Name → Bool) (r : UInt64) : BaseIO RealizationObservations := do
  let c ← realizationContextOf r
  if c == 0 then return {}
  let ctxs ← contextClosure c
  let carried ← carriedValuesByContextRef.get
  let values := ctxs.foldl (init := ← contextValueKeys ctxs) fun vs c => vs ++ carried.findD c #[]
  let byContext ← realizationDeclsRef.get
  let decls := ctxs.foldl (init := #[]) fun ds c => (byContext.findD c []).foldl (init := ds) fun ds (ns, used) =>
    if lacks ns then ds.push (ns, used.toArray) else ds
  return {
    values := sortedDistinct (· < ·) values
    uses := (← usedByContexts ctxs).toArray
    fileContext := ← fileContextReadsOf ctxs
    extra := ← extraModUsesOf ctxs
    decls := sortedDistinct (fun a b => namesLt a.1 b.1 || (a.1 == b.1 && namesLt a.2 b.2)) decls }

/-- Files `obs`, what a realization a keep re-added observed in the build its payload is from, under the handle `r` the
keep published the realization with (`Environment.PendingRealizations.publish`): a command that gets the realization
from the cache uses `r` (`noteRealizationUse`) and observes them as if the realization had run in `r`'s context. -/
def recordRealizationObservations (r : UInt64) (obs : RealizationObservations) : BaseIO Unit := do
  let c ← realizationContextOf r
  unless c != 0 && (← usageRecordingRef.get) do return
  unless obs.values.isEmpty do carriedValuesByContextRef.modify (·.insert c obs.values)
  unless obs.uses.isEmpty do
    usedByContextRef.modify fun m => m.insert c (obs.uses.foldl (·.insert ·) (m.findD c {}))
  unless obs.fileContext == 0 do fileContextByContextRef.modify fun m => m.insert c (m.findD c 0 ||| obs.fileContext)
  unless obs.extra.isEmpty do
    extraModUsesByContextRef.modify fun m => m.insert c (obs.extra.foldl (·.insert ·) (m.findD c {}))
  for (ns, used) in obs.decls do
    let used := used.foldl (·.insert ·) {}
    declsByContextRef.modify ((c, ns, used) :: ·)
    realizationDeclsRef.modify fun m => m.insert c ((ns, used) :: m.findD c [])

/-- The effects on state outside the code that had them, as the runtime noted them (`src/runtime/io.cpp`). -/
structure RecordedEffects where
  /-- Each command's (by index): a write to a reference another command, or code outside any command, created; the
  resolution of a promise, or the cancellation of a task, another command created; the use of a mutable native object
  another context created; each use of process-wide state through the runtime's primitives (a file or directory the
  command did not create, outside the toolchain's; a file handle it did not open, among them the standard streams; a
  file it created and left in place; the working directory changed; a child process; the network; signals; a native
  library loaded; the runtime's and the process's settings; host facts). No payload carries them. -/
  byCommand : Array (Nat × String) := #[]
  /-- Each realization's, by its task context (`withRealizationContext`), of the same kinds: they are the effects of
  every command that used the realization (`RecordedEffects.ofCommand`). -/
  byRealization : Array (UInt32 × String) := #[]
  /-- The uses of process-wide state of imported modules' initializers and extension initial states while the header
  was processed (`withImportContext`), on which every command of the module may depend. -/
  atImport : Array String := #[]

instance : Append RecordedEffects where
  append a b := { byCommand := a.byCommand ++ b.byCommand, byRealization := a.byRealization ++ b.byRealization,
                  atImport := a.atImport ++ b.atImport }

/-- The effects the runtime noted since the run started (`RecordedEffects`). Takes them: a second call returns only
those since. -/
def takeRecordedEffects : BaseIO RecordedEffects := do
  return (← takeEffects).foldl (init := {}) fun r (c, what) =>
    if c == importContext then { r with atImport := r.atImport.push what }
    else if isRealizationContext c then { r with byRealization := r.byRealization.push (c, what) }
    else { r with byCommand := r.byCommand.push (c.toNat - 1, what) }

/-- The effects of the realizations among `ctxs`. -/
private def RecordedEffects.ofRealizations (e : RecordedEffects) (ctxs : Array UInt32) : Array String :=
  e.byRealization.filterMap fun (c, what) => if ctxs.contains c then some what else none

/-- Command `i`'s effects, with its contexts `ctxs` (`commandContexts`): its own, in the order noted, then those of the
realizations it used (`withRealizations`). -/
def RecordedEffects.ofCommand (e : RecordedEffects) (i : Nat) (ctxs : Array UInt32) : Array String :=
  let own := e.byCommand.filterMap fun (k, what) => if k == i then some what else none
  if ctxs.size ≤ 1 then own else withRealizations (· < ·) own (e.ofRealizations ctxs)

/-- The import context's effects: its own (`RecordedEffects.atImport`), then those of the realizations its code used
(`withRealizations`). -/
def RecordedEffects.ofImport (e : RecordedEffects) : BaseIO (Array String) := do
  let ctxs ← contextClosure importContext
  return if ctxs.size ≤ 1 then e.atImport else withRealizations (· < ·) e.atImport (e.ofRealizations ctxs)

@[extern "lean_io_read_nondeterministic"]
private opaque readNondeterministic (c : UInt32) : BaseIO Bool

/-- Whether command `i` (in its task context, `withCommandContext`, the tasks it starts included) or a realization it
used (`commandContexts`) read a value tied to this process or this moment since the run started (`startFrontendRun`): a
clock (`IO.monoMsNow`, `IO.monoNanosNow`, `Std.Time.Timestamp.now`), a process, thread or child process id
(`IO.Process.getPID`, `IO.getTID`, `IO.Process.Child.pid`), the libuv counterparts and uptime, the process's resource
usage, the system's memory, the number of hardware threads (`System.Platform.Internal.getHardwareConcurrency`), or
whether a handle is a terminal (`IO.FS.Handle.isTty`). Not an effect (`takeRecordedEffects`). Such a value from another
run is one this run cannot produce, so such a command is not kept; values with the same range in every run (random
bytes, the random generator's numbers, task states, temporary file names, heartbeats) are not recorded. -/
def commandReadNondeterministic (i : Nat) : BaseIO Bool := do
  (← commandContexts i).anyM readNondeterministic

/-- Whether an imported module's initializer or an extension's initial state, while the header was processed
(`withImportContext`), read a value tied to this process or this moment, as `commandReadNondeterministic` records for a
command, or a value with the same range in every run: random bytes, the random generator's numbers (`IO.rand`,
`IO.setRandSeed` and every other user of `IO.stdGenRef`, `IO.noteRandomGeneratorUse`), a temporary file name, a task's
state (`IO.getTaskState`, `IO.hasFinished`, `IO.Promise.isResolved`), which task finished first (`IO.waitAny`),
cancellation (`IO.checkCanceled`), or how the tasks it started that run IO code (`IO.asTask`, `IO.mapTask`,
`IO.bindTask`) were scheduled; or a realization its code used read a value tied to the run. Every command of the module
may hold such a value, so that commands kept from another run and commands elaborated in this one would hold different
ones. -/
def importReadNondeterministic : BaseIO Bool := do
  (← contextClosure importContext).anyM readNondeterministic

@[extern "lean_io_set_nondeterministic_reads_unrecorded"]
private opaque setNondeterministicReadsUnrecorded (b : Bool) : BaseIO Bool

/-- Runs `act` without recording its reads on the running thread for `commandReadNondeterministic` (a task it starts
records its own): for the elaborator's own reads, whose values reach no command's effects. Nested uses restore the
setting of the enclosing one. -/
def withoutNondeterministicReads [Monad m] [MonadFinally m] [MonadLiftT BaseIO m] (act : m α) : m α := do
  let prev ← (setNondeterministicReadsUnrecorded true : BaseIO Bool)
  try act finally (discard (setNondeterministicReadsUnrecorded prev) : BaseIO Unit)

end Lean
