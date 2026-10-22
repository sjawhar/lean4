import Lean
/-! A recording run (`lean -o --usage`) accepts what one without `--usage` accepts: a command that fits its
`synthInstance.maxHeartbeats` only because an earlier command's search is in the persistent tier of the type class
resolution cache compiles with `--usage` too, the tier filled as without it. -/
open Lean

def tdSource : String := "class D (n : Nat) where
  x : Nat := n
instance d0 : D 0 := {}
instance ds {n : Nat} [D n] : D (n+1) := {}
def a : Nat := (inferInstance : D 40).x
set_option synthInstance.maxHeartbeats 1 in
def b : Nat := (inferInstance : D 40).x
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "TD.lean") tdSource
  for args in [#["-o", "TD.olean", "TD.lean"], #["-o", "TD.olean", "--usage=TD.usage", "TD.lean"]] do
    let out ← IO.Process.output { cmd := "lean", args, cwd := dir }
    IO.println s!"lean {args}: exit {out.exitCode}{out.stdout.trimAscii}"
