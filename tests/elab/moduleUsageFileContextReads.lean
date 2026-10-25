import Lean
/-! While a module is compiled with usage recording, the run records per command whether it read the module's file name
or its source through the elaborators' accessors (`commandFileContextReads`, bits `FileContextRead.fileName` = 1 and
`FileContextRead.source` = 2): `E`'s `file_term` reads the file name, `len_term` the source. Commands that only report
messages, an unused-variable warning or an information message, read neither. `withoutValueReads` nested in another
restores the enclosing setting, so an environment variable read after the inner one ends is not recorded either. -/
open Lean

def eSource : String := "import Lean
open Lean Elab Term
elab \"file_term\" : term => return mkStrLit (← getFileName)
elab \"len_term\" : term => return mkNatLit (← getFileMap).source.length
"

def nSource : String := "import E
open Lean
def f : String := file_term
def n : Nat := len_term
theorem w (x : Nat) : True := trivial
#check (1 : Nat)
#eval show IO Unit from withoutValueReads do
  withoutValueReads (pure ())
  discard <| IO.getEnv \"FILE_CONTEXT_READS_TEST\"
#eval show IO Unit from do
  IO.println s!\"reads by command: {← (List.range 6).toArray.mapM (m := BaseIO) commandFileContextReads}\"
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "E.lean") eSource
  IO.FS.writeFile (dir / "N.lean") nSource
  for m in ["E", "N"] do
    let args := #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"]
    let env := #[("LEAN_PATH", some dir.toString)]
    let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env }
    IO.println s!"{m}: exit {out.exitCode}"
    IO.print ((out.stdout ++ out.stderr).replace dir.toString "DIR")
  let usage ← IO.FS.readFile (dir / "N.usage")
  IO.println s!"N.usage names FILE_CONTEXT_READS_TEST: {decide ((usage.splitOn "FILE_CONTEXT_READS_TEST").length > 1)}"
