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
#include "runtime/object.h"
#include "util/name.h"

namespace lean {

bool census_enabled();

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

}
