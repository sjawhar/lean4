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

-- RESET

import Lean.Server.Test.Cancel
open Lean.Server.Test.Cancel

/-!
A proof-only edit to a theorem whose *old* elaboration has not kernel-checked yet
(e.g. it is still running a test-blocking tactic) must not deadlock. `startGraft` needs `old`'s
kernel-checked environment (`Environment.checked`) to diff against; under `Elab.async`, a theorem's
*signature* commits as soon as its own command's `resultSnap` resolves, while its proof body and
kernel check keep running on a background task (see `AddDecl.lean`'s `BaseIO.mapTask checkAct
env.checked`). Blocking on that task here is unsound: it can itself depend on a *later* command
making progress (the one that calls `unblock` below), which cannot happen while grafting's own
startup is blocked waiting for it. Grafting must decline and fall back to ordinary re-elaboration
instead of hanging.
-/

theorem reuseProofOnlyBlockedOld : True := by
  wait_for_unblock
  skip
    --^ waitFor: blocked
    --^ insert: "; trivial\nexample : True := by unblock; trivial"
    --^ collectDiagnostics
    -- (should print "blocked!" exactly once and the edit must complete, not hang)

-- RESET

/-!
A kept (grafted) command that registers into a *scoped* environment extension --
here, `Meta.instanceExtension` via an `instance` command -- must not be silently invisible to a later
command's elaboration. `Environment.replayConsts` only replays `asyncConstsMap` and the kernel
extensions that register a `replay?`; `ScopedEnvExtension`s such as `Meta.instanceExtension`
(`asyncMode := .mainOnly`, no `replay?`) are not replayed, so the grafted environment's `base` -- what
elaboration actually queries for instance resolution -- never sees the kept `instance` command's
registration.
-/

theorem reuseExtInstance_early : True := by
  trivial
--^ sync
       --^ insert: "; skip"

class reuseExtInstance_C (n : Nat) where

instance reuseExtInstance_inst : reuseExtInstance_C 0 where

macro "reuseExtInstance_tac" : tactic => `(tactic| exact inferInstance)

example : reuseExtInstance_C 0 := by
  sorry
--^ sync
--^ change: "sorry" "reuseExtInstance_tac"
--^ collectDiagnostics

-- RESET

/-!
Same gap, for `@[simp]`: a kept command's simp-set registration must still make a
later `simp` call fire, not just leave the lemma's constant reachable by name.
-/

theorem reuseExtSimp_early : True := by
  trivial
--^ sync
       --^ insert: "; skip"

opaque reuseExtSimp_f (n : Nat) : Nat
axiom reuseExtSimp_f_ax (n : Nat) : reuseExtSimp_f n = n + 1
@[simp] theorem reuseExtSimp_f_eq (n : Nat) : reuseExtSimp_f n = n + 1 := reuseExtSimp_f_ax n

example (n : Nat) : reuseExtSimp_f n = n + 1 := by
  sorry
--^ sync
--^ change: "sorry" "simp"
--^ collectDiagnostics
-- If the kept `@[simp]` lemma's registration is invisible after grafting, `simp` fails to close this
-- goal even though `reuseExtSimp_f_eq` itself still exists as a constant.


