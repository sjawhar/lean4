import Lean
/-! A module records the process values its compile read (`values` in `.usage`, `takeValueReads`): each environment
variable, the executable's path, the working directory, and the toolchain root when a command read a file under the
toolchain's `bin`, `include` or library directory, which the Lean githash pins; such reads are not effects that refuse
a command. What the recorder itself looks up while writing the `.usage` is not recorded: `Pl` reads nothing. A keep
permit (`ModuleUsage.keepPermit`) requires every recorded value unchanged in the process that keeps: `E` read `FOO` in
a command, `IV` read `BAR` in an imported module's initializer, so a reuse run with the same values keeps their
commands and one with a changed, newly set or unset value is refused. A command reading a file outside the toolchain (a
relative path, an absolute one, or one under the toolchain that resolves outside it) is still refused, and an imported
module's initializer reading a file makes the module `noreuse`. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) (env : Array (String × Option String) := #[]) :
    IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := env.push ("LEAN_PATH", some dir.toString) }
  return (out.exitCode, out.stdout ++ out.stderr)

def compile (dir : System.FilePath) (m : String) (env : Array (String × Option String) := #[]) : IO Unit := do
  let (code, out) ← runLean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"] env
  unless code = 0 do throw <| IO.userError s!"compiling {m} failed ({code}):\n{out}"

/-- The reuse run: `lean --run Reuse.lean DIR M.lean M.olean M.usage` asks for a keep permit for `M` and, with one,
keeps every command whose payload has no refusals (`CommandEntries.Testing.keep`), elaborating the others. -/
def reuseSource : String := "import Lean
open Lean Elab Command

partial def recordNames : AddedConst → Array Name
  | .plain n => #[n]
  | .async n _ _ nested => #[n] ++ nested.flatMap recordNames
  | .realization _ _ cs _ _ => cs
  | .merged .. => #[]
  | .context .. => #[]

unsafe def main (args : List String) : IO UInt32 := do
  let [dir, file, olean, usage] := args | throw <| IO.userError \"usage: Reuse DIR M.lean M.olean M.usage\"
  let some m := (System.FilePath.mk file).fileStem | throw <| IO.userError s!\"no module name in {file}\"
  initSearchPath (← findSysroot) [dir]
  enableInitializersExecution
  let src ← IO.FS.readFile file
  let inputCtx := Parser.mkInputContext src file
  let (header, parserState, messages) ← Parser.parseHeader inputCtx
  let (env, messages) ← processHeader header {} messages inputCtx (mainModule := m.toName)
  let permit ← match ← ModuleUsage.keepPermit env m.toName olean usage with
    | .ok permit => pure permit
    | .error reason => IO.println s!\"{m}: module refused: {reason}\"; return 0
  let full : NameMap ConstantInfo := (permit.data.constNames.zip permit.data.constants).foldl
    (fun m (n, c) => m.insert n c) {}
  let mut st := Command.mkState env messages {}
  st := { st with scopes := st.scopes.map fun sc => { sc with opts := Elab.async.set sc.opts false } }
  let mut ps := parserState
  let mut i := 0
  repeat
    let scope := st.scopes.head!
    let pmctx := { env := st.env, options := scope.opts, currNamespace := scope.currNamespace, openDecls := scope.openDecls }
    let (cmd, ps', _) := Parser.parseCommand inputCtx pmctx ps {}
    ps := ps'
    if Parser.isTerminalCommand cmd then break
    match permit.payloads.find? (·.idx == i) with
    | some ce =>
      if ce.refusals.isEmpty then
        let infos := (ce.added.flatMap recordNames).foldl (init := {}) fun (m : NameMap ConstantInfo) n =>
          match full.find? n with | some c => m.insert n c | none => m
        st := { st with env := ← CommandEntries.Testing.keep permit st.env ce infos {} }
        IO.println s!\"{m}: command {i}: kept\"
      else
        let ctx : Command.Context := { fileName := file, fileMap := inputCtx.fileMap, snap? := none, cancelTk? := none }
        let (_, st') ← ((elabCommandTopLevel cmd).run ctx |>.run { st with messages := {} }).toIO
          fun _ => IO.userError \"elab failed\"
        st := { st' with messages := {} }
        IO.println s!\"{m}: command {i}: elaborated (refused: {ce.refusals})\"
    | none => IO.println s!\"{m}: command {i}: no payload\"
    i := i + 1
  return 0
"

def xSource : String := "import Lean
open Lean Elab Term

elab \"foo_term\" : term => return mkStrLit ((← IO.getEnv \"FOO\").getD \"unset\")
/-- reads a file the toolchain ships: no effect -/
elab \"toolchain_term\" : term => return toExpr (← ((← IO.appPath).parent.get! / \"lean\").pathExists)
/-- reads a path under the toolchain's `bin` that resolves outside it -/
elab \"escape_term\" : term => return toExpr (← ((← IO.appPath).parent.get! / \"..\" / \"..\").pathExists)
elab \"relative_term\" : term => return toExpr (← (System.FilePath.mk \"X.lean\").pathExists)
"

/-- an initializer that reads `BAR` when the module is imported -/
def ySource : String := "import Lean
open Lean Elab Term

initialize yBar : String ← return (← IO.getEnv \"BAR\").getD \"unset\"
elab \"bar_term\" : term => return mkStrLit yBar
"

/-- an initializer that reads a file when the module is imported -/
def zSource : String := "import Lean
open Lean Elab Term

initialize zData : String ← IO.FS.readFile \"data.txt\"
elab \"data_term\" : term => return mkStrLit zData
"

def reuse (dir : System.FilePath) (m : String) (env : Array (String × Option String) := #[]) : IO Unit := do
  IO.print (← runLean dir #["--run", "Reuse.lean", dir.toString, s!"{m}.lean", s!"{m}.olean", s!"{m}.usage"] env).2

/-- The keys of the process values `m.usage` records. -/
def valueKeys (dir : System.FilePath) (m : String) : IO Unit := do
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / s!"{m}.usage"))
  let vs ← IO.ofExcept <| j.getObjValAs? (Array (String × Option String)) "values"
  IO.println s!"{m}: values {vs.map (·.1)}"

/-- `m.usage`'s `noreuse` reason, the temporary directory and the toolchain shown as `DIR` and `TOOLCHAIN`. -/
def noreuseReason (dir : System.FilePath) (m : String) : IO Unit := do
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / s!"{m}.usage"))
  let r := (j.getObjValAs? String "noreuseReason").toOption.getD "none"
  IO.println s!"{m}: noreuse reason: {(r.replace (toString (← getBuildDir)) "TOOLCHAIN").replace dir.toString "DIR"}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "Reuse.lean") reuseSource
  IO.FS.writeFile (dir / "X.lean") xSource
  IO.FS.writeFile (dir / "Y.lean") ySource
  IO.FS.writeFile (dir / "Z.lean") zSource
  IO.FS.writeFile (dir / "data.txt") "one"
  IO.FS.writeFile (dir / "E.lean") "import X\ndef a : String := foo_term\ntheorem t : True := trivial\n"
  IO.FS.writeFile (dir / "Tc.lean") "import X\ndef b : Bool := toolchain_term\ntheorem t : True := trivial\n"
  IO.FS.writeFile (dir / "Es.lean") "import X\ndef c : Bool := escape_term\n"
  IO.FS.writeFile (dir / "Rel.lean") "import X\ndef d : Bool := relative_term\n"
  IO.FS.writeFile (dir / "IV.lean") "import Y\ndef v : String := bar_term\n"
  IO.FS.writeFile (dir / "IF.lean") "import Z\ndef w : String := data_term\n"
  IO.FS.writeFile (dir / "Pl.lean") "import X\ndef p : Nat := 1\n"
  for m in ["X", "Y", "Z"] do compile dir m
  compile dir "E" #[("FOO", some "1")]
  compile dir "Tc"
  compile dir "Es"
  compile dir "Rel"
  compile dir "IV" #[("BAR", some "1")]
  compile dir "IF"
  compile dir "Pl"
  IO.println "the process values recorded:"
  valueKeys dir "E"
  valueKeys dir "Pl"
  IO.println "FOO=1 as when E was compiled:"
  reuse dir "E" #[("FOO", some "1")]
  IO.println "FOO=2:"
  reuse dir "E" #[("FOO", some "2")]
  IO.println "FOO unset:"
  reuse dir "E" #[("FOO", none)]
  compile dir "E" #[("FOO", none)]
  IO.println "E compiled with FOO unset, then FOO=1:"
  reuse dir "E" #[("FOO", some "1")]
  IO.println "a file of the toolchain read:"
  reuse dir "Tc"
  IO.println "a path under the toolchain that resolves outside it, and a relative path:"
  noreuseReason dir "Es"
  noreuseReason dir "Rel"
  IO.println "BAR read by an imported module's initializer, BAR=1 as when IV was compiled, then BAR=2:"
  reuse dir "IV" #[("BAR", some "1")]
  reuse dir "IV" #[("BAR", some "2")]
  IO.println "a file read by an imported module's initializer:"
  noreuseReason dir "IF"
