module
import all Lake.Build.UsageCutoff
import Lean.Util.ModuleUsage.Basic
/-!
`UsageSidecar.parse?`, which reads a `.usage` in the layout `Lean.ModuleUsage.writeUsage` writes without the JSON tree,
gives what `Json.parse` and `FromJson UsageSidecar` give (`parseUsageSidecar.parse`): on the `.usage` files named on the
command line, each of which the layout reader must take; on generated texts in that layout with every field filled; and
on each of those changed: a byte altered, cut short, a space inserted, an escape, a control character, another format
version, and a number with a leading zero.
-/
open Lean Lake ModuleUsage

def sameUsage (a b : UsageSidecar) : Bool :=
  a.noskip == b.noskip && a.moduleDigest == b.moduleDigest && a.closure == b.closure && a.digested == b.digested &&
    a.importedClosures.toList == b.importedClosures.toList && a.importedDigests.toList == b.importedDigests.toList &&
    a.own.toList == b.own.toList && a.used == b.used && a.extra == b.extra && a.resolvedDigest == b.resolvedDigest &&
    a.resolvedAll == b.resolvedAll && a.providesDigest == b.providesDigest && a.provides == b.provides &&
    a.indirect == b.indirect && a.specKeys == b.specKeys && a.specLookups == b.specLookups

def sameResult : Except String (Option UsageSidecar) → Except String (Option UsageSidecar) → Bool
  | .ok (some a), .ok (some b) => sameUsage a b
  | .ok none, .ok none => true
  | .error e, .error f => e == f
  | _, _ => false

def slow (b : ByteArray) : Except String (Option UsageSidecar) :=
  parseUsageSidecar.parse UsageSidecar usageVersion b

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

