import Lean
open Lean

/-- What `fp_tag`'s handler ran on: state no command payload carries. -/
initialize fpRef : IO.Ref NameSet ← IO.mkRef {}

initialize registerBuiltinAttribute {
  name := `fp_tag, descr := "an attribute a plugin registers"
  add := fun decl _ _ => fpRef.modify (·.insert decl) }
