import Lean.Util.ModuleUsage
/-!
`ResolvedTable.decode?` reads every byte string as the reference reader below does (the decoder before it read a
group's entries by position): the same table for every table `encodeResolved` writes, and the same error for each of
those bytes truncated, with a byte changed, with bytes appended, and for tables with a repeated identity or module.
-/
open Lean ModuleUsage

namespace Ref

abbrev DecM := StateT Nat (Except String)

def u8 (b : ByteArray) : DecM UInt8 := do
  let i ← get
  unless i < b.size do throw "truncated"
  set (i + 1)
  return b[i]!

def u64 (b : ByteArray) : DecM UInt64 := do
  let i ← get
  unless i + 8 ≤ b.size do throw "truncated"
  set (i + 8)
  let mut v : UInt64 := 0
  for k in [0:8] do
    v := v ||| (b[i + k]!.toUInt64 <<< (8 * k).toUInt64)
  return v

def str (b : ByteArray) : DecM String := do
  let n := (← u64 b).toNat
  let i ← get
  unless i + n ≤ b.size do throw "truncated"
  set (i + n)
  match String.fromUTF8? (b.extract i (i + n)) with
  | some s => return s
  | none => throw "a string is not UTF-8"

def nat (b : ByteArray) : DecM Nat := do
  let s ← str b
  match s.toNat? with
  | some n => if toString n == s then return n else throw s!"expected a natural number, got {s}"
  | none => throw s!"expected a natural number, got {s}"

def name (b : ByteArray) : DecM Name := do
  let mut n := Name.anonymous
  for _ in [0:(← nat b)] do
    match ← u8 b with
    | 1 => n := .str n (← str b)
    | 2 => n := .num n (← nat b)
    | t => throw s!"unknown name component tag {t}"
  return n

def decodeM (bytes : ByteArray) : DecM ResolvedTable := do
  let mut modules := #[]
  let mut provided := #[]
  let mut entries : Std.HashMap Digest (Nat × UInt8) := {}
  let mut seen : Std.HashSet (Option Name) := {}
  for _ in [0:(← nat bytes)] do
    let m? ← match ← u8 bytes with
      | 0 => pure none
      | 1 => some <$> name bytes
      | t => throw s!"unknown option tag {t}"
    if seen.contains m? then throw s!"two groups of the module {m?}"
    seen := seen.insert m?
    let g := modules.size
    let mut live := 0
    for _ in [0:(← nat bytes)] do
      let d : Digest := ⟨← u64 bytes, ← u64 bytes⟩
      let k ← u8 bytes
      if entries.contains d then throw s!"two entries of the identity {d.hex}"
      entries := entries.insert d (g, k)
      if k != 0 then live := live + 1
    modules := modules.push m?
    provided := provided.push live
  unless (← get) == bytes.size do throw "trailing bytes"
  return { modules, provided, entries }

def decode? (bytes : ByteArray) : Except String ResolvedTable :=
  (decodeM bytes).run' 0

end Ref

def sameTable (a b : ResolvedTable) : Bool :=
  a.modules == b.modules && a.provided == b.provided && a.entries.size == b.entries.size &&
    a.entries.toArray.all fun (d, v) => b.entries[d]? == some v

def agree (bytes : ByteArray) : Bool :=
  match Ref.decode? bytes, ResolvedTable.decode? bytes with
  | .ok a, .ok b => sameTable a b
  | .error e, .error f => e == f
  | _, _ => false

/-- A linear congruential generator, so that the cases are the same on every run. -/
def next (s : UInt64) : UInt64 := s * 6364136223846793005 + 1442695040888963407

def groupsOf (seed : UInt64) (repeatId repeatModule : Bool) : Array (Option Name × Array ResolvedEntry) := Id.run do
  let mut s := seed
  let mut gs : Array (Option Name × Array ResolvedEntry) := #[]
  s := next s
  let n := (s >>> 33).toNat % 5
  for g in [0:n] do
    s := next s
    let m : Option Name := if g == 0 && s % 2 == 0 then none else some (Name.mkNum (.str `M s!"m{g}") g)
    let mut es := #[]
    s := next s
    for _ in [0:(s >>> 33).toNat % 13] do
      s := next s
      let hi := s
      s := next s
      es := es.push { hi, lo := s, kinds := (s >>> 60).toUInt8 % 4 }
    gs := gs.push (m, es)
  if repeatId then
    gs := gs.push (some `R, #[{ hi := 7, lo := 7, kinds := 1 }]) |>.push (some `S, #[{ hi := 7, lo := 7, kinds := 2 }])
  if repeatModule then
    gs := gs.push (some `T, #[]) |>.push (some `T, #[])
  return gs

#eval show IO Unit from do
  let mut cases := 0
  for seed in [0:40] do
    for (rid, rmod) in [(false, false), (true, false), (false, true)] do
      let b := encodeResolved (groupsOf (seed.toUInt64 + 1) rid rmod)
      let mut variants := #[b, b.push 0, b.push 1 |>.push 2]
      for cut in [0:b.size] do
        if cut % 13 == seed % 13 then variants := variants.push (b.extract 0 cut)
      for i in [0:b.size] do
        if i % 17 == seed % 17 then
          variants := variants.push (b.set! i (b[i]! + 1)) |>.push (b.set! i 0) |>.push (b.set! i 255)
      for v in variants do
        cases := cases + 1
        unless agree v do throw <| IO.userError s!"failed: the decoders differ on case {cases} (seed {seed})"
  unless cases > 10000 do throw <| IO.userError s!"failed: only {cases} cases"
  IO.println "ok"
