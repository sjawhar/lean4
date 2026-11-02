import Lean
/-! Each `ModuleUsage.usageVersion` names exactly one `.usage` format: the fields `writeUsage` writes at the current
version must be the ones this table records for it, and no two versions in the table share a field set. A change to
the fields must bump the version and add a row, so that two toolchains that write different formats never read each
other's sidecars as their own. -/
open Lean

/-- Every `.usage` format with the top-level fields it writes. -/
def formats : List (Nat × List String) := [
  (12, ["closure", "digested", "extra", "importedClosures", "importedDigests", "moduleDigest", "noskip", "own",
    "provides", "providesDigest", "resolved", "resolvedAll", "specKeys", "specLookups", "used", "version"]),
  (13, ["closure", "digested", "extra", "importedClosures", "importedDigests", "indirect", "moduleDigest", "noskip",
    "own", "provides", "providesDigest", "resolved", "resolvedAll", "specKeys", "specLookups", "used", "version"]),
  (14, ["closure", "digested", "extra", "importedClosures", "importedDigests", "indirect", "moduleDigest", "noskip",
    "own", "provides", "providesDigest", "resolvedAll", "resolvedDigest", "specKeys", "specLookups", "used",
    "version"])]

#eval show IO Unit from IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "A.lean") "def a := 1\n"
  let out ← IO.Process.output
    { cmd := "lean", args := #[s!"--root={dir}", "-o", "A.olean", "--usage=A.usage", "A.lean"], cwd := dir }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "A.usage"))
  let kvs ← IO.ofExcept j.getObj?
  let fields := (kvs.foldl (fun acc k _ => acc.push k) #[]).qsort (· < ·) |>.toList
  let v := ModuleUsage.usageVersion
  let written := (j.getObjValAs? Nat "version").toOption == some v
  let tableMatch := formats.lookup v == some fields
  let sets := formats.map (·.2)
  let distinctVersions := (formats.map (·.1)).eraseDups.length == formats.length
  let distinctSets := sets.eraseDups.length == sets.length
  IO.println s!"version {v} written {written}"
  IO.println s!"fields match the table: {tableMatch}"
  IO.println s!"versions distinct: {distinctVersions} field sets distinct: {distinctSets}"
