import Lean
/-! While a module is compiled with usage recording, a realization's observations count for every command that requests
it, whether the command ran `realize` or got the cached result: the process values `realize` read, the constants it
used without a reference, its extra module uses, the constants its transient declarations used, and its effects. `E`'s
tactics request a realization for `f`: `val_env` through `Meta.realizeValue`, whose `realize` reads `RV_FOO`;
`const_all` through `Meta.realizeConst`, whose `realize` reads `RV_BAR`, uses `marker` without a reference and makes
`Z` and `E` extra uses; `val_fx` and `const_fx` do as `const_all` and also read the clock and the file `data.txt`;
`const_eval` through `Meta.realizeConst`, whose `realize` evaluates `C.val`, imported from `C`, by a transient
declaration (`evalExpr`), whose uses count as the requesting command's. In `M`, theorems `a` and `b` both request the
realization, each proof on its own branch, so that one runs `realize` and the other gets the cached result (`both`), or
`b` alone requests it (`alone`): the records of `b` (in the `.usage`) and its payload's refusals (in the `.olean`) must
be the same either way, and those of `a` the same as `b`'s. A payload's realization record carries what the
realization observed (`RealizationResult.observed`), its transient declarations among it, for a keep to hand to a later
request. -/
open Lean

/-- `timeout 120 lean ARGS` in `dir`, with `dir` the search path and the variables `realize` reads set: its stdout. -/
def lean (dir : System.FilePath) (args : Array String) : IO String := do
  let out ← IO.Process.output
    { cmd := "timeout", args := #["120", "lean"] ++ args, cwd := dir
      env := #[("LEAN_PATH", some dir.toString), ("RV_FOO", some "abc"), ("RV_BAR", some "de")] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  return out.stdout

def eSource : String := "import Lean
import C
open Lean Meta Elab Tactic Term

def marker : Nat := 5

structure RKey where
  f : Name
  tag : Name
deriving BEq, Hashable, TypeName

structure RVal where
  n : Nat
deriving TypeName

/-- reads `RV_FOO` -/
def readEnv : MetaM Nat := return ((← IO.getEnv \"RV_FOO\").getD \"\").length

/-- reads `RV_BAR`, uses `marker` without a reference and makes `Z` and `E` extra uses -/
def observeAll : MetaM Nat := do
  let n := ((← IO.getEnv \"RV_BAR\").getD \"\").length
  recordUsedByCommand ``marker
  recordExtraModUse `Z false
  recordExtraModUse `E false
  return n

/-- `observeAll`, then reads the clock and the file `data.txt` -/
def observeEffects : MetaM Nat := do
  let n ← observeAll
  discard IO.monoMsNow
  discard <| IO.FS.readFile \"data.txt\"
  return n

/-- evaluates the imported `C.val` (`evalExpr`, which adds and compiles a transient declaration) -/
unsafe def evalImportedImpl : MetaM Nat := evalExpr Nat (mkConst ``Nat) (mkConst ``C.val)
@[implemented_by evalImportedImpl] opaque evalImported : MetaM Nat

/-- `k`'s value through `Meta.realizeValue` for `f` -/
def realizeVal (f tag : Name) (k : MetaM Nat) : MetaM Nat :=
  return (← realizeValue f ({ f, tag } : RKey) (RVal.mk <$> k)).n

/-- `f.tag := 0` through `Meta.realizeConst`, whose `realize` runs `k` first -/
def realizeWith (f tag : Name) (k : MetaM Nat) : MetaM Unit :=
  realizeConst f (f ++ tag) do
    discard k
    addDecl (.defnDecl (mkDefinitionValEx (f ++ tag) [] (mkConst ``Nat) (mkNatLit 0) .abbrev .safe [f ++ tag]))

elab \"val_env \" f:ident : tactic => do discard <| realizeVal (← realizeGlobalConstNoOverload f) `env readEnv
elab \"const_all \" f:ident : tactic => do realizeWith (← realizeGlobalConstNoOverload f) `all observeAll
elab \"val_fx \" f:ident : tactic => do discard <| realizeVal (← realizeGlobalConstNoOverload f) `fx observeEffects
elab \"const_fx \" f:ident : tactic => do realizeWith (← realizeGlobalConstNoOverload f) `fx observeEffects
elab \"const_eval \" f:ident : tactic => do realizeWith (← realizeGlobalConstNoOverload f) `ev evalImported
"

/-- `M` in which `a` and `b` both run `tac` (`both`) or `b` alone does. -/
def mSource (tac : String) (both : Bool) : String :=
  let a := if both then s!"by {tac} f; trivial" else "trivial"
  s!"import E\nimport Z\ndef f : Nat := 0\ntheorem a : True := {a}\ntheorem b : True := by {tac} f; trivial\n"

/-- What command `i`'s record in the `.usage` `file` says it observed: the process values it read, whether it used
`marker` and `C.val` and its extra module uses (sorted by name). -/
def observed (file : System.FilePath) (i : Nat) : IO String := do
  let j ← IO.ofExcept <| ModuleUsage.parseUsage (← IO.FS.readFile file)
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array ModuleUsage.CommandRecord) "commands"
  let some r := cmds.find? (fun (r : ModuleUsage.CommandRecord) => r.i == i) | return s!"{i}: no record"
  let uses (n : Name) := r.usesFull.any (·.1 == n) || r.usesStmt.any (·.1 == n)
  let extra := (r.extra.map (·.1.toString)).qsort (· < ·)
  return s!"{i}: values {r.values} marker {uses `marker} C.val {uses `C.val} extra {extra}"

partial def realizations : AddedConst → Array RealizationResult
  | .realization _ _ _ _ result => #[result]
  | .async _ _ _ nested => nested.flatMap realizations
  | _ => #[]

/-- The refusals of command `i`'s payload in the `.olean` `file`. -/
def refusalsOf (file : System.FilePath) (i : Nat) : IO String := do
  let (md, _) ← readModuleData file
  let some ce := (CommandEntries.ofModuleData md).find? (·.idx == i) | return "no payload"
  return toString (ce.refusals.map toString)

/-- What the realization records of the payloads in the `.olean` `file` say their realizations observed; of the
transient declarations, the constants they used. -/
def realizationRecords (file : System.FilePath) : IO String := do
  let (md, _) ← readModuleData file
  let obs := ((CommandEntries.ofModuleData md).flatMap (·.added.flatMap realizations)).map fun r =>
    s!"values {r.observed.values} uses {r.observed.uses} extra {r.observed.extra.map (·.1)} \
      declarations using {r.observed.decls.map (·.2)}"
  return toString obs

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "C.lean") "def C.val : Nat := 7\n"
  IO.FS.writeFile (dir / "E.lean") eSource
  IO.FS.writeFile (dir / "Z.lean") "def z : Nat := 0\n"
  for m in ["C", "E", "Z"] do
    discard <| lean dir #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
  IO.FS.writeFile (dir / "data.txt") "data"
  for tac in ["val_env", "const_all", "val_fx", "const_fx", "const_eval"] do
    for both in [true, false] do
      let label := s!"{tac} {if both then "both" else "alone"}"
      IO.FS.writeFile (dir / "M.lean") (mSource tac both)
      discard <| lean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
      for i in (if both then [1, 2] else [2]) do
        IO.println s!"{label}: {← observed (dir / "M.usage") i}"
        IO.println s!"{label}: {i}: refusals {← refusalsOf (dir / "M.olean") i}"
      -- with both requesting, either may run `realize` and hold the realization record
      unless both do IO.println s!"{label}: realization records {← realizationRecords (dir / "M.olean")}"
