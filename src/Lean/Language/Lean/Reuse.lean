/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Claude (sami-leanperf, peer session)
-/
module

prelude
public import Lean.Environment
public import Lean.Elab.InfoTree.Types
public import Lean.Syntax
public import Lean.Parser.Command
public import Lean.Meta.InferType

public section

/-!
# Proof-only edit reuse (theorem-labs/lean-build-perf#20)

When an edit to a `theorem` command changes only its proof body (same `declModifiers`, name, universe
parameters and statement), later commands in the same file do not need to be re-elaborated from scratch:
most of them never observe a theorem's proof at all, by proof irrelevance. This module implements the
soundness rule posted on lean-build-perf#20: detecting such an edit (`isProofOnlyEdit`), and deciding,
for each later command, whether its own previously-computed result can be kept (`CommandSafety.safe`) or
must be re-elaborated (`CommandSafety.unsafe`), together with the environment-grafting primitive
(`Environment.replayConsts`, already in `Lean/Environment.lean`) that lets a kept command's declarations
be re-added on top of the newly-elaborated environment instead of the stale one they were first checked
against.

The rule, in short (see the issue for the full derivation from the kernel's `is_def_eq_proof_irrel`/
`to_cnstr_when_K`/`elim_only_at_universe_zero`):

* A later command that does not mention the edited theorem `D` (or any of its auxiliary declarations) by
  name anywhere in its own elaborated types/values is always safe (`constReferencesAny` is `false`):
  proof irrelevance never comes into it because there is nothing to compare.
* A later command that does mention `D`/an aux name is still safe *unless* that name is used as the
  target of a `.proj` or as the major premise of a non-K-eliminating `casesOn`/`rec`/`recOn`/`brecOn`/
  matcher application: those are the only kernel-observable channels through which a theorem's specific
  proof content (as opposed to its mere existence/type) can affect a later declaration's elaborated or
  kernel-checked result (`constUnsafelyUsesValue`).
* Commands that do not themselves add a declaration we can walk (`#print`, `#print axioms`, `#eval`,
  `#reduce`, and anything else that is not a plain `Lean.Parser.Command.declaration`) are always re-run if
  they mention `D`/an aux name anywhere in their own syntax (`mentionsAnyName`), since there is no Expr
  tree to walk and some of them (`#print axioms`, `#eval`'s `sorry` guard) are known to read declaration
  values structurally.

Known, documented limitation (see the issue): a custom tactic/elaborator/`run_meta` block that reads a
constant's value via `Lean.Environment.find?`/`ConstantInfo.value?` directly, without that value ever
surfacing as a term in the command's own elaborated output, is invisible to this analysis. Closing that
fully would mean instrumenting constant lookup itself, a far larger project; `ModuleUsage`'s own
`noskip`/`ExtraModUse` approximations, and Lean's existing incremental-tactic-reuse (which already only
checks syntactic equivalence, not semantic independence), carry the same class of gap today.
-/

namespace Lean.Language.Lean.Reuse

/--
Unwraps `X in command` wrappers (`set_option foo in theorem ...`, `open Foo in theorem ...`,
`omit [...] in theorem ...`, nested arbitrarily) to find the innermost command. Best-effort: every
built-in `in`-combinator puts the wrapped command last, but if that assumption is ever wrong for some
wrapper this simply fails to unwrap and the caller falls back to its more conservative, non-declaration
handling -- a missed optimization, never a soundness issue.
-/
partial def unwrapCommand (stx : Syntax) : Syntax :=
  if stx.isOfKind ``Lean.Parser.Command.in then
    match stx.getArgs.back? with
    | some inner => unwrapCommand inner
    | none => stx
  else
    stx

