import Lean

/-! An elaborator, so that a module that uses it loads this module's shared library as a plugin. -/

open Lean Elab Term in
/-- `nat0%` is the natural number `0`. -/
elab "nat0%" : term => return mkNatLit 0
