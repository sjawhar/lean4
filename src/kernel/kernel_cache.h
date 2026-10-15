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
#include "kernel/environment.h"

namespace lean {
/** \brief True iff \c e can never depend on a local context, a binder scope, or an assignment:
    no loose bound variables, no free variables, and no (expression or universe) metavariables.
    Necessary but not sufficient for sharing a result across declarations and `Elab.async`
    branches -- see `kc_cache::is_shareable`, which additionally requires every named constant
    `e` mentions to already be imported. `infer_type_core` rejects loose bound variables at its
    own entry point, but `whnf_core`, `whnf`, `unfold_definition_core` and `is_def_eq` do not
    re-check that invariant themselves: they rely on every caller already having instantiated
    bound variables away before reaching them. A process-wide cache keyed on bare structural
    equality cannot rely on that per-call discipline -- two unrelated declarations' raw,
    not-yet-instantiated subterms can be bit-for-bit identical as de Bruijn terms (e.g. both
    literally `#0 #1`) while denoting completely different things relative to their own binder
    scope, so `has_loose_bvars` must be checked explicitly here at every site, not assumed from
    context. (lean-build-perf#16: a v1 of this cache omitted this check and crashed under
    `ctest`.) */
inline bool kc_is_closed(expr const & e) {
    return !has_loose_bvars(e) && !has_fvar(e) && !has_mvar(e);
}
inline bool kc_is_closed(expr const & t, expr const & s) {
    return kc_is_closed(t) && kc_is_closed(s);
}

/** \brief A process-lifetime cache of kernel type-checker results for closed terms built only
    from already-IMPORTED constants, shared across every declaration and `Elab.async` branch one
    `lean` process checks (one `type_checker::state` is otherwise created and torn down per
    declaration). Holds exactly the five functions `type_checker` memoizes that are pure in the
    environment for a shareable key: `infer` (`infer_only = true`), `whnf_core` (the non-cheap
    variant), `whnf`, delta-`unfold`, and `is_def_eq`'s positive/negative pair caches. Everything
    else (terms with a free variable, module-local closed terms, and the `check()`/
    `infer_only = false` path, which depends on the declaration's own universe-parameter list and
    `definition_safety`) stays in `type_checker::state` exactly as before.

    **Why "imported-only", not just "closed" (lean-build-perf#16 v1 was closed-only and unsound).**
    Lean 4.34's module system elaborates and kernel-checks declarations on *branching*
    environments (`src/Lean/Environment.lean`, `asyncCtx?`/`addConstAsync`): a module-local
    auxiliary declaration (`.eq_def`, `_proof_N`, a generated `match_...`) can be speculatively
    elaborated on one branch, rolled back, and re-elaborated under the identical name with
    different content. A cache keyed on syntax alone cannot tell "this `Const` node's type came
    from a branch that is now permanent" from "...from a branch that was rolled back" -- v1's
    seed-build and `ctest` failures (wrong kernel verdicts, `INTERNAL PANIC`, segfaults) were
    exactly that. Every name in `Kernel.Environment`'s `allImportedConsts`/`importedExtraConsts`
    views (what `isImportedConst`/`environment::is_imported` test) was already fully elaborated
    and persisted to an `.olean` *before* the current module's own declarations started, which
    `Kernel.Environment.add` never touches -- so those views are identical on every branch of the
    current module's compile, and in production (one `lean` process per file) there is exactly
    one such view for the process's entire lifetime: it cannot be invalidated by anything the
    current module's own elaboration does. `kc_is_shareable` additionally checks `Expr.proj`'s
    struct name (`proj_sname`), not just `Expr.const`'s name -- the only other expr kind that
    carries a global-declaration name the kernel consults directly (`reduce_proj_core`'s
    `env().get(sname)`). Full soundness argument: lean-build-perf#16.

    **Checking the value, not just trusting the key.** A shareable `e` guarantees the *input* is
    closed and built only from permanently-fixed, imported material, which is the right thing to
    check before doing any work. It does not, on its own, guarantee that every possible way of
    computing a result from `e` lands on an equally safe value: declarations realized on demand
    (via `Environment.realizeConst`, used e.g. by `fun_induction`/`fun_cases`'s auxiliary
    "unfolding" lemmas) can be type-checked against a view that, in rare cases, differs from the
    reduction's own assumptions, and a result built along that path can still carry a leftover
    bound variable or metavariable the key's check never saw, or mention a name that looked
    settled when the result was built but was not in fact permanently fixed the way a real import
    is. Each `insert_*` therefore takes the environment and re-runs the *full* `is_shareable`
    check -- closedness and "every name imported" together -- on the *value*, not just the
    already-vetted key, right before it enters a table every later declaration will reuse; failing
    that check just drops the insert (a sound miss, same as hitting `LEAN_KC_MAX_ENTRIES`) instead
    of poisoning the shared cache for the rest of the process. See `kernel_cache.cpp`'s
    `insert_infer`/`insert_whnf_core`/`insert_whnf`/`insert_unfold`.

    Thread-safe: each table (six, including `m_shareable_stats`'s backing table) is split into
    64 shards, each behind its own `std::shared_mutex`: a lookup takes a `shared_lock` (readers
    don't block each other), an insert takes a `unique_lock` on just that one shard (so
    concurrent declarations on different `Elab.async` threads only contend when their keys hash
    into the *same* shard, independently per table). There is no table-wide lock and no global
    mutable state an insert and a concurrent lookup could observe torn: `expr_map`'s underlying
    `std::unordered_map` only transitions from "key absent" to "key present, holding the fully
    constructed value" under the shard's own `unique_lock`, and a `shared_lock`'d reader either
    sees the old (absent) or new (present, complete) state, never an intermediate one. The
    `kc_cache::is_shareable` predicate memo follows the same discipline. Concurrent inserts of the
    *same* key are benign (both threads compute the identical, deterministic value from the
    argument above; whichever write wins is correct) and never racy at the C++ level (duplicate
    insert into `unordered_map` on an already-present key via `insert()`, used throughout, is a
    no-op, not a data race -- the losing thread's `unique_lock` on the shard still serializes
    against the winner's). Size-bounded: once `LEAN_KC_MAX_ENTRIES` entries exist across every
    table (default 4,000,000), further inserts are silently dropped (checked via one relaxed
    atomic load before, and charged via one relaxed atomic increment after, a confirmed new
    insert -- see `kernel_cache.cpp`); there is no eviction, so a dropped insert can never race an
    eviction, and a lookup after the cap is simply a miss, exactly as if there were no cache at
    all -- always sound, only a missed optimization.

    **Marking shared objects thread-safe, not just the tables that hold them.** The mutex
    discipline above protects this cache's own `std::unordered_map` bookkeeping; it says nothing
    about the Lean *objects* the tables store. `expr`'s base class (`object_ref`,
    `runtime/object_ref.h`) increments/decrements the underlying object's raw `m_rc` field
    directly in its copy constructor and destructor (`lean_inc_ref`/`lean_dec_ref`), and those
    operations are a plain, non-atomic `m_rc +=/-= 1` unless the object has been marked
    thread-shared (`lean_mark_mt`) -- this cache's own lock only serializes its own insert/find
    calls, not a key or value's *originating* thread later dropping its own, completely unguarded
    local copy, nor a second declaration that happens to share the same subterm object doing its
    own independent inc/dec. Two threads racing a plain `+=`/`-=` on the same `int` is a genuine
    data race that can drop an increment -- freeing a still-referenced object out from under
    another thread -- exactly the shape of lean-build-perf#16's `funInduction.lean` failure (a
    verified-closed, verified-imported key whose own computed value, built in part from an
    earlier shared-cache hit, turned up with a corrupted subterm: a stray metavariable or an
    escaping bound variable that was never actually produced by any correct computation, and a
    SIGSEGV reading memory `reduce_recursor` had every reason to think was still a live `expr`).
    Every low-level `insert` (`kc_expr_table`, `kc_pair_table`, `kc_bool_table`, in
    `kernel_cache.cpp`) therefore calls `lean_mark_mt` on each key and value before it is copied
    into the table, recursively marking the whole reachable subterm graph thread-shared so every
    later inc/dec on it -- this cache's own, and the inserting thread's own about-to-be-dropped
    local copy -- goes through the atomic path instead. This is the same thing `alloc_task`
    already does unconditionally for whatever is handed to a `Task`; `lean_mark_mt` is a no-op on
    an already-shared node, so re-marking a subterm two tables (or two inserts) share costs
    nothing extra. `LEAN_KC_STATS=1`'s `st_marked` counter records how many of these calls found a
    genuinely single-threaded object -- i.e. would have raced without this call -- which was never
    zero on any real run (including `funInduction.lean` itself): this is not a hypothetical hole,
    it is what every prior crash was.

    A nested hypothesis -- that `fun_induction`'s on-demand-realized auxiliary declarations
    (`Environment.realizeConst`) could make `environment::is_imported` answer differently for the
    same name depending on which environment asks -- does not hold up: `getModuleIdxFor?`
    (`src/Lean/Environment.lean`) reads only `allImportedConsts`/`importedExtraConsts`, both
    populated once at import-finalization and never written again by
    `Kernel.Environment.add`/`environment::add_core`, so every branch and every realization's own
    captured environment (`RealizationContext.env`) shares the identical, immutable view for the
    whole process. Instrumented confirmation (temporary, not in this tree): logging every
    `is_imported` verdict seen through `is_shareable` and flagging a name whose verdict ever
    changed found zero disagreements across repeated `funInduction.lean` runs, with and without
    the MT-marking fix above.

    **Env-var toggle for same-binary A/B measurement** (no build difference between "cache on"
    and "cache off" runs, so a CPU comparison isn't confounded by anything but the cache itself):
    `LEAN_KCACHE=0` disables all of `is_shareable`'s sharing at `initialize_kernel_cache()` time
    (checked once, into a plain `bool`, not re-read per call); default is enabled (`1`). When
    disabled, every call site behaves exactly as upstream Lean: the per-declaration tables only.

    Counters (hits, misses, entries, and marking's own `st_marked`) are always maintained (plain
    atomic increments); they are only *printed*, at process exit, when `LEAN_KC_STATS=1` is set. */
class kc_cache {
public:
    struct counters {
        std::atomic<uint64_t> hits{0};
        std::atomic<uint64_t> misses{0};
        std::atomic<uint64_t> entries{0};
    };

