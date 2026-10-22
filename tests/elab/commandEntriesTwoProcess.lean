import Lean
/-! The two-process keep test: a module is compiled by `lean -o --usage` in one process, then kept in another
(`twoProcSource`, run with `lean --run`), which keeps each command whose payload has no refusals and elaborates the
others and the targets, as a reuse run in a new process does. Process state a command changes is lost when the command
is kept: the in-process class test (`commandEntriesKeepChain`) cannot see it, as its full run moved the state already.
A command that evaluates code it wrote (`#eval`) is refused, so the reuse run elaborates it and the command after it
sees the state the full run saw. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO String := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  return out.stdout

/-- The reuse run: `lean --run TwoProc.lean DIR M.lean M.olean TARGET...`. -/
def twoProcSource : String := "import Lean
/-! `lean --run TwoProc.lean DIR M.lean M.olean TARGET...`: a reuse run in a process of its own, after `lean -o M.olean
M.lean` ran the full build in another. It processes `M.lean`'s header (DIR on the search path, initializers run, so
every imported `initialize` starts afresh as in a new build), takes a keep permit from the resolutions `M.usage`
records, then takes each command in order: a command whose payload in `M.olean` has no refusals and whose index is not a
TARGET is kept (`CommandEntries.Testing.keep`, its constants the `M.olean` constants its records name); any other
command is elaborated, as a reuse run elaborates a refused or edited command. For each TARGET it prints the constants
the command added whose type or value differs from `M.olean`'s (or that `M.olean` lacks), and the messages of every
elaborated command. -/
open Lean Elab Command

partial def recordNames : AddedConst → Array Name
  | .plain n => #[n]
  | .async n _ _ nested => #[n] ++ nested.flatMap recordNames
  | .realization _ _ cs _ _ => cs
  | .merged .. => #[]
  | .context .. => #[]

def newConsts (before after : Environment) : NameMap ConstantInfo :=
  after.constants.foldStage2 (fun m n c => if before.constants.contains n then m else m.insert n c) {}

def strictEq (c c' : ConstantInfo) : Bool :=
  c.levelParams == c'.levelParams && c.type.equal c'.type &&
    match c.value? (allowOpaque := true), c'.value? (allowOpaque := true) with
    | some v, some w => v.equal w
    | none, none => true
    | _, _ => false

unsafe def main (args : List String) : IO UInt32 := do
  let dir :: file :: olean :: targets := args | throw <| IO.userError \"usage: TwoProc DIR M.lean M.olean TARGET...\"
  let targets := targets.map String.toNat!
  initSearchPath (← findSysroot) [dir]
  enableInitializersExecution
  let src ← IO.FS.readFile file
  let inputCtx := Parser.mkInputContext src file
  let (header, parserState, messages) ← Parser.parseHeader inputCtx
  let (env, messages) ← processHeader header {} messages inputCtx (mainModule := `M)
  let usage := (System.FilePath.mk olean).withExtension \"usage\"
  let permit ← IO.ofExcept (← ModuleUsage.keepPermit env `M olean usage)
  let payloads := permit.payloads
  let md := permit.data
  let full : NameMap ConstantInfo := (md.constNames.zip md.constants).foldl (fun m (n, c) => m.insert n c) {}
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
    let before := st.env
    match payloads.find? (·.idx == i) with
    | some ce =>
      if ce.refusals.isEmpty && !targets.contains i then
        let infos := (ce.added.flatMap recordNames).foldl (init := {}) fun (m : NameMap ConstantInfo) n =>
          match full.find? n with | some c => m.insert n c | none => m
        let env ← CommandEntries.Testing.keep permit st.env ce infos {}
        st := { st with env }
        IO.println s!\"command {i}: kept\"
      else
        let ctx : Command.Context := { fileName := file, fileMap := inputCtx.fileMap, snap? := none, cancelTk? := none }
        let (_, st') ← ((elabCommandTopLevel cmd).run ctx |>.run { st with messages := {} }).toIO
          fun _ => IO.userError \"elab failed\"
        for m in st'.messages.toList do IO.println s!\"command {i}: message: {← m.toString}\"
        st := { st' with messages := {} }
        IO.println s!\"command {i}: elaborated ({if ce.refusals.isEmpty then \"a target\" else s!\"refused: {ce.refusals}\"})\"
    | none => IO.println s!\"command {i}: no payload\"
    if targets.contains i then
      for (n, c) in newConsts before st.env do
        match full.find? n with
        | none => IO.println s!\"command {i}: {n} is not in the full build\"
        | some c' =>
          IO.println s!\"command {i}: {n} {if strictEq c c' then \"equals\" else \"differs from\"} the full build's\\
            {if strictEq c c' then \"\" else s!\": reuse {c.value?.getD c.type}, full {c'.value?.getD c'.type}\"}\"
    i := i + 1
  return 0
"

/-- An imported module whose initializer creates process state its commands read. -/
def ioxSource : String := "import Lean
open Lean Elab Command

initialize counter : IO.Ref Nat ← IO.mkRef 0

/-- `def id : Nat := <counter>` -/
elab \"def_counter \" id:ident : command => do
  let v ← counter.get
  liftTermElabM <| addDecl (.defnDecl (mkDefinitionValEx id.getId [] (mkConst ``Nat) (mkNatLit v) .abbrev .safe [id.getId]))
"

/-- `#eval` writes the imported counter, which the next command reads. -/
def evalSource : String := "import IOX
#eval counter.modify (· + 1)
def_counter c
theorem t : c = 1 := rfl
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "TwoProc.lean") twoProcSource
  IO.FS.writeFile (dir / "IOX.lean") ioxSource
  IO.FS.writeFile (dir / "M.lean") evalSource
  discard <| runLean dir #["-o", "IOX.olean", "--usage=IOX.usage", "IOX.lean"]
  discard <| runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  -- commands 1 and 2 are edited: elaborated again on what the reuse run kept before them
  IO.println (← runLean dir #["--run", "TwoProc.lean", dir.toString, "M.lean", "M.olean", "1", "2"])
