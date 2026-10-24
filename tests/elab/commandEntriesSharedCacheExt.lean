import Lean
/-! Two command caches can read one environment extension (`registerCommandCacheExtension` refuses only a repeated
name): the recorder takes each cache's entries from that cache's own `stateDelta`, also where both caches see the same
two states (`viewStatesMemo` keys a cache's delta by the cache, not by the extension). -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def entryNats (es : Array EnvExtensionEntry) : Array Nat := es.map (unsafeCast ·)

def xSource : String := "import Lean
open Lean
initialize pairExt : EnvExtension (Nat × Nat) ← registerEnvExtension (pure (0, 0))
initialize fstCache : EnvExtension (Nat × Nat) ← registerCommandCacheExtension `fstCache pairExt (fun a b => if a.1 == b.1 then #[] else #[b.1]) (fun s n => (n, s.2))
initialize sndCache : EnvExtension (Nat × Nat) ← registerCommandCacheExtension `sndCache pairExt (fun a b => if a.2 == b.2 then #[] else #[b.2]) (fun s n => (s.1, n))
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  IO.FS.writeFile (dir / "M.lean")
    "import X\nopen Lean\nrun_cmd modifyEnv (pairExt.modifyState · fun _ => (1, 2))\n"
  runLean dir #["-o", "X.olean", "X.lean"]
  runLean dir #["-o", "M.olean", "--usage=M.usage", "M.lean"]
  let (md, _) ← readModuleData (dir / "M.olean")
  for ce in CommandEntries.ofModuleData md do
    let caches := (ce.main.caches ++ ce.checked.caches).map fun (p : Name × Array EnvExtensionEntry) =>
      (p.1, unsafe entryNats p.2)
    IO.println s!"command {ce.idx}: caches {caches}"
