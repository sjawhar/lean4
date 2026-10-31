module
import all Lake.Build.UsageCutoff
import Lean.Util.ModuleUsage.Basic
/-!
`FromJson UsageImport`, which keeps each distinct name and prefix of a parse once (`Lake.intern`), gives what a decoder
that does not share names gives (`refImport`): on the `importer` of every `.usekey` named on the command line, and on
generated importers whose names share prefixes and have number components; and on each of those with one field or two
fields removed, the same error. In what it gives, equal names, and equal prefixes of names, are one object.
-/
open Lean Lake ModuleUsage

/-- The fields of `FromJson UsageImport`, read in its order, with a name object per component of each name. -/
def refImport (j : Json) : Except String UsageImport := do
  let own ← j.getObjValAs? (Array (SidecarName × Digest)) "own"
  let specKeys ← j.getObjValAs? (Array (Digest × SidecarName)) "specKeys"
  let provides ← providesOfJson (← j.getObjVal? "provides")
  let indirect ← namesOfJson (← j.getObjVal? "indirect")
  return {
    moduleDigest := ← j.getObjValAs? Digest "moduleDigest"
    closure := ← j.getObjValAs? Digest "closure"
    importedClosures := (← j.getObjValAs? (Array (SidecarName × Digest)) "importedClosures").map
      fun (n, d) => (n.name, d)
    own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
    providesDigest := ← j.getObjValAs? Digest "providesDigest"
    provides
    indirect
    providedIds := .mk fun _ => providedIds provides
    indirectIds := .mk fun _ => indirect.map resolvedId
    kernelLows := .mk fun _ => provides.1.map (·.hash.toUInt32)
    specKeys := specKeys.map fun (d, n) => (d, n.name)
  }

def sameImport (a b : UsageImport) : Bool :=
  a.moduleDigest == b.moduleDigest && a.closure == b.closure && a.importedClosures == b.importedClosures &&
    a.own.toList == b.own.toList && a.providesDigest == b.providesDigest && a.provides == b.provides &&
    a.indirect == b.indirect && a.specKeys == b.specKeys

def sameResult : Except String UsageImport → Except String UsageImport → Bool
  | .ok a, .ok b => sameImport a b
  | .error e, .error f => e == f
  | _, _ => false

/-- Every name of `u`, and each of its prefixes. -/
def allNames (u : UsageImport) : Array Name := Id.run do
  let top := u.provides.1 ++ u.provides.2 ++ (u.own.toList.map (·.1)).toArray ++ u.indirect ++
    u.specKeys.map (·.2) ++ u.importedClosures.map (·.1)
  let mut out := #[]
  for n in top do
    let mut m := n
    while !m.isAnonymous do
      out := out.push m
      m := m.getPrefix
  return out

unsafe def sharedUnsafe (ns : Array Name) : Bool := Id.run do
  let mut seen : Std.HashMap Name USize := {}
  for n in ns do
    match seen[n]? with
    | some a => if a != ptrAddrUnsafe n then return false
    | none => seen := seen.insert n (ptrAddrUnsafe n)
  return true

/-- Whether every two equal names of `ns` are one object. -/
@[implemented_by sharedUnsafe] opaque shared (ns : Array Name) : Bool

/-- A linear congruential generator, so that the cases are the same on every run. -/
def next (s : UInt64) : UInt64 := s * 6364136223846793005 + 1442695040888963407

structure Gen where
  s : UInt64

def Gen.nat (g : Gen) (n : Nat) : Nat × Gen :=
  let s := next g.s
  ((s >>> 33).toNat % n, ⟨s⟩)

def Gen.digest (g : Gen) : Digest × Gen :=
  let a := next g.s
  let b := next a
  (⟨a, b⟩, ⟨b⟩)

