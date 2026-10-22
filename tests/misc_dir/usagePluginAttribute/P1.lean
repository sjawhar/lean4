def a : Nat := 0
@[fp_tag] def b : Nat := 0
attribute [fp_tag] a
theorem t : True := trivial
@[fp_panic] def c : Nat := 0