/--
Peels matching `X in` wrappers off `old`/`new` together, requiring every wrapper level's own clause
(everything but the nested command) to be `eqWithInfo`-identical between the two (so e.g. a changed
`set_option maxHeartbeats` value disqualifies the edit, same as a changed `declModifiers`/`declSig`
would). Returns `none` if the wrapper structure or any wrapper clause differs.
-/
partial def peelInWrappers (old new : Syntax) : Option (Syntax × Syntax) :=
  if old.isOfKind ``Lean.Parser.Command.in && new.isOfKind ``Lean.Parser.Command.in then
    let n := old.getNumArgs
    if n == 0 || n != new.getNumArgs then none
    else if (List.range (n - 1)).all (fun i => (old.getArg i).eqWithInfo (new.getArg i)) then
      peelInWrappers (old.getArg (n - 1)) (new.getArg (n - 1))
    else none
  else if old.isOfKind ``Lean.Parser.Command.in || new.isOfKind ``Lean.Parser.Command.in then
    none -- wrapper added or removed
  else
    some (old, new)

/--
Like `Syntax.eqWithInfo`, but ignoring `SourceInfo` (source positions/trivia) entirely: two commands
compare equal here iff they have the same structure (node kinds, atom text, identifier `rawVal`/`val`/
`preresolved`), regardless of where in the file they sit. `Syntax.eqWithInfo` cannot be used for this:
after a proof-only edit changes an earlier theorem's length, every later command's absolute byte
position shifts even when its own text is untouched, so a position-sensitive comparison would always
report "changed" and grafting would never fire except by coincidence (equal-length edits). This is the
comparison `graftedContinue`'s "is this later command's text still exactly what we last saw" check
needs; `Reuse.commandVerdict`'s own occurrence/eliminator analysis is still what decides *safety*.
-/
partial def eqIgnoringPos : Syntax → Syntax → Bool
  | .missing, .missing => true
  | .node _ k args, .node _ k' args' => k == k' && args.isEqv args' eqIgnoringPos
  | .atom _ val, .atom _ val' => val == val'
  | .ident _ rawVal val pre, .ident _ rawVal' val' pre' =>
    rawVal == rawVal' && val == val' && pre == pre'
  | _, _ => false

/-- `stx` is a `theorem` command: a `Lean.Parser.Command.declaration` node whose second child is a
`Lean.Parser.Command.theorem` node (`"theorem " declId declSig declVal`). -/
def isTheoremDeclaration (stx : Syntax) : Bool :=
  stx.isOfKind ``Lean.Parser.Command.declaration &&
  stx.getNumArgs == 2 &&
  (stx.getArg 1).isOfKind ``Lean.Parser.Command.theorem &&
  (stx.getArg 1).getNumArgs == 4

/--
`old` and `new` are both `theorem` commands (after peeling any matching `X in` wrappers, see
`peelInWrappers`) whose `declModifiers`, `theorem` token, `declId` and `declSig` are syntactically
identical (`Syntax.eqWithInfo`): only `declVal` (the proof, including any `termination_by`/`where`
suffix) may differ. This is purely syntactic; the caller still has to re-elaborate `new` and confirm the
resulting type/levelParams/attributes actually match before treating this as a safe proof-only edit
(guaranteed by construction here, since nothing before `D` in the file changed, but cheap to assert).
-/
def isProofOnlyEdit (old new : Syntax) : Bool := Id.run do
  let some (old, new) := peelInWrappers old new | return false
  unless isTheoremDeclaration old && isTheoremDeclaration new do
    return false
  unless (old.getArg 0).eqWithInfo (new.getArg 0) do
    return false -- declModifiers differ (visibility, attributes, docstring, ...)
  let oldThm := old.getArg 1
  let newThm := new.getArg 1
  for i in [0, 1, 2] do
    unless (oldThm.getArg i).eqWithInfo (newThm.getArg i) do
      return false -- "theorem " token, declId, or declSig differ
  return true

