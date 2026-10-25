import Lean
/-! What a keep permit (`KeepPermit`, `ModuleUsage.keepPermit`) is bound to. `C`'s theorem depends on the module `ru`
resolves to; `Z` claims `ru` in its second version (compiled into a second directory searched first). `E1` is `C`'s
header processed against `Z` claiming nothing, `E2` against `Z` claiming `ru`: the same imported module names, other
contents. A permit is granted in `E1` and refused in `E2`; one checked in `E1` keeps nothing into `E2`, and one for `C2`
(another module importing the same modules) keeps none of `C`'s payloads. `keepPermit` refuses a `.usage` of another
module or one written with another `.olean`, an environment of another module, an import without digests whose
`.olean` changed, and, for a module that read the resolver's whole map, an import whose provides changed; it names a
module that joined the import closure (a rebuilt `W` that also imports `X`) or left it (one that no longer imports `U`)
as such. Its own lookups are not recorded as resolutions of the running module. -/
open Lean Elab Command

def runLean (dir : System.FilePath) (args : Array String) : IO (UInt32 × String) := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  return (out.exitCode, out.stdout ++ out.stderr)

def compile (dir : System.FilePath) (m : String) (usage := true) : IO Unit := do
  let args := #["-o", s!"{m}.olean"] ++ (if usage then #[s!"--usage={m}.usage"] else #[]) ++ #[s!"{m}.lean"]
  let (code, out) ← runLean dir args
  unless code = 0 do throw <| IO.userError s!"compiling {m} failed ({code}):\n{out}"

def zSource (claim : Bool) : String :=
  "import Lean\ndef zdummy : Nat := 1\n" ++ if claim then
    "open Lean IR in\nrun_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern `ru\n  \
      #[{ x := ⟨1⟩, borrow := false, ty := .object }] .object\n  { entries := [.standard `all \"lean_nat_succ\"] })\n"
  else ""

/-- `file`'s header processed as module `m`. -/
unsafe def header (file : System.FilePath) (m : Name) : IO Environment := do
  enableInitializersExecution
  let inputCtx := Parser.mkInputContext (← IO.FS.readFile file) file.toString
  let (hdr, _, messages) ← Parser.parseHeader inputCtx
  let (env, messages) ← processHeader hdr {} messages inputCtx (mainModule := m)
  for msg in messages.toList do IO.println s!"  header message: {← msg.toString}"
  return env

def shown (p : Except String KeepPermit) : String :=
  match p with | .ok _ => "granted" | .error e => s!"refused: {e}"

/-- Keeps the payload `ce` of `C`'s command 0 (`theorem t`) into `env` with `permit`. -/
def keepT (env : Environment) (permit : KeepPermit) (ce : CommandEntries) (md : ModuleData) : IO String := do
  let infos : NameMap ConstantInfo := (md.constNames.zip md.constants).foldl
    (fun m (n, c) => if n == `t then m.insert n c else m) {}
  try
    let env' ← CommandEntries.Testing.keep permit env ce infos {}
    return s!"kept (t in the result: {env'.contains `t})"
  catch e => return s!"keep threw: {e}"