/-- A name of one to three components: strings with ASCII, non-ASCII and `»`, numbers, and, if `odd`, a component that
needs an escape. -/
def Gen.name (g : Gen) (odd : Bool) : Name × Gen := Id.run do
  let (k, g) := g.nat 3
  let mut g := g
  let mut n := Name.anonymous
  for i in [0:k + 1] do
    let (c, g') := g.nat 6
    g := g'
    n := match c with
      | 0 => .mkNum n (i * 1000 + c)
      | 1 => .mkStr n s!"«a{i}»"
      | 2 => .mkStr n s!"Lin_{i}ü"
      | 3 => .mkNum n 0
      | _ => .mkStr n s!"M{c}x{i}"
  if odd then n := .mkStr n "q\"uote"
  return (n, g)

def Gen.names (g : Gen) (k : Nat) (odd : Bool := false) : Array Name × Gen := Id.run do
  let mut g := g
  let mut out := #[]
  for i in [0:k] do
    let (n, g') := g.name (odd && i == k / 2)
    g := g'
    out := out.push n
  return (out, g)

def Gen.pairs (g : Gen) (k : Nat) : Array (Name × Digest) × Gen := Id.run do
  let (ns, g) := g.names k
  let mut g := g
  let mut out := #[]
  for n in ns do
    let (d, g') := g.digest
    g := g'
    out := out.push (n, d)
  return (out, g)

/-- A text in the layout `writeUsage` writes, every list with one to four elements (with a component that needs an
escape if `odd`), at format version `version`. -/
def layout (seed : UInt64) (odd : Bool) (version : Nat) : ByteArray := Id.run do
  let g : Gen := ⟨seed⟩
  let (closure, g) := g.digest
  let (digested, g) := g.pairs 3
  let (extra, g) := g.names 2
  let (ic, g) := g.pairs 2
  let (id, g) := g.pairs 4
  let (indirect, g) := g.names 1 odd
  let (md, g) := g.digest
  let (own, g) := g.pairs 3
  let (k, g) := g.names 2
  let (c, g) := g.names 3
  let (pd, g) := g.digest
  let (rd, g) := g.digest
  let (sk, g) := g.pairs 2
  let (sl, g) := g.pairs 2
  let (um, g) := g.names 2
  let (uc, _) := g.pairs 3
  let pair (acc : String) (nd : Name × Digest) : String :=
    (digestJsonInto ((nameJsonInto (acc.push '[') nd.1).push ',') nd.2).push ']'
  let mut out := digestJsonInto "{\"closure\":" closure
  out := arrayJsonInto (out ++ ",\"digested\":") digested pair
  out := arrayJsonInto (out ++ ",\"extra\":") (extra.zip #[true, false]) fun acc (n, m) =>
    nameJsonInto (acc.push '[') n ++ (if m then ",true]" else ",false]")
  out := arrayJsonInto (out ++ ",\"importedClosures\":") ic pair
  out := arrayJsonInto (out ++ ",\"importedDigests\":") id pair
  out := arrayJsonInto (out ++ ",\"indirect\":") indirect nameJsonInto
  out := digestJsonInto (out ++ ",\"moduleDigest\":") md
  out := out ++ ",\"noskip\":" ++ toString (seed % 2 == 0)
  out := arrayJsonInto (out ++ ",\"own\":") own pair
  out := arrayJsonInto ((arrayJsonInto (out ++ ",\"provides\":[") k nameJsonInto).push ',') c nameJsonInto |>.push ']'
  out := digestJsonInto (out ++ ",\"providesDigest\":") pd
  out := out ++ ",\"resolvedAll\":" ++ toString (seed % 3 == 0)
  out := digestJsonInto (out ++ ",\"resolvedDigest\":") rd
  out := arrayJsonInto (out ++ ",\"specKeys\":") sk fun acc (n, d) =>
    (nameJsonInto ((digestJsonInto (acc.push '[') d).push ',') n).push ']'
  out := arrayJsonInto (out ++ ",\"specLookups\":") sl fun acc (_, d) =>
    (digestJsonInto ((digestJsonInto (acc.push '[') d).push ',') d).push ']'
  out := arrayJsonInto (out ++ ",\"used\":") (um.zip #[uc, uc.extract 0 1]) fun acc (m, cs) =>
    (arrayJsonInto ((nameJsonInto (acc.push '[') m).push ',') cs pair).push ']'
  out := (out ++ ",\"version\":" ++ toString version).push '}'
  return out.toUTF8

/-- `b` with `bytes` in place of the byte at `i`. -/
def splice (b : ByteArray) (i : Nat) (bytes : ByteArray) : ByteArray :=
  b.extract 0 i ++ bytes ++ b.extract (i + 1) b.size

/-- The first position of `pat` in `b` at or after `from`, if any. -/
def findBytes? (b : ByteArray) (pat : ByteArray) (from_ : Nat := 0) : Option Nat := Id.run do
  for i in [from_:b.size] do
    if (List.range pat.size).all fun k => b[i + k]! == pat[k]! then return some i
  return none

/-- `b` changed as the module docstring lists. -/
def variants (b : ByteArray) (seed : Nat) : Array ByteArray := Id.run do
  let mut vs := #[b.push 32, b.extract 0 (b.size - 1), ByteArray.mk #[32] ++ b]
  for i in [0:b.size] do
    if i % 29 == seed % 29 then
      vs := vs.push (b.extract 0 i) |>.push (splice b i (ByteArray.mk #[b[i]!, 32]))
    if i % 13 == seed % 13 then
      vs := vs.push (b.set! i (b[i]! + 1)) |>.push (b.set! i (b[i]! - 1)) |>.push (b.set! i 9)
  -- an escape in the first string of a name, and another format version
  if let some i := findBytes? b "[\"".toUTF8 then
    let c := b[i + 2]!.toNat
    vs := vs.push (splice b (i + 2) ("\\u00" ++ (String.singleton (Nat.digitChar (c / 16))).push (Nat.digitChar (c % 16))).toUTF8)
  if let some i := findBytes? b ",\"version\":".toUTF8 then
    vs := vs.push (b.extract 0 (i + 11) ++ "99}".toUTF8)
  -- a number with a leading zero
  if let some i := findBytes? b ",0]".toUTF8 then
    vs := vs.push (splice b (i + 1) "00".toUTF8)
  return vs

public def main (args : List String) : IO UInt32 := do
  let mut cases := 0
  let mut texts : Array (String × ByteArray × Bool) := #[]
  for f in args do
    texts := texts.push (f, ← IO.FS.readBinFile f, true)
  for seed in [0:60] do
    texts := texts.push (s!"generated {seed}", layout (seed.toUInt64 + 1) false usageVersion, true)
    texts := texts.push (s!"generated {seed} with an escape", layout (seed.toUInt64 + 1) true usageVersion, false)
  for (what, b, plain) in texts do
    let fast := UsageLayout.decode? b
    if plain && fast.isNone then
      IO.eprintln s!"failed: the layout reader does not take {what}"
      return 1
    if !plain && fast.isSome then
      IO.eprintln s!"failed: the layout reader takes {what}"
      return 1
    for v in #[b] ++ variants b cases do
      cases := cases + 1
      unless sameResult (UsageSidecar.parse? v) (slow v) do
        IO.eprintln s!"failed: the readers differ on a text made from {what} (case {cases})"
        return 1
  unless cases > 5000 do
    IO.eprintln s!"failed: only {cases} cases"
    return 1
  IO.println "ok"
  return 0
