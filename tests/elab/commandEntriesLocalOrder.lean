import Lean
/-! A declaration command that adds a local entry and then a global entry to the same scoped extension records the
extension's stack operations in its payload's `scopedOps`, in the order they were logged, and replay applies them in
that order (it no longer refuses the payload for the pair). One case per order-sensitive kind: macro rules
(`KeyedDeclsAttribute` prepends, so the most recent rule wins), instances (the most recent of equal priority wins),
simp lemmas and notations. For macro rules and instances the test also elaborates the rest of the module on top of the
replayed payload, as a kept command would be, and prints what a later command sees. -/
open Lean

structure Run where
  src : String
  obs : Array ModuleUsage.CommandObservation
  permit : KeepPermit
  payloads : Array CommandEntries
  usage : Json

unsafe def elabM (dir : System.FilePath) (src : String) : IO Run := do
  IO.FS.createDirAll dir
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) (usageFileName? := some (dir / "M.usage")) |
    throw <| IO.userError s!"elaboration failed:\n{src}"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let some first := obs[0]? | throw <| IO.userError "no commands"
  let permit ← IO.ofExcept (← ModuleUsage.Testing.keepPermit first.before.env `M (dir / "M.olean") (dir / "M.usage"))
  let payloads := permit.payloads
  let usage ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / "M.usage"))
  return { src, obs, permit, payloads, usage }

/-- Elaborates the commands after `i` on top of `env`, from command `i`'s before-state. -/
def continueFrom (r : Run) (i : Nat) (env : Environment) : IO Elab.Command.State := do
  let some o := r.obs.find? (·.i == i) | throw <| IO.userError s!"no observation {i}"
  let some next := r.obs.find? (·.i == i + 1) | throw <| IO.userError s!"no observation {i + 1}"
  let some pos := next.stx.getPos? | throw <| IO.userError "no position"
  let s ← Elab.IO.processCommands (Parser.mkInputContext r.src "M.lean") { pos } { o.before with env }
  return s.commandState

def valueOf (env : Environment) (n : Name) : String :=
  match (env.find? n).bind (·.value?) with
  | some v => toString v
  | none => "none"

/-- The target command `i` adds a local and then a global entry to `ext`; `probe` is a later declaration. -/
unsafe def check (dir : System.FilePath) (label : String) (ext : Name) (src : String) (i : Nat)
    (probe? : Option Name) : IO Unit := do
  let r ← elabM dir src
  let some o := r.obs.find? (·.i == i) | throw <| IO.userError s!"no observation {i}"
  let some ce := r.payloads.find? (·.idx == i) | throw <| IO.userError s!"no payload {i}"
  let kind := (((r.usage.getObjValAs? (Array Json) "commands").toOption.getD #[])[i]?.bind
    fun c => (c.getObjValAs? String "kind").toOption).getD "?"
  IO.println s!"{label}: command {i} {kind}, refused for {ext} {(ce.refusals.filterMap (·.ext?)).contains ext}, entries \
    {(ce.checked.entries ++ ce.main.entries).any (·.1 == ext)}, scoped ops {ce.main.scopedOps.any (·.1 == ext)}, \
    noreuse {(r.usage.getObjValAs? Bool "noreuse").toOption}"
  let replayed? ← try
      pure (some (← replayCommandEntries r.permit (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}))
    catch _ => pure none
  match replayed?, probe? with
  | none, _ => IO.println "  replay refused"
  | some env, some probe =>
    let st ← continueFrom r i env
    let some last := r.obs.back? | throw <| IO.userError "no observation"
    IO.println s!"  {probe}: full run {valueOf last.after.env probe}, after replay {valueOf st.env probe}"
  | some _, none => IO.println "  replay accepted"

/-- A command elaborator running two commands from source text, then a `def`. -/
def twoCommands (name first second : String) : String :=
  "elab \"" ++ name ++ " \" n:ident : command => do\n" ++
  "  let env ← getEnv\n" ++
  "  let parse (s : String) : CommandElabM Syntax := do\n" ++
  "    match Parser.runParserCategory env `command s with\n" ++
  "    | .ok stx => pure stx\n" ++
  "    | .error e => throwError e\n" ++
  "  elabCommand (← parse " ++ first.quote ++ ")\n" ++
  "  elabCommand (← parse " ++ second.quote ++ ")\n" ++
  "  elabCommand (← `(def $n : Nat := 0))\n"

def header : String := "import Lean\nopen Lean Elab Command\n"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  initSearchPath (← getBuildDir)
  check (dir / "macro") "macro rules" `Lean.Elab.macroAttribute (header ++ "syntax \"foo\" : term\n" ++
    twoCommands "both_def" "local macro_rules | `(foo) => `(1)" "macro_rules | `(foo) => `(2)" ++
    "both_def x\ndef y : Nat := foo\n") 3 (some `y)
  check (dir / "instance") "instances" `Lean.Meta.instanceExtension (header ++ "class C where v : Nat\n" ++
    twoCommands "both_def" "local instance i1 : C := ⟨1⟩" "instance i2 : C := ⟨2⟩" ++
    "both_def x\ndef y : Nat := C.v\n") 3 (some `y)
  check (dir / "simp") "simp lemmas" `Lean.Meta.simpExtension (header ++
    "theorem a1 (n : Nat) : n + 0 = n := rfl\ntheorem a2 (n : Nat) : 0 + n = n := Nat.zero_add n\n" ++
    twoCommands "both_def" "attribute [local simp] a1" "attribute [simp] a2" ++ "both_def x\n") 4 none
  check (dir / "notation") "notations" `Lean.Parser.parserExtension (header ++
    twoCommands "both_def" "local notation \"nn1\" => (1 : Nat)" "notation \"nn2\" => (2 : Nat)" ++
    "both_def x\n") 2 none

#eval main
