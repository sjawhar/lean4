/*
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
#include "kernel/census.h"
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <mutex>
#include <sstream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include "runtime/io.h"

namespace lean {

namespace {
enum class tri { unknown = -1, off = 0, on = 1 };
std::atomic<int> g_census_state{static_cast<int>(tri::unknown)};
}

bool census_enabled() {
    int s = g_census_state.load(std::memory_order_relaxed);
    if (s != static_cast<int>(tri::unknown)) return s == static_cast<int>(tri::on);
    char const * d = std::getenv("LEAN_CENSUS_DIR");
    int v = (d && *d) ? static_cast<int>(tri::on) : static_cast<int>(tri::off);
    g_census_state.store(v, std::memory_order_relaxed);
    return v == static_cast<int>(tri::on);
}

name decl_repr_name(declaration const & d) {
    switch (d.kind()) {
    case declaration_kind::Axiom:            return d.to_axiom_val().get_name();
    case declaration_kind::Definition:       return d.to_definition_val().get_name();
    case declaration_kind::Theorem:          return d.to_theorem_val().get_name();
    case declaration_kind::Opaque:           return d.to_opaque_val().get_name();
    case declaration_kind::Quot:             return name("Quot");
    case declaration_kind::MutualDefinition: return head(d.to_definition_vals()).get_name();
    case declaration_kind::Inductive:        return head(inductive_decl(d).get_types()).get_name();
    }
    lean_unreachable();
}

double census_now_ns() {
    return std::chrono::duration<double, std::nano>(
        std::chrono::steady_clock::now().time_since_epoch()).count();
}

namespace {
double now_ns() {
    return std::chrono::duration<double, std::nano>(
        std::chrono::steady_clock::now().time_since_epoch()).count();
}

struct decl_ctx {
    std::string name;
    double t0;
    uint64_t infer_calls = 0, infer_hits = 0;
    uint64_t whnf_calls = 0, whnf_hits = 0;
    uint64_t defeq_calls = 0, defeq_succ_hits = 0, defeq_fail_hits = 0;
    double lit_ns = 0;
    /* constant name -> (unfold count, ns spent instantiating the unfolded value) */
    std::unordered_map<std::string, std::pair<uint64_t, double>> unfolds;
};

thread_local decl_ctx * tl_ctx = nullptr;
thread_local uint64_t tl_sample_ctr = 0;
constexpr unsigned CENSUS_HASH_SAMPLE = 32;

std::mutex g_mutex;
std::vector<std::string> g_lines;
/* process-wide (module-wide: one process compiles one module), not per declaration -- see
   census.h. [0] = infer, [1] = whnf. */
std::unordered_map<uint64_t, uint32_t> g_hash_counts[2];

std::string json_escape(std::string const & s) {
    std::string r;
    r.reserve(s.size() + 8);
    for (char c : s) {
        switch (c) {
        case '"':  r += "\\\""; break;
        case '\\': r += "\\\\"; break;
        case '\n': r += "\\n";  break;
        default:   r += c;
        }
    }
    return r;
}
}

census_decl_scope::census_decl_scope(name const & decl_name): m_ctx(nullptr) {
    if (!census_enabled()) return;
    if (tl_ctx != nullptr) return; // nested: fold into the enclosing declaration's scope
    decl_ctx * c = new decl_ctx();
    c->name = decl_name.to_string();
    c->t0 = now_ns();
    tl_ctx = c;
    m_ctx = c;
}

census_decl_scope::~census_decl_scope() {
    if (m_ctx == nullptr) return;
    decl_ctx * c = static_cast<decl_ctx *>(m_ctx);
    double dt = now_ns() - c->t0;
    std::ostringstream os;
    os << "{\"k\":\"kernel_decl\",\"name\":\"" << json_escape(c->name) << "\""
       << ",\"ns\":" << dt
       << ",\"infer_calls\":" << c->infer_calls << ",\"infer_hits\":" << c->infer_hits
       << ",\"whnf_calls\":" << c->whnf_calls << ",\"whnf_hits\":" << c->whnf_hits
       << ",\"defeq_calls\":" << c->defeq_calls
       << ",\"defeq_succ_hits\":" << c->defeq_succ_hits
       << ",\"defeq_fail_hits\":" << c->defeq_fail_hits
       << ",\"lit_ns\":" << c->lit_ns;
    if (!c->unfolds.empty()) {
        os << ",\"unfold\":{";
        bool first = true;
        for (auto const & kv : c->unfolds) {
            if (!first) os << ",";
            first = false;
            os << "\"" << json_escape(kv.first) << "\":[" << kv.second.first << "," << kv.second.second << "]";
        }
        os << "}";
    }
    os << "}";
    {
        std::lock_guard<std::mutex> lk(g_mutex);
        g_lines.push_back(os.str());
    }
    tl_ctx = nullptr;
    delete c;
}