    counters m_infer_stats, m_whnf_core_stats, m_whnf_stats, m_unfold_stats, m_defeq_stats;

    /* Each `insert_*` re-runs `is_shareable(env, r)` on the *value*, not just the already-vetted
       key, and drops the insert if it fails; see the class comment's "Checking the value, not
       just trusting the key". */
    optional<expr> find_infer(expr const & e);
    void insert_infer(environment const & env, expr const & e, expr const & r);

    optional<expr> find_whnf_core(expr const & e);
    void insert_whnf_core(environment const & env, expr const & e, expr const & r);

    optional<expr> find_whnf(expr const & e);
    void insert_whnf(environment const & env, expr const & e, expr const & r);

    optional<expr> find_unfold(expr const & e);
    void insert_unfold(environment const & env, expr const & e, expr const & r);

    /* `t`, `s` are assumed already ordered (`hash(t) <= hash(s)`), matching
       `type_checker::cache_success`/`cache_failure`'s existing convention. */
    bool succeeded_before(expr const & t, expr const & s);
    void cache_success(expr const & t, expr const & s);
    bool failed_before(expr const & t, expr const & s);
    void cache_failure(expr const & t, expr const & s);

    /* Writes a one-line summary of every counter to stderr. Called from
       `finalize_kernel_cache()` when `LEAN_KC_STATS=1`. */
    void dump_stats();

    /** \brief True iff sharing is enabled (`LEAN_KCACHE` env var, default on) AND `e` is closed
        (`kc_is_closed`) AND every `Expr.const`/`Expr.proj` name reachable from `e` is already
        imported in \c env (`environment::is_imported`). Walks `e` via `for_each` with early exit
        on the first non-imported name; the verdict is memoized by structural key in a sharded
        table (same shape as the other five) since the same subterm recurs across many calls and
        the walk would otherwise repeat. The memo needs no environment-generation key: once `e`'s
        verdict is `true`, every name it mentions is permanently fixed (same argument as the main
        tables), so it stays correct for the rest of the process; a stale `false` (possible only
        in a multi-module-per-process tool, never in production's one-process-per-file topology)
        is never unsound, only a missed optimization -- see lean-build-perf#16 for the full
        argument on both points. */
    static bool is_shareable(environment const & env, expr const & e);
    static bool is_shareable(environment const & env, expr const & t, expr const & s) {
        return is_shareable(env, t) && is_shareable(env, s);
    }
};

/** \brief The process-wide cache instance. */
kc_cache & get_kc_cache();

void initialize_kernel_cache();
void finalize_kernel_cache();
}
