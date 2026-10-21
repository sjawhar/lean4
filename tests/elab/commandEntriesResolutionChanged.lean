import Lean
/-! A keep is refused for a whole module whose recorded name resolutions no longer hold. The command records carry
no per-command resolution: `C`'s `theorem t : wv = 7 := by with_reducible rfl` reads the reducibility of `ru`
through the module `getModuleIdxFor?` picks for `ru`, and no term of `t` mentions `ru`. Once `Z`, which `C` imports
before `W`, claims the name `ru` with an IR declaration, `ru` resolves to `Z` and reads as semireducible, so `C` no
longer elaborates; `t`'s uses (`wv`) are unchanged, and only the module's recorded resolutions (`resolved` in
`C.usage`) show the change. The reuse run (`reuseSource`, a process of its own) asks for a keep permit
(`ModuleUsage.keepPermit`) before it keeps any command: granted while `Z` claims nothing, refused with
`resolution changed` once it claims `ru`. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  return (out.exitCode, out.stdout)

def compile (dir : System.FilePath) (m : String) : IO Unit := do
  let (code, out) ← runLean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
  unless code = 0 do throw <| IO.userError s!"compiling {m} failed ({code}):\n{out}"

/-- The reuse run: `lean --run Reuse.lean DIR C.lean C.olean C.usage`. It processes `C.lean`'s header against the
current `.olean` files of its imports, asks for a keep permit from `C.usage`, and with one keeps every command whose
payload in `C.olean` has no refusals (`CommandEntries.Testing.keep`), elaborating the others. -/
def reuseSource : String := "import Lean
open Lean Elab Command

partial def recordNames : AddedConst → Array Name
  | .plain n => #[n]
  | .async n _ _ nested => #[n] ++ nested.flatMap recordNames
  | .realization _ _ cs _ _ => cs
  | .merged .. => #[]
  | .context .. => #[]

unsafe def main (args : List String) : IO UInt32 := do
  let [dir, file, olean, usage] := args | throw <| IO.userError \"usage: Reuse DIR C.lean C.olean C.usage\"
  initSearchPath (← findSysroot) [dir]
  enableInitializersExecution
  let (md, _) ← readModuleData olean
  let payloads := CommandEntries.ofModuleData md
  let full : NameMap ConstantInfo := (md.constNames.zip md.constants).foldl (fun m (n, c) => m.insert n c) {}
  let src ← IO.FS.readFile file
  let inputCtx := Parser.mkInputContext src file
  let (header, parserState, messages) ← Parser.parseHeader inputCtx
  let (env, messages) ← processHeader header {} messages inputCtx
  let permit ← match ModuleUsage.keepPermit env (← ModuleUsage.ResolutionRecord.read usage) with
    | .ok permit => pure permit
    | .error reason => IO.println s!\"module refused: {reason}\"; return 0
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
    match payloads.find? (·.idx == i) with
    | some ce =>
      if ce.refusals.isEmpty then
        let infos := (ce.added.flatMap recordNames).foldl (init := {}) fun (m : NameMap ConstantInfo) n =>
          match full.find? n with | some c => m.insert n c | none => m
        st := { st with env := ← CommandEntries.Testing.keep permit st.env ce infos {} }
        IO.println s!\"command {i}: kept\"
      else
        let ctx : Command.Context := { fileName := file, fileMap := inputCtx.fileMap, snap? := none, cancelTk? := none }
        let (_, st') ← ((elabCommandTopLevel cmd).run ctx |>.run { st with messages := {} }).toIO
          fun _ => IO.userError \"elab failed\"
        st := { st' with messages := {} }
        IO.println s!\"command {i}: elaborated (refused: {ce.refusals})\"
    | none => IO.println s!\"command {i}: no payload\"
    i := i + 1
  return 0
"

/-- `Z` before and after it claims the name `ru` with an IR declaration (`usageCutoffCompiled`'s `elab_claim`). -/
def zSource (claim : Bool) : String :=
  "import Lean\ndef zdummy : Nat := 1\n" ++ if claim then
    "open Lean IR in\nrun_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern `ru\n  \
      #[{ x := ⟨1⟩, borrow := false, ty := .object }] .object\n  { entries := [.standard `all \"lean_nat_succ\"] })\n"
  else ""

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "Reuse.lean") reuseSource
  IO.FS.writeFile (dir / "U.lean") "@[reducible] def ru : Nat := 7\n"
  IO.FS.writeFile (dir / "W.lean") "import U\n@[reducible] def wv : Nat := ru\n"
  IO.FS.writeFile (dir / "Z.lean") (zSource false)
  IO.FS.writeFile (dir / "C.lean") "import Z\nimport W\ntheorem t : wv = 7 := by with_reducible rfl\ndef c : Nat := 0\n"
  for m in ["U", "W", "Z", "C"] do compile dir m
  let reuse := #["--run", "Reuse.lean", dir.toString, "C.lean", "C.olean", "C.usage"]
  IO.println "Z claims nothing:"
  IO.print (← runLean dir reuse).2
  IO.FS.writeFile (dir / "Z.lean") (zSource true)
  compile dir "Z"
  IO.println "Z claims `ru`:"
  IO.println s!"C elaborates afresh: {(← runLean dir #["C.lean"]).1 == 0}"
  IO.print (← runLean dir reuse).2
