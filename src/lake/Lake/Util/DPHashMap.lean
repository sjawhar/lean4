/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Init.Data.Array.Basic
public import Init.Data.UInt.Basic
public import Init.NotationExtra

namespace Lake

/-- A node of a `DPHashMap`. -/
public inductive DPHashMap.Node (κ : Type u) (β : κ → Type v) where
  | empty
  | leaf (hash : UInt64) (key : κ) (val : β key)
  /-- The entries whose keys all have the hash `hash`. -/
  | collision (hash : UInt64) (entries : List ((k : κ) × β k))
  /-- The child at index `i` holds the entries whose hashes have `i` as their next 4 bits. -/
  | branch (children : Array (DPHashMap.Node κ β))

/--
A dependently typed persistent hash map: a trie on the keys' 64-bit hashes.

A map shared between threads is never updated in place, so an insertion copies every branch
on the path to its entry. Branches of 16 children balance that copy against the depth of a lookup.
-/
public structure DPHashMap (κ : Type u) (β : κ → Type v) [BEq κ] [Hashable κ] where
  root : Lake.DPHashMap.Node κ β

namespace DPHashMap.Node
variable {β : κ → Type v}

public instance : Inhabited (Node κ β) := ⟨.empty⟩

/-- The index of the child of a branch at `shift` that holds the hash `h`. -/
@[inline] public def childIdx (h shift : UInt64) : Nat :=
  ((h >>> shift) &&& 15).toNat

@[specialize] public def findCollision? [BEq κ] [LawfulBEq κ] (k : κ) : List ((k : κ) × β k) → Option (β k)
  | [] => none
  | ⟨k', v⟩ :: es => if h : k' == k then some (cast (congrArg β (eq_of_beq h)) v) else findCollision? k es

@[specialize] public partial def get? [BEq κ] [LawfulBEq κ]
    (h : UInt64) (k : κ) (shift : UInt64) : Node κ β → Option (β k)
  | .empty => none
  | .leaf h' k' v =>
    if h' == h then
      if eq : k' == k then some (cast (congrArg β (eq_of_beq eq)) v) else none
    else none
  | .collision h' es => if h' == h then findCollision? k es else none
  | .branch cs => get? h k (shift + 4) cs[childIdx h shift]!

/-- A branch at `shift` whose only child is `n`, whose entries have the hash `h`. -/
@[inline] public def split (h shift : UInt64) (n : Node κ β) : Node κ β :=
  .branch ((Array.replicate 16 .empty).set! (childIdx h shift) n)

@[specialize] public partial def insert [BEq κ]
    (h : UInt64) (k : κ) (v : β k) (shift : UInt64) : Node κ β → Node κ β
  | .empty => .leaf h k v
  | n@(.leaf h' k' v') =>
    if h' == h then
      if k' == k then .leaf h k v else .collision h [⟨k, v⟩, ⟨k', v'⟩]
    else insert h k v shift (split h' shift n)
  | n@(.collision h' es) =>
    if h' == h then .collision h (⟨k, v⟩ :: es.filter fun e => !(e.1 == k))
    else insert h k v shift (split h' shift n)
  | .branch cs => .branch (cs.modify (childIdx h shift) (insert h k v (shift + 4)))

@[specialize] public partial def foldl (f : σ → (k : κ) → β k → σ) (s : σ) : Node κ β → σ
  | .empty => s
  | .leaf _ k v => f s k v
  | .collision _ es => es.foldl (fun s e => f s e.1 e.2) s
  | .branch cs => cs.foldl (foldl f) s

end Node

variable {β : κ → Type v} [BEq κ] [Hashable κ]

@[inline] public def empty : DPHashMap κ β := ⟨.empty⟩

public instance : EmptyCollection (DPHashMap κ β) := ⟨empty⟩

public instance : Inhabited (DPHashMap κ β) := ⟨empty⟩

@[inline] public def get? [LawfulBEq κ] (self : DPHashMap κ β) (k : κ) : Option (β k) :=
  self.root.get? (hash k) k 0

@[inline] public def insert (self : DPHashMap κ β) (k : κ) (v : β k) : DPHashMap κ β :=
  ⟨self.root.insert (hash k) k v 0⟩

/-- Folds `f` over the entries of the map, in an unspecified order. -/
@[inline] public def foldl (f : σ → (k : κ) → β k → σ) (init : σ) (self : DPHashMap κ β) : σ :=
  self.root.foldl f init