/-- A name of two to six components from a few prefixes, so that names share prefixes: strings with ASCII, non-ASCII
and `«»`, and numbers. -/
def Gen.name (g : Gen) : Name × Gen := Id.run do
  let (k, g) := g.nat 5
  let mut g := g
  let mut n := Name.anonymous
  for i in [0:k + 2] do
    let (c, g') := g.nat 7
    g := g'
    n := match c with
      | 0 => .mkNum n (i * 10)
      | 1 => .mkStr n s!"«a{i}»"
      | 2 => .mkStr n s!"Lin_{i % 2}ü"
      | 3 => .mkStr n "_private"
      | 4 => .mkStr n s!"mm{i}"
      | _ => .mkStr n s!"M{c}"
  return (n, g)

def Gen.names (g : Gen) (k : Nat) : Array Name × Gen := Id.run do
  let mut g := g
  let mut ns := #[]
  for _ in [0:k] do
    let (n, g') := g.name
    ns := ns.push n
    g := g'
  return (ns, g)

def names (ns : Array Name) : Json := .arr (ns.map nameToJson)

/-- The fields of an importer (`UsageSidecar.importerJson`'s layout) with every list filled. -/
def genFields (seed : Nat) : List (String × Json) := Id.run do
  let g : Gen := ⟨seed.toUInt64 + 1⟩
  let (own, g) := g.names 40
  let (other, g) := g.names 20
  let (mods, g) := g.names 6
  let mut g := g
  let mut ownJ := #[]
  for n in own do
    let (d, g') := g.digest
    g := g'
    ownJ := ownJ.push (Json.arr #[nameToJson n, toJson d])
  let (d1, g1) := g.digest
  let (d2, g2) := g1.digest
  let (d3, g3) := g2.digest
  let (d4, _) := g3.digest
  return [
    ("closure", toJson d1),
    ("importedClosures", .arr (mods.map fun m => .arr #[nameToJson m, toJson d2])),
    ("indirect", names (other.extract 0 10)),
    ("moduleDigest", toJson d3),
    ("own", .arr ownJ),
    ("provides", .arr #[names (own.extract 0 30 ++ other.extract 10 12), names (own.extract 30 40)]),
    ("providesDigest", toJson d4),
    ("specKeys", .arr ((other.extract 12 20).map fun n => .arr #[toJson d1, nameToJson n]))]

/-- `fields` as an object, and as objects that each lack one or two of them. -/
def withEachRemoved (fields : List (String × Json)) : Array Json := Id.run do
  let mut out := #[Json.mkObj fields]
  for (k, _) in fields do
    out := out.push (Json.mkObj (fields.filter (·.1 != k)))
    for (k', _) in fields do
      if k < k' then
        out := out.push (Json.mkObj (fields.filter fun (f, _) => f != k && f != k'))
  return out

def fieldsOf (j : Json) : List (String × Json) :=
  match j with
  | .obj kvs => kvs.toList
  | _ => []

public def main (args : List String) : IO UInt32 := do
  let mut objects : Array (String × List (String × Json)) := #[]
  for f in args do
    let .ok j := Json.parse (← IO.FS.readFile f) | IO.eprintln s!"failed: {f} is not JSON"; return 1
    let .ok imp := j.getObjVal? "importer" | IO.eprintln s!"failed: {f} has no importer"; return 1
    objects := objects.push (f, fieldsOf imp)
  if objects.isEmpty then
    IO.eprintln "failed: no .usekey given"
    return 1
  for seed in [0:40] do
    objects := objects.push (s!"generated {seed}", genFields seed)
  let mut cases := 0
  let mut sharedNames := 0
  for (what, fields) in objects do
    match fromJson? (α := UsageImport) (Json.mkObj fields) with
    | .ok u =>
      let ns := allNames u
      unless shared ns do
        IO.eprintln s!"failed: equal names of {what} are not one object"
        return 1
      sharedNames := sharedNames + ns.size
    | .error e =>
      IO.eprintln s!"failed: no importer read from {what}: {e}"
      return 1
    for v in withEachRemoved fields do
      cases := cases + 1
      unless sameResult (fromJson? v) (refImport v) do
        IO.eprintln s!"failed: the decoders differ on an object made from {what} (case {cases})"
        return 1
  unless cases > 300 && sharedNames > 1000 do
    IO.eprintln s!"failed: only {cases} cases and {sharedNames} names"
    return 1
  IO.println "ok"
  return 0
