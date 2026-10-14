/*
Copyright (c) 2025 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Sebastian Ullrich
*/
#pragma once
#include <lean/config.h>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include "util/unordered_dense.h"

#ifdef LEAN_MIMALLOC
#include <lean/mimalloc.h>
#endif

namespace lean {

// We do not override `new` to avoid FFI issues for users but use `lean::allocator`
// explicitly where using the custom allocator is important.

#ifdef LEAN_MIMALLOC
template<class T> using allocator = mi_stl_allocator<T>;
#else
template<class T> using allocator = std::allocator<T>;
#endif

// `unordered_map/set` allocates per insert, so specializing to the custom allocator can
// save significant time for maps with frequent inserts.

template<
    class Key,
    class T,
    class Hash = std::hash<Key>,
    class KeyEqual = std::equal_to<Key>,
    class Allocator = lean::allocator<std::pair<const Key, T>>
> using unordered_map = std::unordered_map<Key, T, Hash, KeyEqual, Allocator>;

template<
    class Key,
    class Hash = std::hash<Key>,
    class KeyEqual = std::equal_to<Key>,
    class Allocator = lean::allocator<Key>
> using unordered_set = std::unordered_set<Key, Hash, KeyEqual, Allocator>;

// Open-addressing (robin-hood) tables that store elements contiguously: no per-insert node
// allocation. Elements move when the table grows, so a reference, pointer or iterator into one
// must not be held across an insert. Iteration order differs from `unordered_map/set`.
// A `Hash` without `is_avalanching` (e.g. Lean's 32-bit structural hashes) is mixed by the table.

template<
    class Key,
    class T,
    class Hash = ankerl::unordered_dense::hash<Key>,
    class KeyEqual = std::equal_to<Key>
> using dense_map = ankerl::unordered_dense::map<Key, T, Hash, KeyEqual, lean::allocator<std::pair<Key, T>>>;

template<
    class Key,
    class Hash = ankerl::unordered_dense::hash<Key>,
    class KeyEqual = std::equal_to<Key>
> using dense_set = ankerl::unordered_dense::set<Key, Hash, KeyEqual, lean::allocator<Key>>;
};
