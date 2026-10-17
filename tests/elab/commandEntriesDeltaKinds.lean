import Lean
/-! Replaying each command's payload onto that command's own before-environment reproduces its after-state, for
every kind of extension state the recorder handles: an entry log whose exporter sorts and deduplicates (the
duplicate entry of a later command is replayed too), a scoped extension whose exporter drops some entries (the
dropped entries are replayed too), a declaration map entry inserted before its declaration exists (replayed
with the inserting command), tag attributes, parametric attributes, enum and reducibility overwrites, hash-map
states (compiled declarations, structures), namespaces, a pass installer, and an extension written from an
asynchronous proof. The check compares each extension's private export under the after-environment and, for the
test's own extensions, the states themselves (log and set, scoped stack, map bindings). Payloads of `namespace`
and `end` are refused: they change the scope stack, which no entry expresses. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

unsafe def commandEntriesOf (e : EnvExtensionEntry) : CommandEntries := unsafeCast e

unsafe def compactBytes (dir : System.FilePath) (a : α) : IO ByteArray := do
  let path := dir / "cmp.bin"
  let _ ← CompactedRegion.save path `compare a #[] none
  IO.FS.readBinFile path

def excludedExtension (n : Name) : Bool :=
  let s := n.toString
  n == commandEntriesExt.name || n == `Lean.ModuleUsage.ext || n == `Lean.ModuleUsage.stmtExt ||
    s.endsWith ".exportedAxiomsExt" || s.endsWith ".modPkgExt" ||
    s.endsWith ".deprecatedModuleExt" || s.endsWith "symbolFrequency" || s.endsWith "sineQueNon"

abbrev PExt := PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

def modeOf (ext : PExt) : EnvExtension.AsyncMode :=
  match ext.toEnvExtension.asyncMode with
  | .async _ => .sync
  | m => m

unsafe def sameObjects (a b : Array EnvExtensionEntry) : Bool :=
  a.size == b.size && (a.zip b).all fun (x, y) => ptrAddrUnsafe x == ptrAddrUnsafe y

/-- The states of the test's own extensions, in a form whose compacted bytes do not depend on how a map was
built: the log and the set of `logExt`, the scoped stack's log and states of `scopeExt`, the bindings of
`mapExt`, the log and array of `asyncExt`. `none` for every other extension. -/
unsafe def fingerprint (dir : System.FilePath) (ext : PExt) (env : Environment) : IO (Option ByteArray) := do
  let s := ext.getState (asyncMode := modeOf ext) env
  match ext.name with
  | `logExt =>
    let (log, set) : List Name × NameSet := unsafeCast s
    some <$> compactBytes dir (log, set.toList)
  | `scopeExt =>
    let st : ScopedEnvExtension.StateStack Name Name (Array Name) := unsafeCast s
    let entries := st.newEntries.map fun
      | .global n => (Name.anonymous, n)
      | .scoped ns n => (ns, n)
    some <$> compactBytes dir (entries, st.stateStack.map (·.state))
  | `mapExt =>
    let m : NameMap Name := unsafeCast s
    some <$> compactBytes dir m.toList
  | `asyncExt =>
    let (log, arr) : List Nat × Array Nat := unsafeCast s
    some <$> compactBytes dir (log, arr)
  | _ => return none

/-- `target` with the state of every extension a command payload replays (persistent and scoped extensions,
registered command caches, the local-entry log) taken from `source`. -/
def withReplayStateOf (source target : Environment) : IO Environment := do
  let mut target := target
  for ext in ← persistentEnvExtensionsRef.get do
    target := ext.toEnvExtension.setState target (ext.toEnvExtension.getState source (asyncMode := modeOf ext))
      (asyncMode := modeOf ext)
  for ext in ← commandCacheExtensionsRef.get do
    target := ext.copyState source target
  return localEntriesExt.setState target (localEntriesExt.getState source (asyncMode := .local))
    (asyncMode := .local)

/-- Extensions whose payload membership the output reports, to show each kind was exercised. -/
def watched : List Name := [`logExt, `scopeExt, `mapExt, `asyncExt, `Lean.Compiler.nospecializeAttr,
  `Lean.matchPatternAttr, .num `_private.Lean.Structure 0 ++ `Lean.structureExt, `Lean.Compiler.LCNF.baseExt,
  .num `_private.Lean.Namespace 0 ++ `Lean.namespacesExt, `Lean.exportAttr, `reducibilityCore,
  `Lean.Compiler.inlineAttrs, `Lean.Compiler.LCNF.passManagerExt]

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\n\
    initialize logExt : SimplePersistentEnvExtension Name NameSet ← registerSimplePersistentEnvExtension { \
      addEntryFn := fun s n => s.insert n, addImportedFn := fun _ => {}, \
      toArrayFn := fun es => es.eraseDups.toArray.qsort Name.quickLt }\n\
    initialize registerBuiltinAttribute { name := `log_tag, descr := \"test\", \
      add := fun decl _ _ => modifyEnv (logExt.addEntry · decl) }\n\
    initialize registerBuiltinAttribute { name := `log_dup, descr := \"test\", \
      add := fun _ _ _ => modifyEnv (logExt.addEntry · `dup) }\n\
    initialize scopeExt : SimpleScopedEnvExtension Name (Array Name) ← registerSimpleScopedEnvExtension { \
      addEntry := fun s n => s.push n, initial := #[], \
      exportEntry? := fun _ n => if n matches .str _ \"hidden\" then ⟨none, none, none⟩ else .uniform (some n) }\n\
    initialize registerBuiltinAttribute { name := `scope_tag, descr := \"test\", \
      add := fun decl _ kind => scopeExt.add decl kind }\n\
    initialize mapExt : MapDeclarationExtension Name ← mkMapDeclarationExtension\n\
    initialize registerBuiltinAttribute { name := `map_pre, descr := \"test\", \
      add := fun decl _ _ => modifyEnv (mapExt.insert · (decl ++ `later) decl) }\n\
    initialize asyncExt : SimplePersistentEnvExtension Nat (Array Nat) ← registerSimplePersistentEnvExtension { \
      addEntryFn := Array.push, addImportedFn := fun _ => #[], asyncMode := .async .asyncEnv }\n"
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  let src := "import X\n\
    @[log_tag] def zeta : Nat := 0\n\
    @[log_tag, log_dup] def alpha : Nat := 1\n\
    @[log_dup] def beta : Nat := 2\n\
    @[scope_tag] def hidden : Nat := 3\n\
    @[scope_tag] def shown : Nat := 4\n\
    namespace S\n\
    @[scoped scope_tag] def s1 : Nat := 5\n\
    end S\n\
    @[map_pre] def m : Nat := 6\n\
    def m.later : Nat := 7\n\
    @[nospecialize] def ns : Nat := 8\n\
    @[match_pattern] def mp (n : Nat) : Nat := n + 1\n\
    structure P where\n  x : Nat\n\
    def A.B.c : Nat := 9\n\
    @[export lean_delta_kinds_test_sym] def ex (n : Nat) : Nat := n\n\
    @[implicit_reducible] def rr : Nat := 10\n\
    attribute [irreducible] rr\n\
    def g (n : Nat) : Nat := n\n\
    attribute [inline] g\n\
    @[cpass] meta def inst : Lean.Compiler.LCNF.PassInstaller := { phase := .base, install := pure }\n\
    theorem at1 : True := by\n  run_tac Lean.modifyEnv (asyncExt.addEntry (asyncDecl := `at1) · 11)\n  exact trivial\n"
  IO.FS.writeFile (dir / "M.lean") src
  enableInitializersExecution
  let some _ ← Elab.runFrontend src {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "elaboration of M failed"
  let obs := (← ModuleUsage.commandObservationsRef.get).qsort (·.i < ·.i)
  let (md, _) ← readModuleData (dir / "M.olean")
  let payloads := ((md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2)).getD #[] |>.map commandEntriesOf
  let pExts := (← persistentEnvExtensionsRef.get).filter (!excludedExtension ·.name)
  for o in obs do
    let some ce := payloads.find? (·.idx == o.i) | throw <| IO.userError s!"no payload {o.i}"
    let shown := ce.entries.filterMap fun (n, _) => if watched.contains n then some n else none
    -- as when a kept command is replayed: its constants are present, every extension is in its before-state
    let base ← withReplayStateOf o.before.env o.after.env
    let replayed? : Except String Environment ← try
        pure (.ok (← replayCommandEntries base ce (scopeDepth o.before.env) {}))
      catch e => pure (.error (toString e))
    match replayed? with
    | .error e => IO.println s!"{o.i}: refused {shown}: {e}"
    | .ok replayed =>
      let mut mismatches := #[]
      for ext in pExts do
        let want := (ext.exportEntriesFn o.after.env (ext.getState (asyncMode := modeOf ext) o.after.env)).private
        let got := (ext.exportEntriesFn o.after.env (ext.getState (asyncMode := modeOf ext) replayed)).private
        let exportSame ← if sameObjects want got then pure true else
          pure ((← compactBytes dir want) == (← compactBytes dir got))
        let stateSame := (← fingerprint dir ext o.after.env) == (← fingerprint dir ext replayed)
        unless exportSame && stateSame do
          mismatches := mismatches.push ext.name
      IO.println s!"{o.i}: {if mismatches.isEmpty then "ok" else s!"mismatch {mismatches}"} {shown}"

#eval main
