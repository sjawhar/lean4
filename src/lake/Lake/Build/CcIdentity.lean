/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Build.Job.Monad
import Init.While
import Init.Data.Array.QSort
import Init.Data.String.Search
import Init.Data.String.TakeDrop
import Std.Data.HashMap

/-! # C Compiler Identity

The same C source and flags give different object bytes under another compiler, or under the same
compiler configured for another default target (e.g., a `gcc` whose default is
`-march=x86-64-v3`). So the trace of a C object includes an identity of the compiler that builds
it: its `--version` text, the bytes of its executables that Lake can find (the driver and, for a
`gcc`-style driver, its compiler proper and assembler), and the macros it predefines for the
arguments of the compile, which show the effective target (`__AVX2__`, `__OPTIMIZE__`, ...).
The identity does not depend on where the compiler is installed or on the name it is run by.
A Lake process computes it once per compiler and language, and the macros once per set of
arguments.
-/

open System

namespace Lake

/-- The first of `files` that exists and is not a directory. -/
def findFile? (files : Array FilePath) : BaseIO (Option FilePath) := do
  for file in files do
    if (← file.pathExists) && !(← file.isDir) then
      return some file
  return none

/--
The file that the process spawn runs for the program `prog`, where Lake can tell: a name with a
directory part names a file (on Windows, with `.exe` added when it has no extension), and on POSIX
a bare name is looked up on `PATH`, as `execvp` does. On Windows, a bare name is not resolved,
because the spawn searches other directories before `PATH`.
-/
def findProgram? (prog : FilePath) : BaseIO (Option FilePath) := do
  if prog.components.length > 1 then
    if Platform.isWindows && prog.extension.isNone then
      return ← findFile? #[prog.addExtension FilePath.exeExtension, prog]
    return ← findFile? #[prog]
  if Platform.isWindows then
    return none
  let some path ← IO.getEnv "PATH"
    | return none
  -- An empty `PATH` entry is the working directory
  findFile? <| (SearchPath.parse path).toArray.map fun dir =>
    if dir.toString.isEmpty then prog else dir / prog

/-- Hashes a file in chunks, so that a large compiler executable is never in memory whole. -/
def hashFileChunked (file : FilePath) : IO Hash := do
  let h ← IO.FS.Handle.mk file .read
  let mut hash := Hash.nil
  repeat
    let chunk ← h.read 1048576
    if chunk.isEmpty then
      break
    hash := hash.mix (.ofByteArray chunk)
  return hash

/-- Hashes the executable `file`. -/
def hashExecutable (file : FilePath) : ExceptT String BaseIO Hash := do
  match (← (hashFileChunked file).toBaseIO) with
  | .ok hash => return hash
  | .error e => throw s!"failed to read '{file}': {e}"

/-- Runs the compiler `cc` with `args` (with no standard input) and returns its output. -/
def runCompiler
  (cc : FilePath) (args : Array String)
: BaseIO (Except IO.Error IO.Process.Output) :=
  IO.Process.output {cmd := cc.toString, args} |>.toBaseIO

/-- Runs the compiler `cc` with `args` and returns its standard output. -/
def captureCompiler (cc : FilePath) (args : Array String) : ExceptT String BaseIO String := do
  let cmd := " ".intercalate (cc.toString :: args.toList)
  match (← runCompiler cc args) with
  | .error e =>
    throw s!"failed to execute '{cmd}': {e}"
  | .ok out =>
    if out.exitCode == 0 then
      return out.stdout
    let stderr := out.stderr.trimAscii
    let stderr := if stderr.isEmpty then "" else s!"\nstderr:\n{stderr}"
    throw s!"'{cmd}' exited with code {out.exitCode}{stderr}"

/--
The file that a `gcc`-style driver runs as `tool` (`-print-prog-name`). Such a driver prints the
bare name of a tool it looks up on `PATH` (with `bare`, Lake looks it up too), and Clang prints a
bare `cc1`, which it runs within itself. Fails if the driver cannot be run.
-/
def findDriverTool?
  (cc : FilePath) (tool : String) (bare : Bool)
