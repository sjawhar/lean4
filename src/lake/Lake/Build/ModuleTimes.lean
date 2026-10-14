/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Lean.Data.Json
public import Std.Data.HashMap
public import Std.Data.HashSet
public import Lake.Util.IO
import Init.Data.Array.QSort

/-! # Module times

The workspace's record of each module's last compile time and direct local imports
(`.lake/module-times.json`). A build reads it to start the compiles with the longest remaining
path first, and writes back the modules it compiled.

The file is a name table plus one `[name, ms, imports]` row per module, where `name` and the
`imports` are indices into the table:
`{"version": 2, "names": ["A.B", "A.C"], "modules": [[0, 1234, [1]]]}`. Both are sorted by name.
Each name is parsed once and shared by every row that mentions it, which keeps reading the
record and looking modules up in it cheap.
-/

open Lean System

namespace Lake

/-- A module's last compile wall time and its direct local imports at that compile. -/
public structure ModuleTimeEntry where
  name : Name
  ms : Nat
  imports : Array Name
  deriving Inhabited

public def moduleTimesVersion : Nat := 2

/-- The record's file name inside the workspace's Lake directory. -/
public def moduleTimesFileName : FilePath := "module-times.json"

public abbrev ModuleTimeMap := Std.HashMap Name ModuleTimeEntry

private def parseModuleTimes (contents : String) : Except String ModuleTimeMap := do
  let json ← Json.parse contents
  let version ← json.getObjValAs? Nat "version"
  unless version == moduleTimesVersion do
    throw s!"version {version}, expected {moduleTimesVersion}"
  let names ← json.getObjValAs? (Array Name) "names"
  let rows ← json.getObjValAs? (Array Json) "modules"
  let name (j : Json) : Except String Name := do
    let i ← j.getNat?
    match names[i]? with
    | some n => pure n
    | none => throw s!"name index {i} out of range"
  rows.foldlM (init := {}) fun m row => do
    let cols ← row.getArr?
    let (some n, some ms, some imports) := (cols[0]?, cols[1]?, cols[2]?)
      | throw s!"expected a [name, ms, imports] row, got {row.compress}"
    let n ← name n
    let imports ← (← imports.getArr?).mapM name
    return m.insert n {name := n, ms := ← ms.getNat?, imports}

/--
Reads the record. A missing file is an empty record; a file that does not parse, or has another
version, is an error naming the file.
-/
public def readModuleTimes (path : FilePath) : IO ModuleTimeMap := do
  unless (← path.pathExists) do return {}
  match parseModuleTimes (← IO.FS.readFile path) with
  | .ok m => return m
  | .error e => throw <| IO.userError s!"{path}: {e}; delete it to start a new record"

private def renderModuleTimes (entries : ModuleTimeMap) : String := Id.run do
  let mut seen : Std.HashSet Name := {}
  for (n, e) in entries do
    seen := e.imports.foldl (·.insert ·) (seen.insert n)
  let names := seen.toArray.qsort (fun a b => a.cmp b == .lt)
  let mut index : Std.HashMap Name Nat := Std.HashMap.emptyWithCapacity names.size
  for h : i in [0:names.size] do
    index := index.insert names[i] i
  let idx (n : Name) : Json := index.getD n 0
  let mut rows := Array.mkEmpty entries.size
  for n in names do
    if let some e := entries.get? n then
      rows := rows.push <| Json.arr #[idx n, e.ms, Json.arr (e.imports.map idx)]
  let json := Json.mkObj [
    ("version", moduleTimesVersion),
    ("names", Json.arr (names.map (Json.str ·.toString))),
    ("modules", Json.arr rows)]
  return json.compress

/--
Writes the record through a temporary file, so a reader sees the old file or the new one. The
temporary file is per process: concurrent writers (e.g. `lake setup-file` runs) each rename a
whole file, and the last one wins. A failed write removes its temporary file.
-/
public def writeModuleTimes (path : FilePath) (entries : ModuleTimeMap) : IO Unit := do
  let contents := renderModuleTimes entries
  let tmp := path.addExtension s!"{← IO.Process.getPID}.tmp"
  createParentDirs path
  try
    IO.FS.writeFile tmp contents
    IO.FS.rename tmp path
  catch e =>
    discard <| (IO.FS.removeFile tmp).toBaseIO
    throw e

