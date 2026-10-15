/*
Released under Apache 2.0 license as described in the file LICENSE.
*/
#include <cstring>
#include <vector>
#include "runtime/object_ref.h"
#include "kernel/expr.h"
#ifndef LEAN_EMSCRIPTEN
// The low-level SHA-256 calls cost ~30% less per small message than a reused EVP context.
#define OPENSSL_SUPPRESS_DEPRECATED
#include <openssl/sha.h>
#endif

/* Meaning digests for usage cutoff (`Lean.ModuleUsage`): the first 128 bits of a SHA-256. An expression's
digest is a Merkle hash: each node hashes a tag for its kind, its own fields and its children's digests, with
every variable-length field length-prefixed, so equal digests mean structurally equal terms (`mdata` aside)
unless SHA-256 collides. */
namespace lean {
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
    tag_str_lit, tag_proj
};

class digester {
    bool                  m_binders;
    ptr_digest_map        m_exprs, m_names, m_levels;
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
            if (m_binders)
                h.dig(name_digest(binding_name(e))).u8(static_cast<unsigned char>(binding_info(e)));
            return h.dig(child(binding_domain(e))).dig(child(binding_body(e))).finish();
        }
        case expr_kind::Let: {
            hasher h(tag_let);
            if (m_binders) h.dig(name_digest(let_name(e)));
            h.u8(let_nondep(e) ? 1 : 0);
            return h.dig(child(let_type(e))).dig(child(let_value(e))).dig(child(let_body(e))).finish();
        }
        case expr_kind::Lit: {
            literal const & v = lit_value(e);
            if (v.kind() == literal_kind::Nat) return hasher(tag_nat_lit).nat_val(v.get_nat()).finish();
            return hasher(tag_str_lit).str(v.get_string().data(), v.get_string().num_bytes()).finish();
        }
        case expr_kind::MData: return child(mdata_expr(e));
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
    explicit digester(bool binders):m_binders(binders) {}

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

extern "C" LEAN_EXPORT obj_res lean_usage_expr_digest(uint8 binders, b_obj_arg e) {
#ifdef LEAN_EMSCRIPTEN
    lean_internal_panic("usage digests require OpenSSL");
#else
    return mk_digest_obj(digester(binders != 0).expr_digest(TO_REF(expr, e)));
#endif
}
}