/--
The constants `afterEnv` has that `beforeEnv` does not, i.e. what one command (or a short run of them)
added. Implemented via `ConstMap.foldStage2`, which (like `ModuleUsage.ownConsts`) iterates only the
constants added so far in the current module, not the whole imported environment, so this stays cheap
for the handful of declarations a single command adds. Both environments must be kernel-checked branches
of the same module (`beforeEnv` a prefix of `afterEnv`'s local additions).
-/
def newConstants (beforeEnv afterEnv : Environment) : Array (Name × ConstantInfo) :=
  let beforeNames : NameSet :=
    beforeEnv.checked.get.constants.foldStage2 (fun (s : NameSet) n _ => s.insert n) {}
  afterEnv.checked.get.constants.foldStage2
    (fun (acc : Array (Name × ConstantInfo)) n ci =>
      if beforeNames.contains n then acc else acc.push (n, ci))
    #[]

/-- `names` contains the head constant of `e` (a bare constant, or the function of an application),
or `e` is a bound variable whose entry in `tainted` is `true` (see `unsafeInAux`). -/
private def taintedHead (names : NameSet) (tainted : List Bool) (e : Expr) : Bool :=
  match e.consumeMData.getAppFn with
  | .const n _ => names.contains n
  | .bvar i => tainted.getD i false
  | _ => false

/--
Last (unqualified) component of `n` as a string, or `""` if `n` is not a `.str` name. Recursor/`casesOn`/
matcher names are always plain `.str _ s` at the top level (`Eq.rec`, `Foo.casesOn`, `Foo.match_1`, ...),
so this is enough to classify them without string-splitting a dotted `Name.toString`.
-/
def lastStr : Name → String
  | .str _ s => s
  | _ => ""

/--
If `f` (the head of an application) is a recursor/`casesOn`/`recOn`/`brecOn`/match-auxiliary function,
whether eliminating through it can expose the *content* of a Prop-typed major premise (as opposed to
treating it as an opaque proof via the kernel's proof-irrelevance/K-rule shortcuts; see the issue's kernel
citations). `none` if `f` is not one of these forms at all (an ordinary function application, always safe
to pass a theorem into).
-/
private def eliminatorRisk (env : Environment) (f : Name) : Option Bool :=
  if lastStr f == "rec" then
    match env.find? f with
    | some (.recInfo r) => some !r.k
    | _ => some true -- couldn't look it up; conservative
  else if lastStr f == "casesOn" || lastStr f == "recOn" || lastStr f == "brecOn" then
    match env.find? (f.getPrefix ++ `rec) with
    | some (.recInfo r) => some !r.k
    | _ => some true -- no underlying `.rec` found; conservative
  else if "match_".isPrefixOf (lastStr f) then
    some true -- matcher: conservatively always risky, regardless of the matched type's K-ness
  else
    none

/--
`e`'s application head is a risky eliminator (`eliminatorRisk` is `some true`) and `names` (possibly via
a `tainted` local variable) appears among its arguments. For `.rec` specifically this checks exactly the
major-premise position (`RecursorVal.getMajorIdx`); for `casesOn`/`recOn`/`brecOn`/matchers it
conservatively checks every argument, since their major-premise position isn't uniformly determinable
without replicating the equation compiler's exact calling convention.
-/
private def riskyEliminatorUse (env : Environment) (names : NameSet) (tainted : List Bool)
    (fn : Expr) (args : Array Expr) : Bool :=
  match fn with
  | .const f _ =>
    match eliminatorRisk env f with
    | none => false
    | some false => false
    | some true =>
      if lastStr f == "rec" then
        match env.find? f with
        | some (.recInfo r) =>
          if h : r.getMajorIdx < args.size then taintedHead names tainted args[r.getMajorIdx] else false
        | _ => args.any (taintedHead names tainted ·)
      else
        args.any (taintedHead names tainted ·)
  | _ => false

/--
Does `e` use any name in `names` unsafely: as the scrutinee of a `.proj`, or as the (conservatively
determined) major premise of a non-K-eliminating `casesOn`/`rec`/`recOn`/`brecOn`/matcher application?
`tainted` tracks, by de Bruijn index, which enclosing `let`-bound locals were themselves built directly
from a name in `names` (covering the common `have h := D; ... h.1 ...`/`let h := D; cases h` shapes);
a name reaching an unsafe position only via a stored (not immediately `let`-bound) closure that is
applied elsewhere in the term is not traced -- the one documented residual gap beyond custom meta-level
value reads (see the module docstring).
-/
partial def unsafeInAux (env : Environment) (names : NameSet) (tainted : List Bool) (e : Expr) : Bool :=
  match e with
  | .proj _ _ b => taintedHead names tainted b || unsafeInAux env names tainted b
  | .letE _ t v b _ =>
    let vTainted := taintedHead names tainted v || unsafeInAux env names tainted v
    unsafeInAux env names tainted t || unsafeInAux env names tainted v ||
      unsafeInAux env names (vTainted :: tainted) b
  | .app .. =>
    let fn := e.getAppFn
    let args := e.getAppArgs
    args.any (unsafeInAux env names tainted ·) || unsafeInAux env names tainted fn ||
      riskyEliminatorUse env names tainted fn args
  | .lam _ t b _ | .forallE _ t b _ =>
    unsafeInAux env names tainted t || unsafeInAux env names (false :: tainted) b
  | .mdata _ b => unsafeInAux env names tainted b
  | _ => false

/-- `c`'s type or value uses a name in `names` unsafely (see `unsafeInAux`). -/
def constUnsafelyUsesValue (env : Environment) (names : NameSet) (c : ConstantInfo) : Bool :=
  unsafeInAux env names [] c.type ||
    (c.value? (allowOpaque := true)).any (unsafeInAux env names [] ·)

/-- `c`'s type or value references any name in `names` at all (a plain, possibly-safe reference: an
argument, a type ascription, anything not caught by `constUnsafelyUsesValue`). -/
def constReferencesAny (names : NameSet) (c : ConstantInfo) : Bool :=
  c.type.getUsedConstantsAsSet.toList.any names.contains ||
    (c.value? (allowOpaque := true)).any fun v => v.getUsedConstantsAsSet.toList.any names.contains

/--
Whether any identifier in `stx` has text matching the last component of a name in `names`. Text-based (not
resolved-name-based) on purpose: a coincidental match only costs an unnecessary re-elaboration, never an
unsound keep, and this needs no elaboration context to run. Used for commands that do not themselves add a
walkable declaration (`#print`, `#print axioms`, `#eval`, `#reduce`, arbitrary custom commands/macros).
-/
partial def mentionsAnyName (names : Array String) (stx : Syntax) : Bool :=
  match stx with
  | .ident _ _ val _ =>
    let s := val.toString
    names.any fun n => s == n || s.endsWith ("." ++ n)
  | .node _ _ args => args.any (mentionsAnyName names ·)
  | _ => false

/--
`stx` (already unwrapped of `X in` wrappers) is an `instance` declaration, a declaration carrying at
least one `@[...]` attribute, or a standalone `attribute [...] name` command -- i.e. a command that
could register an entry into a *scoped* environment extension (`Meta.instanceExtension`, the simp set,
or any other `registerScopedEnvExtension`/attribute-backed table). `Environment.replayConsts`
(`Environment.lean`) only merges `asyncConstsMap` (the plain constants a command added) and the subset
of *kernel*-level extensions that register a `replay?`; `ScopedEnvExtension`s such as
`Meta.instanceExtension` or the simp set use `asyncMode := .mainOnly` and never register a `replay?`
(`ScopedEnvExtension.lean`), so a kept command's own registration into one of these never reaches the
grafted environment's `base` field -- the field elaboration actually reads for instance resolution and
`simp` lookups. A command flagged here must be re-elaborated rather than kept, even if it does not
reference the edited theorem at all: the gap is about losing the command's own extension-table entry,
not about reading `D`'s value.
-/
def addsExtensionState (stx : Syntax) : Bool :=
  let stx := unwrapCommand stx
  if stx.isOfKind ``Lean.Parser.Command.attribute then
    true
  else if stx.isOfKind ``Lean.Parser.Command.declaration && stx.getNumArgs == 2 then
    (stx.getArg 1).getKind == ``Lean.Parser.Command.instance ||
      !((stx.getArg 0).getArg 1).isNone
  else
    false

/--
Whether `ci` is a constant kind `Environment.replayConsts` (`Environment.lean`) can actually replay onto
a grafted environment: its kernel-replay step (`replayKernel`) only knows how to re-add
`.thmInfo`/`.defnInfo`/`.axiomInfo` declarations and panics on anything else. A `class`/`structure`/
`inductive` command's own declaration produces `.inductInfo`/`.ctorInfo`/`.recInfo` constants (and
`opaque` produces `.opaqueInfo`), none of which `replayKernel` supports -- grafting such a command would
crash, not just lose data, so it must always be re-elaborated rather than kept.
-/
def isReplayableConst : ConstantInfo → Bool
  | .thmInfo _ | .defnInfo _ | .axiomInfo _ => true
  | .opaqueInfo _ | .quotInfo _ | .inductInfo _ | .ctorInfo _ | .recInfo _ => false

/--
Per-command safety verdict for keeping `old`'s prior result when `names` (the edited theorem plus any
of its auxiliary declarations whose names did not survive the edit) must be treated as having a
possibly-new value: `none` means unsafe (`old` must be fully re-elaborated, abandoning the grafting
pass from here on); `some extra` means safe to keep as-is, with `extra` the subset of `old`'s own
newly-added declaration names (empty for a non-declaration command) that themselves merely *reference*
a name in `names`. Referencing alone is safe for `old` itself by proof irrelevance, but `extra`'s names
must be folded into the unsafe set for every later command, since a command that reads one of *their*
values structurally (`#print`, `#print axioms`, `#eval`, a `.proj`/non-K-elim target) would transitively
expose `D`'s value through them -- e.g. `theorem usesD := D` is safe to keep, but a later
`#print axioms usesD` is not, even though its own syntax never mentions `D` by name.
`isDeclaration` marks whether the command is a plain `theorem`/`def`/`instance`/`abbrev`/... whose own
newly-added declarations (`cConsts`) can be walked; non-declaration commands (`#print`, `#eval`, ...),
which add nothing to walk, are safe only if they do not mention any name in `names` at all.
`addsExtensionState` and `isReplayableConst` are checked first and unconditionally: a kept command's own
scoped-extension registration (an `instance`, an attribute, `attribute [...] name`) is lost by grafting
regardless of whether the command references `D`, and a command adding a constant `replayConsts` cannot
replay (`class`/`structure`/`inductive`/`opaque`) would crash grafting outright -- both always force
re-elaboration.
-/
def commandVerdict (env : Environment) (names : NameSet) (nameStrs : Array String)
    (isDeclaration : Bool) (stx : Syntax) (cConsts : Array (Name × ConstantInfo)) :
    Option (Array Name) :=
  if addsExtensionState stx || cConsts.any fun (_, ci) => !isReplayableConst ci then
    none
  else if isDeclaration then
    if cConsts.any fun (_, ci) => constReferencesAny names ci && constUnsafelyUsesValue env names ci then
      none
    else
      some (cConsts.filterMap fun (n, ci) => if constReferencesAny names ci then some n else none)
  else
    if mentionsAnyName nameStrs stx then none else some #[]

