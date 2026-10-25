import Lean
/-! Review finding V3, payload level: a realization record holds what the realization's `realize` returned
(`RealizationResult.report`), read back from the `.olean`, so that a keep rebuilds it for a later request; a value a
keep cannot rebuild exactly is `unrebuildable`, and a reuse run elaborates its command
(`CommandEntries.firstUnrebuildableRealization?`). `M`'s theorems each request one shape through a tactic of `E`:
`Meta.realizeConst` with a `realize` that adds its constant by `addDecl` and reports nothing (a snapshot whose one
child is the empty snapshot `addDecl` logs), adds it to the kernel environment directly and reports nothing (`silent`),
warns with a fixed text (a snapshot with that message), warns with a text made when it is printed (an expression:
`unrebuildable`), or requests another realization that warns (a snapshot without messages whose children are the
inner request's kernel check, the inner realization's snapshot and `addDecl`'s), and `Environment.realizeConst` with
a `realize` that returns a value of its own type (`unrebuildable`). The test prints each command's realization records,
and the first one a reuse run rejects for the module's file and for another file. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def eSource : String := "import Lean
open Lean Meta Elab Tactic

def mkNat (n : Name) : MetaM Unit :=
  addDecl (.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [n]))

def realizeS (f : Name) : MetaM Unit := realizeConst f (f ++ `s) (mkNat (f ++ `s))
def realizeK (f : Name) : MetaM Unit := realizeConst f (f ++ `k) do
  let n := f ++ `k
  let decl := Declaration.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [n])
  match (← getEnv).addDeclCore 0 0 decl none with
  | .ok env => setEnv env
  | .error _ => throwError \"rejected\"
def realizeW (f : Name) : MetaM Unit := realizeConst f (f ++ `w) do
  logWarning \"realized w\"
  mkNat (f ++ `w)
def realizeX (f : Name) : MetaM Unit := realizeConst f (f ++ `x) do
  logWarning m!\"realized {mkConst ``Nat}\"
  mkNat (f ++ `x)
def realizeV (f : Name) : MetaM Unit := realizeConst f (f ++ `v) do
  logWarning \"realized v\"
  mkNat (f ++ `v)
def realizeO (f : Name) : MetaM Unit := realizeConst f (f ++ `o) do
  realizeV f
  mkNat (f ++ `o)

structure YValue where
  n : Nat
deriving TypeName

def realizeY (f : Name) : MetaM Unit := do
  let n := f ++ `y
  let decl := Declaration.defnDecl (mkDefinitionValEx n [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [n])
  let (env, _, _) ← (← getEnv).realizeConst f n fun env _ =>
    return match env.addDeclCore 0 0 decl none with
      | .ok env => (env, .mk (YValue.mk 7))
      | .error _ => (env, .mk (YValue.mk 0))
  setEnv env

elab \"realize_by \" k:ident f:ident : tactic => do
  let f ← realizeGlobalConstNoOverload f
  match k.getId with
  | `s => realizeS f | `k => realizeK f | `w => realizeW f | `x => realizeX f | `o => realizeO f | `y => realizeY f
  | k => throwError \"unknown shape {k}\"
"

def mSource : String := "import E
def f : Nat := 0
theorem t1 : True := by realize_by s f; trivial
theorem t2 : True := by realize_by k f; trivial
theorem t3 : True := by realize_by w f; trivial
theorem t4 : True := by realize_by x f; trivial
theorem t5 : True := by realize_by o f; trivial
theorem t6 : True := by realize_by y f; trivial
"

partial def showSnapshot (s : ReportedSnapshot) : String :=
  s!"⟨{s.messages.map (·.data)}, {s.children.map showSnapshot}⟩"

def showReport : RealizationReport → String
  | .unrebuildable => "unrebuildable"
  | .silent => "silent"
  | .snapshot s => s!"snapshot {showSnapshot s}"

partial def records : AddedConst → Array String
  | .realization _ key _ _ result => #[s!"{key} {showReport result.report}"]
  | .async _ _ _ nested => nested.flatMap records
  | _ => #[]

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  runLean dir #["-o", "E.olean", "E.lean"]
  IO.FS.writeFile (dir / "M.lean") mSource
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let (md, _) ← readModuleData (dir / "M.olean")
  for ce in CommandEntries.ofModuleData md do
    let rs := ce.added.flatMap records
    unless rs.isEmpty do
      IO.println s!"command {ce.idx}: {"; ".intercalate rs.toList}"
      IO.println s!"  rejected for M.lean: {ce.firstUnrebuildableRealization? (· == "M.lean")}; \
        for another file: {ce.firstUnrebuildableRealization? fun _ => false}"
