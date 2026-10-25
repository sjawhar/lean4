import Lean
/-! While a module is compiled with usage recording, the runtime's effect notes (`takeRecordedEffects`,
`commandReadNondeterministic`) keep eight distinct notes per command and append `has more effects than were noted` for
the first distinct note beyond them: command 2 writes eight distinct environment variables and then reads a file, so its
record holds the eight writes and that note in place of the read; command 5 writes eight variables and then one of them
again with the same value, a repeat, so its record holds the eight writes alone. A write of an environment variable is
noted with the variable's name and the value's `String.hash` in 16 hex digits, never the value: command 3 writes one
variable. Command 4 reads the system's free memory, a value tied to this moment. `Elab.async` is off so that no linter
task of the commands runs concurrently. -/
open Lean

def nSource : String := "import Lean
open Lean

set_option Elab.async false
#eval show IO Unit from do
  for i in [0:8] do
    Std.Internal.UV.System.osSetenv s!\"EFFECT_NOTES_{i}\" (toString i)
  discard <| IO.FS.readFile \"data.txt\"
#eval show IO Unit from do
  Std.Internal.UV.System.osSetenv \"X\" \"1\"
#eval show IO Unit from do
  discard Std.Internal.UV.System.freeMemory
#eval show IO Unit from do
  for i in [0:8] do
    Std.Internal.UV.System.osSetenv s!\"BOUNDARY_{i}\" (toString i)
  Std.Internal.UV.System.osSetenv \"BOUNDARY_0\" \"0\"
#eval show IO Unit from do
  let effects ← takeRecordedEffects
  for i in [2, 3, 5] do
    for (c, what) in effects.byCommand do
      if c == i then IO.println s!\"command {i}: {what}\"
  let d := Nat.toDigits 16 (hash \"1\").toNat
  let hex := String.ofList (List.replicate (16 - d.length) '0' ++ d)
  let x := s!\"writes the environment variable X with the value hashed to {hex}\"
  IO.println s!\"command 3's note holds the value's String.hash: {effects.byCommand.contains (3, x)}\"
  IO.println s!\"command 4 read a nondeterministic value: {← commandReadNondeterministic 4}\"
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "N.lean") nSource
  IO.FS.writeFile (dir / "data.txt") "data"
  let args := #["-o", "N.olean", "--usage=N.usage", "N.lean"]
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir }
  IO.println s!"N: exit {out.exitCode}"
  IO.print (out.stdout ++ out.stderr)
