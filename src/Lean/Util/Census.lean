/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Init.System.IO
import Init.Data.ToString.Macro
import Init.Data.ToString.Name
import Init.Data.String.Legacy

public section
namespace Lean.Census

/-!
lean-build-perf#15: a redundancy census of the work Lean repeats within and across declarations,
modules and processes. Every function here is a no-op unless `LEAN_CENSUS_DIR` is set (checked
once per process and cached by `census.cpp`'s `census_enabled()`), so the instrumentation this
module and its call sites (`Lean.Meta.SynthInstance`, `Lean.Meta.Tactic.Simp.Rewrite`/`Main`,
`Lean.Environment`'s import path, `src/kernel/census.cpp`) add cost nothing in a normal build.

Records accumulate behind `src/kernel/census.cpp`'s C++ state (a `std::mutex`-protected buffer
for JSON lines, lock-free atomics for the two counters), not a plain Lean `IO.Ref`: Lean's
elaborator runs independent declarations' tactics (hence `synthInstance`/`simp` calls) on
different tasks concurrently under `Elab.async` (on by default, `Lean.Elab.Frontend.process`),
and `IO.Ref.modify`'s compiled implementation busy-spins an atomic CAS with no backoff whenever
another thread holds the ref (`lean_st_ref_take`, `src/runtime/io.cpp`) instead of blocking --
on a module with enough concurrent `simp`/`synthInstance` traffic (`MachCSL.WpStagesMPart1`'s
wide `simp only […]` calls, lean-build-perf#15), that spin loop and the `Array String` it kept
re-copying were 97% of the module's *entire* census-on compile time (2.8s -> 1200s+). A real
mutex blocks instead of spinning under contention; the two counters need no lock at all.

One process compiles one module, so `flush` is called exactly once per process (from
`Lean.Elab.Frontend.runFrontend`, after the module elaborated with no errors) and writes one JSONL
file per module: one pre-built compact-JSON line per record, no wrapping array. Record kinds
(`k` field), produced by the files noted:
- `kernel_decl` (`src/kernel/census.cpp`): one per declaration the kernel checked.
- `kernel_hash` (`src/kernel/census.cpp`): one per repeated (sampled) closed-term hash whose
  `infer`/`whnf` the kernel actually computed, process-wide.
- `synth` (`Lean.Meta.SynthInstance`): one per `synthInstance` query.
- `simp_lookup`, `simp_rw`, `simp_call` (`Lean.Meta.Tactic.Simp`): discrimination-tree lookups,
  per-lemma rewrite attempts, and whole `simp` calls.
- `import_ext`, `import_total` (`Lean.Environment`): time per environment extension's import step,
  and the whole `importModules` call plus lazily-forced constant-map time.
-/

/-- The kernel's own accumulated records (`src/kernel/census.cpp`), newline-separated JSON
    objects; drained (and cleared) by the one call `flush` makes to it. -/
@[extern "lean_census_kernel_dump"]
opaque kernelDump : BaseIO String

/-- Whether `LEAN_CENSUS_DIR` is set, cached by `census.cpp`'s `census_enabled()` (a relaxed
    atomic load after the first `getenv`), not an `IO.Ref` read per call: every record call site
    checks this, and `Ref.get`'s compiled implementation busy-spins the same way `Ref.modify`
    does (see the module doc above) when another thread holds the ref. -/
@[extern "lean_census_enabled"]
opaque isEnabled : BaseIO Bool

/-- `LEAN_CENSUS_DIR`'s value (`census.cpp`'s `census_dir()`, read once and cached), as a plain
    `String` (empty if census collection is off) so the C++ side never builds an `Option`. Only
    `flush` calls this; every other call site uses `isEnabled` to avoid building a
    `System.FilePath` on the hot path. -/
@[extern "lean_census_dir_str"]
opaque censusDirStr : BaseIO String

