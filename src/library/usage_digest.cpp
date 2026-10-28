/*
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
#include <algorithm>
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <memory>
#include <vector>
#include <sys/stat.h>
#if defined(LEAN_WINDOWS)
#include <io.h>
#else
#include <unistd.h>
#endif
#if defined(__linux__)
#include <sys/vfs.h>
#endif
#include "runtime/io.h"
#include "runtime/object_ref.h"
#include "runtime/thread.h"
#include "util/name.h"
#include "kernel/expr.h"
#define XXH_INLINE_ALL
#include "library/xxhash.h"
#ifndef LEAN_EMSCRIPTEN
// The low-level SHA-256 calls cost ~30% less per small message than a reused EVP context.
#define OPENSSL_SUPPRESS_DEPRECATED
#include <openssl/sha.h>
#endif

/* Meaning digests for usage cutoff (`Lean.ModuleUsage`): the first 128 bits of a SHA-256. An expression's
digest is a Merkle hash: each node hashes a tag for its kind, its own fields and its children's digests, with
every variable-length field length-prefixed, so equal digests mean structurally equal terms up to what the binder
and `mdata` modes leave out, unless SHA-256 collides. */
namespace lean {
/* `Lean.ModuleUsage.mdataBytes`: an `mdata` payload's encoding, equal for two payloads exactly when they are `==`. */
extern "C" object * lean_usage_mdata_bytes(obj_arg m);
/* `Lean.ModuleUsage.mdataBorrowed`: whether an `mdata` node with this payload is a `[borrowed]` annotation. */
extern "C" uint8 lean_usage_mdata_borrowed(obj_arg m);
namespace {
constexpr size_t digest_size = 16;
struct digest { unsigned char b[digest_size]; };

#ifndef LEAN_EMSCRIPTEN
class hasher {
    SHA256_CTX    m_ctx;
    unsigned char m_buf[64];
    size_t        m_len = 0;
    void put(void const * p, size_t n) {
        if (m_len + n > sizeof(m_buf)) {
            SHA256_Update(&m_ctx, m_buf, m_len);
            m_len = 0;
            if (n > sizeof(m_buf)) { SHA256_Update(&m_ctx, p, n); return; }
        }
        memcpy(m_buf + m_len, p, n);
        m_len += n;
    }
public:
    explicit hasher(unsigned char tag) { SHA256_Init(&m_ctx); u8(tag); }
    /* No tag: for bytes that must hash as `Lean.ModuleUsage.Enc.finish` hashes an `Enc` buffer. */
    hasher() { SHA256_Init(&m_ctx); }
    hasher & u8(unsigned char v) { put(&v, 1); return *this; }
    hasher & u64(uint64_t v) {
        unsigned char b[8];
        for (int i = 0; i < 8; i++) b[i] = static_cast<unsigned char>(v >> (8 * i));
        put(b, 8);
        return *this;
    }
    hasher & str(char const * s, size_t n) { u64(n); put(s, n); return *this; }
    hasher & dig(digest const & d) { put(d.b, digest_size); return *this; }
    /* Lean keeps every `Nat` below `LEAN_MAX_SMALL_NAT` boxed, so the tag separates values, not encodings. */
    hasher & nat_val(nat const & n) {
        if (n.is_small()) return u8(0).u64(n.get_small_value());
        std::string s = n.to_std_string();
        return u8(1).str(s.data(), s.size());
    }
    /* `Lean.ModuleUsage.Enc.nat`: the decimal digits `toString` writes, as `Enc.str`. */
    hasher & enc_nat(nat const & n) {
        if (!n.is_small()) {
            std::string s = n.to_std_string();
            return str(s.data(), s.size());
        }
        return enc_nat(static_cast<uint64_t>(n.get_small_value()));
    }
    hasher & enc_nat(uint64_t v) {
        char b[20];
        size_t i = sizeof(b);
        do { b[--i] = static_cast<char>('0' + v % 10); v /= 10; } while (v != 0);
        return str(b + i, sizeof(b) - i);
    }
    digest finish() {
        SHA256_Update(&m_ctx, m_buf, m_len);
        unsigned char md[SHA256_DIGEST_LENGTH];
        SHA256_Final(md, &m_ctx);
        digest d;
        memcpy(d.b, md, digest_size);
        return d;
    }
};

/* Open-addressing map from object pointers to digests. Keys are objects reachable from the borrowed root,
so they stay alive, and distinct, for the whole call. */
class ptr_digest_map {
    struct slot { object * k; digest v; };
    std::vector<slot> m_slots;
    size_t            m_size = 0;
    unsigned          m_shift;
    size_t index(object * k) const {
        return static_cast<size_t>((reinterpret_cast<uint64_t>(k) * 0x9E3779B97F4A7C15ull) >> m_shift);
    }
    void place(object * k, digest const & v) {
        size_t mask = m_slots.size() - 1;
        size_t i = index(k);
        while (m_slots[i].k != nullptr && m_slots[i].k != k) i = (i + 1) & mask;
        if (m_slots[i].k == nullptr) m_size++;
        m_slots[i] = slot{k, v};
    }
public:
    ptr_digest_map():m_slots(size_t(1) << 10, slot{nullptr, {}}), m_shift(64 - 10) {}
    digest const * find(object * k) const {
        size_t mask = m_slots.size() - 1;
        for (size_t i = index(k);; i = (i + 1) & mask) {
            slot const & s = m_slots[i];
            if (s.k == k) return &s.v;
            if (s.k == nullptr) return nullptr;
        }
    }
    void insert(object * k, digest const & v) {
        if (2 * (m_size + 1) > m_slots.size()) {
            std::vector<slot> old(m_slots.size() * 2, slot{nullptr, {}});
            old.swap(m_slots);
            m_shift--;
            m_size = 0;
            for (slot const & s : old)
                if (s.k != nullptr) place(s.k, s.v);
        }
        place(k, v);
    }
};

enum : unsigned char {
    tag_name = 1, tag_name_str, tag_name_num,
    tag_level_zero = 10, tag_level_succ, tag_level_max, tag_level_imax, tag_level_param, tag_level_mvar,
    tag_bvar = 20, tag_fvar, tag_mvar, tag_sort, tag_const, tag_app, tag_lam, tag_pi, tag_let, tag_nat_lit,
    tag_str_lit, tag_proj, tag_mdata, tag_mdata_data, tag_exprs = 40
};

/* `Lean.ModuleUsage.BinderMode`: what of a binder counts besides its domain. */
enum class binder_mode : unsigned char { none = 0, infos = 1, names_infos = 2 };
/* `Lean.ModuleUsage.MDataMode`: what of an `mdata` node counts besides its expression. */
enum class mdata_mode : unsigned char { none = 0, compiler_read = 1, eqv = 2 };

class digester {
    binder_mode           m_mode;
    mdata_mode            m_mdata_mode;
    ptr_digest_map        m_exprs, m_names, m_levels, m_mdata;
    std::vector<object *> m_todo;
    std::vector<object *> m_parts;

