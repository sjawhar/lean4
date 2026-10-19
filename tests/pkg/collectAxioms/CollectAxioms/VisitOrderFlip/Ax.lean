module

/-! `CollectAxioms.VisitOrder.Ax` plus `r7`, which reaches `S9` directly. -/

public axiom fieldAx : Nat

public structure S9 where
  x : Fin fieldAx

public def r7 (_ : S9) : Nat := 0
