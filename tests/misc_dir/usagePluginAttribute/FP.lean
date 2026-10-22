import Lean
open Lean

/-- What `fp_tag`'s handler ran on: state no command payload carries. -/
initialize fpRef : IO.Ref NameSet ← IO.mkRef {}

initialize registerBuiltinAttribute {
  name := `fp_tag, descr := "an attribute a plugin registers"
  add := fun decl _ _ => fpRef.modify (·.insert decl) }

/-- A runtime setting, which compiled code can change. -/
@[extern "lean_internal_set_exit_on_panic"] opaque setExitOnPanic (exit : Bool) : BaseIO Unit

initialize registerBuiltinAttribute {
  name := `fp_panic, descr := "an attribute whose handler changes a runtime setting"
  add := fun _ _ _ => setExitOnPanic false }