    digest name_digest(name const & n) {
        if (digest const * d = m_names.find(n.raw())) return *d;
        m_parts.clear();
        for (name const * p = &n; !p->is_anonymous(); p = &p->get_prefix()) m_parts.push_back(p->raw());
        hasher h(tag_name);
        h.u64(m_parts.size());
        for (size_t i = m_parts.size(); i-- > 0;) {
            name const & c = TO_REF(name, m_parts[i]);
            if (c.is_string()) h.u8(tag_name_str).str(c.get_string().data(), c.get_string().num_bytes());
            else h.u8(tag_name_num).nat_val(c.get_numeral());
        }
        digest r = h.finish();
        m_names.insert(n.raw(), r);
        return r;
    }

    digest level_digest(level const & l) {
        if (digest const * d = m_levels.find(l.raw())) return *d;
        digest r;
        switch (kind(l)) {
        case level_kind::Zero:  r = hasher(tag_level_zero).finish(); break;
        case level_kind::Succ:  r = hasher(tag_level_succ).dig(level_digest(succ_of(l))).finish(); break;
        case level_kind::Max:
            r = hasher(tag_level_max).dig(level_digest(max_lhs(l))).dig(level_digest(max_rhs(l))).finish(); break;
        case level_kind::IMax:
            r = hasher(tag_level_imax).dig(level_digest(imax_lhs(l))).dig(level_digest(imax_rhs(l))).finish(); break;
        case level_kind::Param: r = hasher(tag_level_param).dig(name_digest(param_id(l))).finish(); break;
        case level_kind::MVar:  r = hasher(tag_level_mvar).dig(name_digest(mvar_id(l))).finish(); break;
        }
        m_levels.insert(l.raw(), r);
        return r;
    }

    digest child(expr const & e) { return *m_exprs.find(e.raw()); }

    digest mdata_digest(kvmap const & m) {
        if (digest const * d = m_mdata.find(m.raw())) return *d;
        hasher h(tag_mdata_data);
        if (m_mdata_mode == mdata_mode::compiler_read) {
            h.u8(lean_usage_mdata_borrowed(m.to_obj_arg()));
        } else {
            object * bytes = lean_usage_mdata_bytes(m.to_obj_arg());
            h.str(reinterpret_cast<char const *>(lean_sarray_cptr(bytes)), lean_sarray_size(bytes));
            lean_dec(bytes);
        }
        digest r = h.finish();
        m_mdata.insert(m.raw(), r);
        return r;
    }

    /* `e`'s digest, given its children's in `m_exprs`. */
    digest node_digest(expr const & e) {
        switch (e.kind()) {
        case expr_kind::BVar:  return hasher(tag_bvar).nat_val(bvar_idx(e)).finish();
        case expr_kind::FVar:  return hasher(tag_fvar).dig(name_digest(fvar_name(e))).finish();
        case expr_kind::MVar:  return hasher(tag_mvar).dig(name_digest(mvar_name(e))).finish();
        case expr_kind::Sort:  return hasher(tag_sort).dig(level_digest(sort_level(e))).finish();
        case expr_kind::Const: {
            unsigned n = 0;
            for (level const & l : const_levels(e)) { (void)l; n++; }
            hasher h(tag_const);
            h.dig(name_digest(const_name(e))).u64(n);
            for (level const & l : const_levels(e)) h.dig(level_digest(l));
            return h.finish();
        }
        case expr_kind::App:   return hasher(tag_app).dig(child(app_fn(e))).dig(child(app_arg(e))).finish();
        case expr_kind::Lambda: case expr_kind::Pi: {
            hasher h(is_lambda(e) ? tag_lam : tag_pi);
            if (m_mode == binder_mode::names_infos) h.dig(name_digest(binding_name(e)));
            if (m_mode != binder_mode::none) h.u8(static_cast<unsigned char>(binding_info(e)));
            return h.dig(child(binding_domain(e))).dig(child(binding_body(e))).finish();
        }
        case expr_kind::Let: {
            hasher h(tag_let);
            if (m_mode == binder_mode::names_infos) h.dig(name_digest(let_name(e)));
            h.u8(let_nondep(e) ? 1 : 0);
            return h.dig(child(let_type(e))).dig(child(let_value(e))).dig(child(let_body(e))).finish();
        }
        case expr_kind::Lit: {
            literal const & v = lit_value(e);
            if (v.kind() == literal_kind::Nat) return hasher(tag_nat_lit).nat_val(v.get_nat()).finish();
            return hasher(tag_str_lit).str(v.get_string().data(), v.get_string().num_bytes()).finish();
        }
        case expr_kind::MData:
            if (m_mdata_mode == mdata_mode::none) return child(mdata_expr(e));
            return hasher(tag_mdata).dig(mdata_digest(mdata_data(e))).dig(child(mdata_expr(e))).finish();
        case expr_kind::Proj:
            return hasher(tag_proj).dig(name_digest(proj_sname(e))).nat_val(proj_idx(e))
                .dig(child(proj_expr(e))).finish();
        }
        lean_unreachable();
    }

