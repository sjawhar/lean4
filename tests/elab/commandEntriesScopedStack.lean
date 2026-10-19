import Lean
/-! A declaration command that changes a scoped extension's scope stack only through the stack's operations (a
namespace activated by a macro's `open` or by `activateScoped`, `setDelimitsLocal`, a per-extension `pushScope` or
`popScope`, a pop and push that replace a level, with or without a new local entry in the new level, a local entry on
a level deeper than the command scope) records those operations in its payload's `scopedOps` and is replayed, and
the replay reproduces the stack (`simpView`); the payload is not refused for the extension and the module is not declined for
it. Stack changes a declaration makes and undoes (`open … in`, `attribute [local simp] … in`, dotted names,
`classical`) and a top-level local entry replay as well. -/
open Lean

/-- What a later command sees of the simp extension: per stack level, the active namespaces and whether local
entries are delimited there, and which of `probes` are simp lemmas at the top. -/
def simpView (env : Environment) (probes : List Name) : String :=
  let stack := (Meta.simpExtension.ext.getState env).stateStack
  let levels := stack.map fun l => (l.activeScopes.toList, l.delimitsLocal)
  let thms := Meta.simpExtension.getState env
  s!"levels={levels} lemmas={probes.filter fun n => thms.isLemma (.decl n)}"

unsafe def check (dir : System.FilePath) (label src : String) (probes : List Name) : IO Unit := do
  IO.FS.createDirAll dir
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError s!"elaboration of {label} failed"
  let obs := (← ModuleUsage.commandObservations).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := CommandEntries.ofModuleData md
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  let cmds := (usage.getObjValAs? (Array Json) "commands").toOption.getD #[]
  IO.println s!"== {label}: noskip {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason {(usage.getObjValAs? String "noskipReason").toOption}"
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let kind := (cmds[o.i]?.bind fun c => (c.getObjValAs? String "kind").toOption).getD "?"
    let simpRefused := (ce.refusals.filterMap (·.ext?)).contains Meta.simpExtension.ext.name
    let replay ← try
        let env ← replayCommandEntries (← CommandEntries.Testing.rollbackTo o.before.env o.after.env) ce {}
        let full := simpView o.after.env probes
        let got := simpView env probes
        pure (if full == got then s!"replay matches: {full}" else s!"replay differs: full {full}, replayed {got}")
      catch _ => pure "refused"
    IO.println s!"{o.i} {kind}: simp refused {simpRefused}; {replay}"

def header : String := "import Lean\nopen Lean Elab Command\n"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  initSearchPath (← getBuildDir)
  let push := "run_cmd modifyEnv Meta.simpExtension.pushScope\n"
  check (dir / "macroOpen") "macro open" (header ++ "namespace Foo\ndef a : Nat := 0\nend Foo\n" ++
    "syntax \"open_def \" ident : command\n" ++
    "macro_rules | `(open_def $n) => return mkNullNode #[← `(open $(mkIdent `Foo):ident), ← `(def $n : Nat := 1)]\n" ++
    "open_def x\n") []
  check (dir / "activate") "activateScoped" (header ++
    "run_cmd do\n  modifyEnv (Meta.simpExtension.activateScoped · `NeverOpened)\n" ++
    "  elabCommand (← `(def $(mkIdent `activated) : Nat := 0))\n") []
  check (dir / "delimits") "setDelimitsLocal" (header ++ push ++
    "run_cmd do\n  modifyEnv (Meta.simpExtension.setDelimitsLocal · 1)\n" ++
    "  elabCommand (← `(def $(mkIdent `delimited) : Nat := 0))\n") []
  check (dir / "pop") "popScope" (header ++ push ++
    "run_cmd do\n  modifyEnv Meta.simpExtension.popScope\n" ++
    "  elabCommand (← `(def $(mkIdent `popped) : Nat := 0))\n") []
  check (dir / "push") "pushScope" (header ++
    "run_cmd do\n  modifyEnv Meta.simpExtension.pushScope\n" ++
    "  elabCommand (← `(def $(mkIdent `pushed) : Nat := 0))\n") []
  check (dir / "replace") "pop and push replace a level" (header ++ push ++
    "attribute [local simp] Nat.add_comm\n" ++
    "run_cmd do\n  modifyEnv Meta.simpExtension.popScope\n  modifyEnv Meta.simpExtension.pushScope\n" ++
    "  elabCommand (← `(def $(mkIdent `replaced) : Nat := 0))\n") [``Nat.add_comm]
  check (dir / "replaceAdd") "pop and push replace a level, then a local entry" (header ++ push ++
    "attribute [local simp] Nat.add_comm\n" ++
    "run_cmd do\n  modifyEnv Meta.simpExtension.popScope\n  modifyEnv Meta.simpExtension.pushScope\n" ++
    "  elabCommand (← `(@[local simp] theorem $(mkIdent `t2) (n : Nat) : 0 + n = n := Nat.zero_add n))\n")
    [``Nat.add_comm, `t2]
  check (dir / "deep") "local entry on a level deeper than the command scope" (header ++ push ++
    "@[local simp] theorem t3 (n : Nat) : 0 + n = n := Nat.zero_add n\n") [`t3]
  check (dir / "kept") "replayable stack changes" (header ++
    "namespace Foo\ndef a : Nat := 0\n@[scoped simp] theorem s : a = 0 := rfl\nend Foo\n" ++
    "open Foo in theorem u : Foo.a = 0 := by simp\n" ++
    "attribute [local simp] Nat.add_comm in theorem v : True := trivial\n" ++
    "theorem A.B.w : True := trivial\n" ++
    "noncomputable def cl : Decidable (∀ n : Nat, n = n) := by classical exact inferInstance\n" ++
    "@[local simp] theorem lt (n : Nat) : n + 0 = n := rfl\n") [``Nat.add_comm, `Foo.s, `lt]

#eval main
