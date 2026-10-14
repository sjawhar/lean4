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
once per process and cached in `censusDirRef`), so the instrumentation this module and its call
sites (`Lean.Meta.SynthInstance`, `Lean.Meta.Tactic.Simp.Rewrite`/`Main`, `Lean.Environment`'s
import path, `src/kernel/census.cpp`) add cost nothing in a normal build.

Records accumulate in plain `IO.Ref`s, not mutex-protected ones: Lean's elaborator can run
independent declarations' tactics (hence `synthInstance`/`simp` calls) on different tasks
concurrently, so a `modify` here can race and lose an update. A lost count is an acceptable
approximation for a census (we're estimating shares of a 57,000 CPU-second build, not keeping a
ledger); a mutex around every `synthInstance` query or `simp` rewrite attempt would not be.

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

/-- `none` until first checked; `some none` means census collection is off for this process. -/
builtin_initialize censusDirRef : IO.Ref (Option (Option System.FilePath)) ← IO.mkRef none

/-- The directory from `LEAN_CENSUS_DIR`, or `none` if census collection is off. Cached after the
    first call so every hot-path caller (`isEnabled`) pays one `IO.Ref.get`, not a `getenv`. -/
def censusDir : BaseIO (Option System.FilePath) := do
  match (← censusDirRef.get) with
  | some d => return d
  | none =>
    let raw ← (IO.getEnv "LEAN_CENSUS_DIR" : BaseIO _)
    let d : Option System.FilePath := raw.map (⟨·⟩)
    censusDirRef.set (some d)
    return d

@[inline] def isEnabled : BaseIO Bool := return (← censusDir).isSome

builtin_initialize recordsRef : IO.Ref (Array String) ← IO.mkRef #[]

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

/-- Append one pre-built compact-JSON line (no trailing newline, no leading/trailing whitespace).
    No-op, with no allocation beyond the `isEnabled` check, if census collection is off. -/
@[inline] def record (line : String) : BaseIO Unit := do
  if (← isEnabled) then
    recordsRef.modify (·.push line)

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
    misses, emitted once as a `simp_cache` summary line by `flush`. -/
builtin_initialize simpCacheHitRef : IO.Ref Nat ← IO.mkRef 0
builtin_initialize simpCacheMissRef : IO.Ref Nat ← IO.mkRef 0

def addSimpCacheHit : BaseIO Unit := do
  if (← isEnabled) then simpCacheHitRef.modify (· + 1)
def addSimpCacheMiss : BaseIO Unit := do
  if (← isEnabled) then simpCacheMissRef.modify (· + 1)

/-- One environment extension's `addImportedFn` call, in `Environment.finalizePersistentExtensions`. -/
def recordImportExt (extName : Name) (ns : Nat) : BaseIO Unit :=
  record s!"\{\"k\":\"import_ext\",\"name\":\"{jesc (toString extName)}\",\"ns\":{ns}}"

/-- Running total of time spent forcing the lazily-merged imported-constant tries
    (`ImportedConsts.mergeModuleTreesLazy`'s results, lean-build-perf#7), accumulated over the
    whole process: forcing can happen well after `importModules` returns (that fork's whole
    point), so this is a process-lifetime total read by `recordImportTotal`, not scoped to one
    `importModules` call. -/
builtin_initialize constMapForceNsRef : IO.Ref Nat ← IO.mkRef 0

def addConstMapForceNs (ns : Nat) : BaseIO Unit := do
  if (← isEnabled) then constMapForceNsRef.modify (· + ns)

/-- The whole `importModules` call, plus every constant-map force recorded (by
    `addConstMapForceNs`) up to this point in the process. -/
def recordImportTotal (ns : Nat) : BaseIO Unit := do
  if (← isEnabled) then
    let forced ← constMapForceNsRef.get
    record s!"\{\"k\":\"import_total\",\"ns\":{ns},\"const_map_force_ns\":{forced}}"

/-- `Lean.Elab.Frontend.runFrontend` calls this once, after a module finished elaborating
    successfully (and the `.olean`, if any, was written). Combines the kernel's dump with every
    `record` call made from Lean into one JSONL file per module, named after the module. -/
def flush (moduleName : Name) : IO Unit := do
  let some dir ← censusDir | return
  IO.FS.createDirAll dir
  let kernelText ← kernelDump
  let ownLines ← recordsRef.get
  let simpHits ← simpCacheHitRef.get
  let simpMisses ← simpCacheMissRef.get
  let simpCacheLine :=
    if simpHits + simpMisses == 0 then #[]
    else #[s!"\{\"k\":\"simp_cache\",\"hits\":{simpHits},\"misses\":{simpMisses}}"]
  let kernelLines := (kernelText.splitOn "\n").filter (· ≠ "")
  let allLines := ownLines.toList ++ simpCacheLine.toList ++ kernelLines
  IO.FS.writeFile (dir / s!"{jesc (toString moduleName)}.jsonl") (String.intercalate "\n" allLines ++ "\n")

end Lean.Census
