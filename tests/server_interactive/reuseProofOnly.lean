/-!
lean-build-perf#20: a proof-only edit to a `theorem` (same header; only the tactic/term proof changes)
keeps later, unrelated commands' results instead of re-elaborating them.
-/

theorem reuseProofOnly_early : True := by
  trivial
  --^ insert: "; skip"

theorem reuseProofOnly_later : 1 + 1 = 2 := by
  dbg_trace "reuseProofOnly_later: elaborated"
  rfl
--^ collectDiagnostics
-- `reuseProofOnly_later` should be traced exactly once overall (from the first elaboration). The
-- proof-only edit to the earlier, unrelated `reuseProofOnly_early` must not cause it to run again --
-- that is the whole point of lean-build-perf#20.

-- RESET

/-!
lean-build-perf#20 negative test: a later `#print axioms` command transitively reads an edited
theorem's value through an intermediate citation (`reuseAxiomPrint_uses`, itself safely *kept* because
merely citing a theorem as an opaque proof term is proof-irrelevant) and so must be re-elaborated, not
kept, to report the up-to-date axiom set. This exercises `Reuse.commandVerdict`'s transitive taint
propagation: `reuseAxiomPrint_uses` is folded into the unsafe-name set because it *references*
`reuseAxiomPrint_base` (even though referencing it is itself safe), so the later `#print axioms`
mentioning `reuseAxiomPrint_uses` is correctly forced to re-elaborate.
-/

theorem reuseAxiomPrint_base : True := by
  trivial
  --^ change: "trivial" "sorry"

theorem reuseAxiomPrint_uses : True := reuseAxiomPrint_base

#print axioms reuseAxiomPrint_uses
--^ collectDiagnostics
-- Before the edit: `reuseAxiomPrint_base`'s proof has no axioms, so neither does
-- `reuseAxiomPrint_uses`. After the edit (`trivial` -> `sorry`), `reuseAxiomPrint_base` uses
-- `sorryAx`, so `reuseAxiomPrint_uses` transitively does too -- the second `collectDiagnostics` must
-- show `sorryAx`. If the `#print axioms` command were incorrectly kept (or `reuseAxiomPrint_uses`
-- incorrectly treated as fully independent of the edit), it would still report no axioms, which would
-- be unsound and must not happen.

-- RESET

/-!
lean-build-perf#20: a proof-only edit whose new proof needs a *different set* of generated auxiliary
declarations than the old one (not just different content under the same names) must invalidate any
later command that referenced an auxiliary name the edit drops. Nested `match` terms inside a tactic
proof are compiled to numbered `match_N` auxiliary definitions; changing the number of match arms
changes how many of these a proof needs.

NOTE: the exact auxiliary names Lean's equation/match compiler assigns are an implementation detail
this test deliberately does not hard-code (`reuseAuxRename_helper.match_1` is referenced only if it
actually exists after the first elaboration; if the compiler's actual naming differs in this Lean
version, `fix_expected.py` run after a real build is how to confirm and, if needed, adjust the second
tactic's shape so the aux-name set genuinely differs between the two versions -- that is an empirical
check this static test cannot replace, see lean-build-perf#20).
-/

theorem reuseAuxRename_helper (x : Bool ⊕ Bool) : Bool :=
  match x with
  | .inl b => b
  | .inr b => b
  --^ change: "| .inr b => b" "| .inr b => !b"

theorem reuseAuxRename_later : reuseAuxRename_helper (.inl true) = true := by
  dbg_trace "reuseAuxRename_later: elaborated"
  rfl
--^ collectDiagnostics
-- `reuseAuxRename_later` does not reference `reuseAuxRename_helper.match_1` directly, so this
-- specific pair is actually expected to be *kept* (it only cites `reuseAuxRename_helper` by name,
-- handled by the ordinary reference-not-elimination path) -- this case is here primarily to confirm
-- the overall feature does not regress on a theorem whose auxiliary-declaration set is unstable
-- across edits, and `reuseAuxRename_later`'s single trace line in the expected output is itself the
-- check that it was *not* forced to re-elaborate (a "same name, same type" aux-set edit alone is not
-- a soundness hazard unless something later names the dropped auxiliary declaration directly).
