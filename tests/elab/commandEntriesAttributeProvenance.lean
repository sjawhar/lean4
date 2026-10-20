import Lean
/-! Attributes are core by provenance: those the builtin initializers register, those a core builder builds and those
core's helpers register (`register_simp_attr`, `register_label_attr`, simprocs) run core code, and a command applying
them is kept; any other attribute's handlers may run code outside core Lean, and a command running them is refused,
whether the attribute was registered by `registerBuiltinAttribute` from an imported module (directly, through a tag,
parametric, enum or keyed-declarations attribute, or a builder of its own), inserted into the attribute registry
directly. (A plugin's attributes: `tests/misc_dir/usagePluginAttribute`.) -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def fxSource : String := "import Lean
open Lean Elab Command Meta

/-- What the attribute handlers below ran on: state no command payload carries. -/
initialize taggedRef : IO.Ref NameSet ← IO.mkRef {}

/-- 1: `registerBuiltinAttribute` from an `initialize` (the round's own case). -/
initialize registerBuiltinAttribute {
  name := `fa_direct, descr := \"d\"
  add := fun decl _ _ => taggedRef.modify (·.insert decl)
  erase := fun decl => taggedRef.modify (·.erase decl) }

/-- 2: a tag attribute whose `validate` runs this module's code. -/
initialize faTag : TagAttribute ← registerTagAttribute `fa_tag \"t\" (validate := fun decl => taggedRef.modify (·.insert decl))

/-- 3: a parametric attribute whose `getParam` runs this module's code. -/
initialize faParam : ParametricAttribute Nat ← registerParametricAttribute {
  name := `fa_param, descr := \"p\"
  getParam := fun decl _ => do taggedRef.modify (·.insert decl); pure 0 }

inductive FaE where | a | b deriving Inhabited

/-- 4: enum attributes whose `validate` runs this module's code. -/
initialize faEnum : EnumAttributes FaE ← registerEnumAttributes [(`fa_enum_a, \"a\", .a), (`fa_enum_b, \"b\", .b)] (validate := fun decl _ => taggedRef.modify (·.insert decl))

/-- 5: a keyed-declarations attribute whose `onAdded` runs this module's code. -/
unsafe def mkFaKeyedUnsafe : IO (KeyedDeclsAttribute Nat) := KeyedDeclsAttribute.init {
  name := `fa_keyed, descr := \"k\", valueTypeName := ``Nat
  onAdded := fun _ decl _ => taggedRef.modify (·.insert decl) }
@[implemented_by mkFaKeyedUnsafe] opaque mkFaKeyed : IO (KeyedDeclsAttribute Nat)
initialize faKeyed : KeyedDeclsAttribute Nat ← mkFaKeyed

/-- 6: an attribute inserted into the registry directly. -/
initialize attributeMapRef.modify (·.insert `fa_raw {
  name := `fa_raw, descr := \"r\"
  add := fun decl _ _ => taggedRef.modify (·.insert decl) })

/-- 7: `mkSimpAttr`, a core helper, over a simp extension this module made. -/
initialize faSimpExt : SimpExtension ← mkSimpExt `faSimpExt
initialize mkSimpAttr `fa_simp \"s\" faSimpExt `faSimpExt

/-- 8: an attribute builder this module registers; the attribute is declared in the importing module. -/
initialize registerAttributeImplBuilder `faBuilder fun _ args => do
  let [DataValue.ofName n] := args | throw \"bad args\"
  return { name := n, descr := \"b\", add := fun decl _ _ => taggedRef.modify (·.insert decl) }

elab \"declare_fa_built \" id:ident : command => do
  let env ← registerAttributeOfBuilder (← getEnv) `faBuilder `faBuilt [DataValue.ofName id.getId]
  setEnv env

elab \"#tagged\" : command => do logInfo m!\"tagged: {(← taggedRef.get).toList}\"
"

def f1Source : String := "import FX
def a : Nat := 0
@[fa_direct] def b : Nat := 0
attribute [fa_direct] a
attribute [-fa_direct] a
@[fa_tag] def c : Nat := 0
@[fa_param] def d : Nat := 0
@[fa_enum_a] def e : Nat := 0
@[fa_keyed foo] def k : Nat := 0
@[fa_raw] def r : Nat := 0
@[fa_simp] theorem s : True := trivial
declare_fa_built fa_built
@[fa_built] def bb : Nat := 0
#tagged
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "FX.lean") fxSource
  IO.FS.writeFile (dir / "F1.lean") f1Source
  runLean dir #["-o", "FX.olean", "--usage=FX.usage", "FX.lean"]
  runLean dir #["-o", "F1.olean", "--usage=F1.usage", "F1.lean"]
  let (md, _) ← readModuleData (dir / "F1.olean")
  for ce in CommandEntries.ofModuleData md do
    IO.println s!"command {ce.idx}: refusals {ce.refusals}"
