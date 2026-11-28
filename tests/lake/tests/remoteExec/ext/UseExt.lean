import Ext0

/-!
A module that precompiles its imports and runs `extVal` in its compile: it loads `Ext0`'s library shared library
and the external library that implements the function.
-/

theorem extVal_one : extVal () = 1 := by native_decide
