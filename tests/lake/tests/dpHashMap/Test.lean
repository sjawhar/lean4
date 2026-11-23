import Lake.Util.DPHashMap
import Lake.Build.Key
import Std.Data.DTreeMap

/-!
Tests `Lake.DPHashMap`, the map of Lake's build store, against `Std.DTreeMap`, the map it replaced.

For each family of keys, random insertions (of new and of present keys) and lookups (of present and
of absent keys), drawn from a fixed seed, must give the same results on both maps, and the maps must
hold the same entries throughout. The `Few` and `High` keys force hash collisions: `Few` has four
hashes, which differ in their lowest bits, so its keys share collision lists below the root; `High`
has sixteen hashes, which differ only in their top four bits, so its keys pass fifteen branches with
one child each before they reach a collision list. Then a task on another thread reads a map while
the main thread keeps inserting into the original, as Lake's build threads read a snapshot of the
store: the task, and the main thread afterwards, must find exactly the snapshot's old entries.
-/

open Lake Lean

/-- Keys with four hashes, which differ in their lowest bits. -/
structure Few where
  n : Nat
deriving DecidableEq, Repr

instance : Hashable Few := ⟨fun k => (k.n % 4).toUInt64⟩

/-- Keys with sixteen hashes, which differ only in their top four bits. -/
structure High where
  n : Nat
deriving DecidableEq, Repr

instance : Hashable High := ⟨fun k => (k.n % 16).toUInt64 <<< 60⟩