void census_infer_call(bool cache_hit) {
    if (decl_ctx * c = tl_ctx) { c->infer_calls++; if (cache_hit) c->infer_hits++; }
}
void census_whnf_call(bool cache_hit) {
    if (decl_ctx * c = tl_ctx) { c->whnf_calls++; if (cache_hit) c->whnf_hits++; }
}
void census_defeq_call() {
    if (decl_ctx * c = tl_ctx) c->defeq_calls++;
}
void census_defeq_cache_hit(bool success) {
    if (decl_ctx * c = tl_ctx) { if (success) c->defeq_succ_hits++; else c->defeq_fail_hits++; }
}
void census_record_unfold(name const & decl_name, double ns) {
    if (decl_ctx * c = tl_ctx) {
        auto & e = c->unfolds[decl_name.to_string()];
        e.first++;
        e.second += ns;
    }
}
void census_record_lit_reduce(double ns) {
    if (decl_ctx * c = tl_ctx) c->lit_ns += ns;
}
void census_record_closed_term(unsigned kind, unsigned h) {
    if (tl_ctx == nullptr) return;
    if ((++tl_sample_ctr % CENSUS_HASH_SAMPLE) != 0) return;
    std::lock_guard<std::mutex> lk(g_mutex);
    g_hash_counts[kind][static_cast<uint64_t>(h)]++;
}

extern "C" LEAN_EXPORT object * lean_census_kernel_dump() {
    std::vector<std::string> lines;
    {
        std::lock_guard<std::mutex> lk(g_mutex);
        lines = std::move(g_lines);
        g_lines.clear();
        for (unsigned kind = 0; kind < 2; kind++) {
            for (auto const & kv : g_hash_counts[kind]) {
                if (kv.second < 2) continue; // only repeats (sampled) are useful to the report
                std::ostringstream os;
                os << "{\"k\":\"kernel_hash\",\"kind\":\"" << (kind == 0 ? "infer" : "whnf")
                   << "\",\"h\":" << kv.first << ",\"n\":" << kv.second
                   << ",\"sample\":" << CENSUS_HASH_SAMPLE << "}";
                lines.push_back(os.str());
            }
            g_hash_counts[kind].clear();
        }
    }
    std::string out;
    for (auto const & l : lines) { out += l; out += "\n"; }
    return mk_string(out);
}

/* Lean-side census state (`Lean.Util.Census`): see census.h's comment on why this mirrors
   `g_mutex`/`g_lines` above instead of a Lean `IO.Ref`. Kept separate from the kernel's own
   mutex/buffer since `Lean.Census.record` runs orders of magnitude more often (every `simp`
   rewrite attempt, not every declaration). */
namespace {
std::mutex g_lean_mutex;
std::vector<std::string> g_lean_lines;
std::atomic<uint64_t> g_simp_cache_hits{0};
std::atomic<uint64_t> g_simp_cache_misses{0};
std::atomic<uint64_t> g_const_map_force_ns{0};
}

std::string const & census_dir() {
    static std::string const dir = [] {
        char const * d = std::getenv("LEAN_CENSUS_DIR");
        return std::string(d ? d : "");
    }();
    return dir;
}

void census_record_line(std::string line) {
    if (!census_enabled()) return;
    std::lock_guard<std::mutex> lk(g_lean_mutex);
    g_lean_lines.push_back(std::move(line));
}

void census_add_simp_cache_hit() {
    if (!census_enabled()) return;
    g_simp_cache_hits.fetch_add(1, std::memory_order_relaxed);
}
void census_add_simp_cache_miss() {
    if (!census_enabled()) return;
    g_simp_cache_misses.fetch_add(1, std::memory_order_relaxed);
}
void census_add_const_map_force_ns(uint64_t ns) {
    if (!census_enabled()) return;
    g_const_map_force_ns.fetch_add(ns, std::memory_order_relaxed);
}
uint64_t census_const_map_force_ns() {
    return g_const_map_force_ns.load(std::memory_order_relaxed);
}

extern "C" LEAN_EXPORT uint8_t lean_census_enabled() {
    return census_enabled() ? 1 : 0;
}

extern "C" LEAN_EXPORT object * lean_census_dir_str() {
    return mk_string(census_dir());
}

extern "C" LEAN_EXPORT object * lean_census_record_line(b_obj_arg line) {
    census_record_line(string_to_std(line));
    return box(0);
}

extern "C" LEAN_EXPORT object * lean_census_add_simp_cache_hit() {
    census_add_simp_cache_hit();
    return box(0);
}
extern "C" LEAN_EXPORT object * lean_census_add_simp_cache_miss() {
    census_add_simp_cache_miss();
    return box(0);
}
extern "C" LEAN_EXPORT object * lean_census_add_const_map_force_ns(uint64_t ns) {
    census_add_const_map_force_ns(ns);
    return box(0);
}
extern "C" LEAN_EXPORT uint64_t lean_census_const_map_force_ns() {
    return census_const_map_force_ns();
}

extern "C" LEAN_EXPORT object * lean_census_lean_dump() {
    std::vector<std::string> lines;
    {
        std::lock_guard<std::mutex> lk(g_lean_mutex);
        lines = std::move(g_lean_lines);
        g_lean_lines.clear();
    }
    uint64_t hits = g_simp_cache_hits.exchange(0, std::memory_order_relaxed);
    uint64_t misses = g_simp_cache_misses.exchange(0, std::memory_order_relaxed);
    std::string out;
    for (auto const & l : lines) { out += l; out += "\n"; }
    if (hits + misses > 0) {
        std::ostringstream os;
        os << "{\"k\":\"simp_cache\",\"hits\":" << hits << ",\"misses\":" << misses << "}\n";
        out += os.str();
    }
    return mk_string(out);
}

}
