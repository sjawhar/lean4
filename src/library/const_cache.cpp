/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sebastian Ullrich
*/
#include <atomic>
#include <lean/lean.h>
#include "runtime/alloc.h"

namespace lean {
/*
Caches for imported-constant lookups.

The imported-constants views of an environment are immutable per import set, so lookup results
(including misses) can be cached. Each view created by `finalizeImport` owns a cache via the
`ImportedNode.cached` node at its root, which is freed together with the view; lookups in other
views, such as ones loaded from header snapshots or modified for testing, use a process-global cache.

Slots hold immutable entries behind a single atomic pointer each, so lookups are lock-free; races
merely lose an insertion. Entries pin their key and value with references that are never dropped,
so hits perform no reference counting on the root and key (pointer comparison and read-only name
comparison only). Entries of the global cache additionally pin their root, so that its address
cannot be reused by another view. The value is marked persistent so that hits are free of atomic
reference counting. `lean_mark_persistent` must NOT be used here: it plain-writes reference counts
while other elaboration threads concurrently update them atomically, corrupting shared object
graphs. Freeing a view's cache thus frees its entries and tables but leaks the pinned keys and
values.

The cache uses open addressing with a short probe window and never replaces an entry: a replaced
entry would have to be leaked (it may still be read concurrently), and colliding hot keys would
then leak one entry per alternation, without bound. Instead, a miss inserts into the first empty
slot of the window, or not at all if the window is full.

The table doubles once half its slots are filled, so its size tracks the working set of distinct
names actually looked up: with more such names than slots, sweep-style workloads (e.g.
per-declaration linting at mathlib scale) displace each other's entries and degrade every lookup
to a full tree walk. Growth migrates the existing entries (they are immutable, so old and new
table can share them) and publishes the new table via an atomic pointer; old tables are kept until
the cache is freed as concurrent readers may still probe them, with total overhead below the final
table's size thanks to geometric growth. Insertions racing with a swap go to the old table and are
merely lost.

An entry of the constants view also memoizes `modIdxCached?`'s result for its key: the index of
the first module having the name as a constant or as an extra constant, which needs a walk of the
extra constants view too. The first such lookup computes it and publishes it with the extra
constants view it was computed for; the entry's other fields stay immutable. A repeated lookup thus
costs one probe, as a constant lookup does.

Heartbeats count a thread's allocations, and heartbeat limits (`maxHeartbeats`) are deterministic
only if a computation's heartbeats depend on that computation alone. Whether a lookup hits depends
on what other threads looked up before, and a lazily merged node of a view (`ImportedNode.lazy`)
is computed by whichever thread needs it first. So a lookup costs no heartbeats, hit or miss: a miss
restores the thread's heartbeat count after computing its result, and marks the result persistent
even when the cache does not keep it, so that the caller gets a shared value either way and
allocates the same afterwards; lazy nodes are forced through `lean_imported_consts_force_shared`,
which does not count their computation either.
*/

extern "C" void lean_mark_persistent_unshared(lean_object * o);
extern "C" lean_object * lean_imported_consts_find_entry_core(lean_obj_arg root, lean_obj_arg n);
extern "C" lean_object * lean_imported_consts_mod_idx_core(lean_obj_arg entry, lean_obj_arg extras,
    lean_obj_arg n);

namespace {
/* `modIdxCached?`'s result for an entry's key. */
struct mod_memo {
    // the extra constants view the result was computed with
    lean_object * m_extras;
    // the persistent `Option Nat` result
    lean_object * m_val;
};

struct entry {
    // `entry_hash(m_root, m_key)`; migration must not touch keys, which may point into regions
    // freed since by `Environment.freeRegions`
    uint64_t m_hash;
    lean_object * m_root;
    lean_object * m_key;
    // the cached `Option` result object
    lean_object * m_val;
    // set once by the first `modIdxCached?` of the key
    std::atomic<mod_memo *> m_mod;
    // next entry inserted into the same cache, for freeing
    entry * m_next;
};

constexpr size_t global_initial_num_slots = 1 << 18;
constexpr size_t view_initial_num_slots = 1 << 16;
constexpr size_t max_num_slots = 1 << 26;
constexpr size_t probe_window = 8;
// constructor index of `ImportedNode.cached`; an `ImportedConsts` view is its root node at runtime
constexpr unsigned cached_tag = 3;

struct table {
    // power of two
    size_t m_num_slots;
    std::atomic<entry *> * m_slots;
    // successful insertions into `m_slots`; slightly underestimates occupancy when a swap loses
    // migrated-over entries, which only delays the next doubling
    std::atomic<size_t> m_num_entries;
    // claimed by the one thread that migrates and replaces this table
    std::atomic<bool> m_growing;
    // the table this one replaced, for freeing
    table * m_prev;
};

struct cache {
    std::atomic<table *> m_table;
    // all entries inserted into some table of an owned cache
    std::atomic<entry *> m_entries;
};

std::atomic<entry *> g_global_slots[global_initial_num_slots];
table g_global_table = { global_initial_num_slots, g_global_slots, {0}, {false}, nullptr };
cache g_global_cache = { {&g_global_table}, {nullptr} };
std::atomic<size_t> g_num_live_caches{0};

uint64_t entry_hash(lean_object * root, lean_object * key) {
    return lean_name_hash(key) ^ (reinterpret_cast<uintptr_t>(root) >> 4);
}

/* Inserts `e`, taken from the table being replaced, into the first empty slot of its probe window
   in `t`, or drops it if the window is full. Entries of a table are pairwise distinct, so no
   comparison is needed. Returns whether `e` was inserted. */
bool migrate_entry(table * t, entry * e) {
    size_t slot = static_cast<size_t>(e->m_hash) & (t->m_num_slots - 1);
    for (size_t i = 0; i < probe_window; i++) {
        size_t s = (slot + i) & (t->m_num_slots - 1);
        entry * expected = nullptr;
        if (t->m_slots[s].compare_exchange_strong(expected, e, std::memory_order_release,
                std::memory_order_acquire))
            return true;
    }
    return false;
}

/* Doubles `t` if it is still the current table of `c`, migrating its entries. */
void grow(cache & c, table * t) {
    if (t->m_num_slots >= max_num_slots || c.m_table.load(std::memory_order_acquire) != t)
        return;
    if (t->m_growing.exchange(true, std::memory_order_acq_rel))
        return;
    size_t num_slots = 2 * t->m_num_slots;
    table * nt = new table{num_slots, new std::atomic<entry *>[num_slots](), {0}, {false}, t};
    size_t migrated = 0;
    for (size_t i = 0; i < t->m_num_slots; i++) {
        // a concurrent insertion into an already-visited slot is lost with the old table
        if (entry * e = t->m_slots[i].load(std::memory_order_acquire))
            if (migrate_entry(nt, e))
                migrated++;
    }
    nt->m_num_entries.store(migrated, std::memory_order_relaxed);
    // only this thread swaps `t` out, so the exchange cannot fail
    c.m_table.store(nt, std::memory_order_release);
}

void cache_finalize(void * p) {
    cache * c = static_cast<cache *>(p);
    // no concurrent readers remain, as they would hold a reference to the owning view
    entry * e = c->m_entries.load(std::memory_order_acquire);
    while (e) {
        entry * next = e->m_next;
        delete e->m_mod.load(std::memory_order_acquire);
        delete e;
        e = next;
    }
    table * t = c->m_table.load(std::memory_order_acquire);
    while (t) {
        table * prev = t->m_prev;
        delete[] t->m_slots;
        delete t;
        t = prev;
    }
    delete c;
    g_num_live_caches.fetch_sub(1, std::memory_order_relaxed);
}

void cache_foreach(void *, b_lean_obj_arg) {
    // pinned objects are deliberately not visited: they are never released
}

lean_external_class * get_cache_class() {
    static lean_external_class * cls = lean_register_external_class(cache_finalize, cache_foreach);
    return cls;
}
}

/* Looks `n` up in the view `root` through the cache `c`, computing a miss with `core`: returns the
   entry, with a reference for the caller, and sets `*e_out` to the cache entry holding it, or to null
   if the cache does not keep it. Specialized per `owned` and inlined into `find_cached`: a shared
   out-of-line copy measurably slows down the hot path. */
template <bool owned>
static inline __attribute__((always_inline)) lean_obj_res find_cached_in(cache & c,
        b_lean_obj_arg root, b_lean_obj_arg n, lean_object * (*core)(lean_obj_arg, lean_obj_arg),
        entry ** e_out) {
    table * t = c.m_table.load(std::memory_order_acquire);
    uint64_t h = entry_hash(root, n);
    size_t slot = static_cast<size_t>(h) & (t->m_num_slots - 1);
    size_t empty = t->m_num_slots;
    for (size_t i = 0; i < probe_window; i++) {
        size_t s = (slot + i) & (t->m_num_slots - 1);
        entry * e = t->m_slots[s].load(std::memory_order_acquire);
        if (!e) {
            empty = s;
            // entries are only inserted at the window's first empty slot, so stop searching
            break;
        }
        if (e->m_root == root && lean_name_eq(e->m_key, n)) {
            // the value is pinned by the entry and persistent or multi-threaded
            lean_inc(e->m_val);
            *e_out = e;
            return e->m_val;
        }
    }
    // not counted, see above
    uint64_t heartbeats = get_num_heartbeats();
    lean_inc(root); lean_inc(n);
    lean_object * r = core(root, n);
    // The value is handed to and `inc`ed by arbitrary reader threads; marking it persistent keeps
    // hits free of atomic RC and of coherence traffic on hot values. The unshared variant only
    // writes thread-owned counts, so it is race-free where plain `lean_mark_persistent` is not.
    // A value the cache does not keep, as its window is full or an insertion race is lost, is
    // marked too so that a miss returns what a hit would, and is leaked.
    lean_mark_persistent_unshared(r);
    set_heartbeats(heartbeats);
    *e_out = nullptr;
    if (empty == t->m_num_slots)
        return r;
    // Pin the key, and the root unless it owns the cache; hits only compare them, so they need no
    // special marking.
    if (!owned)
        lean_inc(root);
    lean_inc(n);
    entry * ne = new entry{h, root, n, r, nullptr, nullptr};
    entry * expected = nullptr;
    if (!t->m_slots[empty].compare_exchange_strong(expected, ne, std::memory_order_release,
            std::memory_order_relaxed)) {
        // lost an insertion race; drop the new entry rather than probing on
        if (!owned)
            lean_dec(root);
        lean_dec(n);
        delete ne;
        return r;
    }
    if (owned) {
        entry * head = c.m_entries.load(std::memory_order_relaxed);
        do {
            ne->m_next = head;
        } while (!c.m_entries.compare_exchange_weak(head, ne, std::memory_order_release,
                    std::memory_order_relaxed));
    }
    lean_inc(r);
    *e_out = ne;
    if (2 * (t->m_num_entries.fetch_add(1, std::memory_order_relaxed) + 1) >= t->m_num_slots)
        grow(c, t);
    return r;
}

/* The `Option LookupCache` field of a `cached` root; `dropCache` may concurrently empty it. */
static lean_object * cache_field(b_lean_obj_arg root) {
    return __atomic_load_n(lean_ctor_obj_cptr(root), __ATOMIC_RELAXED);
}

/* The cache of a `cached` root, or null if `root` has none (or `dropCache` emptied it). */
static cache * own_cache(b_lean_obj_arg root) {
    if (lean_ptr_tag(root) == cached_tag) {
        lean_object * opt = cache_field(root);
        if (!lean_is_scalar(opt))
            return static_cast<cache *>(lean_get_external_data(lean_ctor_get(opt, 0)));
    }
    return nullptr;
}

static bool has_own_cache(b_lean_obj_arg root) {
    return own_cache(root) != nullptr;
}

static lean_obj_res find_cached(b_lean_obj_arg root, b_lean_obj_arg n,
        lean_object * (*core)(lean_obj_arg, lean_obj_arg), entry ** e_out) {
    if (cache * c = own_cache(root))
        return find_cached_in<true>(*c, root, n, core, e_out);
    return find_cached_in<false>(g_global_cache, root, n, core, e_out);
}

extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_find_entry_cached(b_lean_obj_arg root, b_lean_obj_arg n) {
    entry * e;
    return find_cached(root, n, lean_imported_consts_find_entry_core, &e);
}

/* ImportedConsts.modIdxCached? (consts : @& ImportedConsts ConstantInfo)
     (extras : @& ImportedConsts Unit) (n : @& Name) : Option Nat */
extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_find_mod_idx_cached(b_lean_obj_arg consts,
        b_lean_obj_arg extras, b_lean_obj_arg n) {
    entry * e;
    lean_object * val = find_cached(consts, n, lean_imported_consts_find_entry_core, &e);
    if (e) {
        mod_memo * m = e->m_mod.load(std::memory_order_acquire);
        if (m && m->m_extras == extras) {
            lean_dec(val);
            // pinned by the memo and persistent
            lean_inc(m->m_val);
            return m->m_val;
        }
    }
    // not counted, see above
    uint64_t heartbeats = get_num_heartbeats();
    lean_inc(extras); lean_inc(n);
    lean_object * r = lean_imported_consts_mod_idx_core(val, extras, n);
    // marked and leaked like an entry's value, also when not memoized
    lean_mark_persistent_unshared(r);
    if (e && !e->m_mod.load(std::memory_order_relaxed)) {
        // Like the roots of its entries, the global cache pins the extra constants view, so that
        // its address cannot be reused by another view; a view's own cache is freed with the
        // environment that holds both views.
        bool pin = !has_own_cache(consts);
        if (pin)
            lean_inc(extras);
        mod_memo * nm = new mod_memo{extras, r};
        mod_memo * expected = nullptr;
        // a concurrent lookup may have memoized the same result already
        if (!e->m_mod.compare_exchange_strong(expected, nm, std::memory_order_release,
                std::memory_order_relaxed)) {
            if (pin)
                lean_dec(extras);
            delete nm;
        }
    }
    set_heartbeats(heartbeats);
    return r;
}

/* ImportedConsts.forceShared (t : @& Thunk α) : α */
extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_force_shared(b_lean_obj_arg t) {
    lean_object * r = lean_to_thunk(t)->m_value;
    if (!r) {
        // not counted, see above
        uint64_t heartbeats = get_num_heartbeats();
        r = lean_thunk_get_core(t);
        set_heartbeats(heartbeats);
    }
    lean_inc(r);
    return r;
}

/* LookupCache.new : BaseIO LookupCache */
extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_cache_new() {
    size_t num_slots = view_initial_num_slots;
    table * t = new table{num_slots, new std::atomic<entry *>[num_slots](), {0}, {false}, nullptr};
    cache * c = new cache{{t}, {nullptr}};
    g_num_live_caches.fetch_add(1, std::memory_order_relaxed);
    return lean_alloc_external(get_cache_class(), c);
}

/* LookupCache.numLive : BaseIO Nat */
extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_cache_num_live() {
    return lean_usize_to_nat(g_num_live_caches.load(std::memory_order_relaxed));
}

/* ImportedConsts.dropCache (t : @& ImportedConsts α) : BaseIO Unit */
extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_drop_cache(b_lean_obj_arg root) {
    if (lean_ptr_tag(root) == cached_tag) {
        // the old `some` cell and its cache are leaked: concurrent lookups may still use them
        __atomic_store_n(lean_ctor_obj_cptr(root), lean_box(0), __ATOMIC_RELAXED);
    }
    return lean_box(0);
}

/* resetCache : IO Unit */
extern "C" LEAN_EXPORT lean_obj_res lean_imported_consts_cache_reset() {
    table * t = g_global_cache.m_table.load(std::memory_order_acquire);
    for (size_t i = 0; i < t->m_num_slots; i++) {
        // entries (and their pins) are leaked: concurrent readers may still dereference them
        t->m_slots[i].store(nullptr, std::memory_order_release);
    }
    // occupancy is only ever an estimate; a racing insert after the reset merely re-adds one
    t->m_num_entries.store(0, std::memory_order_relaxed);
    return lean_io_result_mk_ok(lean_box(0));
}
}
