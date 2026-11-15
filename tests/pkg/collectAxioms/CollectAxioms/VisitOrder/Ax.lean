module

/-! A structure whose field type depends on an axiom; the export walks `S9.mk` before `S9`. -/

public axiom fieldAx : Nat

public structure S9 where
  x : Fin fieldAx
