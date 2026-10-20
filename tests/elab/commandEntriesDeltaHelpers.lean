import Lean
/-! The paths of the state-delta helpers that no recorded module reaches: an entry log (`StateDelta.ofLog`) whose
state changed beside an unchanged log, or whose old log is not a tail of the new one; a parametric attribute's key
log (an overwritten key replays its new value; a map changed without a new key, a non-tail key log, or a logged key
missing from the map is `stateOnly`); a removal from a `NameMap`, `NameSet` or `PHashMap` state; the simproc
declaration states' `builtin` guard; the namespace set's stage, imported-part and visibility guards; and the
length fallback of `List.addedSince` for a list that is not a tail. -/
open Lean

def deltaStr [ToString α] : StateDelta α → String
  | .entries es => s!"entries {es.toList}"
  | .stateOnly => "stateOnly"

def kindStr : StateDelta α → String
  | .entries es => s!"entries {es.size}"
  | .stateOnly => "stateOnly"

/-- A fresh `String` object per call, so that equal values are not shared. -/
@[noinline] def fresh (s : String) : IO String := return String.mk s.toList

unsafe def main : IO Unit := do
  -- entry log beside a state
  let a ← fresh "a"
  let log₀ : List String := [a]
  let s₀ : List String × NameSet := (log₀, {})
  IO.println s!"log: new prefix {deltaStr (StateDelta.ofLog s₀ ("c" :: "b" :: log₀, s₀.2))}"
  IO.println s!"log: unchanged, same state {deltaStr (StateDelta.ofLog s₀ (log₀, s₀.2))}"
  IO.println s!"log: unchanged, state changed {deltaStr (StateDelta.ofLog s₀ (log₀, s₀.2.insert `x))}"
  IO.println s!"log: old log not a tail {deltaStr (StateDelta.ofLog s₀ ([← fresh "a"], s₀.2))}"
  -- a parametric attribute's key log and map
  let some keyDelta := Compiler.implementedByAttr.ext.stateDelta? | throw <| IO.userError "no key-log delta"
  let m₀ : NameMap Name := ({} : NameMap Name).insert `f `g
  let k₀ : List Name × NameMap Name := ([`f], m₀)
  IO.println s!"key log: key overwritten {deltaStr (keyDelta k₀ (`f :: k₀.1, m₀.insert `f `h))}"
  IO.println s!"key log: map changed without a new key {deltaStr (keyDelta k₀ (k₀.1, m₀.insert `e `h))}"
  IO.println s!"key log: not a tail {deltaStr (keyDelta k₀ ([Name.mkSimple (← fresh "f")], m₀))}"
  IO.println s!"key log: logged key missing from the map {deltaStr (keyDelta k₀ (`e :: k₀.1, m₀))}"
  -- map states
  let nm : NameMap Nat := ({} : NameMap Nat).insert `x 1 |>.insert `y 2
  IO.println s!"NameMap: changed value {deltaStr (StateDelta.ofNameMap nm (nm.insert `x 3))}, \
    removal {deltaStr (StateDelta.ofNameMap nm (nm.erase `y))}"
  let ns : NameSet := ({} : NameSet).insert `x |>.insert `y
  IO.println s!"NameSet: addition {deltaStr (StateDelta.ofNameSet ns (ns.insert `z))}, \
    removal {deltaStr (StateDelta.ofNameSet ns (ns.erase `y))}"
  let hm : PersistentHashMap Name Nat := ({} : PersistentHashMap Name Nat).insert `x 1 |>.insert `y 2
  let hd := StateDelta.ofPHashMap (κ := Name) (ν := Nat) Name.quickLt (fun k v => s!"{k}={v}")
  IO.println s!"PHashMap: changed value {deltaStr (hd hm (hm.insert `x 3))}, removal {deltaStr (hd hm (hm.erase `y))}"
  -- the simproc declaration states' `builtin` part is fixed at import
  initSearchPath (← getBuildDir)
  let env ← importModules #[{ module := `Lean }] {}
  let some simprocDelta := Meta.Simp.simprocDeclExt.stateDelta? | throw <| IO.userError "no simproc delta"
  let sp := Meta.Simp.simprocDeclExt.getState env
  IO.println s!"simprocDeclExt: builtin changed {kindStr (simprocDelta sp { sp with builtin := sp.builtin.insert `x #[] })}"
  let some cbvDelta := Meta.Tactic.Cbv.cbvSimprocDeclExt.stateDelta? | throw <| IO.userError "no cbv delta"
  let cp := Meta.Tactic.Cbv.cbvSimprocDeclExt.getState env
  IO.println s!"cbvSimprocDeclExt: builtin changed {kindStr (cbvDelta cp { cp with builtin := cp.builtin.insert `x #[] })}"
  -- the namespace set
  let some nsExt := (← persistentEnvExtensionsRef.get).find? (·.name.toString.endsWith "namespacesExt") |
    throw <| IO.userError "no namespace extension"
  let some nsDelta := nsExt.stateDelta? | throw <| IO.userError "no namespace delta"
  -- a module's own namespaces are added after the import stage is switched off
  let n₀ : SMap Name Environment.Visibility := (unsafeCast (nsExt.getState (asyncMode := .local) env) :
    SMap Name Environment.Visibility).switch
  let nsCase (n₁ : SMap Name Environment.Visibility) : String := kindStr (nsDelta (unsafeCast n₀) (unsafeCast n₁))
  IO.println s!"namespaces: added {nsCase (n₀.insert `NewNs .public)}, \
    non-public value {nsCase (n₀.insert `NewNs .private)}, \
    imported part changed {nsCase { n₀ with map₁ := n₀.map₁.insert `NewNs .public }}, \
    still in stage 1 {nsCase { n₀ with stage₁ := true }}"
  -- `List.addedSince` falls back to the length difference when `before` is not a tail
  let notTail := [← fresh "a"]
  IO.println s!"addedSince: tail {List.addedSince ("c" :: "b" :: log₀) log₀}, \
    not a tail {List.addedSince ("c" :: "b" :: log₀) notTail} \
    (newPrefix? {(List.newPrefix? ("c" :: "b" :: log₀) notTail).isSome})"

#eval main
