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
-/

open Lean System

namespace Lake

/-- A module's last compile wall time and its direct local imports at that compile. -/
public structure ModuleTimeEntry where
  name : Name
  ms : Nat
  imports : Array Name
  deriving ToJson, FromJson, Inhabited

public structure ModuleTimesFile where
  version : Nat
  modules : Array ModuleTimeEntry
  deriving ToJson, FromJson

public def ModuleTimesFile.currentVersion : Nat := 1

/-- The record's file name inside the workspace's Lake directory. -/
public def moduleTimesFileName : FilePath := "module-times.json"

public abbrev ModuleTimeMap := Std.HashMap Name ModuleTimeEntry

/-- Reads the record. A missing file is an empty record; a file that does not parse is an error. -/
public def readModuleTimes (path : FilePath) : IO ModuleTimeMap := do
  unless (← path.pathExists) do return {}
  let contents ← IO.FS.readFile path
  let file ← IO.ofExcept <| (Json.parse contents >>= fromJson? (α := ModuleTimesFile)).mapError
    fun e => s!"{path}: {e}; delete it to start a new record"
  unless file.version == ModuleTimesFile.currentVersion do
    throw <| IO.userError s!"{path}: version {file.version}, expected \
      {ModuleTimesFile.currentVersion}; delete it to start a new record"
  return file.modules.foldl (init := {}) fun m e => m.insert e.name e

/--
Writes the record through a temporary file, so a reader sees the old file or the new one. The
temporary file is per process: concurrent writers (e.g. `lake setup-file` runs) each rename a
whole file, and the last one wins.
-/
public def writeModuleTimes (path : FilePath) (entries : ModuleTimeMap) : IO Unit := do
  let modules := entries.fold (init := #[]) (fun a _ e => a.push e)
    |>.qsort (fun a b => a.name.cmp b.name == .lt)
  let file : ModuleTimesFile := {version := ModuleTimesFile.currentVersion, modules}
  let tmp := path.addExtension s!"{← IO.Process.getPID}.tmp"
  createParentDirs path
  IO.FS.writeFile tmp (toJson file).compress
  IO.FS.rename tmp path

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

/-- One build's view of the record: priorities from the file as read, entries this build compiled. -/
public structure ModuleTimes where
  path : FilePath
  prios : Std.HashMap Name Task.Priority
  new : IO.Ref ModuleTimeMap

public def ModuleTimes.load (path : FilePath) : IO ModuleTimes := do
  let entries ← readModuleTimes path
  let prios := (remainingPaths entries).fold (init := {}) fun m n t => m.insert n (compilePrio t)
  return {path, prios, new := ← IO.mkRef {}}

public def ModuleTimes.prio (self : ModuleTimes) (mod : Name) : Task.Priority :=
  self.prios.getD mod Task.Priority.default

public def ModuleTimes.record (self : ModuleTimes) (e : ModuleTimeEntry) : BaseIO Unit :=
  self.new.modify (·.insert e.name e)

/--
Writes this build's entries over the record as it is on disk now (re-read, so entries another
Lake process saved during this build survive), keeping an entry from the file only if `keep`
accepts its module. Writes nothing and returns 0 when this build compiled nothing; otherwise
returns how many entries this build recorded.
-/
public def ModuleTimes.save (self : ModuleTimes) (keep : Name → BaseIO Bool) : IO Nat := do
  let new ← self.new.get
  if new.isEmpty then return 0
  let mut merged := new
  for (n, e) in ← readModuleTimes self.path do
    if !merged.contains n && (← keep n) then
      merged := merged.insert n e
  writeModuleTimes self.path merged
  return new.size