/-- The directory from `LEAN_CENSUS_DIR`, or `none` if census collection is off. -/
def censusDir : BaseIO (Option System.FilePath) := do
  let d ← censusDirStr
  return if d.isEmpty then none else some ⟨d⟩

/-- `census.cpp`'s process-wide buffer of pre-built compact-JSON lines (no trailing newline, no
    leading/trailing whitespace), appended under a real mutex instead of a contended `IO.Ref`. -/
@[extern "lean_census_record_line"]
opaque recordLine (line : @& String) : BaseIO Unit

/-- Minimal JSON string escaping for the handful of free-text fields (declaration/lemma/extension
    names) records embed; Lean identifiers never contain control characters, so this only guards
    against the rare backslash/quote (e.g. in a `«...»` escaped name piece). -/
def jesc (s : String) : String :=
  s.toList.foldl (fun acc c =>
    match c with
    | '\\' => acc ++ "\\\\"
    | '"'  => acc ++ "\\\""
    | '\n' => acc ++ "\\n"
    | _    => acc.push c) ""

/-- Append one record line. No-op, with no allocation beyond the `isEnabled` check, if census
    collection is off. -/
@[inline] def record (line : String) : BaseIO Unit := do
  if (← isEnabled) then
    recordLine line

/-- One `synthInstance` query. `queryHash` is `Expr.hash` of the instantiated goal type;
    `instHash` folds in a fingerprint of the local instances in scope (the same goal type can
    answer differently under different local instances, so the pair, not `queryHash` alone, is the
    cache key the report should group by). `cacheHit` is whether
    `Meta.State.cache.synthInstance` already had the answer; `resultKind` is `"ok"`, `"fail"`, or
    `"stuck"`. -/
def recordSynth (queryHash instHash : UInt64) (ns : Nat) (cacheHit : Bool) (resultKind : String) :
    BaseIO Unit :=
  record
    s!"\{\"k\":\"synth\",\"qh\":{queryHash},\"ih\":{instHash},\"ns\":{ns},\"hit\":{cacheHit},\"r\":\"{resultKind}\"}"

/-- One discrimination-tree lookup (one call to `SimpTheoremTree.getMatchWithExtra`/
    `getMatchLiberal`), with the number of candidate lemmas it returned. -/
def recordSimpLookup (candidates : Nat) : BaseIO Unit :=
  record s!"\{\"k\":\"simp_lookup\",\"candidates\":{candidates}}"

/-- One `simp` rewrite attempt against a candidate lemma. `exprHash` is `Expr.hash` of the subterm
    `simp` tried to rewrite, so the report can find the same (lemma, subterm) rewrite repeated
    across `simp` calls, within or across modules. -/
def recordSimpRewrite (lemma : Name) (exprHash : UInt64) (succeeded : Bool) : BaseIO Unit :=
  record s!"\{\"k\":\"simp_rw\",\"lemma\":\"{jesc (toString lemma)}\",\"eh\":{exprHash},\"ok\":{succeeded}}"

/-- One whole `Simp.simp` call's wall time. Cache hits/misses (`Simp.State.cache`, the per-call
    `Result` memoization table `simpLoop` checks) are tallied process-wide, not per call -- see
    `addSimpCacheHit`/`addSimpCacheMiss` -- since `Simp.State` has no process-visible per-call
    scope to read them back from without threading a new field through every `Simp.Context`
    construction site. -/
def recordSimpCall (ns : Nat) : BaseIO Unit :=
  record s!"\{\"k\":\"simp_call\",\"ns\":{ns}}"

/-- Process-wide tally of `simpLoop`'s per-term memoization cache (`Simp.State.cache`) hits and
    misses (lock-free `census.cpp` counters, not `IO.Ref`s: `simpLoop` checks this cache on every
    subterm `simp` visits), emitted once as a `simp_cache` summary line by `leanDump`. -/
