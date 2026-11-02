import Lean

/-!
The imported-constants views store, for each name, the index of the first module declaring it.
Code outside the environment learns the module of an imported name only through
`getModuleIdxFor?`, so that whatever that function records or checks about such reads sees all of
them. The views still answer value lookups, folds and module-index-free constructions.
-/

open Lean

def nameOf (env : Environment) (idx? : Option Nat) : Option Name :=
  idx?.map (env.header.moduleNames[·]!)

/-! The supported read and the value-only API. -/

/-- info: (some `Init.Prelude, some `Init.Prelude) -/
#guard_msgs in
#eval show CoreM _ from do
  let env ← getEnv
  return (nameOf env (env.getModuleIdxFor? ``Nat.add),
    nameOf env (env.toKernelEnv.getModuleIdxFor? ``Nat.add))

/-- info: (true, true, true, true) -/
#guard_msgs in
#eval show CoreM _ from do
  let map := (← getEnv).constants.map₁
  return ((map.findConstCached? ``Nat.add).isSome, (map.find? ``Nat.add).isSome,
    map.contains ``Nat.add, map.foldl (fun k _ _ => k + 1) 0 != 0)

/-- info: (true, false) -/
#guard_msgs in
#eval
  let view := ImportedConsts.mergeModuleTreesLazy #[(3, ConstTrie.ofNames #[`a]),
    (5, ConstTrie.ofNames #[`b])]
  (view.contains `b, view.forceExpanded.contains `c)

/-! The views' module indices cannot be read. -/

/--
error: Invalid field `findConstEntryCached?`: The environment does not contain `Lean.ImportedConsts.findConstEntryCached?`, so it is not possible to project the field `findConstEntryCached?` from an expression
  map
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let map := (← getEnv).constants.map₁
  return map.findConstEntryCached? ``Nat.add |>.map (·.2)

/--
error: Invalid field `findModIdxCached?`: The environment does not contain `Lean.ImportedConsts.findModIdxCached?`, so it is not possible to project the field `findModIdxCached?` from an expression
  kenv.allImportedConsts
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let kenv := (← getEnv).toKernelEnv
  return kenv.allImportedConsts.findModIdxCached? kenv.importedExtraConsts ``Nat.add

/--
error: Invalid field `findEntry?`: The environment does not contain `Lean.ImportedConsts.findEntry?`, so it is not possible to project the field `findEntry?` from an expression
  map
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let map := (← getEnv).constants.map₁
  return map.findEntry? ``Nat.add |>.map (·.2)

/--
error: Invalid field `findModIdx?`: The environment does not contain `Lean.ImportedConsts.findModIdx?`, so it is not possible to project the field `findModIdx?` from an expression
  map
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let map := (← getEnv).constants.map₁
  return map.findModIdx? ``Nat.add

/--
error: Invalid field `foldlEntriesM`: The environment does not contain `Lean.ImportedConsts.foldlEntriesM`, so it is not possible to project the field `foldlEntriesM` from an expression
  map
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let map := (← getEnv).constants.map₁
  return map.foldlEntriesM (m := Id) (init := none) fun idx? n (_, i) =>
    if n == ``Nat.add then some i else idx?

/-- error: Unknown constant `Lean.ImportedConsts.collectDuplicates` -/
#guard_msgs in
#eval (ImportedConsts.collectDuplicates #[(3, ConstTrie.ofNames #[`a]),
  (5, ConstTrie.ofNames #[`a])]).map (·.entries.map (·.2))

/--
error: Unknown constant `Lean.ImportedConsts.mod`

Note: Inferred this name from the expected resulting type of `.mod`:
  ImportedConsts Unit
-/
#guard_msgs in
#eval match ImportedConsts.mergeModuleTreesLazy #[(7, ConstTrie.ofNames #[`a])] with
  | .mod i _ => some i
  | _ => none

/--
error: Application type mismatch: The argument
  fun i x => some i
has type
  Nat → ConstTrie Unit → Option Nat
but is expected to have type
  Lean.ImportedNode✝ Unit → Option Nat
in the application
  ImportedConsts.casesOn (ImportedConsts.mergeModuleTreesLazy #[(7, ConstTrie.ofNames #[`a])]) fun i x => some i
-/
#guard_msgs in
#eval @ImportedConsts.casesOn Unit (fun _ => Option Nat)
  (ImportedConsts.mergeModuleTreesLazy #[(7, ConstTrie.ofNames #[`a])])
  (fun (i : Nat) (_ : ConstTrie Unit) => some i) (fun _ _ _ _ => none) (fun _ _ _ => none)
  (fun _ _ => none)

/-! Neither can the private lookups that replaced them, nor the nodes inside a view. -/

/--
error: Invalid field `findEntryCached?`: The environment does not contain `Lean.ImportedConsts.findEntryCached?`, so it is not possible to project the field `findEntryCached?` from an expression
  map
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let map := (← getEnv).constants.map₁
  return map.findEntryCached? ``Nat.add |>.map (·.2)

/--
error: Invalid field `modIdxCached?`: The environment does not contain `Lean.ImportedConsts.modIdxCached?`, so it is not possible to project the field `modIdxCached?` from an expression
  kenv.allImportedConsts
of type `ImportedConsts ConstantInfo`
-/
#guard_msgs in
#eval show CoreM _ from do
  let kenv := (← getEnv).toKernelEnv
  return kenv.allImportedConsts.modIdxCached? kenv.importedExtraConsts ``Nat.add

/-- error: The private declaration `Lean.ImportedNode✝` is not accessible in the current context -/
#guard_msgs in
#eval @ImportedConsts.casesOn Unit (fun _ => Option Nat)
  (ImportedConsts.mergeModuleTreesLazy #[(7, ConstTrie.ofNames #[`a])]) fun root =>
    match root with
    | .mod i _ => some i
    | _ => none

/--
error: Invalid field `casesOn`: The environment does not contain `Lean.ImportedNode.casesOn`, so it is not possible to project the field `casesOn` from an expression
  root
of type `Lean.ImportedNode✝ Unit`
-/
#guard_msgs in
#eval @ImportedConsts.casesOn Unit (fun _ => Nat)
  (ImportedConsts.mergeModuleTreesLazy #[(7, ConstTrie.ofNames #[`a])]) fun root =>
    root.casesOn (motive := fun _ => Nat) (fun i _ => i) (fun _ _ _ _ => 0) (fun _ _ _ => 0)
      (fun _ _ => 0)

/-- error: Field `root` from structure `Lean.ImportedConsts` is private -/
#guard_msgs in
#eval (ImportedConsts.mergeModuleTreesLazy #[(7, ConstTrie.ofNames #[`a])]).1
