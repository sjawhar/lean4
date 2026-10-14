import Lean

/-!
Constant prefix trees (#14362) whose nodes have 65,535 or more children, both in a single module's
`ConstTrie` (built when the module is written) and in the `ImportedConsts` views merged from several
modules at import time, where each module stays below that width but their union does not. Such
nodes need u32 offsets in their child index; every child must stay reachable and no absent name may
be found.
-/

open Lean

/-- `x.wide.c<lo>`, ..., `x.wide.c<hi - 1>`, all children of the single node `x.wide`. -/
def wideNames (lo hi : Nat) : Array Name := Id.run do
  let mut ns := #[]
  for i in [lo:hi] do
    ns := ns.push (.str `x.wide s!"c{i}")
  return ns

def wideTrie (lo hi : Nat) : ConstTrie Nat :=
  ConstTrie.ofArrays (wideNames lo hi) ((List.range' lo (hi - lo)).toArray)

/-- The number of `x.wide.c<i>`, `i < n`, for which `find i` is not `some (expected i)`. -/
def countMisses (n : Nat) (find : Name → Option Nat) (expected : Nat → Nat := id) : Nat := Id.run do
  let mut misses := 0
  for i in [0:n] do
    unless find (.str `x.wide s!"c{i}") == some (expected i) do
      misses := misses + 1
  return misses

def absent : List Name := [`x.wide.c70000, `x.wide.d0, `x.wide, `x.wide.c0.c0, `y.wide.c0]

/-! A single module's trie, around the widths where the offsets stop fitting 16 bits. -/

/-- info: [(65535, 0, true), (65536, 0, true), (70000, 0, true)] -/
#guard_msgs in
#eval [65535, 65536, 70000].map fun n =>
  let t := wideTrie 0 n
  (n, countMisses n t.find?, absent.all (t.find? · |>.isNone))

/-!
Two modules of 40,000 names each under `x.wide`, overlapping in 10,000 names, merged into a node
with 70,000 children. The first declaring module wins, as `mergeModuleTreesLazy` resolves by
default.
-/

def trees : Array (Nat × ConstTrie Nat) := #[(0, wideTrie 0 40000), (1, wideTrie 30000 70000)]

def firstModIdx (i : Nat) : Nat := if i < 40000 then 0 else 1

/-- info: (0, 0, true) -/
#guard_msgs in
#eval
  let t := ImportedConsts.mergeModuleTreesLazy trees
  (countMisses 70000 t.find?, countMisses 70000 t.findModIdx? firstModIdx,
    absent.all (t.find? · |>.isNone))

/-- info: (0, 0, 10000, true) -/
#guard_msgs in
#eval
  let (t, dups) := ImportedConsts.mergeModuleTrees trees
  (countMisses 70000 t.find?, countMisses 70000 t.findModIdx? firstModIdx, dups.size,
    absent.all (t.find? · |>.isNone))
