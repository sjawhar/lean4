module
import all Lean.ConstTrie  -- for the views' lookups and their references `findEntry?` and `modIdxCore`
import Lean

/-!
The cached lookups of an imported view, which walk the view natively on a miss (`findEntryCached?`,
`modIdxCached?`), give what the views' Lean lookups give (`findEntry?`, `modIdxCore`): on lazily merged views, on
views with a cache of their own and without, on fully expanded (merged) views, with single-module subtrees, wide
nodes (whose child index has 32-bit offsets), siblings with equal hashes, names deeper than 16 components, compiled
names that precede or follow a module's kernel constant, hits and misses; and on the environment's own views.
-/

open Lean

/-- A constant whose name tells which module declared which key. -/
def info (key : Name) (mod : Nat) : ConstantInfo :=
  .axiomInfo { name := key.str s!"m{mod}", levelParams := [], type := .sort .zero, isUnsafe := false }

def tree (mod : Nat) (names : Array Name) : Nat × ConstTrie ConstantInfo :=
  (mod, ConstTrie.ofArrays names (names.map (info · mod)))

def deep : Name := (List.range 20).foldl (fun n i => n.str s!"c{i}") `deep

def wide (tag : String) (k : Nat) : Array Name := (Array.range k).map fun i => Name.mkSimple s!"{tag}{i}"

def modules : Array (Nat × ConstTrie ConstantInfo) := #[
  tree 0 (#[`a, `a.b, `a.b.c, .num `p 17, `q, deep, `x.y] ++ wide "w" 70000),
  tree 1 #[`a.b, `a.c, .num `p (2 ^ 64), .num `p 1, `r, deep.str "e", `x.y.z],
  tree 2 (#[`a, `a.b.c, .num `p (2 ^ 64 + 1), `s.t, deep] ++ wide "v" 40000),
  tree 3 (#[`x, `x.y, `s] ++ wide "v" 40000)]

/-- Compiled names: one before a module's kernel constant (`a.c` in 0, declared by 1), one only in a later module
(`a.b.c` in 3), one with no kernel constant (`only.extra`). -/
def extras : ImportedConsts Unit :=
  ImportedConsts.mergeModuleTreesLazy #[(0, ConstTrie.ofNames #[`a.c, `only.extra]), (1, ConstTrie.ofNames #[`x.y]),
    (3, ConstTrie.ofNames #[`a.b.c, `w5, `only.extra.more])]

def queries : Array Name := Id.run do
  let mut qs := #[]
  for (_, t) in modules do
    qs := t.foldlM (m := Id) (init := qs) fun qs n _ => qs.push n |>.push (n.str "_sunfold") |>.push (n.str "casesOn")
  qs := qs ++ #[.anonymous, `missing, `a.missing, .num `p 2, .num `p (2 ^ 64 + 5), deep.str "f", `only.extra,
    `only.extra.more, `only, `w70000, `v39999.z]
  for n in qs do
    qs := qs.push n.getPrefix
  return qs

def view (r : Option (ConstantInfo × Nat)) : Option (Name × Nat) := r.map fun (c, i) => (c.name, i)

/-- Each query's native lookups equal the Lean ones, the second (cached) time too. -/
def agree (t : ImportedConsts ConstantInfo) (extras : ImportedConsts Unit) (qs : Array Name) : Bool :=
  (List.range 2).all fun _ => qs.all fun n =>
    view (t.findEntryCached? n) == view (t.findEntry? n) &&
      ImportedConsts.modIdxCached? t extras n == ImportedConsts.modIdxCore (t.findEntry? n) extras n

#eval show IO Unit from do
  let lazyView := ImportedConsts.mergeModuleTreesLazy modules
  let cached ← (ImportedConsts.mergeModuleTreesLazy modules).withCache
  let expanded := (ImportedConsts.mergeModuleTreesLazy modules).forceExpanded
  let single := ImportedConsts.mergeModuleTreesLazy #[modules[0]!]
  unless agree lazyView extras queries do throw <| .userError "lazy view"
  unless agree cached extras queries do throw <| .userError "view with its own cache"
  unless agree expanded extras queries do throw <| .userError "expanded view"
  unless agree single extras queries do throw <| .userError "single-module view"
  unless agree lazyView ImportedConsts.empty queries do throw <| .userError "no extras"
  -- the cases above are reached
  unless view (lazyView.findEntryCached? `a.b) == some (`a.b.m0, 0) do throw <| .userError "first declarer"
  unless ImportedConsts.modIdxCached? lazyView extras `a.c == some 0 do throw <| .userError "earlier compiled name"
  unless ImportedConsts.modIdxCached? lazyView extras `only.extra == some 0 do throw <| .userError "compiled only"
  unless ImportedConsts.modIdxCached? lazyView extras `a.b.c == some 0 do throw <| .userError "later compiled name"
  unless view (lazyView.findEntryCached? (.num `p (2 ^ 64))) == some ((Name.num `p (2 ^ 64)).str "m1", 1) do
    throw <| .userError "equal-hash sibling"
  unless (view (lazyView.findEntryCached? `v39999)).isSome && (view (lazyView.findEntryCached? deep)).isSome do
    throw <| .userError "wide or deep"

/-! The environment's own views, on every constant, compiled and derived name, most of them looked up here first. -/

#eval show CoreM Unit from do
  let k := (← getEnv).toKernelEnv
  let consts := k.allImportedConsts
  let extras := k.importedExtraConsts
  let names := (← getEnv).constants.map₁.toList.map (·.1)
  let mut n : Nat := 0
  for c in names do
    for q in [c, c.str "_sunfold", c.str "_unsafe_rec", c.str "casesOn", c.getPrefix] do
      n := n + 1
      unless view (consts.findEntryCached? q) == view (consts.findEntry? q) &&
          ImportedConsts.modIdxCached? consts extras q == ImportedConsts.modIdxCore (consts.findEntry? q) extras q do
        throwError "native lookup differs on {q}"
  if n < 100000 then throwError "only {n} lookups"
