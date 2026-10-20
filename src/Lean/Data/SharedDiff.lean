/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.Data.NameMap.Basic
public import Std.Data.HashMap.Basic

public section

/-!
Differences between two versions of a persistent structure, found through physical sharing. When the second
version was derived from the first by path-copying updates, the parts both share are skipped without being
visited, so the work is proportional to what changed. Every function is exact on any two inputs; sharing only
decides how much it visits.
-/

namespace Lean

namespace SharedDiff

private unsafe def sameObjectImpl {α : Type u} (a b : α) : Bool :=
  ptrAddrUnsafe a == ptrAddrUnsafe b

/-- Whether `a` and `b` are the same object in memory. `true` implies `a = b`; `false` implies nothing. -/
@[implemented_by sameObjectImpl]
opaque sameObject {α : Type u} (a b : α) : Bool

open Std.DTreeMap.Internal (Impl)

private inductive Chunk (α β : Type) where
  | tree (t : Impl α (fun _ => β))
  | entry (k : α) (v : β)

private unsafe def treeMapImpl {α β : Type} {cmp : α → α → Ordering} (before after : Std.TreeMap α β cmp) :
    Array (α × β) × Array α :=
  loop [.tree after.inner.inner] [.tree before.inner.inner] #[] #[]
where
  split : Impl α (fun _ => β) → List (Chunk α β) → List (Chunk α β)
    | .inner _ k v l r, rest => .tree l :: .entry k v :: .tree r :: rest
    | .leaf, rest => rest
  /-- Merges the two in-order streams of subtrees and bindings, skipping a subtree both streams start with. -/
  loop : List (Chunk α β) → List (Chunk α β) → Array (α × β) → Array α → Array (α × β) × Array α
    | [], [], acc, rem => (acc, rem)
    | .tree .leaf :: as, bs, acc, rem => loop as bs acc rem
    | as, .tree .leaf :: bs, acc, rem => loop as bs acc rem
    | .tree t :: as, [], acc, rem => loop (split t as) [] acc rem
    | .entry k v :: as, [], acc, rem => loop as [] (acc.push (k, v)) rem
    | [], .tree t :: bs, acc, rem => loop [] (split t bs) acc rem
    | [], .entry k _ :: bs, acc, rem => loop [] bs acc (rem.push k)
    | ca :: as, cb :: bs, acc, rem =>
      match ca, cb with
      | .tree ta, .tree tb =>
        if ptrAddrUnsafe ta == ptrAddrUnsafe tb then loop as bs acc rem
        else if ta.size ≥ tb.size then loop (split ta as) (cb :: bs) acc rem
        else loop (ca :: as) (split tb bs) acc rem
      | .tree ta, .entry .. => loop (split ta as) (cb :: bs) acc rem
      | .entry .., .tree tb => loop (ca :: as) (split tb bs) acc rem
      | .entry ka va, .entry kb vb =>
        match cmp ka kb with
        | .lt => loop as (cb :: bs) (acc.push (ka, va)) rem
        | .gt => loop (ca :: as) bs acc (rem.push kb)
        | .eq => loop as bs (if ptrAddrUnsafe va == ptrAddrUnsafe vb then acc else acc.push (ka, va)) rem

/--
The bindings of `after` that are not shared with `before`, in key order: keys `before` lacks, and keys whose
value is not the same object as in `before` (a structurally equal value written again is included). Second,
the keys of `before` that `after` lacks. Exact for any two maps; when `after` was derived from `before` by
insertions and erasures, it visits O(d · log n) nodes for d changed bindings.
-/
@[implemented_by treeMapImpl]
opaque treeMap {α β : Type} {cmp : α → α → Ordering} (before after : Std.TreeMap α β cmp) :
    Array (α × β) × Array α

/-- The keys of `after` that `before` lacks, in key order, and the keys of `before` that `after` lacks; see
`SharedDiff.treeMap`. -/
def treeSet {α : Type} {cmp : α → α → Ordering} (before after : Std.TreeSet α cmp) : Array α × Array α :=
  let (added, removed) := treeMap before.inner after.inner
  (added.map (·.1), removed)

open PersistentHashMap (Node Entry)

private unsafe def nodeBindings {α β : Type} (n : Node α β) (acc : Array (α × β)) : Array (α × β) :=
  match n with
  | .collision ks vs _ => (ks.zip vs).foldl (·.push ·) acc
  | .entries es => es.foldl (init := acc) fun acc e =>
    match e with
    | .entry k v => acc.push (k, v)
    | .ref m => nodeBindings m acc
    | .null => acc

private unsafe def entryBindings {α β : Type} : Entry α β (Node α β) → Array (α × β)
  | .entry k v => #[(k, v)]
  | .ref m => nodeBindings m #[]
  | .null => #[]