/-- The `i`-th build key, of one of four shapes; distinct `i` give distinct keys. -/
def buildKey (i : Nat) : BuildKey :=
  let pkg := Name.mkSimple s!"pkg{i % 13}"
  let mod := `Mathlib.Data |>.str s!"M{i / 4}"
  match i % 4 with
  | 0 => .module mod
  | 1 => .facet (.packageModule pkg mod) `lean.olean
  | 2 => .facet (.packageTarget pkg (.mkSimple s!"t{i / 4}")) `leanLib.static
  | _ => .facet (.package pkg) (.mkSimple s!"f{i / 4}")

abbrev Map (κ : Type) [BEq κ] [Hashable κ] := DPHashMap κ fun _ => Nat

abbrev Tree (κ : Type) (cmp : κ → κ → Ordering) := Std.DTreeMap κ (fun _ => Nat) cmp

def fail (msg : String) : IO α :=
  throw <| IO.userError s!"FAILURE: {msg}"

variable {κ : Type} [BEq κ] [LawfulBEq κ] [Hashable κ] [Repr κ] {cmp : κ → κ → Ordering}

/--
Checks that `m` holds exactly the entries of `t`: a fold over `m` visits them as a set, `get?` finds
each of them, and `get?` finds none of the keys in `absent`.
-/
def checkSame (what : String) (m : Map κ) (t : Tree κ cmp) (absent : Array κ := #[]) : IO Unit := do
  let es := m.foldl (fun es k v => es.push (k, v)) #[] |>.qsort fun a b => cmp a.1 b.1 == .lt
  let ts := Std.DTreeMap.Const.toArray t
  unless es.size == ts.size do
    fail s!"{what}: a fold over the map visits {es.size} entries, the tree holds {ts.size}"
  for ((k, v), (k', v')) in es.zip ts do
    unless k == k' && v == v' do
      fail s!"{what}: in key order, the map's fold visits {reprStr k} ↦ {v} where the tree has \
        {reprStr k'} ↦ {v'}"
  for (k, v) in ts do
    let got : Option Nat := m.get? k
    unless got == some v do
      fail s!"{what}: get? {reprStr k} is {got} in the map, {some v} in the tree"
  for k in absent do
    let got : Option Nat := m.get? k
    if got.isSome then
      fail s!"{what}: get? {reprStr k} is {got} in the map, none in the tree"

/--
Runs `ops` random operations, drawn from `seed`, on a `DPHashMap` and a `DTreeMap` of the keys
`mk i` for `i < numKeys`, and returns both maps. A third of the operations insert a key, new or
present, with the operation's index as its value; the others look up a key `mk i` for
`i < 2 * numKeys`, so that at least half of the lookups miss.
-/
def runOps (family : String) (mk : Nat → κ) (cmp : κ → κ → Ordering) (numKeys ops seed : Nat) :
    IO (Map κ × Tree κ cmp) := do
  let mut gen := mkStdGen seed
  let mut m : Map κ := {}
  let mut t : Tree κ cmp := {}
  let mut inserted := 0
  let mut overwritten := 0
  let mut found := 0
  let mut missed := 0
  for op in [0:ops] do
    let (r, g) := randNat gen 0 (3 * numKeys - 1)
    gen := g
    if r < numKeys then
      let k := mk r
      if t.contains k then overwritten := overwritten + 1 else inserted := inserted + 1
      m := m.insert k op
      t := t.insert k op
    else
      let k := mk (r - numKeys)
      let want := Std.DTreeMap.Const.get? t k
      let got : Option Nat := m.get? k
      unless got == want do
        fail s!"{family}, operation {op}: get? {reprStr k} is {got} in the map, {want} in the tree"
      if want.isSome then found := found + 1 else missed := missed + 1
    if (op + 1) % numKeys == 0 then
      checkSame s!"{family}, after operation {op}" m t
  checkSame s!"{family}, after all operations" m t <| (Array.range numKeys).map (mk <| numKeys + ·)
  for (n, what) in [(inserted, "insertion of a new key"), (overwritten, "insertion of a present key"),
      (found, "lookup of a present key"), (missed, "lookup of an absent key")] do
    if n == 0 then
      fail s!"{family}: the operations include no {what}"
  IO.println s!"{family}: {ops} operations on {numKeys} keys: {inserted} insertions of new keys, \
    {overwritten} of present keys, {found} lookups of present keys, {missed} of absent keys"
  return (m, t)

/--
Shares `m`, which holds the entries of `t`, with a task on another thread, and meanwhile inserts
into the original through an `IO.Ref`, as Lake updates its build store: a new value for every key
of `t`, then the new keys `mk i` for `numKeys ≤ i < 2 * numKeys`. The task reads the shared map
while the main thread inserts, and the main thread reads it again afterwards; both must find
exactly the entries of `t`.
-/
def checkSnapshot (family : String) (mk : Nat → κ) (numKeys : Nat) (m : Map κ) (t : Tree κ cmp) :
    IO Unit := do
  let fresh := (Array.range numKeys).map (mk <| numKeys + ·)
  let store ← IO.mkRef m
  let snap ← store.get
  let started ← IO.Promise.new
  let reader ← IO.asTask (prio := .dedicated) do
    started.resolve ()
    for _ in [0:4] do
      checkSame s!"{family}, the snapshot read on another thread" snap t fresh
  let _ ← IO.wait started.result?
  let mut grown := t
  for (k, v) in Std.DTreeMap.Const.toArray t do
    store.modify (·.insert k (v + 1))
    grown := grown.insert k (v + 1)
  for k in fresh do
    store.modify (·.insert k 0)
    grown := grown.insert k 0
  IO.ofExcept (← IO.wait reader)
  checkSame s!"{family}, the snapshot after the task" snap t fresh
  checkSame s!"{family}, the original map" (← store.get) grown
  IO.println s!"{family}: a snapshot of {t.size} entries kept them while its original grew to \
    {grown.size}"

def main : IO Unit := do
  let (m, t) ← runOps "BuildKey" buildKey BuildKey.quickCmp 2000 20000 1
  checkSnapshot "BuildKey" buildKey 2000 m t
  let few (a b : Few) := compare a.n b.n
  let (m, t) ← runOps "Few" Few.mk few 400 4000 2
  checkSnapshot "Few" Few.mk 400 m t
  let high (a b : High) := compare a.n b.n
  let (m, t) ← runOps "High" High.mk high 800 8000 3
  checkSnapshot "High" High.mk 800 m t
