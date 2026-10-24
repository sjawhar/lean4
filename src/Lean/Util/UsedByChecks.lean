/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Data.NameMap.Basic
public import Lean.Declaration
public import Init.System.IO
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
environment that is then discarded (`example`, `#eval`, `#guard`), and the names `recordUsedName` adds. -/
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
The per-command logs below are lists, newest first, read once in recording order (`List.toArray.reverse`): a global
ref's value is multi-threaded and so never exclusive, and `Array.push` on it would copy the whole log at every record.
-/
/-- The declarations and dependencies submitted to `addDecl`, grouped by top-level command. -/
private builtin_initialize declsByCommandRef : IO.Ref (List (Nat × Array Name × NameSet)) ← mkAccountedRef []
/-- Constants whose values were consulted without leaving a reference in the elaborated term. -/
private builtin_initialize usedByCommandRef : IO.Ref (List (Nat × Name)) ← mkAccountedRef []
/-- The attributes whose handlers may run code outside core Lean (`Lean.provenAttribute`) that a top-level command
ran. Such a handler may write state no command payload carries. -/
private builtin_initialize foreignAttributesByCommandRef : IO.Ref (List (Nat × Name)) ← mkAccountedRef []

@[extern "lean_io_set_task_context"]
private opaque setTaskContext (c : UInt32) : BaseIO Unit

/-- The runtime's task context of the running code: a word every task inherits from the thread that creates it, in
force while the task runs. `0` outside any command; `i + 1` while the frontend elaborates command `i` with recording
on (`withCommandContext`), in that command's asynchronous work too. -/
@[extern "lean_io_get_task_context"]
opaque getTaskContext : BaseIO UInt32

/-- The task context of imported modules' initializers and extension initial states while a module's header is
processed (`withImportContext`). -/
def importContext : UInt32 := 0xFFFFFFFE

@[extern "lean_io_set_effect_recording"]
private opaque setEffectRecording (on : Bool) (pinned : @& Array String) (root solver : @& String) : BaseIO Unit

@[extern "lean_io_take_effects"]
private opaque takeEffects : BaseIO (Array (UInt32 × String))

/-- The process values read in any context since recording was switched on (`startFrontendRun`), sorted by key: each
environment variable (`env:NAME`), the running executable's path (`appPath`), the working directory
(`workingDirectory`), and the toolchain directories (`toolchain`) when a command read a file in them or ran the
toolchain's SAT solver on its own files (`pinnedToolchainDirs`), which the runtime then does not note as an effect,
with the solver's path (`solver`) in the latter case; each with the value first read (`none`: absent), whether a
later read saw another value, and the commands that read it (`withCommandContext`, the tasks a command starts included;
a read outside any command or in the import context is the module's alone), sorted. Takes them. -/
@[extern "lean_io_take_value_reads"]
opaque takeValueReads : BaseIO (Array (String × Option String × Bool × Array Nat))

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
`pinnedToolchainDirs`), and clears the per-run logs: the names `addDecl` and `recordUsedName` recorded, the per-command
logs, the effect notes, the value reads, and the logs other modules registered (`registerRunLog`). The names the
resolver looked up (`resolvedNames`) are kept for the whole process. The logs are
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
    declsByCommandRef.set []
    usedByCommandRef.set []
    foreignAttributesByCommandRef.set []
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
  (setTaskContext (i + 1).toUInt32 : BaseIO Unit)
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

/-- The command whose elaboration the running code belongs to (`withCommandContext`), `none` outside any. -/
def commandIdx? : BaseIO (Option Nat) := do
  let c ← getTaskContext
  return if c == 0 || c == importContext then none else some (c.toNat - 1)

/-- Records, when recording is on and inside a command (`commandIdx?`), that it submitted the declarations `names` to
`addDecl`, with the constants `used` of their types and values. -/
def recordCommandDecls (names : Array Name) (used : NameSet) : BaseIO Unit := do
  if (← usageRecordingRef.get) then
    if let some i ← commandIdx? then declsByCommandRef.modify ((i, names, used) :: ·)

/-- Records, when recording is on and inside a command (`commandIdx?`), that it consulted the value of `n` without
leaving a reference to it. -/
def recordUsedByCommand (n : Name) : BaseIO Unit := do
  if (← usageRecordingRef.get) then
    if let some i ← commandIdx? then usedByCommandRef.modify ((i, n) :: ·)

/-- Records, when recording is on and inside a command (`commandIdx?`), that it ran a handler of the attribute `attr`
that may run code outside core Lean. -/
def recordForeignAttribute (attr : Name) : BaseIO Unit := do
  if (← usageRecordingRef.get) then
    if let some i ← commandIdx? then foreignAttributesByCommandRef.modify ((i, attr) :: ·)

/-- The effects on state outside the code that had them, as the runtime noted them (`src/runtime/io.cpp`). -/
structure RecordedEffects where
  /-- Each command's (by index): a write to a reference another command, or code outside any command, created; the
  resolution of a promise, or the cancellation of a task, another command created; the use of a mutable native object
  another context created; each use of process-wide state through the runtime's primitives (a file or directory the
  command did not create, outside the toolchain's; a file handle it did not open, among them the standard streams; a
  file it created and left in place; the working directory changed; a child process; the network; signals; a native
  library loaded; the runtime's and the process's settings; host facts). No payload carries them. -/
  byCommand : Array (Nat × String) := #[]
  /-- The uses of process-wide state of imported modules' initializers and extension initial states while the header
  was processed (`withImportContext`), on which every command of the module may depend. -/
  atImport : Array String := #[]

/-- The effects the runtime noted since the run started (`RecordedEffects`). Takes them: a second call returns only
those since. -/
def takeRecordedEffects : BaseIO RecordedEffects := do
  return (← takeEffects).foldl (init := {}) fun r (c, what) =>
    if c == importContext then { r with atImport := r.atImport.push what }
    else { r with byCommand := r.byCommand.push (c.toNat - 1, what) }

/-- The records of `recordCommandDecls`, newest first. -/
def declsByCommand : BaseIO (List (Nat × Array Name × NameSet)) :=
  declsByCommandRef.get

/-- The records of `recordUsedByCommand`, newest first. -/
def usedByCommand : BaseIO (List (Nat × Name)) :=
  usedByCommandRef.get

/-- The records of `recordForeignAttribute`, newest first. -/
def foreignAttributesByCommand : BaseIO (List (Nat × Name)) :=
  foreignAttributesByCommandRef.get

end Lean
