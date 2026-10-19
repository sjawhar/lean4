module

/-! A structure whose field type uses `sorry`; the export walks `S15.mk` before `S15`. -/

public structure S15 where
  x : Fin (sorry : Nat)
