import Lean
/-! A command's `.olean` payload carries only that command's own additions to the non-persistent caches (here
the compiler's `impureExt`, which every compiled definition extends), not the caches' whole post-command
states, so a payload's size does not grow with the number of commands before it. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def payloadSize (dir : System.FilePath) (i : Nat) (e : CommandEntries) : IO Nat := do
  let path := dir / s!"payload-{i}.bin"
  let _ ← CompactedRegion.save path `payload e #[] none
  return (← IO.FS.readBinFile path).size

#eval show IO Unit from unsafe IO.FS.withTempDir fun dir => do
  let defs := (List.range 40).map fun i => s!"def f{i} (n : Nat) : Nat := n + {i}"
  IO.FS.writeFile (dir / "M.lean") ("\n".intercalate defs ++ "\n")
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let (md, region) ← readModuleData (dir / "M.olean")
  let entries := CommandEntries.ofModuleData md
  let some first := entries[1]? | throw <| IO.userError "too few payloads"
  let some last := entries[38]? | throw <| IO.userError "too few payloads"
  let firstSize ← payloadSize dir 1 first
  let lastSize ← payloadSize dir 38 last
  IO.println s!"payloads: {entries.size}"
  IO.println s!"39th payload at most 1.5x the 2nd: {decide (2 * lastSize ≤ 3 * firstSize)}"
  Runtime.forget region
