module

public import CollectAxioms.VisitOrderFlip.Ax

/-! ## A declaration that changes the order of the export walk

`CollectAxioms.VisitOrderFlip.Ax` is `CollectAxioms.VisitOrder.Ax` plus `r7`, which the export walks
before `S9.mk` and which reaches `S9` directly. The summaries are the ones checked in
`CollectAxioms` for `CollectAxioms.VisitOrder.Ax`. This module is a separate root: both modules
declare `S9`. -/

public theorem visitOrderThm (s : S9) : s = s := rfl

/-- info: 'visitOrderThm' depends on axioms: [fieldAx] -/
#guard_msgs in
#print axioms visitOrderThm

/-- info: 'S9' depends on axioms: [fieldAx] -/
#guard_msgs in
#print axioms S9

/-- info: 'S9.mk' depends on axioms: [fieldAx] -/
#guard_msgs in
#print axioms S9.mk

/-- info: 'r7' depends on axioms: [fieldAx] -/
#guard_msgs in
#print axioms r7