/-- Matches two binding lists by key, for slots whose shapes differ. -/
private unsafe def matchBindings {α β : Type} [BEq α] [Hashable α] (as bs : Array (α × β))
    (acc : Array (α × β)) (rem : Array α) : Array (α × β) × Array α :=
  let byKey : Std.HashMap α β := bs.foldl (fun m (k, v) => m.insert k v) {}
  let acc := as.foldl (init := acc) fun acc (k, v) =>
    match byKey[k]? with
    | some v' => if ptrAddrUnsafe v == ptrAddrUnsafe v' then acc else acc.push (k, v)
    | none => acc.push (k, v)
  let inAfter : Std.HashSet α := as.foldl (fun s (k, _) => s.insert k) {}
  (acc, bs.foldl (init := rem) fun rem (k, _) => if inAfter.contains k then rem else rem.push k)

private unsafe def diffNode {α β : Type} [BEq α] [Hashable α] (before after : Node α β)
    (acc : Array (α × β)) (rem : Array α) : Array (α × β) × Array α :=
  if ptrAddrUnsafe after == ptrAddrUnsafe before then (acc, rem) else
  match after, before with
  | .entries ea, .entries eb => Id.run do
    -- both arrays are indexed by the same hash bits
    let mut st := (acc, rem)
    for i in [:max ea.size eb.size] do
      let x := ea[i]?.getD .null
      let y := eb[i]?.getD .null
      if ptrAddrUnsafe x == ptrAddrUnsafe y then continue
      match x, y with
      | .null, .null => pure ()
      | .ref na, .ref nb => st := diffNode nb na st.1 st.2
      | _, _ => st := matchBindings (entryBindings x) (entryBindings y) st.1 st.2
    return st
  | _, _ => matchBindings (nodeBindings after #[]) (nodeBindings before #[]) acc rem

private unsafe def persistentHashMapImpl {α β : Type} [BEq α] [Hashable α]
    (before after : PersistentHashMap α β) : Array (α × β) × Array α :=
  diffNode before.root after.root #[] #[]

/--
The bindings of `after` that are not shared with `before` (keys `before` lacks, and keys whose value is not the
same object as in `before`), and the keys of `before` that `after` lacks, both in trie order. Exact for any two
maps; when `after` was derived from `before` by insertions and erasures, it visits the trie nodes on the paths
to the d changed bindings.
-/
@[implemented_by persistentHashMapImpl]
opaque persistentHashMap {α β : Type} [BEq α] [Hashable α] (before after : PersistentHashMap α β) :
    Array (α × β) × Array α

end SharedDiff

namespace List

private unsafe def newPrefixImpl (after before : List α) : Option (List α) :=
  go after []
where
  go : List α → List α → Option (List α)
    | l, acc =>
      if ptrAddrUnsafe l == ptrAddrUnsafe before then
        some acc.reverse
      else match l with
        | [] => none
        | a :: l => go l (a :: acc)

/-- The cells of `after` in front of the cell `before`, in list order, if `before` is a tail of `after` by cell
identity (`after = p ++ before` with `before` shared); `none` otherwise. Takes time proportional to `p`, or to
`after` when `before` is not one of its tails. -/
@[implemented_by newPrefixImpl]
opaque newPrefix? (after before : List α) : Option (List α)

/-- The cells of `after` in front of `before` (`newPrefix?`), or, when `before` is not one of its tails, the
first `after.length - before.length` cells. -/
def addedSince (after before : List α) : List α :=
  (newPrefix? after before).getD (after.take (after.length - before.length))

end List

/-- `SharedDiff.treeMap` for `NameMap`. -/
def NameMap.sharedDiff {α : Type} (before after : NameMap α) : Array (Name × α) × Array Name :=
  SharedDiff.treeMap (cmp := Name.quickCmp) before after

/-- `SharedDiff.treeSet` for `NameSet`. -/
def NameSet.sharedDiff (before after : NameSet) : Array Name × Array Name :=
  SharedDiff.treeSet (cmp := Name.quickCmp) before after

/-- `SharedDiff.persistentHashMap`. -/
def PersistentHashMap.sharedDiff {α β : Type} [BEq α] [Hashable α] (before after : PersistentHashMap α β) :
    Array (α × β) × Array α :=
  SharedDiff.persistentHashMap before after

/-- `PersistentHashMap.sharedDiff` of the local (stage 2) parts of two maps whose imported (stage 1) parts are
the same object and no longer written; `none` otherwise. -/
def SMap.sharedDiff? {α β : Type} [BEq α] [Hashable α] (before after : SMap α β) :
    Option (Array (α × β) × Array α) :=
  if before.stage₁ || after.stage₁ || !SharedDiff.sameObject before.map₁ after.map₁ then none
  else some (PersistentHashMap.sharedDiff before.map₂ after.map₂)

end Lean