    void push_if_new(expr const & e) {
        if (m_exprs.find(e.raw()) == nullptr) m_todo.push_back(e.raw());
    }

public:
    digester(binder_mode mode, mdata_mode mdata):m_mode(mode), m_mdata_mode(mdata) {}

    /* Children first, with an explicit stack: proof terms can nest deeper than the C stack allows. */
    digest expr_digest(expr const & root) {
        push_if_new(root);
        while (!m_todo.empty()) {
            object * o = m_todo.back();
            if (m_exprs.find(o) != nullptr) { m_todo.pop_back(); continue; }
            expr const & e = TO_REF(expr, o);
            size_t pending = m_todo.size();
            switch (e.kind()) {
            case expr_kind::App:    push_if_new(app_fn(e)); push_if_new(app_arg(e)); break;
            case expr_kind::Lambda: case expr_kind::Pi:
                push_if_new(binding_domain(e)); push_if_new(binding_body(e)); break;
            case expr_kind::Let:    push_if_new(let_type(e)); push_if_new(let_value(e)); push_if_new(let_body(e)); break;
            case expr_kind::MData:  push_if_new(mdata_expr(e)); break;
            case expr_kind::Proj:   push_if_new(proj_expr(e)); break;
            default: break;
            }
            if (m_todo.size() != pending) continue;
            m_todo.pop_back();
            m_exprs.insert(o, node_digest(e));
        }
        return child(root);
    }
};
#endif

/* A `Lean.ModuleUsage.Digest`: a structure of two `UInt64`s, the digest's bytes read big-endian. */
obj_res mk_digest_obj(digest const & d) {
    uint64_t hi = 0, lo = 0;
    for (size_t i = 0; i < 8; i++) hi = (hi << 8) | d.b[i];
    for (size_t i = 8; i < digest_size; i++) lo = (lo << 8) | d.b[i];
    object * r = lean_alloc_ctor(0, 0, 2 * sizeof(uint64_t));
    lean_ctor_set_uint64(r, 0, hi);
    lean_ctor_set_uint64(r, sizeof(uint64_t), lo);
    return r;
}
}

extern "C" LEAN_EXPORT obj_res lean_usage_digest_bytes(b_obj_arg bytes) {
#ifdef LEAN_EMSCRIPTEN
    lean_internal_panic("usage digests require OpenSSL");
#else
    unsigned char md[SHA256_DIGEST_LENGTH];
    SHA256_CTX ctx;
    SHA256_Init(&ctx);
    SHA256_Update(&ctx, lean_sarray_cptr(bytes), lean_sarray_size(bytes));
    SHA256_Final(md, &ctx);
    digest d;
    memcpy(d.b, md, digest_size);
    return mk_digest_obj(d);
#endif
}

#ifndef LEAN_EMSCRIPTEN
namespace {
/* `Lean.ModuleUsage.Enc.name`'s components, root first: tag 1 and `Enc.str` for a string, tag 2 and `Enc.nat` for a
number. */
void enc_name_components(hasher & h, name const & n) {
    if (n.is_anonymous()) return;
    enc_name_components(h, n.get_prefix());
    if (n.is_string()) h.u8(1).str(n.get_string().data(), n.get_string().num_bytes());
    else h.u8(2).enc_nat(n.get_numeral());
}
}
#endif

/* `Lean.ModuleUsage.resolvedId`: the digest `Enc.finish` gives `Enc.name n` on an empty `Enc`, hashed as it is encoded
instead of from a buffer. */
extern "C" LEAN_EXPORT obj_res lean_usage_resolved_id(b_obj_arg n) {
#ifdef LEAN_EMSCRIPTEN
    lean_internal_panic("usage digests require OpenSSL");
#else
    name const & nm = TO_REF(name, n);
    uint64_t parts = 0;
    for (name const * p = &nm; !p->is_anonymous(); p = &p->get_prefix()) parts++;
    hasher h;
    h.enc_nat(parts);
    enc_name_components(h, nm);
    return mk_digest_obj(h.finish());
#endif
}

extern "C" LEAN_EXPORT obj_res lean_usage_expr_digest(uint8 mode, uint8 mdata, b_obj_arg e) {
#ifdef LEAN_EMSCRIPTEN
    lean_internal_panic("usage digests require OpenSSL");
#else
    return mk_digest_obj(digester(static_cast<binder_mode>(mode), static_cast<mdata_mode>(mdata))
        .expr_digest(TO_REF(expr, e)));
#endif
}

/* One digest of an array of expressions, by one digester, so subterms they share are digested once. */
extern "C" LEAN_EXPORT obj_res lean_usage_exprs_digest(uint8 mode, uint8 mdata, b_obj_arg es) {
#ifdef LEAN_EMSCRIPTEN
    lean_internal_panic("usage digests require OpenSSL");
#else
    digester d(static_cast<binder_mode>(mode), static_cast<mdata_mode>(mdata));
    size_t n = lean_array_size(es);
    std::vector<digest> ds;
    ds.reserve(n);
    for (size_t i = 0; i < n; i++) ds.push_back(d.expr_digest(TO_REF(expr, lean_array_cptr(es)[i])));
    hasher h(tag_exprs);
    h.u64(n);
    for (digest const & x : ds) h.dig(x);
    return mk_digest_obj(h.finish());
#endif
}

namespace {
/* Opens `path` as `lean_io_prim_handle_mk` opens it, so processes spawned meanwhile do not inherit the descriptor;
returns an IO error result or `nullptr` in `err`. */
FILE * open_for_digest(b_obj_arg path, obj_res & err) {
    err = nullptr;
    char const * fname = string_cstr(path);
    if (strlen(fname) != lean_string_size(path) - 1) {
        err = mk_embedded_nul_error(path);
        return nullptr;
    }
#if defined(LEAN_WINDOWS)
    int fd = open(fname, O_RDONLY | O_BINARY | O_NOINHERIT);
#else
    int fd = open(fname, O_RDONLY | O_CLOEXEC);
#endif
    if (fd == -1) {
        err = io_result_mk_error(decode_io_error(errno, path));
        return nullptr;
    }
    FILE * f = fdopen(fd, "rb");
    if (f == nullptr) {
        int e = errno;
        close(fd);
        err = io_result_mk_error(decode_io_error(e, path));
    }
    return f;
}

/* The XXH3-128 hash of the rest of `f`'s bytes, read in fixed-size chunks, as a `Digest` (`hi` is its high 64 bits,
so `Digest.hex` prints it as `xxhsum -H2` does); `nullptr` with `errno` set if a read fails. Does not close `f`. */
object * digest_stream(FILE * f) {
    constexpr size_t chunk = 1 << 18;
    std::unique_ptr<unsigned char[]> buf(new unsigned char[chunk]);  // not zero-filled: only bytes `fread` wrote are hashed
    XXH3_state_t state;
    XXH3_128bits_reset(&state);
    size_t n;
    while ((n = fread(buf.get(), 1, chunk, f)) > 0) {
        XXH3_128bits_update(&state, buf.get(), n);
    }
    if (ferror(f)) return nullptr;
    XXH128_hash_t h = XXH3_128bits_digest(&state);
    object * r = lean_alloc_ctor(0, 0, 2 * sizeof(uint64_t));
    lean_ctor_set_uint64(r, 0, h.high64);
    lean_ctor_set_uint64(r, sizeof(uint64_t), h.low64);
    return r;
}

#if !defined(LEAN_WINDOWS)
/* The fields of a `stat` that every write, truncation, rename over the path, link, unlink or attribute change
through the file system changes: the file (device, inode), its size, and its modification and status-change times
(`Lean.ModuleUsage.FileStamp`). */
constexpr unsigned stamp_fields = 7;
void stamp_of(struct stat const & st, uint64_t (&s)[stamp_fields]) {
#if defined(__APPLE__)
    struct timespec const & mt = st.st_mtimespec;
    struct timespec const & ct = st.st_ctimespec;
#else
    struct timespec const & mt = st.st_mtim;
    struct timespec const & ct = st.st_ctim;
#endif
    s[0] = static_cast<uint64_t>(st.st_dev);
    s[1] = static_cast<uint64_t>(st.st_ino);
    s[2] = static_cast<uint64_t>(st.st_size);
    s[3] = static_cast<uint64_t>(mt.tv_sec);
    s[4] = static_cast<uint64_t>(mt.tv_nsec);
    s[5] = static_cast<uint64_t>(ct.tv_sec);
    s[6] = static_cast<uint64_t>(ct.tv_nsec);
}

object * mk_stamp(uint64_t const (&s)[stamp_fields]) {
    object * r = lean_alloc_ctor(0, 0, stamp_fields * sizeof(uint64_t));
    for (unsigned i = 0; i < stamp_fields; i++) lean_ctor_set_uint64(r, i * sizeof(uint64_t), s[i]);
    return r;
}
#endif

/* How long before a read begins a file's status-change time must lie for the stamp taken around the read to stand for
the bytes read: longer than the lag behind CLOCK_REALTIME of the clock that stamps the file. Let `t` be the realtime
clock read before the read's first `fstat`, `c1` the status-change time that `fstat` sees, and `c2` the one any change
made after it sets. The file system's clock trails `t` by at most `lag`, so `c2 >= t - lag`, and `c1 < t - bound`, so
`c2 > c1` when `bound >= lag`: the second `fstat` sees every such change. The clock must be read before the first
`fstat`: read after the read, the age says nothing about a change made during the read in `c1`'s own tick.

Linux stamps ext4, XFS, Btrfs and tmpfs inodes from the coarse realtime clock (or, with multigrain timestamps, a
finer one), which advances once per jiffy, so `lag` is at most one jiffy, `clock_getres(CLOCK_REALTIME_COARSE)`. The
bound is four jiffies and no less than 50 ms, as margin for late timer ticks and clock slew. These file systems record
nanoseconds, so a zero nanosecond field marks whole-second timestamps (ext4 with 128-byte inodes, for example), which
get the general bound. Every other file system, one `statfs` cannot identify, and a jiffy `clock_getres` does not
report get 2 s: longer than any file system's granularity (FAT's is 2 s for modification times), including those whose
timestamps may come from another host's clock (NFS, FUSE, 9p) or from another file system underneath (overlayfs).

No bound covers two cases: a backwards step of the realtime clock, after which a later change would have to land on
exactly the recorded tick; and a file rewritten in place, because one `write` sets the status-change time before it
copies the bytes, so a copy that stalls past the bound after the reader's first `fstat` leaves a stamp that stands
for mixed bytes. Usage sidecars are therefore never written in place (`Lean.ModuleUsage.writeFileReplacing`), nor is
an `.olean`. */
constexpr int64_t stamp_settle_fine_min_ns = 50'000'000;
constexpr int64_t stamp_settle_ns = 2'000'000'000;

/* Whether a stamp whose status-change time has nanosecond field `ctime_nsec` and lay `age_ns` before its read began
stands for the file's bytes, on a file system of `statfs` type `fs_type` (`statfs_ok`: `statfs` succeeded) whose
timestamp clock advances every `tick_ns` (not positive: unknown). */
bool stamp_settled(bool statfs_ok, uint64_t fs_type, uint64_t ctime_nsec, int64_t tick_ns, int64_t age_ns) {
    uint32_t t = static_cast<uint32_t>(fs_type);
    // EXT4_SUPER_MAGIC (also ext2/ext3), XFS_SUPER_MAGIC, BTRFS_SUPER_MAGIC, TMPFS_MAGIC (<linux/magic.h>)
    bool fine = statfs_ok && ctime_nsec != 0 && tick_ns > 0 &&
        (t == 0xEF53u || t == 0x58465342u || t == 0x9123683Eu || t == 0x01021994u);
    // `tick_ns` is capped so that the product cannot overflow; a capped bound exceeds the general one anyway.
    int64_t bound = fine ? std::max(stamp_settle_fine_min_ns, 4 * std::min(tick_ns, stamp_settle_ns)) : stamp_settle_ns;
    return age_ns > bound;
}

#if !defined(LEAN_WINDOWS)
/* How often the clock Linux stamps files from advances (`stamp_settled`), or 0 if unknown. */
int64_t coarse_tick_ns() {
#if defined(__linux__)
    static int64_t const tick = [] {
        struct timespec r;
        if (clock_getres(CLOCK_REALTIME_COARSE, &r) != 0) return int64_t(0);
        return static_cast<int64_t>(r.tv_sec) * 1'000'000'000 + static_cast<int64_t>(r.tv_nsec);
    }();
    return tick;
#else
    return 0;
#endif
}

/* Whether `after`, the stamp of the open file `fd` taken after reading it, stands for the bytes read, if the realtime
clock read `start` before the read's first `fstat` (`stamp_settled`). */
bool stamp_stands(int fd, struct timespec const & start, uint64_t const (&after)[stamp_fields]) {
    bool statfs_ok = false;
    uint64_t fs_type = 0;
#if defined(__linux__)
    struct statfs sf;
    if (fstatfs(fd, &sf) == 0) {
        statfs_ok = true;
        fs_type = static_cast<uint64_t>(static_cast<uint32_t>(sf.f_type));
    }
#else
    (void)fd;
#endif
    // Clamped so that the product cannot overflow; every age beyond 10 s gives the same result.
    int64_t sec = std::max<int64_t>(-10, std::min<int64_t>(10,
        static_cast<int64_t>(start.tv_sec) - static_cast<int64_t>(after[5])));
    int64_t age_ns = sec * 1'000'000'000 + (static_cast<int64_t>(start.tv_nsec) - static_cast<int64_t>(after[6]));
    return stamp_settled(statfs_ok, fs_type, after[6], coarse_tick_ns(), age_ns);
}
#endif
}

/* `Lean.ModuleUsage.stampSettled`: `stamp_settled`, for tests of the rule (`Int64` crosses the ABI as `uint64_t`). */
extern "C" LEAN_EXPORT uint8_t lean_usage_stamp_settled(uint8_t statfs_ok, uint64_t fs_type, uint64_t ctime_nsec,
        uint64_t tick_ns, uint64_t age_ns) {
    return stamp_settled(statfs_ok != 0, fs_type, ctime_nsec, static_cast<int64_t>(tick_ns),
        static_cast<int64_t>(age_ns));
}

/* The XXH3-128 hash of a file's bytes (`Lean.ModuleUsage.fileDigest`). */
extern "C" LEAN_EXPORT obj_res lean_usage_file_digest(b_obj_arg path) {
    obj_res err;
    FILE * f = open_for_digest(path, err);
    if (f == nullptr) return err;
    object * d = digest_stream(f);
    int e = d == nullptr ? errno : 0;
    fclose(f);
    if (d == nullptr) return io_result_mk_error(decode_io_error(e, path));
    return io_result_mk_ok(d);
}

/* `Lean.ModuleUsage.fileDigestOfBytes`: `fileDigest` of a file whose bytes are `bytes` (XXH3-128 hashed in one call;
`digest_stream`'s chunked updates give the same hash). */
extern "C" LEAN_EXPORT obj_res lean_usage_file_bytes_digest(b_obj_arg bytes) {
    XXH128_hash_t h = XXH3_128bits(lean_sarray_cptr(bytes), lean_sarray_size(bytes));
    object * r = lean_alloc_ctor(0, 0, 2 * sizeof(uint64_t));
    lean_ctor_set_uint64(r, 0, h.high64);
    lean_ctor_set_uint64(r, sizeof(uint64_t), h.low64);
    return r;
}

/* `Lean.ModuleUsage.fileStamp`: the stamp of the file at `path` (following symbolic links, as `open` does). */
extern "C" LEAN_EXPORT obj_res lean_usage_file_stamp(b_obj_arg path) {
#if defined(LEAN_WINDOWS)
    return io_result_mk_ok(mk_option_none());
#else
    char const * fname = string_cstr(path);
    struct stat st;
    if (strlen(fname) != lean_string_size(path) - 1 || stat(fname, &st) != 0) return io_result_mk_ok(mk_option_none());
    uint64_t s[stamp_fields];
    stamp_of(st, s);
    return io_result_mk_ok(mk_option_some(mk_stamp(s)));
#endif
}

/* `Lean.ModuleUsage.fileDigestStamped`: the file's digest, with the stamp of the file it read if the stamp stands for
those bytes: the descriptor's stamp is the same before and after the read, and its status-change time lies far enough
before the realtime clock read just before the first `fstat` (`stamp_settled`) that every later change of the file
shows in the second. */
extern "C" LEAN_EXPORT obj_res lean_usage_file_digest_stamped(b_obj_arg path) {
    obj_res err;
    FILE * f = open_for_digest(path, err);
    if (f == nullptr) return err;
    object * stamp = mk_option_none();
#if !defined(LEAN_WINDOWS)
    struct timespec start;
    struct stat st;
    uint64_t before[stamp_fields];
    bool have_before = clock_gettime(CLOCK_REALTIME, &start) == 0 && fstat(fileno(f), &st) == 0;
    if (have_before) stamp_of(st, before);
#endif
    object * d = digest_stream(f);
    int e = d == nullptr ? errno : 0;
#if !defined(LEAN_WINDOWS)
    if (d != nullptr && have_before && fstat(fileno(f), &st) == 0) {
        uint64_t after[stamp_fields];
        stamp_of(st, after);
        bool same = true;
        for (unsigned i = 0; i < stamp_fields; i++) same = same && before[i] == after[i];
        if (same && stamp_stands(fileno(f), start, after)) stamp = mk_option_some(mk_stamp(after));
    }
#endif
    fclose(f);
    if (d == nullptr) return io_result_mk_error(decode_io_error(e, path));
    object * r = lean_alloc_ctor(0, 2, 0);
    lean_ctor_set(r, 0, d);
    lean_ctor_set(r, 1, stamp);
    return io_result_mk_ok(r);
}

/* The largest file `lean_usage_read_file_stamped` reads, so that a damaged sidecar cannot make Lake allocate without
bound. The `.usage` of a module whose closure has about 4,900 workspace modules is about 3 MB. */
constexpr size_t max_stamped_read = size_t(256) << 20;

static obj_res too_large_error() {
    return io_result_mk_error("larger than " + std::to_string(max_stamped_read) + " bytes");
}

/* `Lean.ModuleUsage.readFileStamped`: the file's bytes, with the stamp of the file they were read from if it stands
for them, as `lean_usage_file_digest_stamped` decides it (the realtime clock is read before the first `fstat`). Fails
for a file larger than `max_stamped_read`. */
extern "C" LEAN_EXPORT obj_res lean_usage_read_file_stamped(b_obj_arg path) {
    obj_res err;
    FILE * f = open_for_digest(path, err);
    if (f == nullptr) return err;
    object * stamp = mk_option_none();
    size_t expected = 0;
#if !defined(LEAN_WINDOWS)
    struct timespec start;
    struct stat st;
    uint64_t before[stamp_fields];
    bool have_before = clock_gettime(CLOCK_REALTIME, &start) == 0 && fstat(fileno(f), &st) == 0;
    if (have_before) {
        stamp_of(st, before);
        expected = static_cast<size_t>(st.st_size);
    }
    if (expected > max_stamped_read) {
        fclose(f);
        return too_large_error();
    }
#endif
    // One byte beyond the expected size, so that a file of that size is read to its end without growing the array.
    object * bytes = lean_alloc_sarray(1, 0, expected + 1);
    size_t size = 0;
    for (;;) {
        size_t cap = lean_sarray_capacity(bytes);
        if (size == cap) {
            if (cap > max_stamped_read) {
                fclose(f);
                lean_dec(bytes);
                return too_large_error();
            }
            object * grown = lean_alloc_sarray(1, size, 2 * cap);
            memcpy(lean_sarray_cptr(grown), lean_sarray_cptr(bytes), size);
            lean_dec(bytes);
            bytes = grown;
            cap *= 2;
        }
        size_t want = cap - size;
        size_t got = fread(lean_sarray_cptr(bytes) + size, 1, want, f);
        size += got;
        if (got < want) break;
    }
    if (ferror(f)) {
        int e = errno;
        fclose(f);
        lean_dec(bytes);
        return io_result_mk_error(decode_io_error(e, path));
    }
    lean_sarray_set_size(bytes, size);
#if !defined(LEAN_WINDOWS)
    if (have_before && fstat(fileno(f), &st) == 0) {
        uint64_t after[stamp_fields];
        stamp_of(st, after);
        bool same = true;
        for (unsigned i = 0; i < stamp_fields; i++) same = same && before[i] == after[i];
        if (same && stamp_stands(fileno(f), start, after)) stamp = mk_option_some(mk_stamp(after));
    }
#endif
    fclose(f);
    object * r = lean_alloc_ctor(0, 2, 0);
    lean_ctor_set(r, 0, bytes);
    lean_ctor_set(r, 1, stamp);
    return io_result_mk_ok(r);
}

/* The metavariable-context lookups the core exports for `instantiate_mvars.cpp` (src/Lean/MetavarContext.lean), which
take their arguments owned. */
extern "C" object * lean_get_mvar_assignment(obj_arg mctx, obj_arg mid);
extern "C" object * lean_get_delayed_mvar_assignment(obj_arg mctx, obj_arg mid);
extern "C" object * lean_delayed_mvar_assignment_mvar_id_pending(obj_arg d);

namespace {
/* An open-addressing set of object pointers that empties in constant time: a slot holds a pointer only for the
generation it was filled in. */
class ptr_set {
    struct slot { object * m_ptr; uint64_t m_gen; };
    std::vector<slot> m_slots;
    size_t            m_size = 0;
    uint64_t          m_gen = 1;
    unsigned          m_shift;
    size_t index(object * k) const {
        return static_cast<size_t>((reinterpret_cast<uint64_t>(k) * 0x9E3779B97F4A7C15ull) >> m_shift);
    }
    bool live(slot const & s) const { return s.m_gen == m_gen; }
    void place(object * k) {
        size_t mask = m_slots.size() - 1;
        size_t i = index(k);
        while (live(m_slots[i])) i = (i + 1) & mask;
        m_slots[i] = slot{k, m_gen};
    }
public:
    explicit ptr_set(unsigned log_size = 6):m_slots(size_t(1) << log_size, slot{nullptr, 0}), m_shift(64 - log_size) {}
    /* Adds `k`; returns whether it was absent. */
    bool insert(object * k) {
        size_t mask = m_slots.size() - 1;
        size_t i = index(k);
        for (; live(m_slots[i]); i = (i + 1) & mask)
            if (m_slots[i].m_ptr == k) return false;
        m_slots[i] = slot{k, m_gen};
        if (2 * ++m_size > m_slots.size()) {
            std::vector<slot> old(m_slots.size() * 2, slot{nullptr, 0});
            old.swap(m_slots);
            m_shift--;
            for (slot const & s : old)
                if (s.m_gen == m_gen) place(s.m_ptr);
        }
        return true;
    }
    void clear() { m_gen++; m_size = 0; }
};

/* `Lean.ModuleUsage.ConstWalker`, and `Lean.exprConsts` without a metavariable context. Every expression and name it
records is reachable from the terms the caller holds for the whole walk (for `usedFromInfoTrees`, which takes them
borrowed (`@&`), the info trees: their terms and the assignments of their metavariable contexts; for `exprConsts`, its
borrowed argument), so pointers stay valid and distinct without references. */
class const_walker {
    ptr_set                m_closed;    // visited subterms without metavariables
    ptr_set                m_opened;    // visited subterms with metavariables, under `m_mctx`
    ptr_set                m_seen;      // the name objects in `m_names`
    std::vector<object *>  m_names;
    std::vector<object *>  m_todo;
    object *               m_mctx = nullptr;  // held, so that its address is not reused while it is compared

