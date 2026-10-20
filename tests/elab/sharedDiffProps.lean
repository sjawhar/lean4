import Lean
/-! Property test of the structure-sharing diffs in `Lean.Data.SharedDiff` against a naive specification, on
random maps derived from a random base by random edit sequences (insert a new key, overwrite with a new object,
overwrite with the same object, erase a present key, erase an absent key, insert then erase) and on maps rebuilt
without sharing. Spec for `sharedDiff before after`: first, the bindings `(k, v)` of `after` such that `k` is absent
from `before` or `before[k]` is not the same object as `v`; second, the keys of `before` absent from `after`. The
hash-map case uses a key type whose hash has 4 values, so most bindings live in collision nodes. Also
`List.newPrefix?` against `after = p ++ before`, and `List.addedSince` when `before` is not a tail. -/
open Lean

structure K where
  n : Nat
  deriving BEq, Repr, Inhabited

/-- even keys collide into two hash values (collision nodes), odd keys spread over the trie -/
instance : Hashable K := ⟨fun k => if k.n % 2 == 0 then (k.n % 4).toUInt64 else mixHash 7 k.n.toUInt64⟩

def lcg (s : Nat) : Nat := (s * 6364136223846793005 + 1442695040888963407) % 18446744073709551616

/-- A fresh `String` object per call (its address identifies the binding's value). -/
def val (s : Nat) : String := String.mk ['v'] ++ toString s

inductive Op | insNew | overwrite | overwriteSame | erasePresent | eraseAbsent | insErase
  deriving Repr

def opOf (s : Nat) : Op :=
  match (s / 7) % 6 with
  | 0 => .insNew | 1 => .overwrite | 2 => .overwriteSame | 3 => .erasePresent | 4 => .eraseAbsent | _ => .insErase

unsafe def sameObj (a b : α) : Bool := ptrAddrUnsafe a == ptrAddrUnsafe b

/-- naive spec: `beforeFind`/`afterHas` are the maps' own lookups; lists are the maps' bindings -/
unsafe def spec (lt : κ → κ → Bool) (beforeFind : κ → Option String) (afterHas : κ → Bool)
    (before after : List (κ × String)) : List (κ × String) × List κ :=
  let changed := after.filter fun (k, v) => match beforeFind k with
    | some v' => !sameObj v v'
    | none => true
  let removed := before.filter (fun (k, _) => !afterHas k) |>.map (·.1)
  (changed.toArray.qsort (fun a b => lt a.1 b.1) |>.toList, removed.toArray.qsort lt |>.toList)

unsafe def sameResult [BEq κ] (lt : κ → κ → Bool) (got : Array (κ × String) × Array κ)
    (want : List (κ × String) × List κ) : Bool :=
  let g1 := got.1.qsort (fun a b => lt a.1 b.1)
  let g2 := got.2.qsort lt
  g1.size == want.1.length && (g1.toList.zip want.1).all (fun ((k, v), (k', v')) => k == k' && sameObj v v') &&
    g2.toList == want.2

/-- Random edits of `m`; returns the edited map. `keys` are the keys of `m`. -/
def editTree (m : NameMap String) (keys : Array Name) (seed : Nat) (steps : Nat) : NameMap String × Nat := Id.run do
  let mut m := m
  let mut s := seed
  for _ in [:steps] do
    s := lcg s
    let pick := if keys.isEmpty then `none else keys[s % keys.size]!
    let fresh := Name.mkSimple s!"n{s % 100000}x"
    match opOf s with
    | .insNew => m := m.insert fresh (val s)
    | .overwrite => if keys.size > 0 then m := m.insert pick (val s)
    | .overwriteSame => if let some v := m.find? pick then m := m.insert pick v
    | .erasePresent => m := m.erase pick
    | .eraseAbsent => m := m.erase fresh
    | .insErase => m := (m.insert fresh (val s)).erase fresh
  return (m, s)

def editHash (m : PersistentHashMap K String) (keys : Array K) (seed : Nat) (steps : Nat) :
    PersistentHashMap K String × Nat := Id.run do
  let mut m := m
  let mut s := seed
  for _ in [:steps] do
    s := lcg s
    let pick := if keys.isEmpty then ⟨0⟩ else keys[s % keys.size]!
    let fresh : K := ⟨1000000 + s % 100000⟩
    match opOf s with
    | .insNew => m := m.insert fresh (val s)
    | .overwrite => if keys.size > 0 then m := m.insert pick (val s)
    | .overwriteSame => if let some v := m.find? pick then m := m.insert pick v
    | .erasePresent => m := m.erase pick
    | .eraseAbsent => m := m.erase fresh
    | .insErase => m := (m.insert fresh (val s)).erase fresh
  return (m, s)

unsafe def main : IO Unit := do
  let mut seed := 42
  let mut treeCases := 0
  let mut treeFail := 0
  let mut setFail := 0
  let mut hashCases := 0
  let mut hashFail := 0
  let mut listFail := 0
  let mut firstFail : Option String := none
  for round in [:300] do
    seed := lcg seed
    let size := [0, 1, 2, 5, 31, 200, 2000][round % 7]!
    let steps := [0, 1, 3, 10, 100][(seed / 13) % 5]!
    -- tree map
    let mut t : NameMap String := {}
    let mut s := seed
    for i in [:size] do
      s := lcg s
      t := t.insert (Name.mkSimple s!"k{i}" |>.num (s % 3)) (val s)
    let keys := t.toList.toArray.map (·.1)
    let (t', s') := editTree t keys s steps
    s := s'
    let pairs := [(t, t'), (t, t'.toList.foldl (fun m (k, v) => m.insert k v) {}), (t', t)]
    for (b, a) in pairs do
      treeCases := treeCases + 1
      let want := spec Name.quickLt b.find? a.contains b.toList a.toList
      unless sameResult Name.quickLt (NameMap.sharedDiff b a) want do
        treeFail := treeFail + 1
        if firstFail.isNone then firstFail := some s!"tree round {round} size {size} steps {steps}"
      -- the set view of the same keys
      let bs : NameSet := b.toList.foldl (fun s (k, _) => s.insert k) {}
      let as : NameSet := a.toList.foldl (fun s (k, _) => s.insert k) {}
      let (added, removed) := NameSet.sharedDiff bs as
      let wantAdded := (as.toList.filter (!bs.contains ·)).toArray.qsort Name.quickLt
      let wantRemoved := (bs.toList.filter (!as.contains ·)).toArray.qsort Name.quickLt
      unless added.qsort Name.quickLt == wantAdded && removed.qsort Name.quickLt == wantRemoved do
        setFail := setFail + 1
    -- hash map with colliding hashes
    let mut h : PersistentHashMap K String := {}
    for i in [:size] do
      s := lcg s
      h := h.insert ⟨i * 3 + s % 3⟩ (val s)
    let hkeys := h.toList.toArray.map (·.1)
    let (h', _) := editHash h hkeys s steps
    let hpairs := [(h, h'), (h, h'.toList.foldl (fun m (k, v) => m.insert k v) {}), (h', h)]
    for (b, a) in hpairs do
      hashCases := hashCases + 1
      let want := spec (fun x y => x.n < y.n) b.find? a.contains b.toList a.toList
      unless sameResult (fun x y => x.n < y.n) (PersistentHashMap.sharedDiff b a) want do
        hashFail := hashFail + 1
        if firstFail.isNone then firstFail := some s!"hash round {round} size {size} steps {steps}"
    -- list prefix
    let base := (List.range (size % 50)).map (val ·)
    let p := (List.range (steps % 7)).map (val ·)
    let after := p ++ base
    match List.newPrefix? after base with
    | some q => unless q.length == p.length && (q.zip p).all (fun (x, y) => sameObj x y) do listFail := listFail + 1
    | none => listFail := listFail + 1
    if size % 50 > 0 then
      -- a structurally equal but unshared `before` is not a tail
      let rebuilt := base.reverse.reverse
      if (List.newPrefix? after rebuilt).isSome then listFail := listFail + 1
      unless (List.addedSince after rebuilt).length == p.length do listFail := listFail + 1
  IO.println s!"tree: {treeCases} cases, {treeFail} failures; set: {setFail} failures; \
    hash: {hashCases} cases, {hashFail} failures; list: {listFail} failures; first failure: {firstFail}"

#eval main
