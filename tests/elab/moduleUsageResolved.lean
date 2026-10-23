import Lean
/-! The `.resolved` sidecar: `lean --usage=A.usage` writes `A.resolved`, whose digest `A.usage` records
(`resolvedDigest`) and which no longer holds a `resolved` field; `ResolvedTable.decode?` reads back what
`encodeResolved` writes and rejects truncated or trailing bytes and duplicate entries;
`ResolvedTable.providerUnchanged` agrees with the direct check (every recorded name has the changed provider's kinds
if recorded under it and none otherwise, except a name the provider declares as a kernel constant alone and the
compile used from it) on every case below; and the native `resolvedId` is the digest of `Enc.name`'s bytes for
anonymous, string, numeric (small, at 2^63 and past 2^64), mixed and non-ASCII names. -/
open Lean ModuleUsage

/-- The direct check `providerUnchanged` inverts. -/
def direct (groups : Array (Option Name × Array (Name × UInt8))) (m : Name) (p : Array Name × Array Name)
    (declared : Array Name) : Bool :=
  groups.all fun (g, ns) => ns.all fun (n, k) =>
    let now := kindsIn p.1 p.2 n
    now == (if g == some m then k else 0) || (g != some m && now == kernelKind && declared.contains n)

def groups : Array (Option Name × Array (Name × UInt8)) := #[
  (none, #[(`own, 0), (`l.x, 0)]),
  (some `M, #[(`a, kernelKind), (`b, extraKind), (`c, kernelKind ||| extraKind), (`z, 0)]),
  (some `N, #[(`d, kernelKind)])]

def sorted (ns : List Name) : Array Name := ns.toArray.qsort Name.quickLt

/-- `M`'s provides in each case, with the names `used` lists under `M`: unchanged names, a lost entry, a changed kind,
a gained name of another group, a gained name of the `none` group, a gained name recorded with kinds 0, an unrelated
gained name, duplicates, and a gained kernel constant of another group or of the `none` group that the compile used
from `M`, alone or also as a compiled name. -/
def cases : List (String × Array Name × Array Name × Array Name) := [
  ("same", sorted [`a, `c], sorted [`b, `c], #[]),
  ("lost a", sorted [`c], sorted [`b, `c], #[]),
  ("b now kernel", sorted [`a, `b, `c], sorted [`b, `c], #[]),
  ("c lost extra", sorted [`a, `c], sorted [`b], #[]),
  ("gains d", sorted [`a, `c, `d], sorted [`b, `c], #[]),
  ("gains l.x", sorted [`a, `c], sorted [`b, `c, `l.x], #[]),
  ("gains z", sorted [`a, `c, `z], sorted [`b, `c], #[]),
  ("gains unrelated", sorted [`a, `c, `q], sorted [`b, `c, `r], #[]),
  ("duplicates", sorted [`a, `a, `c], sorted [`b, `b, `c], #[]),
  ("declares used d", sorted [`a, `c, `d], sorted [`b, `c], #[`d]),
  ("declares used own", sorted [`a, `c, `own], sorted [`b, `c], #[`own]),
  ("compiles used d", sorted [`a, `c, `d], sorted [`b, `c, `d], #[`d]),
  ("declares used z", sorted [`a, `c, `z], sorted [`b, `c], #[`z])]

#eval show IO Unit from do
  let .ok t := ResolvedTable.decode? (encodeResolved groups) | throw (IO.userError "decode failed")
  for (label, k, e, used) in cases do
    let inv := t.providerUnchanged `M (providedIds (k, e)) used
    IO.println s!"{label}: {inv} {if inv == direct groups `M (k, e) used then "agrees" else "DIFFERS"}"
  -- a module with no group: unchanged unless it provides a recorded name
  IO.println s!"P unrelated: {t.providerUnchanged `P (providedIds (#[`q], #[])) #[]} P gains a: {t.providerUnchanged `P (providedIds (#[`a], #[])) #[]}"
  let b := encodeResolved groups
  let bad (bs : ByteArray) := match ResolvedTable.decode? bs with | .ok _ => "accepted" | .error e => e
  IO.println s!"truncated: {bad (b.extract 0 (b.size - 1))}"
  IO.println s!"trailing: {bad (b.push 0)}"
  IO.println s!"duplicate: {bad (encodeResolved #[(none, #[(`a, 0)]), (some `M, #[(`a, 1)])])}"

#eval show IO Unit from do
  let names : List Name := [.anonymous, `a, `a.b.c, .num .anonymous 0, .num `x 7, .num `x 9223372036854775808,
    .num `x 18446744073709551616, .str (.num `x 3) "y", .str (.num `_private.M 0) "f", .str `ℕ "é", .str `a ""]
  IO.println s!"resolvedId = Enc.name: {names.all fun n => resolvedId n == (({} : Enc).name n).finish}"
#eval show IO Unit from IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "A.lean") "def a := 1\ndef b := a + 1\n"
  let out ← IO.Process.output
    { cmd := "lean", args := #[s!"--root={dir}", "-o", "A.olean", "--usage=A.usage", "A.lean"], cwd := dir }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "A.usage"))
  let recorded ← IO.ofExcept <| j.getObjValAs? Digest "resolvedDigest"
  let bytes ← IO.FS.readBinFile (dir / "A.resolved")
  let .ok t := ResolvedTable.decode? bytes | throw (IO.userError "A.resolved does not decode")
  IO.println s!"version {j.getObjValAs? Nat "version" |>.toOption} resolved field {(j.getObjVal? "resolved").isOk}"
  IO.println s!"digest matches {recorded == Digest.ofBytes bytes} none group {t.modules.contains none}"
  IO.println s!"own name {(t.entries[resolvedId `a]?).any (t.modules[·.1]! == none)}"
