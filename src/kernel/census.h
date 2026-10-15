/*
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

lean-build-perf#15: a redundancy census of kernel type-checking work. Every function here is a
no-op (a single relaxed atomic load, no allocation) unless the `LEAN_CENSUS_DIR` environment
variable is set, so the instrumentation costs nothing in a normal build.

Counters are kept in a thread_local "current declaration" context, opened by `census_decl_scope`
at the single dispatch point (`lean_add_decl`, environment.cpp) and closed when that declaration's
checking is done, at which point one JSON line is appended to a process-wide buffer. A second,
process-wide (not per-declaration) table samples the hashes of closed terms whose `infer`/`whnf`
result was actually computed (not served from the per-declaration cache), to let the offline
report (bin/census-report.py) measure how much work a module- or process-lifetime kernel cache
would remove: the same closed term recurs across declarations (and, after merging processes'
dumps, across modules) far more often than within one declaration's own cache, which is discarded
when its `type_checker` is destroyed.
*/
#pragma once
#include "kernel/declaration.h"
#include "runtime/object.h"
#include "util/name.h"

namespace lean {

bool census_enabled();

/* A declaration's representative name, for per-declaration census records: a mutual block is
   attributed to its first member. Shared between `kernel/environment.cpp`'s `lean_add_decl`
   (the low-level `Kernel.Environment.addDeclCore` API, called directly by metaprogram code) and
   `library/elab_environment.cpp`'s `lean_elab_add_decl` -- the real elaborator dispatch
   (`Lean.Environment.addDeclCheck`) every `theorem`/`def` a normal compile adds goes through
   exclusively. Both need the same `census_decl_scope` wrapping: with only `lean_add_decl`
   instrumented, every kernel census counter (`kernel_decl`, infer/whnf repeats, top-unfolded
   constants) missed the overwhelming majority of real kernel-checking work -- confirmed against
   Lean's own `-Dprofiler=true` "type checking" category on `IrqentryNmiEnter.Proof`: 63.9s there
   vs. 5 unrelated equation-lemma records (max 265us) in the census dump, with or without
   `Elab.async`. */
name decl_repr_name(declaration const & d);

/* Monotonic nanosecond clock reading, for timing a span across two call sites (e.g. around
   `instantiate_value_lparams` in `unfold_definition_core`, or around `reduce_nat`). Cheap even
   when census is disabled; callers still gate with `census_enabled()` to skip the two reads. */
double census_now_ns();

/* RAII: opens a counting scope for one declaration (one `lean_add_decl` call). Nested scopes
   (e.g. `add_inductive_fn`'s own `scoped_diagnostics` while already inside one) are folded into
   the outer declaration instead of opening a second record. */
class census_decl_scope {
    void * m_ctx;
public:
    explicit census_decl_scope(name const & decl_name);
    census_decl_scope(census_decl_scope const &) = delete;
    census_decl_scope(census_decl_scope &&) = delete;
    ~census_decl_scope();
};

void census_infer_call(bool cache_hit);
void census_whnf_call(bool cache_hit);
void census_defeq_call();
void census_defeq_cache_hit(bool success);
/* `ns` is the wall time spent instantiating the unfolded value (the substitution the kernel does
   after deciding to delta-unfold `decl_name`), not the time to decide to unfold it. */
void census_record_unfold(name const & decl_name, double ns);
void census_record_lit_reduce(double ns);
/* Sampled 1-in-N (N = CENSUS_HASH_SAMPLE): records that a closed term with kernel hash `h` had its
   infer (`kind=0`) or whnf (`kind=1`) actually computed (a cache miss in the current declaration's
   `type_checker::state`), so the offline report can find terms repeated across declarations and,
   after merging per-module dumps, across modules. */
void census_record_closed_term(unsigned kind, unsigned h);

/* `@[extern "lean_census_kernel_dump"] opaque kernelDump : BaseIO String` (src/Lean/Util/Census.lean).
   Returns every record accumulated so far (newline-separated JSON objects) and clears them; called
   once per process, when `Lean.Elab.Frontend.runFrontend` flushes the module's whole census. */
extern "C" LEAN_EXPORT object * lean_census_kernel_dump();

/* `src/Lean/Util/Census.lean`'s process-wide state: a `std::mutex`-protected buffer for JSON
   lines and lock-free atomic counters, not a plain Lean `IO.Ref`. lean-build-perf#15: under
   `Elab.async`'s concurrent per-declaration tasks, `IO.Ref.modify`'s compiled implementation
   (`lean_st_ref_take`, runtime/io.cpp) busy-spins an atomic CAS with no backoff whenever another
   thread holds the ref; on `MachCSL.WpStagesMPart1` (wide `simp only […]` calls driving
   `Census.record` into the tens of millions) that spin loop and the `Array String` it kept
   re-copying were 97% of the module's whole census-on compile time (2.8s -> 1200s+). */

/* `LEAN_CENSUS_DIR`'s value, read once (not a `getenv`/`IO.Ref` per call) and cached; empty if
   census collection is off. Shares `census_enabled()`'s gate (same env var). */
std::string const & census_dir();

/* Appends one pre-built compact-JSON line (`Lean.Census.record`'s callers already build the
   JSON) to the buffer `lean_census_lean_dump` drains. No-op if census is disabled. */
void census_record_line(std::string line);

/* `Lean.Census.addSimpCacheHit`/`addSimpCacheMiss`: lock-free, since `simpLoop` checks its
   per-term cache on every subterm `simp` visits. */
void census_add_simp_cache_hit();
void census_add_simp_cache_miss();

/* `Lean.Census.addConstMapForceNs`/`recordImportTotal`'s process-lifetime running total. */
void census_add_const_map_force_ns(uint64_t ns);
uint64_t census_const_map_force_ns();

/* `@[extern]` entry points for the above, called from `src/Lean/Util/Census.lean`. */
extern "C" LEAN_EXPORT uint8_t lean_census_enabled();
extern "C" LEAN_EXPORT object * lean_census_dir_str();
extern "C" LEAN_EXPORT object * lean_census_record_line(b_obj_arg line);
extern "C" LEAN_EXPORT object * lean_census_add_simp_cache_hit();
extern "C" LEAN_EXPORT object * lean_census_add_simp_cache_miss();
extern "C" LEAN_EXPORT object * lean_census_add_const_map_force_ns(uint64_t ns);
extern "C" LEAN_EXPORT uint64_t lean_census_const_map_force_ns();
/* Drains `census_record_line`'s buffer (newline-separated JSON objects) plus one `simp_cache`
   summary line if either counter moved, and clears both: the Lean-side counterpart to
   `lean_census_kernel_dump`. */
extern "C" LEAN_EXPORT object * lean_census_lean_dump();

}
