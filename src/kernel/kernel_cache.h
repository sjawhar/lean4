/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
#pragma once
#include <shared_mutex>
#include <atomic>
#include <cstdint>
#include "kernel/expr.h"
#include "kernel/expr_maps.h"

namespace lean {
/** \brief True iff \c e can never depend on a local context, a binder scope, or an assignment:
    no loose bound variables, no free variables, and no (expression or universe) metavariables.
    `infer_type_core` rejects loose bound variables at its own entry point, but `whnf_core`,
    `whnf`, `unfold_definition_core` and `is_def_eq` do not re-check that invariant themselves:
    they rely on every caller already having instantiated bound variables away before reaching
    them. A process-wide cache keyed on bare structural equality cannot rely on that per-call
    discipline — two unrelated declarations' raw, not-yet-instantiated subterms can be
    bit-for-bit identical as de Bruijn terms (e.g. both literally `#0 #1`) while denoting
    completely different things relative to their own binder scope, so `has_loose_bvars` must be
    checked explicitly here at every site, not assumed from context. (An earlier version of this
    cache omitted this check and crashed/produced wrong answers under `ctest`; see the
    lean-build-perf#16 writeup for how it was found.) See that issue for the full soundness
    argument, including the two further exceptions (the `check()`/`infer_only = false` path and
    universe-parameter scope checking) that must stay out of this cache. */
inline bool kc_is_closed(expr const & e) {
    return !has_loose_bvars(e) && !has_fvar(e) && !has_mvar(e);
}
inline bool kc_is_closed(expr const & t, expr const & s) {
    return kc_is_closed(t) && kc_is_closed(s);
}

/** \brief A process-lifetime cache of kernel type-checker results for closed terms, shared
    across every declaration and module one `lean` process checks (one `type_checker::state`
    is otherwise created and torn down per declaration). Holds exactly the five functions
    `type_checker` memoizes that are pure in the environment for a closed key: `infer`
    (`infer_only = true`), `whnf_core` (the non-cheap variant), `whnf`, delta-`unfold`, and
    `is_def_eq`'s positive/negative pair caches. Everything else (terms with a free variable,
    and the `check()`/`infer_only = false` path, which depends on the declaration's own
    universe-parameter list and `definition_safety`) stays in `type_checker::state` exactly as
    before.

    Thread-safe: each table is split into shards, each behind its own `std::shared_mutex`, so
    concurrent kernel checks (Lean's per-declaration async elaboration can run `addDecl` on
    several native threads at once) can read and write it concurrently. Size-bounded: once
    `LEAN_KC_MAX_ENTRIES` entries exist across every table (default 4,000,000), further inserts
    are silently dropped; a lookup still happens. Dropping an insert is always sound, it is
    only a missed caching opportunity, so this needs no eviction policy.

    Counters (hits, misses, entries) are always maintained (plain atomic increments); they are
    only *printed*, at process exit, when `LEAN_KC_STATS=1` is set. */
class kc_cache {
public:
    struct counters {
        std::atomic<uint64_t> hits{0};
        std::atomic<uint64_t> misses{0};
        std::atomic<uint64_t> entries{0};
    };

    counters m_infer_stats, m_whnf_core_stats, m_whnf_stats, m_unfold_stats, m_defeq_stats;

    optional<expr> find_infer(expr const & e);
    void insert_infer(expr const & e, expr const & r);

    optional<expr> find_whnf_core(expr const & e);
    void insert_whnf_core(expr const & e, expr const & r);

    optional<expr> find_whnf(expr const & e);
    void insert_whnf(expr const & e, expr const & r);

    optional<expr> find_unfold(expr const & e);
    void insert_unfold(expr const & e, expr const & r);

    /* `t`, `s` are assumed already ordered (`hash(t) <= hash(s)`), matching
       `type_checker::cache_success`/`cache_failure`'s existing convention. */
    bool succeeded_before(expr const & t, expr const & s);
    void cache_success(expr const & t, expr const & s);
    bool failed_before(expr const & t, expr const & s);
    void cache_failure(expr const & t, expr const & s);

    /* Writes a one-line summary of every counter to stderr. Called from
       `finalize_kernel_cache()` when `LEAN_KC_STATS=1`. */
    void dump_stats();
};

/** \brief The process-wide cache instance. */
kc_cache & get_kc_cache();

void initialize_kernel_cache();
void finalize_kernel_cache();
}
