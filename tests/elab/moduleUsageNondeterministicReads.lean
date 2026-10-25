import Lean
/-! While a module is compiled with usage recording, the runtime records per command whether it read a value tied to
this process or this moment (`commandReadNondeterministic`): command 2 reads `IO.monoMsNow`, command 3 reads nothing of
the kind, a task command 4 starts reads `IO.getTID`, command 5 reads `IO.getRandomBytes`, whose values have the same
range in every run and are not recorded, and command 6 reads the number of hardware threads. `Elab.async` is off so
that no linter task of the commands runs concurrently. An imported module's initializer that reads `IO.monoNanosNow`
while the header is processed (`importReadNondeterministic`) makes the importer's `.usage` `noreuse` (`D`), and so does
one whose value every command of the importer may share although its range is the same in every run: random bytes
(`F`), the random generator's next number (`IO.rand`, `H`), or a task that runs IO code, whose scheduling may differ
(`U`); one that only creates a reference does not (`E`). -/
open Lean

def nSource : String := "import Lean
open Lean

set_option Elab.async false
#eval show IO Unit from do
  discard IO.monoMsNow
#eval show IO Unit from do
  pure ()
#eval show IO Unit from do
  discard <| IO.wait (← IO.asTask IO.getTID)
#eval show IO Unit from do
  discard <| IO.getRandomBytes 4
#eval show IO Unit from do
  if System.Platform.Internal.getHardwareConcurrency () == 0 then IO.println \"no hardware threads\"
#eval show IO Unit from do
  IO.println s!\"{← commandReadNondeterministic 2} {← commandReadNondeterministic 3} {← commandReadNondeterministic 4} {← commandReadNondeterministic 5} {← commandReadNondeterministic 6}\"
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "N.lean") nSource
  let args := #["-o", "N.olean", "--usage=N.usage", "N.lean"]
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir }
  IO.println s!"N: exit {out.exitCode}"
  IO.print (out.stdout ++ out.stderr)
  IO.FS.writeFile (dir / "C.lean") "initialize startNs : Nat ← IO.monoNanosNow\n"
  IO.FS.writeFile (dir / "B.lean") "initialize bit : Nat ← return (← IO.getRandomBytes 1)[0]!.toNat % 2\n"
  IO.FS.writeFile (dir / "G.lean") "initialize bit : Nat ← IO.rand 0 1\n"
  IO.FS.writeFile (dir / "T.lean")
    "initialize one : Nat ← do\n  let t ← IO.asTask (pure 1)\n  return (← IO.wait t).toOption.getD 0\n"
  IO.FS.writeFile (dir / "R.lean") "initialize counter : IO.Ref Nat ← IO.mkRef 0\n"
  IO.FS.writeFile (dir / "D.lean") "import C\ndef d : Nat := 1\n"
  IO.FS.writeFile (dir / "F.lean") "import B\ndef f : Nat := 1\n"
  IO.FS.writeFile (dir / "H.lean") "import G\ndef h : Nat := 1\n"
  IO.FS.writeFile (dir / "U.lean") "import T\ndef u : Nat := 1\n"
  IO.FS.writeFile (dir / "E.lean") "import R\ndef e : Nat := 1\n"
  for m in ["C", "B", "G", "T", "R", "D", "F", "H", "U", "E"] do
    let out ← IO.Process.output
      { cmd := "lean", args := #["-o", s!"{m}.olean", s!"--usage={m}.usage", s!"{m}.lean"], cwd := dir
        env := #[("LEAN_PATH", some dir.toString)] }
    unless out.exitCode == 0 do throw <| IO.userError s!"{m}: {out.stdout}{out.stderr}"
  for m in ["D", "F", "H", "U", "E"] do
    let mut j := Json.mkObj []
    for line in (← IO.FS.readFile (dir / s!"{m}.usage")).splitOn "\n" do
      unless line.isEmpty do j := j.mergeObj (← IO.ofExcept (Json.parse line))
    IO.println s!"{m}: noreuse {(j.getObjValD "noreuse").compress}, reason {(j.getObjValD "noreuseReason").compress}"
