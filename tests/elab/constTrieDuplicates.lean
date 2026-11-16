module
import all Lean.ConstTrie  -- for `ImportedConsts.collectDuplicates` and its reference walk `collectDupsAux`

/-!
`ImportedConsts.collectDuplicates`, implemented natively, returns the duplicates of its reference walk
`collectDupsAux` in the same order, each with its declarations in module order, with and without a mask of
covering imports: on names without equal-hash siblings, exactly; on names with equal-hash siblings (`Name.num`
hashes every numeral of at least `2^64` as it hashes 17), up to the order of the duplicates, which neither walk's
sort fixes among one module's equal-hash siblings. Also checks that both of its arguments stay borrowed.
-/

open Lean

def ref (trees : Array (Nat × ConstTrie α)) (covered : Array UInt64) : Array (ImportedConsts.Duplicate α) :=
  if trees.size < 2 then #[] else ImportedConsts.collectDupsAux covered .anonymous trees #[]

def view (ds : Array (ImportedConsts.Duplicate α)) : Array (Name × Array (α × Nat)) :=
  ds.map fun d => (d.name, d.entries)

/-- The same elements, each as often. -/
def sameElems [BEq β] (a b : Array β) : Bool :=
  a.size == b.size && a.all fun x => a.countP (· == x) == b.countP (· == x)

/-- The native walk and the reference agree exactly. -/
def same [BEq α] (trees : Array (Nat × ConstTrie α)) (covered : Array UInt64) : Bool :=
  view (ImportedConsts.collectDuplicates trees covered) == view (ref trees covered)

/-- The native walk and the reference agree up to the order of the duplicates. -/
def sameUpToOrder [BEq α] (trees : Array (Nat × ConstTrie α)) (covered : Array UInt64) : Bool :=
  sameElems (view (ImportedConsts.collectDuplicates trees covered)) (view (ref trees covered))

/-- Module `i`'s trie of `names`, each name's value `1000 * i` plus its position. -/
def tree (i : Nat) (names : Array Name) : Nat × ConstTrie Nat :=
  (i, ConstTrie.ofArrays names (Array.range names.size |>.map (1000 * i + ·)))

def fixed : Array (Nat × ConstTrie Nat) := #[
  tree 0 #[`a, `a.b, `x.y.z, .num `p 1, `q],
  tree 1 #[`a.b, `a.c, `x.y.z, .num `p 1, `r],
  tree 2 #[`a, `x.y, `x.y.z.w, .num `p 1],
  tree 3 #[`s.t, `x.y.z]]

#guard same fixed #[]
#guard sameElems (view (ImportedConsts.collectDuplicates fixed #[]))
  #[(`a, #[(0, 0), (2000, 2)]), (`a.b, #[(1, 0), (1000, 1)]), (`x.y.z, #[(2, 0), (1002, 1), (3001, 3)]),
    (.num `p 1, #[(3, 0), (1003, 1), (2003, 2)])]

-- modules 0 and 1 share a covering import: the prefixes only they have are skipped
#guard same fixed #[1, 1, 0, 0]
#guard (view (ImportedConsts.collectDuplicates fixed #[1, 1, 0, 0])).all (·.1 != `a.b)
#guard same fixed #[1, 1, 1, 1]
#guard (ImportedConsts.collectDuplicates fixed #[1, 1, 1, 1]).isEmpty
#guard same fixed #[3, 1, 2, 4]
-- the top mask bit counts like any other
def topBit : Array UInt64 := #[(1 : UInt64) <<< 63, (1 : UInt64) <<< 63, 0, 0]
#guard same fixed topBit
#guard (view (ImportedConsts.collectDuplicates fixed topBit)).all (·.1 != `a.b)

#guard (ImportedConsts.collectDuplicates (#[] : Array (Nat × ConstTrie Nat)) #[]).isEmpty
#guard (ImportedConsts.collectDuplicates #[tree 0 #[`a, `a.b]] #[]).isEmpty

/-- Module indices that are not positions, out of order: entries are in module order all the same. -/
def unordered : Array (Nat × ConstTrie Nat) := #[tree 7 #[`a, `b.c], tree 3 #[`a, `b.c, `d], tree 70 #[`a, `d]]

#guard same unordered #[]
#guard sameElems (view (ImportedConsts.collectDuplicates unordered #[]))
  #[(`a, #[(3000, 3), (7000, 7), (70000, 70)]), (`b.c, #[(3001, 3), (7001, 7)]), (`d, #[(3002, 3), (70001, 70)])]
