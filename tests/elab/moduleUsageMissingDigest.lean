import Lean
/-! A `.usage` record never drops a used constant silently. A constant of a module that carries no usage
digests (the stage-1 toolchain's own modules, compiled by stage 0) is left out by name. A declaration that
only existed in an environment the module discarded — here `base.dep`, realized under `withoutModifyingEnv`
and then reused from the realization cache by an `example` — stands for the constants it used. A constant of
this module without a digest refuses the per-command records. An imported constant without a full or statement
digest is an error, in the per-command records (`usesFull`/`usesStmt`) and in the module-level `used`/`usedAttrs`. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def expectError (label : String) (act : IO Unit) : IO Unit := do
  try
    act
    IO.println s!"{label}: no error"
  catch e =>
    IO.println s!"{label}: {e}"

def dropEntry (n : Name) (es : Array (Array (Name × α))) : Array (Array (Name × α)) :=
  es.map (·.filter (·.1 != n))

/-- `env` with the state of the persistent extension registered as `ext` (a private name) replaced by `f` of it,
written through the registry, as the digest extensions are private. -/
unsafe def modifyPrivateExt (σ : Type) (env : Environment) (ext : Name) (f : σ → σ) : IO Environment := do
  let some e := (← persistentEnvExtensionsRef.get).find? (privateToUserName ·.name == ext) |
    throw <| IO.userError s!"no extension {ext}"
  return e.toEnvExtension.modifyState env fun ps => { ps with state := unsafeCast (f (unsafeCast ps.state)) }

def usedNames (r : ModuleUsage.CommandRecord) : Array Name :=
  r.usesFull.map (fun (e : Name × ModuleUsage.Digest × ModuleUsage.Digest) => e.1) ++
    r.usesStmt.map (fun (e : Name × ModuleUsage.Digest) => e.1)

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean
open Lean Elab Term Command Meta
def xd := 1
def xd2 := 2
def realizeDep (base : Name) : MetaM Unit :=
  realizeConst base (base ++ `dep) do
    addDecl <| .defnDecl {
      name := base ++ `dep, levelParams := [], type := mkConst ``Nat
      value := mkConst ``xd2, hints := .abbrev, safety := .safe }
elab \"#realize_dep \" id:ident : command => liftTermElabM <| withoutModifyingEnv <| realizeDep id.getId
elab \"use_dep% \" id:ident : term => do
  realizeDep id.getId
  return mkConst (id.getId ++ `dep)
"
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  IO.FS.writeFile (dir / "M.lean") "import X
def m := xd
def m2 := m + Nat.succ 0
def base := 1
#realize_dep base
example : use_dep% base = 2 := rfl
"
  initSearchPath (← getBuildDir) [dir]
  enableInitializersExecution
  let input ← IO.FS.readFile (dir / "M.lean")
  let some env ← Elab.runFrontend input {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError "elaboration failed"
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array ModuleUsage.CommandRecord) "commands"
  let some m2 := cmds.find? (fun (r : ModuleUsage.CommandRecord) => r.decls.contains `m2) |
    throw <| IO.userError "no record for m2"
  let some ex := cmds.find? (fun (r : ModuleUsage.CommandRecord) => r.i == 4) |
    throw <| IO.userError "no record for the example"
  let initTracked := (env.getModuleIdxFor? ``Nat.succ).any (ModuleUsage.state env).hasEntries
  IO.println s!"m2 uses m: {(usedNames m2).contains `m}"
  IO.println s!"toolchain constant recorded iff its module carries digests: \
    {(usedNames m2).contains ``Nat.succ == initTracked}"
  IO.println s!"transient base.dep absent from the environment: {!env.contains `base.dep}"
  IO.println s!"example uses base.dep's value xd2: {(usedNames ex).contains `xd2}"
  let consts := ModuleUsage.ownConsts env
  let own := ModuleUsage.localDigests env (ModuleUsage.ownNodes env consts)
  let stmt := ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own consts
  let obs ← ModuleUsage.commandObservations
  let shown := match ← ModuleUsage.commandRecords env obs (own.filter (·.1 != `m)) stmt #[] with
    | .ok recs => s!"{recs.size} records, refused: no"
    | .error reason => s!"0 records, refused: {reason}"
  IO.println s!"local constant without a digest: {shown}"
  let noFull ← modifyPrivateExt ModuleUsage.State env `Lean.ModuleUsage.ext fun s =>
    { s with importedModuleEntries := dropEntry `xd s.importedModuleEntries }
  expectError "imported constant without a full digest (command)" do
    discard <| ModuleUsage.commandRecords noFull obs own stmt #[]
  expectError "imported constant without a full digest (module)" do
    ModuleUsage.writeUsage noFull (ModuleUsage.ownNodes noFull consts) own default (#[], #[]) {} #[] stmt #[] false
      (dir / "W.usage")
  let noStmt ← modifyPrivateExt ModuleUsage.StmtState env `Lean.ModuleUsage.stmtExt fun s =>
    { s with importedModuleEntries := dropEntry `xd s.importedModuleEntries }
  expectError "imported constant without a statement digest (command)" do
    discard <| ModuleUsage.commandRecords noStmt obs own stmt #[]
  expectError "imported constant without a statement digest (module)" do
    ModuleUsage.writeUsage noStmt (ModuleUsage.ownNodes noStmt consts) own default (#[], #[]) {} #[] stmt #[] false
      (dir / "W.usage")

#eval main
