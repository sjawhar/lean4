import Lean
/-! Recording per-command uses classifies every application head of a declaration's value, including a
constant whose name ends in a numeric component (`foo.1`, added here through `addDecl`), without panicking. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO String := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  return out.stdout ++ out.stderr

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") "import Lean
open Lean Elab Command Term
elab \"#num_const\" : command => liftTermElabM do
  addDecl <| .defnDecl {
    name := .num `foo 1, levelParams := [], type := .forallE `x (mkConst ``Nat) (mkConst ``Nat) .default
    value := .lam `x (mkConst ``Nat) (.bvar 0) .default, hints := .abbrev, safety := .safe }
elab \"num_const%\" : term => return mkApp (mkConst (.num `foo 1)) (mkNatLit 0)
#num_const
theorem t : True := trivial
noncomputable def d : Nat := (fun (_ : True) => num_const%) t
"
  let out ← runLean dir #["-o", "M.olean", "M.lean"]
  IO.println s!"panicked: {decide ((out.splitOn "PANIC").length > 1)}"