-- modules 7 and 3 share a covering import: `b`, which only they have, is skipped
def unorderedMask : Array UInt64 := (Array.replicate 71 0).set! 3 1 |>.set! 7 1
#guard same unordered unorderedMask
#guard sameElems (view (ImportedConsts.collectDuplicates unordered unorderedMask))
  #[(`a, #[(3000, 3), (7000, 7), (70000, 70)]), (`d, #[(3002, 3), (70001, 70)])]

/-- A pseudo-random generator step. -/
def next (s : Nat) : Nat := (s * 6364136223846793005 + 1442695040888963407) % 2 ^ 64

/-- The names of up to `depth` components from `comps`, each component applied to the prefix. -/
def pool (comps : List (Name → Name)) (depth : Nat) : Array Name := Id.run do
  let mut out := #[]
  let mut level := #[Name.anonymous]
  for _ in [0:depth] do
    level := level.flatMap fun p => comps.toArray.map (· p)
    out := out ++ level
  return out

/-- Siblings with distinct hashes. -/
def plainPool : Array Name := pool [(·.str "a"), (·.str "b"), (·.str "_c"), (.num · 0), (.num · 7)] 4

/-- With three siblings of equal hash at every level. -/
def collidingPool : Array Name :=
  pool [(·.str "a"), (·.str "b"), (.num · 0), (.num · 17), (.num · (2 ^ 64)), (.num · (2 ^ 64 + 1))] 3

#guard (Name.num `p 17).hash == (Name.num `p (2 ^ 64)).hash && (Name.num `p 17).hash == (Name.num `p (2 ^ 64 + 1)).hash

/-- `n` modules, each declaring a pseudo-random subset of `names`, with two pseudo-random masks: one bit of 64 per
module, and the top three bits (often shared). -/
def random (names : Array Name) (seed n : Nat) : Array (Nat × ConstTrie Nat) × Array UInt64 × Array UInt64 := Id.run do
  let mut s := seed
  let mut trees := #[]
  let mut wide := #[]
  let mut high := #[]
  for i in [0:n] do
    let mut ns := #[]
    for x in names do
      s := next s
      if s % 5 == 0 then ns := ns.push x
    trees := trees.push (tree i ns)
    s := next s
    wide := wide.push ((1 : UInt64) <<< (s >>> 58).toUInt64)
    high := high.push ((s >>> 61) <<< 61).toUInt64
  return (trees, wide, high)

#guard (List.range 12).all fun seed =>
  let (trees, wide, high) := random plainPool (seed + 1) (2 + seed % 7)
  same trees #[] && same trees wide && same trees high && !(ImportedConsts.collectDuplicates trees #[]).isEmpty

#guard (List.range 24).all fun seed =>
  let (trees, wide, high) := random collidingPool (seed + 1) (2 + seed % 11)
  sameUpToOrder trees #[] && sameUpToOrder trees wide && sameUpToOrder trees high

-- the colliding cases do reach duplicates among equal-hash siblings
#guard (List.range 24).any fun seed =>
  let (trees, _, _) := random collidingPool (seed + 1) (2 + seed % 11)
  (ImportedConsts.collectDuplicates trees #[]).any fun d => match d.name with
    | .num _ k => k ≥ 2 ^ 64
    | _ => false

-- `Unit` values, as in the extra-constants view
#guard same #[(0, ConstTrie.ofNames #[`a, `a.b]), (1, ConstTrie.ofNames #[`a.b, `c]), (2, ConstTrie.ofNames #[`a])] #[]

/-! Both arguments are borrowed: a caller that uses the mask afterwards does not take a reference for the call (the
native side never releases it). -/

/--
trace: [Compiler.IR] [result]
    def _private.elab.constTrieDuplicates.0.probe (x_1 : @& obj) (x_2 : @& obj) : tobj :=
      let x_3 : obj := _private.Lean.ConstTrie.0.Lean.ImportedConsts.collectDuplicates ◾ x_1 x_2;
      let x_4 : tagged := Array.size ◾ x_3;
      dec x_3;
      let x_5 : tagged := Array.size ◾ x_2;
      let x_6 : tobj := Nat.add x_4 x_5;
      ret x_6
    def _private.elab.constTrieDuplicates.0.probe._boxed (x_1 : obj) (x_2 : obj) : tobj :=
      let x_3 : tobj := _private.elab.constTrieDuplicates.0.probe x_1 x_2;
      dec x_2;
      dec x_1;
      ret x_3
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def probe (t : Array (Nat × ConstTrie Nat)) (c : Array UInt64) : Nat :=
  (ImportedConsts.collectDuplicates t c).size + c.size