unsafe def main : IO Unit := IO.FS.withTempDir fun base => do
  let d1 := base / "d1"
  let d2 := base / "d2"
  IO.FS.createDirAll d1
  IO.FS.createDirAll d2
  IO.FS.writeFile (d1 / "U.lean") "@[reducible] def ru : Nat := 7\n"
  IO.FS.writeFile (d1 / "W.lean") "import U\n@[reducible] def wv : Nat := ru\n"
  IO.FS.writeFile (d1 / "Z.lean") (zSource false)
  IO.FS.writeFile (d1 / "V.lean") "def vv : Nat := 1\n"
  IO.FS.writeFile (d1 / "C.lean") "import Z\nimport W\ntheorem t : wv = 7 := by with_reducible rfl\ndef c : Nat := 0\n"
  IO.FS.writeFile (d1 / "C2.lean") "import Z\nimport W\ndef c2 : Nat := 0\n"
  IO.FS.writeFile (d1 / "C3.lean") "import Z\nimport W\nimport Lean\n\
    open Lean in run_meta do if (← getEnv).const2ModIdx.isEmpty then logInfo \"empty\"\ndef c3 : Nat := 0\n"
  IO.FS.writeFile (d1 / "C4.lean") "import V\ndef c4 : Nat := vv\n"
  for m in ["U", "W", "Z", "C", "C2", "C3"] do compile d1 m
  compile d1 "V" (usage := false)
  compile d1 "C4"
  IO.FS.writeFile (d2 / "Z.lean") (zSource true)
  compile d2 "Z"
  initSearchPath (← findSysroot) [d1]
  let e1 ← header (d1 / "C.lean") `C
  let e1c3 ← header (d1 / "C3.lean") `C3
  initSearchPath (← findSysroot) [d2, d1]
  let e2 ← header (d1 / "C.lean") `C
  let e2c2 ← header (d1 / "C2.lean") `C2
  let e2c3 ← header (d1 / "C3.lean") `C3
  IO.println s!"same imported module names: {e1.header.moduleNames == e2.header.moduleNames}"
  let p1 ← ModuleUsage.keepPermit e1 `C (d1 / "C.olean") (d1 / "C.usage")
  IO.println s!"C in E1: {shown p1}"
  IO.println s!"C in E2: {shown (← ModuleUsage.keepPermit e2 `C (d1 / "C.olean") (d1 / "C.usage"))}"
  let .ok p1 := p1 | return
  let some ce := p1.payloads.find? (·.idx == 0) | throw <| IO.userError "no payload 0"
  IO.println s!"E1's permit for C, keeping C's t into E1: {← keepT e1 p1 ce p1.data}"
  IO.println s!"E1's permit for C, keeping C's t into E2: {← keepT e2 p1 ce p1.data}"
  let p2 ← ModuleUsage.keepPermit e2c2 `C2 (d1 / "C2.olean") (d1 / "C2.usage")
  IO.println s!"C2 in E2: {shown p2}"
  if let .ok p2 := p2 then
    IO.println s!"E2's permit for C2, keeping C's t into E2 as C2: {← keepT e2c2 p2 ce p1.data}"
    IO.println s!"E2's permit for C2, keeping C's t into E2: {← keepT e2 p2 ce p1.data}"
  IO.println s!"C2's .usage for C: {shown (← ModuleUsage.keepPermit e1 `C (d1 / "C.olean") (d1 / "C2.usage"))}"
  IO.println s!"C2 in E1, an environment of C: \
    {shown (← ModuleUsage.keepPermit e1 `C2 (d1 / "C2.olean") (d1 / "C2.usage"))}"
  IO.println s!"C3 in E1: {shown (← ModuleUsage.keepPermit e1c3 `C3 (d1 / "C3.olean") (d1 / "C3.usage"))}"
  IO.println s!"C3 in E2: {shown (← ModuleUsage.keepPermit e2c3 `C3 (d1 / "C3.olean") (d1 / "C3.usage"))}"
  -- `keepPermit`'s lookups of names the `.usage` records are not resolutions of this process's module
  discard <| startFrontendRun (record := true)
  let resolvedBefore := (← resolvedNames).size
  discard <| ModuleUsage.keepPermit e1 `C (d1 / "C.olean") (d1 / "C.usage")
  IO.println s!"names recorded as resolved by keepPermit: {(← resolvedNames).size - resolvedBefore}, \
    whole map read: {← allResolved}"
  IO.println s!"C's .usage with another .olean: \
    {shown (← ModuleUsage.keepPermit e1 `C (d1 / "C2.olean") (d1 / "C.usage"))}"
  -- an import without digests, then another version of it (compiled into a third directory searched first)
  let d3 := base / "d3"
  IO.FS.createDirAll d3
  IO.FS.writeFile (d3 / "V.lean") "def vv : Nat := 2\n"
  compile d3 "V" (usage := false)
  initSearchPath (← findSysroot) [d1]
  let e4 ← header (d1 / "C4.lean") `C4
  IO.println s!"C4: {shown (← ModuleUsage.keepPermit e4 `C4 (d1 / "C4.olean") (d1 / "C4.usage"))}"
  initSearchPath (← findSysroot) [d3, d1]
  let e4' ← header (d1 / "C4.lean") `C4
  IO.println s!"C4 with V changed: {shown (← ModuleUsage.keepPermit e4' `C4 (d1 / "C4.olean") (d1 / "C4.usage"))}"
  let d4 := base / "d4"
  IO.FS.createDirAll d4
  IO.FS.writeFile (d4 / "U.lean") "@[reducible] def ru : Nat := 7\n"
  IO.FS.writeFile (d4 / "X.lean") "def xx : Nat := 1\n"
  IO.FS.writeFile (d4 / "W.lean") "import U\nimport X\n@[reducible] def wv : Nat := ru\n"
  for m in ["U", "X", "W"] do compile d4 m
  initSearchPath (← findSysroot) [d4, d1]
  let e5 ← header (d1 / "C2.lean") `C2
  IO.println s!"C2 with X joining the closure: \
    {shown (← ModuleUsage.keepPermit e5 `C2 (d1 / "C2.olean") (d1 / "C2.usage"))}"
  let d5 := base / "d5"
  IO.FS.createDirAll d5
  IO.FS.writeFile (d5 / "W.lean") "@[reducible] def wv : Nat := 7\n"
  compile d5 "W"
  initSearchPath (← findSysroot) [d5, d1]
  let e6 ← header (d1 / "C2.lean") `C2
  IO.println s!"C2 with U leaving the closure: \
    {shown (← ModuleUsage.keepPermit e6 `C2 (d1 / "C2.olean") (d1 / "C2.usage"))}"

#eval main