/--
Tracks an in-progress proof-only-edit grafting pass through the commands after an edited theorem `D`:
everything needed to decide whether the next old command is still safe to keep, and what environment to
graft it onto if so.
-/
structure GraftState where
  /-- `D`'s name, plus every (old \u222a new) auxiliary declaration name `D`'s command produced: any later
  command that unsafely references one of these must be re-elaborated. -/
  unsafeNames : NameSet
  /-- `unsafeNames`' last-component strings, for the textual check on non-declaration commands. -/
  unsafeNameStrs : Array String
  /-- The newly-elaborated environment (containing `D`'s new proof) that later commands' own
  declarations are grafted onto via `Environment.replayConsts`. -/
  newEnvSoFar : Environment
  /-- The old run's environment right before the next old command to consider: the `oldEnv` baseline for
  `Environment.replayConsts`/`newConstants`. -/
  oldBeforeEnv : Environment

/--
Waits (with bounded polling, never indefinitely) for `task` to finish, up to `maxMs` milliseconds.
`Environment.checked`'s background kernel-check task is typically already finished or finishes within
microseconds for an ordinary declaration (the proof body/kernel check start running on a background
task the instant the command's signature commits, see the issue's `elabAsync`/`commitCheckEnv` notes);
a single non-blocking `IO.hasFinished` check immediately after that, with no intervening real time,
loses this race almost every time even though the task is never actually stuck. Bounded polling gives it
a real but capped chance to finish. This stays deadlock-safe: a tactic that is *genuinely* blocked on a
later command's progress (the hazard `startGraft`'s caller is guarding against, see
`Language.Lean.lean`) still cannot finish within `maxMs`, so the bound is still honored and grafting
still declines, just after a short, fixed delay instead of none.
-/
partial def waitFinished (task : Task α) (maxMs : Nat := 50) : BaseIO Bool := do
  if (← IO.hasFinished task) then
    return true
  else if maxMs == 0 then
    return false
  else
    IO.sleep 1
    waitFinished task (maxMs - 1)