: ExceptT String BaseIO (Option FilePath) := do
  let out ← match (← runCompiler cc #[s!"-print-prog-name={tool}"]) with
    | .ok out => pure out
    | .error e => throw s!"failed to execute '{cc} -print-prog-name={tool}': {e}"
  let path : FilePath := out.stdout.trimAscii.copy
  if out.exitCode != 0 || path.toString.isEmpty || (!bare && path.components.length ≤ 1) then
    return none
  findProgram? path

/-- The compiler proper that a `gcc`-style driver runs for a source of language `lang`. -/
def compilerProper (lang : String) : String :=
  match lang with
  | "c++" => "cc1plus"
  | "objective-c" => "cc1obj"
  | "objective-c++" => "cc1objplus"
  | _ => "cc1"

/--
The executables of the compiler `cc` for a source of language `lang` that Lake can find: the driver
and, if its compiler proper is a separate file, that file and the assembler (`as`).
-/
def findCompilerExecutables
  (cc : FilePath) (lang : String)
: ExceptT String BaseIO (Array FilePath) := do
  let driver := (← findProgram? cc).toArray
  let some proper ← findDriverTool? cc (compilerProper lang) (bare := false)
    | return driver
  return driver.push proper ++ (← findDriverTool? cc "as" (bare := true)).toArray

/-- Lines of Clang's `--version` text that name where it is installed. -/
def isInstallPathLine (line : String) : Bool :=
  line.startsWith "InstalledDir:" || line.startsWith "Configuration file:"

/--
The `--version` text of the compiler `cc` without what depends on where it is installed (see
`isInstallPathLine`) or on the name it is run by, with which GCC starts the text
(`cc (GCC) 15.2.0`, `gcc (GCC) 15.2.0`, ...; Clang's `clang version ...` names no invocation).
-/
def normalizeVersion (cc : FilePath) (version : String) : String :=
  let lines := version.crlfToLf.split '\n' |>.toStringArray |>.filter (!isInstallPathLine ·)
  let name := (cc.fileName.getD cc.toString) ++ " "
  let lines := lines.modify 0 fun line =>
    match line.dropPrefix? name with
    | some rest => if rest.copy.startsWith "version " then line else "<cc> " ++ rest.copy
    | none => line
  "\n".intercalate lines.toList

/-- The hash of the compiler `cc` for language `lang`: its `--version` text and executables. -/
def computeCompilerHash (cc : FilePath) (lang : String) : ExceptT String BaseIO Hash := do
  let version ← captureCompiler cc #["--version"]
  let mut hash := Hash.ofString (normalizeVersion cc version)
  for exe in (← findCompilerExecutables cc lang) do
    hash := hash.mix (← hashExecutable exe)
  return hash

/--
Removes the macro definitions and removals (`-D`, `-U`) from compiler arguments.
They change no predefined macro but the one they name.
-/
def withoutMacroArgs (args : Array String) : Array String := Id.run do
  let mut kept := #[]
  let mut skipNext := false
  for arg in args do
    if skipNext then
      skipNext := false
    else if arg == "-D" || arg == "-U" then
      skipNext := true
    else if !(arg.startsWith "-D" || arg.startsWith "-U") then
      kept := kept.push arg
  return kept

/-- The hash of the macros the compiler `cc` predefines for `args` and source language `lang`. -/
def computeMacrosHash
  (cc : FilePath) (lang : String) (args : Array String)
: ExceptT String BaseIO Hash := do
  -- `-` reads the (empty) standard input of `IO.Process.output`
  let out ← captureCompiler cc (args ++ #["-dM", "-E", "-x", lang, "-"])
  let lines := out.crlfToLf.split '\n' |>.filter (!·.isEmpty) |>.toStringArray
  return .ofString ("\n".intercalate (lines.qsort (· < ·)).toList)

/-- A table of results that each Lake process computes once per key. -/
abbrev IdentityMemo (κ : Type) [BEq κ] [Hashable κ] :=
  IO.Ref (Std.HashMap κ (Task (Except String Hash)))

/--
Returns the memoized result for `key`, or computes it. Concurrent callers of a missing key wait
for the first one's result instead of computing it again.
-/
def IdentityMemo.get [BEq κ] [Hashable κ]
  (memo : IdentityMemo κ) (key : κ) (compute : ExceptT String BaseIO Hash)
: BaseIO (Except String Hash) := do
  let promise ← IO.Promise.new
  let task? ← memo.modifyGet fun m =>
    match m[key]? with
    | some task => (some task, m)
    | none => (none, m.insert key (promise.resultD (.error "compiler identity was not computed")))
  if let some task := task? then
    return (← IO.wait task)
  let result ← compute.run
  promise.resolve result
  return result

builtin_initialize compilerMemo : IdentityMemo (String × String) ← IO.mkRef {}

builtin_initialize macrosMemo : IdentityMemo (String × String × Array String) ← IO.mkRef {}

/--
The language (`-x`) in which the C compiler driver `cc` compiles `srcFile`, among C, C++,
Objective-C and Objective-C++: the one its extension names (C for others), and the C++ variant
for a C++ driver (whose name contains `++`, e.g., `g++` or `clang++`).
-/
public def ccLanguage (cc srcFile : FilePath) : String :=
  let lang := match srcFile.extension with
    | some "cc" | some "cp" | some "cxx" | some "cpp" | some "CPP" | some "c++" | some "C" => "c++"
    | some "m" => "objective-c"
    | some "mm" => "objective-c++"
    | _ => "c"
  let name := cc.fileName.getD ""
  if name.replace "++" "" == name then lang
  else if lang == "c" then "c++"
  else if lang == "objective-c" then "objective-c++"
  else lang

/--
The identity of the C compiler `cc` run with `args` on a source of language `lang`
(see the module docstring), computed once per Lake process.
-/
def computeCcIdentity
  (cc : FilePath) (args : Array String) (lang : String)
: BaseIO (Except String Hash) := ExceptT.run do
  let compiler ← ExceptT.mk <|
    compilerMemo.get (cc.toString, lang) (computeCompilerHash cc lang)
  let args := withoutMacroArgs args
  let macros ← ExceptT.mk <|
    macrosMemo.get (cc.toString, lang, args) (computeMacrosHash cc lang args)
  return compiler.mix macros

/--
Mixes the identity of the C compiler `cc` into the current job's trace, for a compile of a source
of language `lang` (see `ccLanguage`) with the arguments `args` (all of them but the input and
output files). The identity covers the effect of `args` on the compiler's predefined macros (other
than those `-D` and `-U` name), not their text, so an argument kept out of the trace (e.g., a weak
one) changes the trace only if it changes those macros, as `-march` or `-O0` do. The build fails if
the compiler cannot report its version and predefined macros.
-/
public def addCcTrace (cc : FilePath) (args : Array String) (lang : String) : JobM PUnit := do
  match (← computeCcIdentity cc args lang) with
  | .ok hash => addTrace <| .ofHash hash s!"C compiler: {cc}"
  | .error e => error s!"failed to identify the C compiler: {e}"