    void use(name const & n) {
        if (m_seen.insert(n.raw())) m_names.push_back(n.raw());
    }

    /* Pushes `m`'s assignment, or that of the pending metavariable of its delayed assignment, recursively. The context
    holds every value and metavariable read here, so they stay valid after the lookup results are released. */
    void push_mvar(object * m) {
        while (true) {
            lean_inc(m_mctx); lean_inc(m);
            object * v = lean_get_mvar_assignment(m_mctx, m);
            if (!lean_is_scalar(v)) {
                m_todo.push_back(lean_ctor_get(v, 0));
                lean_dec(v);
                return;
            }
            lean_inc(m_mctx); lean_inc(m);
            object * d = lean_get_delayed_mvar_assignment(m_mctx, m);
            if (lean_is_scalar(d)) return;
            object * da = lean_ctor_get(d, 0);
            lean_inc(da);
            lean_dec(d);
            object * p = lean_delayed_mvar_assignment_mvar_id_pending(da);
            m = p;
            lean_dec(p);
        }
    }

public:
    ~const_walker() { if (m_mctx) lean_dec(m_mctx); }

    /* Visits `root`'s subterms not visited yet: `const` and `proj` nodes add their names, and metavariables their
    assignments under `m_mctx`, if set. */
    void walk(b_obj_arg root) {
        m_todo.push_back(root);
        while (!m_todo.empty()) {
            object * o = m_todo.back();
            m_todo.pop_back();
            expr const & e = TO_REF(expr, o);
            if (!(has_mvar(e) ? m_opened : m_closed).insert(o)) continue;
            switch (e.kind()) {
            case expr_kind::Lambda: case expr_kind::Pi:
                m_todo.push_back(binding_body(e).raw()); m_todo.push_back(binding_domain(e).raw()); break;
            case expr_kind::Let:
                m_todo.push_back(let_body(e).raw()); m_todo.push_back(let_value(e).raw());
                m_todo.push_back(let_type(e).raw()); break;
            case expr_kind::App:    m_todo.push_back(app_arg(e).raw()); m_todo.push_back(app_fn(e).raw()); break;
            case expr_kind::MData:  m_todo.push_back(mdata_expr(e).raw()); break;
            case expr_kind::Proj:   use(proj_sname(e)); m_todo.push_back(proj_expr(e).raw()); break;
            case expr_kind::Const:  use(const_name(e)); break;
            case expr_kind::MVar:   if (m_mctx) push_mvar(mvar_name(e).raw()); break;
            default: break;
            }
        }
    }

