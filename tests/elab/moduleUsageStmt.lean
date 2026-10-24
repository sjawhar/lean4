import Lean
/-! Statement digests: `stmtHash`'s core covers level params and the type only (never the value), and its attrs
component covers `@[simp]` membership and instance priority, which the full digest does not. `computeStmt`
folds in the full digest of a definition the type mentions (its value decides what the type means) and the
statement digest of a theorem it mentions (its proof does not). A `.usage` written by `lean -o --usage` has
the current `usageVersion`, `stmt`, `usedAttrs` (the importee's attrs digest of each used constant) and `commands`; a module that adds
entries to an extension whose `.olean` entries cannot be converted back for replay is `noreuse`, with the
extension named in `noreuseReason`. -/
open Lean Elab Command
theorem t : 1 = 1 := rfl
theorem t' : 1 = 1 := by rfl
@[simp] theorem s : 2 = 2 := rfl
theorem s0 : 2 = 2 := rfl
def d := 3
def d' := 4
instance (priority := high) i1 : Inhabited Nat := ⟨0⟩
instance i2 : Inhabited Nat := ⟨0⟩
theorem ud : d = 3 := rfl
theorem ut : t = t := rfl
#eval show CommandElabM Unit from do
  let env ← getEnv
  let sh n := ModuleUsage.stmtHash env (env.find? n).get!
  logInfo m!"{(sh ``t).1 == (sh ``t').1}\n{(sh ``s).2 != (sh ``s0).2}\n{(sh ``s).1 == (sh ``s0).1}\n\
    {(sh ``d).1 == (sh ``d').1}\n{(sh ``i1).2 != (sh ``i2).2}\n{(sh ``i1).1 == (sh ``i2).1}"
  -- the same statements with `d`'s and `t`'s full digests perturbed
  let own := ModuleUsage.localDigests env
  let bump (n : Name) := own.map fun (m, dg) => (m, if m == n then { dg with lo := dg.lo + 1 } else dg)
  let core (own : Array (Name × ModuleUsage.Digest)) (n : Name) :=
    ((ModuleUsage.computeStmt env (ModuleUsage.stmtState env) own).find? (·.1 == n)).get!.2.1
  logInfo m!"{core own ``ud != core (bump ``d) ``ud}\n{core own ``ut == core (bump ``t) ``ut}"

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\n@[simp] theorem xs : 1 = 1 := rfl\ndef xd := 1\ninitialize unreplayableExt : PersistentEnvExtension Name (Name × Nat) (Array Name) ← registerPersistentEnvExtension { mkInitial := pure #[], addImportedFn := fun _ => pure #[], addEntryFn := fun s (n, _) => s.push n, exportEntriesFn := fun s => s, stateDelta? := some fun s₀ s₁ => .entries (s₁.extract s₀.size s₁.size) }\ninitialize registerBuiltinAttribute { name := `unreplayable, descr := \"test\", add := fun decl _ _ => modifyEnv (unreplayableExt.addEntry · (decl, 0)) }\n"
  IO.FS.writeFile (dir / "M.lean") "import X\ndef m := xd\ntheorem m2 : 1 = 1 := xs\n@[unreplayable] def unsupported := 0\n"
  runLean dir #["-o", "X.olean", "--usage=X.usage", "X.lean"]
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let rd (f : String) : IO Json := do IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile (dir / f))
  let x ← rd "X.usage"
  let m ← rd "M.usage"
  let arr (j : Json) (k : String) : Array Json := (j.getObjValAs? (Array Json) k).toOption.getD #[]
  let at? (j : Json) (i : Nat) : Option Json := (j.getArrVal? i).toOption
  let named (n : Name) (j : Json) : Bool := at? j 0 == some (ModuleUsage.nameToJson n)
  let xsAttrs := (arr x "stmt").find? (named `xs) |>.bind (at? · 2)
  let usedAttrsX := (arr m "usedAttrs").find? (named `X) |>.bind (at? · 1)
    |>.bind (·.getArr? |>.toOption) |>.getD #[]
  let xsUsed := usedAttrsX.find? (named `xs) |>.bind (at? · 1)
  -- an extension whose `.olean` entries (`Name`) differ from its state entries (`Name × Nat`) and that has no
  -- conversion back cannot be replayed, so the module is declined with the extension's name
  let declined := (m.getObjValAs? Bool "noreuse").toOption == some true &&
    (m.getObjValAs? String "noreuseReason").toOption ==
      some "declaration command 2: entries for unreplayableExt, which has no `ofOLeanEntry?` to replay them"
  IO.println s!"{(m.getObjValAs? Nat "version").toOption == some ModuleUsage.usageVersion} {(arr m "stmt").any (named `m2)} \
    {xsAttrs.isSome && xsUsed == xsAttrs} {usedAttrsX.any (named `xd)} \
    {declined} {(m.getObjValAs? (Array Json) "commands").toOption.isSome}"
