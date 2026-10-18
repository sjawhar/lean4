import Lean
/-! A declaration command that removes a binding from an extension whose state delta diffs a map (a map declaration
extension, a tag attribute, a hash-map state, the namespace set) records the extension in its payload's
`stateOnly`: no entry expresses a removal, so the payload is refused and the module is declined (`noskip`). The
removals are direct state writes, which these deltas see without the direct-write counter. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def commandEntriesOf (e : EnvExtensionEntry) : CommandEntries := unsafeCast e

def xSource : String := "import Lean\nopen Lean\n\
  initialize mapExt : MapDeclarationExtension Nat ← mkMapDeclarationExtension\n\
  initialize registerBuiltinAttribute { name := `map_add, descr := \"test\", \
    add := fun decl _ _ => modifyEnv (mapExt.insert · decl 1) }\n\
  initialize registerBuiltinAttribute { name := `map_erase, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => \
      mapExt.toPersistentEnvExtension.modifyState (asyncMode := .sync) env (·.erase `victimM) }\n\
  initialize tagAttr : TagAttribute ← registerTagAttribute `my_tag \"test\"\n\
  initialize registerBuiltinAttribute { name := `tag_erase, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => tagAttr.ext.modifyState env (·.erase `victimT) }\n\
  initialize registerBuiltinAttribute { name := `hash_erase, descr := \"test\", \
    add := fun _ _ _ => modifyEnv fun env => Meta.Simp.simprocDeclExt.modifyState (asyncMode := .sync) env fun s => \
      { s with newEntries := s.newEntries.erase `victimH } }\n\
  unsafe def eraseNamespaceImpl (s : EnvExtensionState) : EnvExtensionState := \
    let m : SMap Name Environment.Visibility := unsafeCast s; unsafeCast { m with map₂ := m.map₂.erase `VictimN }\n\
  @[implemented_by eraseNamespaceImpl] opaque eraseNamespace (s : EnvExtensionState) : EnvExtensionState\n\
  def nsErase : CoreM Unit := do\n\
  \x20 let some ext := (← persistentEnvExtensionsRef.get).find? (·.name.toString.endsWith \"namespacesExt\") | \
    throwError \"no namespace extension\"\n\
  \x20 modifyEnv (ext.modifyState · eraseNamespace)\n\
  initialize registerBuiltinAttribute { name := `ns_erase, descr := \"test\", add := fun _ _ _ => nsErase }\n"

def mSource : String := "import X\n\
  @[map_add] def victimM : Nat := 0\n\
  @[map_erase] def d1 : Nat := 0\n\
  @[my_tag] def victimT : Nat := 0\n\
  @[tag_erase] def d2 : Nat := 0\n\
  open Lean Meta in simproc victimH (Nat.succ _) := fun _ => return .continue\n\
  @[hash_erase] def d3 : Nat := 0\n\
  def VictimN.x : Nat := 0\n\
  @[ns_erase] def d4 : Nat := 0\n"

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") xSource
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  IO.FS.writeFile (dir / "M.lean") mSource
  enableInitializersExecution
  let some _ ← Elab.runFrontend mSource {} "M.lean" `M (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2)).getD #[] |>.map commandEntriesOf
  let usage ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  IO.println s!"noskip {(usage.getObjValAs? Bool "noskip").toOption}, \
    reason {(usage.getObjValAs? String "noskipReason").toOption}"
  let watched := [`mapExt, `tagAttr, `Lean.Meta.Simp.simprocDeclExt, .num `_private.Lean.Namespace 0 ++ `Lean.namespacesExt]
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    IO.println s!"{o.i}: stateOnly {ce.stateOnly.filter watched.contains}, \
      entries {ce.entries.filterMap fun (n, _) => if watched.contains n then some n else none}"

#eval main