    /* `walk` under `mctx`: the subterms with metavariables visited under another context are visited again. */
    void walk(b_obj_arg mctx, b_obj_arg root) {
        if (mctx != m_mctx) {
            m_opened.clear();
            lean_inc(mctx);
            if (m_mctx) lean_dec(m_mctx);
            m_mctx = mctx;
        }
        walk(root);
    }

    object * names() const {
        size_t n = m_names.size();
        object * r = lean_alloc_array(n, n);
        for (size_t i = 0; i < n; i++) {
            lean_inc(m_names[i]);
            lean_array_set_core(r, i, m_names[i]);
        }
        return r;
    }
};

void const_walker_finalize(void * p) { delete static_cast<const_walker *>(p); }
void const_walker_foreach(void *, b_obj_arg) {}

external_object_class * get_const_walker_class() {
    static external_object_class * c = lean_register_external_class(const_walker_finalize, const_walker_foreach);
    return c;
}

const_walker & to_const_walker(b_obj_arg o) { return *static_cast<const_walker *>(lean_get_external_data(o)); }
}

// `BaseIO` externs take no world token and return their value directly.
extern "C" LEAN_EXPORT obj_res lean_usage_const_walker_new() {
    return lean_alloc_external(get_const_walker_class(), new const_walker());
}

extern "C" LEAN_EXPORT obj_res lean_usage_const_walker_walk(b_obj_arg w, b_obj_arg mctx, b_obj_arg e) {
    to_const_walker(w).walk(mctx, e);
    return box(0);
}

extern "C" LEAN_EXPORT obj_res lean_usage_const_walker_names(b_obj_arg w) {
    return to_const_walker(w).names();
}

/* `Lean.exprConsts`: without a metavariable context, metavariables are not followed, as in `Expr.foldConsts`. */
extern "C" LEAN_EXPORT obj_res lean_usage_expr_consts(b_obj_arg e) {
    const_walker w;
    w.walk(e);
    return w.names();
}

namespace {
/* A set of names, each held by a reference, with open addressing on `Name.hash`: a probe compares the pointer, then
the stored hash, and only then the names. */
class resolved_set {
    struct slot { object * m_name; uint64_t m_hash; };
    slot * m_slots;
    size_t m_mask;
    size_t m_size = 0;
    void grow() {
        slot * old = m_slots;
        size_t n = m_mask + 1;
        m_mask = 2 * n - 1;
        m_slots = new slot[2 * n]();
        for (size_t i = 0; i < n; i++)
            if (old[i].m_name) {
                size_t j = old[i].m_hash & m_mask;
                while (m_slots[j].m_name) j = (j + 1) & m_mask;
                m_slots[j] = old[i];
            }
        delete[] old;
    }
public:
    resolved_set(): m_slots(new slot[1024]()), m_mask(1023) {}
    resolved_set(resolved_set const &) = delete;
    ~resolved_set() {
        for (size_t i = 0; i <= m_mask; i++) if (m_slots[i].m_name) lean_dec(m_slots[i].m_name);
        delete[] m_slots;
    }
    /* Adds `n` unless the set holds an equal name; returns whether it did. */
    bool insert(b_obj_arg n) {
        uint64_t h = lean_name_hash(n);
        size_t i = h & m_mask;
        while (object * o = m_slots[i].m_name) {
            if (o == n || (m_slots[i].m_hash == h && lean_name_eq(o, n))) return false;
            i = (i + 1) & m_mask;
        }
        lean_inc(n);
        m_slots[i] = {n, h};
        if (2 * ++m_size > m_mask) grow();
        return true;
    }
    /* The names, as a new array. */
    object * to_array() const {
        object * r = lean_alloc_array(m_size, m_size);
        size_t k = 0;
        for (size_t i = 0; i <= m_mask; i++)
            if (object * o = m_slots[i].m_name) { lean_inc(o); lean_array_set_core(r, k++, o); }
        return r;
    }
};
}

/* The names whose defining module was looked up while usage recording is on (`Lean.noteResolved`). Each thread keeps
the names it has seen, so a repeated lookup costs one probe of a set only that thread touches; a name's first sighting
in a thread goes to the process-wide set, which keeps it marked multi-threaded. */
static atomic<bool> g_resolved_on(false);
static atomic<bool> g_all_resolved(false);
static mutex g_resolved_mutex;
// Never freed, like the runtime's other process-wide name tables: no destructor runs on Lean objects at exit.
static resolved_set * g_resolved = new resolved_set();
MK_THREAD_LOCAL_GET_DEF(resolved_set, get_seen_resolved);

extern "C" LEAN_EXPORT obj_res lean_usage_enable_resolved() {
    g_resolved_on.store(true);
    return box(0);
}

extern "C" LEAN_EXPORT obj_res lean_usage_note_resolved(b_obj_arg n, obj_arg x) {
    if (!atomic_load_explicit(&g_resolved_on, memory_order_relaxed)) return x;
    if (!get_seen_resolved().insert(n)) return x;
    lock_guard<mutex> lock(g_resolved_mutex);
    if (g_resolved->insert(n)) lean_mark_mt(n);
    return x;
}

extern "C" LEAN_EXPORT obj_res lean_usage_note_all_resolved(obj_arg x) {
    if (atomic_load_explicit(&g_resolved_on, memory_order_relaxed)) g_all_resolved.store(true);
    return x;
}

extern "C" LEAN_EXPORT obj_res lean_usage_resolved_names() {
    lock_guard<mutex> lock(g_resolved_mutex);
    return g_resolved->to_array();
}

extern "C" LEAN_EXPORT uint8 lean_usage_all_resolved() {
    return g_all_resolved.load();
}
}