@[extern "lean_census_add_simp_cache_hit"]
opaque addSimpCacheHitRaw : BaseIO Unit
@[extern "lean_census_add_simp_cache_miss"]
opaque addSimpCacheMissRaw : BaseIO Unit

def addSimpCacheHit : BaseIO Unit := do
  if (← isEnabled) then addSimpCacheHitRaw
def addSimpCacheMiss : BaseIO Unit := do
  if (← isEnabled) then addSimpCacheMissRaw

/-- One environment extension's `addImportedFn` call, in `Environment.finalizePersistentExtensions`. -/
def recordImportExt (extName : Name) (ns : Nat) : BaseIO Unit :=
  record s!"\{\"k\":\"import_ext\",\"name\":\"{jesc (toString extName)}\",\"ns\":{ns}}"

/-- One top-level command's elaboration time (`Lean.Language.Lean.process.doElab`'s call to
    `Elab.Command.elabCommandTopLevel`), tagged by its specific syntax kind: a `declaration`
    command's outer wrapper kind is unwrapped at the call site to the inner keyword's kind
    (e.g. `` `Lean.Parser.Command.theorem ``, `` `Lean.Parser.Command.instance ``), so the report
    can break "interface elaboration" time down by what kind of command fills it (definitions and
    structures, instances, `#eval`/`example`, etc.) instead of only by repeated-work kind. -/
def recordCommand (kind : Name) (ns : Nat) : BaseIO Unit :=
  record s!"\{\"k\":\"command\",\"kind\":\"{jesc (toString kind)}\",\"ns\":{ns}}"

/-- Running total of time spent forcing the lazily-merged imported-constant tries
    (`ImportedConsts.mergeModuleTreesLazy`'s results, lean-build-perf#7), accumulated over the
    whole process (a lock-free `census.cpp` counter, not an `IO.Ref`): forcing can happen well
    after `importModules` returns (that fork's whole point), so this is a process-lifetime total
    read by `recordImportTotal`, not scoped to one `importModules` call. -/
@[extern "lean_census_add_const_map_force_ns"]
opaque addConstMapForceNsRaw (ns : UInt64) : BaseIO Unit
@[extern "lean_census_const_map_force_ns"]
opaque constMapForceNs : BaseIO UInt64

def addConstMapForceNs (ns : Nat) : BaseIO Unit := do
  if (← isEnabled) then addConstMapForceNsRaw ns.toUInt64

/-- The whole `importModules` call, plus every constant-map force recorded (by
    `addConstMapForceNs`) up to this point in the process. -/
def recordImportTotal (ns : Nat) : BaseIO Unit := do
  if (← isEnabled) then
    let forced ← constMapForceNs
    record s!"\{\"k\":\"import_total\",\"ns\":{ns},\"const_map_force_ns\":{forced}}"

/-- `census.cpp`'s drain of every `record`/`addSimpCacheHit`/`addSimpCacheMiss` call made from
    Lean (newline-separated JSON objects, one `simp_cache` summary line appended if either
    counter moved), analogous to `kernelDump`. -/
@[extern "lean_census_lean_dump"]
opaque leanDump : BaseIO String

/-- `Lean.Elab.Frontend.runFrontend` calls this once, after a module finished elaborating
    successfully (and the `.olean`, if any, was written). Combines the kernel's dump with every
    `record` call made from Lean into one JSONL file per module, named after the module. -/
def flush (moduleName : Name) : IO Unit := do
  let some dir ← censusDir | return
  IO.FS.createDirAll dir
  let kernelText ← kernelDump
  let leanText ← leanDump
  let kernelLines := (kernelText.splitOn "\n").filter (· ≠ "")
  let leanLines := (leanText.splitOn "\n").filter (· ≠ "")
  let allLines := leanLines ++ kernelLines
  IO.FS.writeFile (dir / s!"{jesc (toString moduleName)}.jsonl") (String.intercalate "\n" allLines ++ "\n")

end Lean.Census