/-- The record file's size and modification time, or `none` if it does not exist. -/
public def moduleTimesStamp? (path : FilePath) : IO (Option (UInt64 × IO.FS.SystemTime)) := do
  try
    let m ← path.metadata
    return some (m.byteSize, m.modified)
  catch
    | .noFileOrDirectory .. => return none
    | e => throw e

private partial def visitRemaining (entries : ModuleTimeMap) (importers : Std.HashMap Name (Array Name))
    (n : Name) : StateM (Std.HashMap Name Nat × Std.HashSet Name) Nat := do
  if let some t := (← get).1.get? n then return t
  -- `n` is on the current path: the record holds a stale cycle, and this edge counts 0.
  if (← get).2.contains n then return 0
  modify fun (done, onPath) => (done, onPath.insert n)
  let mut best := 0
  for r in importers.getD n #[] do
    best := max best (← visitRemaining entries importers r)
  let t := (entries.get? n |>.map (·.ms) |>.getD 0) + best
  modify fun (done, onPath) => (done.insert n t, onPath.erase n)
  return t

/--
Each recorded module's remaining path in milliseconds: its own compile time plus the longest
remaining path among the recorded modules that import it.
-/
public def remainingPaths (entries : ModuleTimeMap) : Std.HashMap Name Nat :=
  let importers : Std.HashMap Name (Array Name) := entries.fold (init := {}) fun acc n e =>
    e.imports.foldl (init := acc) fun acc i => acc.insert i ((acc.getD i #[]).push n)
  let act : StateM (Std.HashMap Name Nat × Std.HashSet Name) Unit := do
    for (n, _) in entries do
      discard <| visitRemaining entries importers n
  (Id.run (act.run ({}, {}))).2.1

/--
The priority of a module's compile job: `⌊log₂⌋` of its remaining path in seconds, clamped to
`0..7`. `Task.Priority.max` (8) belongs to Lake's other jobs.
-/
public def compilePrio (remainingMs : Nat) : Task.Priority :=
  min 7 (Nat.log2 (remainingMs / 1000))

/--
One build's view of the record: the entries and priorities as read at the start of the build (with
the file's size and modification time then), and the entries this build compiled.
-/
public structure ModuleTimes where
  path : FilePath
  stamp? : Option (UInt64 × IO.FS.SystemTime)
  entries : ModuleTimeMap
  prios : Std.HashMap Name Task.Priority
  /-- Entries this build recorded, newest first. A list, so that recording one is O(1). -/
  new : IO.Ref (List ModuleTimeEntry)

public def ModuleTimes.load (path : FilePath) : IO ModuleTimes := do
  -- Stamp before reading: a write that lands in between makes the stamp stale, never the entries.
  let stamp? ← moduleTimesStamp? path
  let entries ← readModuleTimes path
  let prios := (remainingPaths entries).fold (init := {}) fun m n t => m.insert n (compilePrio t)
  return {path, stamp?, entries, prios, new := ← IO.mkRef []}

public def ModuleTimes.prio (self : ModuleTimes) (mod : Name) : Task.Priority :=
  self.prios.getD mod Task.Priority.default

public def ModuleTimes.record (self : ModuleTimes) (e : ModuleTimeEntry) : BaseIO Unit :=
  self.new.modify (e :: ·)

/--
Writes this build's entries over the record as it is on disk now, keeping an entry from the file
only if `keep` accepts its module. If the file's size or modification time changed since `load`
(another Lake process saved it during this build), the file is read again, so that process's
entries survive; otherwise the entries read by `load` are reused. Writes nothing and returns 0 when
this build compiled nothing; otherwise returns how many entries this build recorded.
-/
public def ModuleTimes.save (self : ModuleTimes) (keep : Name → BaseIO Bool) : IO Nat := do
  let new ← self.new.get
  if new.isEmpty then return 0
  let onDisk ←
    if (← moduleTimesStamp? self.path) == self.stamp? then pure self.entries
    else readModuleTimes self.path
  -- `new` is newest first, so `insertIfNew` keeps a module's latest compile.
  let mut merged : ModuleTimeMap := new.foldl (init := {}) fun m e => m.insertIfNew e.name e
  for (n, e) in onDisk do
    if !merged.contains n && (← keep n) then
      merged := merged.insert n e
  writeModuleTimes self.path merged
  return new.length