/--
Whether `type` (a declaration's full, possibly-binder-headed type) is ultimately `Prop`-sorted. A
`theorem` is not required by the kernel to have a `Prop`-sorted type (see the issue's kernel citations:
`theorem`/`def` is purely an elaborator-level, not kernel-level, distinction), so this has to be checked
before relying on proof irrelevance at all, not assumed from the `theorem` keyword. Runs a one-off `MetaM`
computation against `env`; failure (should not happen for an already-elaborated, well-typed declaration)
is treated conservatively as "not provably `Prop`".
-/
def isPropType (env : Environment) (opts : Options) (type : Expr) : BaseIO Bool := do
  let ctxCore : Core.Context := { fileName := "<lean-build-perf#20>", fileMap := default, options := opts }
  let sCore : Core.State := { env }
  match (← (Lean.Meta.isProp type).toIO ctxCore sCore |>.toBaseIO) with
  | .ok (b, _, _) => pure b
  | .error _ => pure false

/--
Attempts to start a grafting pass after re-elaborating a proof-only edit to the theorem named `declName`.
`envBeforeD` is the (shared) environment just before `D`'s command in both runs; `oldAfterD`/`newAfterD`
are `D`'s command's resulting environment in the old and new runs respectively. Returns `none` -- meaning
"fall back to today's behavior: re-elaborate everything after `D`" -- when `D`'s re-elaborated type isn't
syntactically identical to before (should not happen given the header syntax matched, but checked
defensively) or isn't `Prop`-sorted, so proof irrelevance does not apply to it at all.
-/
def startGraft (declName : Name) (opts : Options) (envBeforeD oldAfterD newAfterD : Environment) :
    BaseIO (Option GraftState) := do
  -- Look up via the kernel-checked environment (like `newConstants` already does), not the plain
  -- `Environment.find?`: a just-elaborated async `theorem`'s *signature* is committed synchronously
  -- but its *value*/kernel-check can still be finishing on a background task at this point (see the
  -- issue's investigation notes on `elabAsync`/`commitSignature`/`commitCheckEnv`), so `find?` on the
  -- raw `Environment` can transiently see the declaration with no value yet.
  -- Callers guarantee `oldAfterD.checked`/`newAfterD.checked` have already finished (see the
  -- deadlock comment in `Language.Lean.lean` where this is called), so `.get` here does not block.
  let some oldD := oldAfterD.checked.get.constants.find? declName | return none
  let some newD := newAfterD.checked.get.constants.find? declName | return none
  unless oldD.type == newD.type && oldD.levelParams == newD.levelParams do
    return none
  unless (← isPropType newAfterD opts newD.type) do
    return none
  let oldAux := newConstants envBeforeD oldAfterD
  let newAux := newConstants envBeforeD newAfterD
  let unsafeNames : NameSet :=
    (oldAux.map (·.1) ++ newAux.map (·.1)).foldl (·.insert ·) {}
  let unsafeNameStrs := unsafeNames.toArray.map lastStr
  return some { unsafeNames, unsafeNameStrs, newEnvSoFar := newAfterD, oldBeforeEnv := oldAfterD }

end Lean.Language.Lean.Reuse
