/-!
lean-build-perf#20: a proof-only edit to a `theorem` (same header; only the tactic/term proof changes)
keeps later, unrelated commands' results instead of re-elaborating them.
-/

theorem reuseProofOnly_early : True := by
  trivial
--^ sync
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
--^ sync
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
later command that referenced an auxiliary name the edit drops. A `match` term elaborated as part of
a declaration's value is compiled to a numbered `match_N` auxiliary definition hanging off that
declaration's name; adding an unrelated second `match` to the proof adds a new such auxiliary name to
`reuseAuxRename_helper`'s aux-decl set without changing the name of the original match (confirmed
empirically against this toolchain: a lone `match` in this shape is named
`reuseAuxRename_helper.match_1_1` both before and after, and the added `match` is a distinct name) --
i.e. this is a genuine symmetric-difference case (an added name), not a same-name content change.
-/

theorem reuseAuxRename_helper (b : Bool) : True :=
  match b with | true => trivial | false => trivial
--^ sync
--^ insert: "let _ := match b with | true => (0:Nat) | false => 1\n  "

theorem reuseAuxRename_later : True := by
  dbg_trace "reuseAuxRename_later: elaborated"
  exact reuseAuxRename_helper true
--^ collectDiagnostics
-- `reuseAuxRename_later` does not reference `reuseAuxRename_helper.match_1_1` (or any aux name)
-- directly, so this specific pair is actually expected to be *kept* (it only cites
-- `reuseAuxRename_helper` by name, handled by the ordinary reference-not-elimination path) -- this
-- case is here primarily to confirm the overall feature does not regress on a theorem whose
-- auxiliary-declaration set grows across edits, and `reuseAuxRename_later`'s single trace line in the
-- expected output is itself the check that it was *not* forced to re-elaborate (an aux-set edit alone
-- is not a soundness hazard unless something later names the added/dropped auxiliary declaration
-- directly).
