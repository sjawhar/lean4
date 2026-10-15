/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
#include <cstdio>
#include <cstdlib>
#include <mutex>
#include <memory>
#include <vector>
#include "kernel/kernel_cache.h"
#include "kernel/for_each_fn.h"
#include "util/alloc.h"
#include "util/pair.h"

namespace lean {

// Power of two: the shard index is a mask, not a modulo. 64 shards keeps per-shard
// contention low without the memory cost of one mutex/table per core.
static unsigned const kc_num_shards = 64;

static std::atomic<uint64_t> g_kc_total_entries{0};
static uint64_t g_kc_max_entries = 4000000;
static bool g_kc_stats_enabled = false;
// `LEAN_KCACHE=0` disables sharing entirely, with no other behavior change, so the identical
// binary can be run cache-on and cache-off for an A/B CPU comparison (lean-build-perf#16).
// Checked once at `initialize_kernel_cache()` time, not re-read per call.
static bool g_kc_enabled = true;

static uint64_t read_u64_env(char const * var, uint64_t default_value) {
    char const * s = getenv(var);
    if (s == nullptr || *s == 0)
        return default_value;
    char * end;
    unsigned long long v = strtoull(s, &end, 10);
    if (*end != 0)
        return default_value;
    return static_cast<uint64_t>(v);
}

static inline unsigned kc_shard_index(unsigned h) {
    // `hash(expr)`/`expr_pair_hash` already mix their bits, but fold the high bits in too so a
    // hash family whose low bits happen to correlate (e.g. small constant-derived hashes)
    // doesn't pile every entry into a handful of shards.
    return (h ^ (h >> 16)) & (kc_num_shards - 1);
}

/* A soft pre-check on the process-wide entry budget, not a reservation: it must stay cheap
   (plain load) under heavy duplicate-key insert traffic, which is common (two recursive calls
   can both miss the same key before either inserts it, same as the per-declaration tables
   already tolerate). The actual charge only happens in `kc_claim_entry` below, once an insert
   is confirmed to have added a genuinely new entry; charging here instead, before knowing
   whether the key was already present, would exhaust the budget on repeat attempts rather than
   on distinct entries. A slight overshoot under concurrent inserts past the cap is fine, this
   is a soft memory cap, not a correctness mechanism: an entry that doesn't fit is simply
   recomputed next time, exactly as it would be with no cache at all. */
static bool kc_has_room() {
    return g_kc_total_entries.load(std::memory_order_relaxed) < g_kc_max_entries;
}
static void kc_claim_entry() {
    g_kc_total_entries.fetch_add(1, std::memory_order_relaxed);
}

namespace {
struct kc_expr_shard {
    std::shared_mutex m_mutex;
    expr_map<expr>    m_table;
};
struct kc_pair_shard {
    std::shared_mutex                                       m_mutex;
    dense_set<expr_pair, expr_pair_hash, expr_pair_eq> m_table;
};
struct kc_bool_shard {
    std::shared_mutex m_mutex;
    expr_map<bool>    m_table;
};

/* A `dense_map<expr, expr>` split into `kc_num_shards` independently-locked shards, for the
   `infer`/`whnf_core`/`whnf`/`unfold` caches. A `shared_lock` guards `find` (concurrent readers
   never block each other); a `unique_lock` scoped to just the one shard a key hashes into
   guards `insert`, so declarations on other `Elab.async` threads whose keys land in a different
   shard are never blocked by it. */
class kc_expr_table {
    std::vector<std::unique_ptr<kc_expr_shard>> m_shards;
    kc_cache::counters &                        m_stats;
public:
    kc_expr_table(kc_cache::counters & stats):m_shards(kc_num_shards), m_stats(stats) {
        for (auto & s : m_shards) s = std::make_unique<kc_expr_shard>();
    }
    optional<expr> find(expr const & e) {
        kc_expr_shard & shard = *m_shards[kc_shard_index(hash(e))];
        std::shared_lock<std::shared_mutex> lock(shard.m_mutex);
        auto it = shard.m_table.find(e);
        if (it == shard.m_table.end()) {
            if (g_kc_stats_enabled) m_stats.misses.fetch_add(1, std::memory_order_relaxed);
            return none_expr();
        }
        if (g_kc_stats_enabled) m_stats.hits.fetch_add(1, std::memory_order_relaxed);
        return some_expr(it->second);
    }
    void insert(expr const & e, expr const & r) {
        if (!kc_has_room()) return;
        kc_expr_shard & shard = *m_shards[kc_shard_index(hash(e))];
        std::unique_lock<std::shared_mutex> lock(shard.m_mutex);
        if (shard.m_table.insert(mk_pair(e, r)).second) {
            kc_claim_entry();
            if (g_kc_stats_enabled) m_stats.entries.fetch_add(1, std::memory_order_relaxed);
        }
    }
};

/* A `dense_set<expr_pair>` split into shards, for the `is_def_eq` success/failure caches. Same
   locking discipline as `kc_expr_table`. */
class kc_pair_table {
    std::vector<std::unique_ptr<kc_pair_shard>> m_shards;
    kc_cache::counters &                        m_stats;
public:
    kc_pair_table(kc_cache::counters & stats):m_shards(kc_num_shards), m_stats(stats) {
        for (auto & s : m_shards) s = std::make_unique<kc_pair_shard>();
    }
    bool contains(expr const & t, expr const & s) {
        expr_pair p(t, s);
        kc_pair_shard & shard = *m_shards[kc_shard_index(expr_pair_hash()(p))];
        std::shared_lock<std::shared_mutex> lock(shard.m_mutex);
        bool found = shard.m_table.find(p) != shard.m_table.end();
        if (g_kc_stats_enabled) (found ? m_stats.hits : m_stats.misses).fetch_add(1, std::memory_order_relaxed);
        return found;
    }
    void insert(expr const & t, expr const & s) {
        if (!kc_has_room()) return;
        expr_pair p(t, s);
        kc_pair_shard & shard = *m_shards[kc_shard_index(expr_pair_hash()(p))];
        std::unique_lock<std::shared_mutex> lock(shard.m_mutex);
        if (shard.m_table.insert(p).second) {
            kc_claim_entry();
            if (g_kc_stats_enabled) m_stats.entries.fetch_add(1, std::memory_order_relaxed);
        }
    }
};

/* A `dense_map<expr, bool>` split into shards, for `kc_cache::is_shareable`'s own memo (whether
   every `Const`/`Proj` name reachable from a term is imported). Same locking discipline as the
   other two; charges the same process-wide entry budget (`kc_has_room`/`kc_claim_entry`) so the
   predicate memo can't grow the cache's total memory use past `LEAN_KC_MAX_ENTRIES` on its own. */
class kc_bool_table {
    std::vector<std::unique_ptr<kc_bool_shard>> m_shards;
public:
    kc_bool_table():m_shards(kc_num_shards) {
        for (auto & s : m_shards) s = std::make_unique<kc_bool_shard>();
    }
    optional<bool> find(expr const & e) {
        kc_bool_shard & shard = *m_shards[kc_shard_index(hash(e))];
        std::shared_lock<std::shared_mutex> lock(shard.m_mutex);
        auto it = shard.m_table.find(e);
        if (it == shard.m_table.end()) return optional<bool>();
        return optional<bool>(it->second);
    }
    void insert(expr const & e, bool v) {
        if (!kc_has_room()) return;
        kc_bool_shard & shard = *m_shards[kc_shard_index(hash(e))];
        std::unique_lock<std::shared_mutex> lock(shard.m_mutex);
        if (shard.m_table.insert(mk_pair(e, v)).second)
            kc_claim_entry();
    }
};
}

static kc_expr_table * g_infer_table      = nullptr;
static kc_expr_table * g_whnf_core_table  = nullptr;
static kc_expr_table * g_whnf_table       = nullptr;
static kc_expr_table * g_unfold_table     = nullptr;
static kc_pair_table *  g_success_table    = nullptr;
static kc_pair_table *  g_failure_table    = nullptr;
static kc_bool_table *  g_shareable_table  = nullptr;

optional<expr> kc_cache::find_infer(expr const & e) { return g_infer_table->find(e); }
void kc_cache::insert_infer(expr const & e, expr const & r) { g_infer_table->insert(e, r); }

optional<expr> kc_cache::find_whnf_core(expr const & e) { return g_whnf_core_table->find(e); }
void kc_cache::insert_whnf_core(expr const & e, expr const & r) { g_whnf_core_table->insert(e, r); }

optional<expr> kc_cache::find_whnf(expr const & e) { return g_whnf_table->find(e); }
void kc_cache::insert_whnf(expr const & e, expr const & r) { g_whnf_table->insert(e, r); }

optional<expr> kc_cache::find_unfold(expr const & e) { return g_unfold_table->find(e); }
void kc_cache::insert_unfold(expr const & e, expr const & r) { g_unfold_table->insert(e, r); }

bool kc_cache::succeeded_before(expr const & t, expr const & s) { return g_success_table->contains(t, s); }
void kc_cache::cache_success(expr const & t, expr const & s) { g_success_table->insert(t, s); }
bool kc_cache::failed_before(expr const & t, expr const & s) { return g_failure_table->contains(t, s); }
void kc_cache::cache_failure(expr const & t, expr const & s) { g_failure_table->insert(t, s); }

bool kc_cache::is_shareable(environment const & env, expr const & e) {
    if (!g_kc_enabled || !kc_is_closed(e)) return false;
    if (auto cached = g_shareable_table->find(e)) return *cached;
    bool all_imported = true;
    for_each(e, [&](expr const & sub) -> bool {
        // Mirrors `lean_find_expr`'s early-exit idiom: once `all_imported` is false, every
        // subsequent callback invocation (already-scheduled sibling calls included) returns
        // `false` immediately without descending further, so the walk cost is bounded by the
        // nodes visited up to and including the first non-imported name, not the whole term.
        if (!all_imported) return false;
        if (is_const(sub)) {
            if (!env.is_imported(const_name(sub))) { all_imported = false; return false; }
        } else if (is_proj(sub)) {
            // `Expr.proj`'s struct name is a global-declaration name the kernel consults
            // directly (`reduce_proj_core`'s `env().get(sname)`), not wrapped in `Expr.const` --
            // the gap v1 didn't need to find because it shared every closed term regardless of
            // import status. lean-build-perf#16.
            if (!env.is_imported(proj_sname(sub))) { all_imported = false; return false; }
        }
        return true;
    });
    g_shareable_table->insert(e, all_imported);
    return all_imported;
}

static void kc_dump_one(char const * name, kc_cache::counters & c) {
    uint64_t hits = c.hits.load(), misses = c.misses.load(), entries = c.entries.load();
    uint64_t total = hits + misses;
    double rate = total == 0 ? 0.0 : (100.0 * static_cast<double>(hits) / static_cast<double>(total));
    fprintf(stderr, "[kc] %-10s hits=%-10llu misses=%-10llu entries=%-10llu hit_rate=%.2f%%\n",
            name, (unsigned long long)hits, (unsigned long long)misses, (unsigned long long)entries, rate);
}

static std::atomic<bool> g_kc_dumped{false};

void kc_cache::dump_stats() {
    // Only `util/shell.cpp`'s `lean::initializer` runs `finalize_kernel_module` on normal
    // return; a plain compiled Lean executable (e.g. `leanchecker`) never constructs it and so
    // never calls `finalize_kernel_cache` either, only the `atexit` handler registered below.
    // Guard against both firing in the one binary (`lean` itself) that does have the RAII path.
    if (g_kc_dumped.exchange(true))
        return;
    kc_dump_one("infer",     m_infer_stats);
    kc_dump_one("whnf_core", m_whnf_core_stats);
    kc_dump_one("whnf",      m_whnf_stats);
    kc_dump_one("unfold",    m_unfold_stats);
    kc_dump_one("defeq",     m_defeq_stats);
    fprintf(stderr, "[kc] total entries=%llu cap=%llu%s enabled=%d\n",
            (unsigned long long)g_kc_total_entries.load(), (unsigned long long)g_kc_max_entries,
            g_kc_total_entries.load() >= g_kc_max_entries ? " (cap reached)" : "", (int)g_kc_enabled);
}

kc_cache & get_kc_cache() {
    static kc_cache * g_instance = new kc_cache();
    return *g_instance;
}

static void kc_atexit_dump() {
    get_kc_cache().dump_stats();
}

void initialize_kernel_cache() {
    g_kc_max_entries   = read_u64_env("LEAN_KC_MAX_ENTRIES", 4000000);
    g_kc_stats_enabled = read_u64_env("LEAN_KC_STATS", 0) != 0;
    g_kc_enabled       = read_u64_env("LEAN_KCACHE", 1) != 0;
    kc_cache & c = get_kc_cache();
    g_infer_table     = new kc_expr_table(c.m_infer_stats);
    g_whnf_core_table = new kc_expr_table(c.m_whnf_core_stats);
    g_whnf_table      = new kc_expr_table(c.m_whnf_stats);
    g_unfold_table    = new kc_expr_table(c.m_unfold_stats);
    g_success_table   = new kc_pair_table(c.m_defeq_stats);
    g_failure_table   = new kc_pair_table(c.m_defeq_stats);
    g_shareable_table = new kc_bool_table();
    if (g_kc_stats_enabled)
        atexit(kc_atexit_dump);
}

void finalize_kernel_cache() {
    if (g_kc_stats_enabled)
        get_kc_cache().dump_stats();
    // Process is exiting; skip freeing the tables themselves (same convention as
    // `g_kernel_fresh` and friends elsewhere in this file's sibling `type_checker.cpp`).
}
}
