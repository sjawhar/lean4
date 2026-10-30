/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Lake.Build.Job.Monad
public import Lake.Build.Infos
public import Lean.Util.ModuleUsage.Basic
import Lean.Util.ModuleUsage
import Lake.Config.Monad

/-!
# Usage cutoff

The checks by which Lake skips compiling a module whose trace is stale but whose used declarations kept their
meaning, or lets the kept-module checker re-check it instead (`Module.usageVerdict`), and the `.usekey` Lake writes
after a compile (`Module.writeUsekey`), which binds the `.usage` Lean wrote (`Lean.ModuleUsage.writeUsage`) to the
module's `.olean` and inputs.
-/

open System Lean

namespace Lake

/-- The parts of a module's `.usage` sidecar (written by Lean next to its `.olean`) that Lake checks. -/
structure UsageSidecar where
  noskip : Bool
  moduleDigest : ModuleUsage.Digest
  /-- A digest of the module's import closure (`Lean.ModuleUsage.closureDigest`). -/
  closure : ModuleUsage.Digest
  /-- The imported modules whose `.olean` carried digests when Lean compiled the module, each with the digest of the
  names it provided to the resolver then (`Lean.ModuleUsage.digestedModules`), sorted by `Name.quickLt`. -/
  digested : Array (Name × ModuleUsage.Digest)
  /-- Each direct import's `closure` as the compile imported it (`Lean.ModuleUsage.writeUsage`). -/
  importedClosures : NameMap ModuleUsage.Digest
  /-- Each `extra` module's `moduleDigest` as the compile imported it. -/
  importedDigests : NameMap ModuleUsage.Digest
  own : NameMap ModuleUsage.Digest
  used : Array (Name × Array (Name × ModuleUsage.Digest))
  extra : Array Name
  /-- The digest of the bytes of the module's `.resolved` sidecar (`Lean.ModuleUsage.encodeResolved`), which records
  every name whose defining module the compile looked up, used or referred to, grouped by the module the resolver
  mapped it to, each with the kinds under which that module provided it (`readResolvedSidecar`). -/
  resolvedDigest : ModuleUsage.Digest
  /-- Whether the compile read the resolver's whole map (`Lean.allResolved`). -/
  resolvedAll : Bool
  /-- The digest of the names the module provides to the resolver and of `indirect`
  (`Lean.ModuleUsage.providesDigestOf`). -/
  providesDigest : ModuleUsage.Digest
  /-- The module's kernel constants and compiled names, each sorted (`Lean.ModuleUsage.ownProvides`). -/
  provides : Array Name × Array Name
  /-- The imported declarations the module gives a non-local attribute, sorted (`Lean.ModuleUsage.ownIndirect`). -/
  indirect : Array Name
  /-- The specialization-cache keys the module created, each with the specialization of its last entry for the
  key (`Lean.ModuleUsage.specKeysOf`). -/
  specKeys : Array (ModuleUsage.Digest × Name)
  /-- For each key the module looked up in the specialization cache, the digest of its providers in the closure
  (`Lean.ModuleUsage.specProviders`). -/
  specLookups : Array (ModuleUsage.Digest × ModuleUsage.Digest)

/--
A name in a usage sidecar, as `Lean.ModuleUsage.nameToJson` writes it: the JSON array of its
components, root first, each a string or a number. Unlike `toJson Name`, this round-trips
macro-scoped names.
-/
structure SidecarName where
  name : Name

instance : FromJson SidecarName where
  fromJson? j := do
    let n ← (← j.getArr?).foldlM (init := Name.anonymous) fun p c => do
      match c with
      | .str s => return Name.mkStr p s
      | .num _ => return Name.mkNum p (← fromJson? c)
      | _ => throw s!"expected a name component, got {c.compress}"
    return ⟨n⟩

/-- Reads a JSON array of `[name, digest, digest]` triples into a map. -/
def nameDigestPairs (j : Json) : Except String (NameMap (ModuleUsage.Digest × ModuleUsage.Digest)) := do
  (← j.getArr?).foldlM (init := {}) fun m e => do
    let #[n, a, b] ← e.getArr? | throw s!"expected a triple, got {e.compress}"
    return m.insert (← fromJson? (α := SidecarName) n).name (← fromJson? a, ← fromJson? b)

/-- Reads a JSON array of names. -/
def namesOfJson (j : Json) : Except String (Array Name) :=
  return (← fromJson? (α := Array SidecarName) j).map (·.name)

/-- Reads a module's `provides`: a JSON pair of name arrays. -/
def providesOfJson (j : Json) : Except String (Array Name × Array Name) := do
  let #[k, e] ← j.getArr? | throw s!"expected a pair of name arrays, got {j.compress}"
  return (← namesOfJson k, ← namesOfJson e)

instance : FromJson UsageSidecar where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "own"
    let used ← j.getObjValAs? (Array (SidecarName × Array (SidecarName × ModuleUsage.Digest))) "used"
    let extra ← j.getObjValAs? (Array (SidecarName × Bool)) "extra"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × SidecarName)) "specKeys"
    return {
      noskip := ← j.getObjValAs? Bool "noskip"
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      digested := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "digested").map fun (n, d) => (n.name, d)
      importedClosures := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedClosures").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      importedDigests := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedDigests").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      used := used.map fun (m, cs) => (m.name, cs.map fun (c, d) => (c.name, d))
      extra := extra.map (·.1.name)
      resolvedDigest := ← j.getObjValAs? ModuleUsage.Digest "resolvedDigest"
      resolvedAll := ← j.getObjValAs? Bool "resolvedAll"
      providesDigest := ← j.getObjValAs? ModuleUsage.Digest "providesDigest"
      provides := ← providesOfJson (← j.getObjVal? "provides")
      indirect := ← namesOfJson (← j.getObjVal? "indirect")
      specKeys := specKeys.map fun (d, n) => (d, n.name)
      specLookups := ← j.getObjValAs? (Array (ModuleUsage.Digest × ModuleUsage.Digest)) "specLookups"
    }

/-- The parts of a module's `.usage` that its importers' checks read (`importUsage?`), which its `.usekey` carries
(`UsekeySidecar.importer`): a `UsageSidecar` without the lists only the module's own checks read. -/
public structure UsageImport where
  moduleDigest : ModuleUsage.Digest
  closure : ModuleUsage.Digest
  /-- Each direct import's `closure` as the module's compile imported it (`UsageSidecar.importedClosures`):
  `closureEdgesCurrent` compares them with the imports' current ones. -/
  importedClosures : Array (Name × ModuleUsage.Digest)
  own : NameMap ModuleUsage.Digest
  providesDigest : ModuleUsage.Digest
  provides : Array Name × Array Name
  indirect : Array Name
  /-- `Lean.ModuleUsage.providedIds provides`, computed when a dependent's `UsageSidecar.resolvedUnchanged` first
  asks about the module, at most once per parse: every importer shares the parse the build's sidecar cache keeps. -/
  providedIds : Thunk (Array (ModuleUsage.Digest × UInt8))
  /-- `Lean.ModuleUsage.resolvedId` of each name of `indirect`, computed once per parse as `providedIds` is. -/
  indirectIds : Thunk (Array ModuleUsage.Digest)
  /-- The low 32 bits of the `Name.hash` of each kernel constant of `provides`, in its order, computed once per parse as
  `providedIds` is: scalars, so that `UsageSidecar.kernelDisjoint` scans them without following a pointer each. -/
  kernelLows : Thunk (Array UInt32)
  specKeys : Array (ModuleUsage.Digest × Name)
  deriving TypeName

/-- Reads the fields an importer checks, from a `.usekey`'s `importer` or from a module-system file's `.usage`, which
holds them under the same names and in the same form. -/
instance : FromJson UsageImport where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "own"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × SidecarName)) "specKeys"
    let provides ← providesOfJson (← j.getObjVal? "provides")
    let indirect ← namesOfJson (← j.getObjVal? "indirect")
    return {
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      importedClosures := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedClosures").map
        fun (n, d) => (n.name, d)
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      providesDigest := ← j.getObjValAs? ModuleUsage.Digest "providesDigest"
      provides
      indirect
      providedIds := .mk fun _ => ModuleUsage.providedIds provides
      indirectIds := .mk fun _ => indirect.map ModuleUsage.resolvedId
      kernelLows := .mk fun _ => provides.1.map (·.hash.toUInt32)
      specKeys := specKeys.map fun (d, n) => (d, n.name)
    }

/-- The `importer` object of the module's `.usekey` (`UsekeySidecar.importer`): `u`'s fields that `UsageImport`
reads, in the form the `.usage` holds them. -/
def UsageSidecar.importerJson (u : UsageSidecar) : Json :=
  let names (ns : Array Name) := Json.arr (ns.map ModuleUsage.nameToJson)
  Json.mkObj [
    ("closure", toJson u.closure),
    ("importedClosures", Json.arr <| u.importedClosures.foldl (init := #[]) fun (a : Array Json) n d =>
      a.push (Json.arr #[ModuleUsage.nameToJson n, toJson d])),
    ("indirect", names u.indirect),
    ("moduleDigest", toJson u.moduleDigest),
    ("own", Json.arr <| u.own.foldl (init := #[]) fun (a : Array Json) n d =>
      a.push (Json.arr #[ModuleUsage.nameToJson n, toJson d])),
    ("provides", Json.arr #[names u.provides.1, names u.provides.2]),
    ("providesDigest", toJson u.providesDigest),
    ("specKeys", Json.arr (u.specKeys.map fun (d, n) => Json.arr #[toJson d, ModuleUsage.nameToJson n]))]

/-- The format version of Lake's `.usekey` sidecar; Lake reads a key of any other version as absent. -/
def usekeyVersion : Nat := 16

/-- A module's `.usekey` sidecar: what Lake saw of the module's build when Lean wrote its `.usage`, and the parts of
that `.usage` its importers read. -/
structure UsekeySidecar where
  localHash : Hash
  /-- The digest of the bytes of the module's `.usage` (`ModuleUsage.Digest.ofBytes`) the key was written from: the
  module's own check takes the key first and accepts only that `.usage`. -/
  usage : ModuleUsage.Digest
  /-- The `contentHash` of the module's own `.olean` when the key was written. -/
  olean : ModuleUsage.Digest
  /-- `modsysHash` of the module's import closure. -/
  modsys : ModuleUsage.Digest
  /-- `closureHash` of the module's direct imports. -/
  closure : ModuleUsage.Digest
  /-- For each workspace `extra` module of the `.usage`: the `contentHash` of its `.olean` and its
  `moduleDigest`. -/
  extra : NameMap (ModuleUsage.Digest × ModuleUsage.Digest)
  /-- What importers read of the `.usage` the key was written from (`UsageSidecar.importerJson`), so that an importer
  reads the key alone: `olean` binds these fields to the module's `.olean` as `usage` binds the `.usage`. -/
  importer : UsageImport
  /--
  Set when a kept-module check accepted the module's `.olean` for imports other than those Lean
  compiled it against (`acceptKept`): the digests of its `.usage`, and of `importer`, their copy, describe the
  module's constants as they were then, and a constant they mention may have changed meaning since. The module's own
  check still reads the key; its importers do not trust its digests (`importUsage?`), none of them is
  skipped while it is kept, and none compiled meanwhile gets a key (`untrustedClosureModule?`).
  -/
  kept : Bool := false
  deriving TypeName

instance : FromJson UsekeySidecar where
  fromJson? j := do
    return {
      localHash := ← j.getObjValAs? Hash "local"
      usage := ← j.getObjValAs? ModuleUsage.Digest "usage"
      olean := ← j.getObjValAs? ModuleUsage.Digest "olean"
      modsys := ← j.getObjValAs? ModuleUsage.Digest "modsys"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      extra := ← nameDigestPairs (← j.getObjVal? "extra")
      importer := ← j.getObjValAs? UsageImport "importer"
      kept := (j.getObjValAs? Bool "kept").toOption.getD false
    }

/-- The closure of direct import `m` that the key's compile imported (`UsageImport.importedClosures`, sorted by
`Name.quickLt` as Lean writes it). -/
def UsekeySidecar.importedClosure? (key : UsekeySidecar) (m : Name) : Option ModuleUsage.Digest :=
  (key.importer.importedClosures.binSearch (m, ⟨0, 0⟩) (Name.quickLt ·.1 ·.1)).map (·.2)

/--
The bytes of the usage-cutoff sidecar at `path` with their digest and the stamp of the file they were read from, if
it stands for them (`Lean.ModuleUsage.readFileStamped`), or `none` if it does not exist or its bytes do not have the
digest `expected?` (the `.usage` a `.usekey` was written from). Fails if it exists but cannot be read.
-/
def readSidecarBytes? (path : FilePath) (expected? : Option ModuleUsage.Digest) :
    JobM (Option (ByteArray × ModuleUsage.Digest × Option ModuleUsage.FileStamp)) := do
  match (← ModuleUsage.readFileStamped path |>.toBaseIO) with
  | .ok (bytes, stamp?) =>
    let digest := ModuleUsage.Digest.ofBytes bytes
    return if expected?.any (· != digest) then none else some (bytes, digest, stamp?)
  | .error (.noFileOrDirectory ..) =>
    return none
  | .error e =>
    error s!"{path}: read failed: {e}"

/-- An entry of `BuildContext.sidecarCache`. -/
abbrev SidecarEntry := Option ModuleUsage.FileStamp × ModuleUsage.Digest × Dynamic

/-- The build's parse of the sidecar at `path`, with the digest of the contents it was parsed from and the file's
current stamp, if that stamp is the one recorded with it (`BuildContext.sidecarCache`). -/
def stampedSidecar? (path : FilePath) :
    JobM (Option (ModuleUsage.Digest × Dynamic × ModuleUsage.FileStamp)) := do
  let some stamp ← ModuleUsage.fileStamp path | return none
  let shard := (← getBuildContext).sidecarCache.get (hash path)
  let some (some recorded, digest, value) ← shard.atomically (return (← get).find? path) | return none
  return if recorded == stamp then some (digest, value, stamp) else none

/-- Parses the bytes of the usage-cutoff sidecar at `path`: `none` if it has another format version than `version`
(`Lean.ModuleUsage.usageVersion` for a `.usage`, `usekeyVersion` for a `.usekey`; another toolchain wrote it), or,
with a warning, if it is not valid, so that the module builds normally. -/
def parseUsageSidecar (α : Type) [FromJson α] (version : Nat) (path : FilePath) (bytes : ByteArray) :
    JobM (Option α) := do
  match parse with
  | .ok value => return value
  | .error e =>
    logWarning s!"{path}: {e}"
    return none
where
  parse : Except String (Option α) := do
    let some contents := String.fromUTF8? bytes | throw "not UTF-8"
    let j ← Json.parse contents
    let v ← j.getObjValAs? Nat "version"
    if v != version then return none
    some <$> fromJson? (α := α) j

/--
Reads a usage-cutoff sidecar, as `readUsageSidecar` does, with the stamp of the file its value stands for: the file's
current stamp when the build's parse is reused, else the stamp of the read if it stands for the bytes
(`Lean.ModuleUsage.readFileStamped`). No stamp if the file does not exist or the read's stamp does not stand.
-/
def readUsageSidecarStamped (α : Type) [FromJson α] [TypeName α] (version : Nat) (path : FilePath)
    (expected? : Option ModuleUsage.Digest := none) : JobM (Option α × Option ModuleUsage.FileStamp) := do
  if let some (digest, cached, stamp) ← stampedSidecar? path then
    if expected?.any (· != digest) then return (none, none)
    let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
    return (some value, some stamp)
  let some (bytes, digest, stamp?) ← readSidecarBytes? path expected? | return (none, none)
  (← getBuildContext).sidecarCache.get (hash path) |>.atomically do
    let entries ← getThe (PHashMap FilePath SidecarEntry)
    if let some (_, parsedFrom, cached) := entries.find? path then
      if parsedFrom == digest then
        let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
        modifyThe (PHashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, cached))
        return (some value, stamp?)
    let some value ← parseUsageSidecar α version path bytes | return (none, stamp?)
    modifyThe (PHashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, Dynamic.mk value))
    return (some value, stamp?)

/--
Reads a usage-cutoff sidecar. Returns `none` if it does not exist, has another format version
(`parseUsageSidecar`), or its bytes do not have the digest `expected?` (the `.usage` a `.usekey` was written
from). If it exists but is not valid, logs a warning and returns `none`, so the module builds normally. Reuses
the build's parse of the same contents (`BuildContext.sidecarCache`), without reading the file while its stamp is the
one recorded with that parse.
-/
def readUsageSidecar (α : Type) [FromJson α] [TypeName α] (version : Nat) (path : FilePath)
    (expected? : Option ModuleUsage.Digest := none) : JobM (Option α) :=
  return (← readUsageSidecarStamped α version path expected?).1

/--
Reads a module's own `.usage` as `readUsageSidecar` does, but parses it on every read and keeps no parse: only the
module's own checks read all of it, and its importers read its `.usekey` instead (`importUsage?`). Returns it with
the digest of its bytes.
-/
def readOwnUsage (path : FilePath) (expected? : Option ModuleUsage.Digest := none) :
    JobM (Option (UsageSidecar × ModuleUsage.Digest)) := do
  let some (bytes, digest, _) ← readSidecarBytes? path expected? | return none
  let some usage ← parseUsageSidecar UsageSidecar ModuleUsage.usageVersion path bytes | return none
  return some (usage, digest)

/-- A run of a `JobM` action on its own: the entries it logged, and its value or the position in those entries of the
error it threw. -/
public abbrev LoggedRun (β : Type) := Array LogEntry × Except Nat β

/-- Logs the entries of the run `r` and returns its value or throws its error, as running the action again would. -/
def replayRun (r : LoggedRun β) : JobM β := do
  let pos ← getLogPos
  for e in r.1 do logEntry e
  match r.2 with
  | .ok b => return b
  | .error i => throw (⟨pos.val + i⟩ : Log.Pos)

/-- A read of an importee that binds it (`readImportUsage?`), with what it logged. -/
public abbrev ImportRead := LoggedRun (Option (FilePath × UsageImport))

/-- A read of an importee's sidecars (`readImportSidecars?`) with its `.olean`, and what it logged: the bindings of the
importee with `kept` and without it (`readImportUsage?`) both take it, so that a decision reads each importee's
sidecars once. -/
public abbrev SidecarRead := LoggedRun (Option (FilePath × Option (Option ModuleUsage.Digest × UsageImport × Bool)))

/--
What a decision's read of an importee found (`readImports`), kept for the build's later decisions
(`BuildContext.usageFacts`): the importer-side sidecar read (`readImportSidecars?`) of the importee whose `.olean` is
`olean` (a `module` file if `modsys`), from the bytes of `sidecar` (its `.usekey`, or a `module` file's `.usage`) under
`stamp`, and, if that read went on to hash the `.olean` (`readImportUsage?`), the `.olean`'s stamp and hash. Made only
from reads that logged nothing, threw nothing and stood for their bytes (settled stamps), so a later read of the same
files under the same stamps computes the same values and logs nothing. A decision takes it only if each of its files
has its stamp now (`bindFacts`). What every decision that takes it derives from these fields is computed once, when the
record is made (`ImportFact.make`): its files with their stamps, its binding of each kind and its `.usage` path.
-/
public structure ImportFact where
  olean : FilePath
  modsys : Bool
  sidecar : FilePath
  stamp : ModuleUsage.FileStamp
  read? : Option (Option ModuleUsage.Digest × UsageImport × Bool)
  olean? : Option (ModuleUsage.FileStamp × ModuleUsage.Digest)
  /-- When a check of this build last saw every file of the record with the recorded stamp (`observedSince`). -/
  observed : ModuleUsage.ObservedAt
  /-- The files of the record with the stamps it was read under: `sidecar`, and the `.olean` if `olean?` is some. -/
  files : Array (FilePath × ModuleUsage.FileStamp)
  /-- The binding with `kept` that `readImportUsage?` computes from `read?` (`ImportFact.bindingOf`). -/
  keptBinding : Option (Option (FilePath × UsageImport))
  /-- The binding without `kept`, likewise. -/
  plainBinding : Option (Option (FilePath × UsageImport))
  /-- The importee's `.usage` (`olean` with the extension `usage`), whose view a binding without `kept` freezes. -/
  usageFile : FilePath
  deriving TypeName

/-- The hashes of a `module` file's artifacts (`paths`, its `ImportArtifacts.toArrays` flattened, its `.olean` first)
that a decision's `modsysHash` read, each with the stamp it was read under (`files` pairs the two), kept for the
build's later decisions as `ImportFact`s are. -/
public structure ArtsFact where
  paths : Array FilePath
  stamps : Array ModuleUsage.FileStamp
  digests : Array ModuleUsage.Digest
  files : Array (FilePath × ModuleUsage.FileStamp) := paths.zip stamps
  /-- As `ImportFact.observed`. -/
  observed : ModuleUsage.ObservedAt
  deriving TypeName

/-- What a module's import data gives its importers, constant for the build (`BuildContext.usageFacts`): its
artifacts at the private level (`ModuleMetaExportInfo.allArts`), its imports that are workspace modules, the names of
the others, and whether its name is a workspace module (`findModule?`). -/
public structure ModuleCell where
  allArts : ImportArtifacts
  children : Array Module
  outside : Array Name
  findable : Bool
  deriving TypeName

/-- A module of a decision's closure (`importArts`), as every closure-wide check of the decision walks it
(`ClosureView`): its artifacts, its cell (`ModuleCell`) if the build had one when the view was made, whether it is a
workspace module (`findModule?`: its cell's answer, else `findModule?`'s), and, if it is not a `module` file, its
position among those (`ClosureView.keyed`). -/
public structure ClosureEntry where
  name : Name
  arts : ImportArtifacts
  cell? : Option ModuleCell
  findable : Bool
  keyed? : Option Nat

/-- A decision's closure (`importArts`) in its order, as every closure-wide check of the decision walks it: its
modules (`entries`), the names of those that are not `module` files (`keyed`: `importUsage?` reads their fields from
their `.usekey`) and the names of the others (`modsys`). The closure, the build's cells and `findModule?` do not
change during a build, so a decision makes it once (`ContentHashes.view`). -/
public structure ClosureView where
  entries : Array ClosureEntry
  keyed : Array Name
  modsys : Array Name

/-- A decision's bindings of one kind (`kept`, `ContentHashes.reads`) of the keyed modules of its view
(`ClosureView.keyed`), in order (`boundKeyed`): a check reads them only through `KeyedBindings.usage?` and
`KeyedBindings.now`, which take the kind from here. -/
public structure KeyedBindings where
  kept : Bool
  bound : Array (Option ImportRead)

/-- What a decision keeps of its closure (`ContentHashes.view`): the closure it describes (`importArts`, by identity),
its view, and for each kind (`kept` and not) the bindings of the view's `keyed` modules, once they were all bound
(`boundKeyed`). -/
public structure ViewCache where
  importArts : NameMap ImportArtifacts
  view : ClosureView
  kept? : Option KeyedBindings := none
  plain? : Option KeyedBindings := none

/--
What one module's decision before its build has read: its same-tree check (`Module.usageVerdict` of its own
outputs) and the check of each cached compile the usage index offers (`Module.restoreFromUsageIndex?`), so that the
decision reads each file once and every `importUsage?` binding in it, in every candidate's check, is to the same
bytes, also in the checks' parallel tasks (`parallelRuns`), which share it. Another module's decision, and
`Module.writeUsekey` after the module's own compile, never reuse it: another workspace's build can rebuild a shared
dependency between two decisions. Across decisions, a file's hash is reused only while its stamp shows its bytes
unchanged (`BuildContext.fileDigests`), and a closure module's records only while each of their files has the stamp
they were read under (`BuildContext.usageFacts`, `bindFacts`). What a build keeps across modules, its views of
importees (`UsageView`), is frozen at their first read and may be stale: only the usage index's pre-filter reads them
(`usagePrefilter`), and it only rejects, so a stale view can cost a miss but never a restore, since the check that
accepts reads the files again.

The file hashes are split into 256 shards by the path's hash (`Shards`): the tasks hash about every file of the
closure, and one mutex for all of them is contended. A shard is persistent, because the tasks share it:
an insert into a hash map that other threads can reach copies the whole map.
-/
public structure ContentHashes where
  /-- Each file's hash, with the stamp it was read under if that stood for the bytes. -/
  shards : Shards 256 (PHashMap FilePath (ModuleUsage.Digest × Option ModuleUsage.FileStamp))
  /-- The read of each importee that binds it (`importUsage?`). -/
  imports : IO.Ref (Std.HashMap Name ImportRead)
  /-- The read of each importee by a read that accepts a kept module's key (`importUsage?` with `kept`). -/
  keptImports : IO.Ref (Std.HashMap Name ImportRead)
  /-- The read of each importee's sidecars that both of its bindings take (`readImports`), with the stamp of the
  sidecar its value stands for. -/
  sidecarReads : IO.Ref (Std.HashMap Name (SidecarRead × Option ModuleUsage.FileStamp))
  /-- The importees the decision took from the build's earlier reads (`bindFacts`), for both of their bindings. -/
  facts : IO.Ref (Std.HashMap Name ImportFact)
  /-- The `module` files whose artifact hashes the decision took from the build's earlier reads (`bindArts`). -/
  arts : IO.Ref (Std.HashMap Name ArtsFact)
  /-- The hash of each file the decision took from those reads: an importee's `.olean`, a `module` file's artifacts.
  `ContentHashes.find?` prefers it. A path can also be in `shards` when two parallel passes of one decision raced to
  bind it; both digests then stood for the same bytes, and later readers take this one. -/
  taken : IO.Ref (Std.HashMap FilePath ModuleUsage.Digest)
  /-- The decision's `closureHash` with `kept` and no `importedClosures?`, once computed: it folds bound reads, so it
  is the same for every check of the decision, which the usage index's pre-filter uses (`usagePrefilter`). -/
  keptClosure : IO.Ref (Option (Option ModuleUsage.Digest))
  /-- A direct import whose closure the decision found changed, with its bound closure (`changedDirectImport?`): the
  pre-filter rejects a candidate whose key records another closure for it (`usagePrefilter`). -/
  changedImport : IO.Ref (Option (Name × Option ModuleUsage.Digest))
  /-- The decision's view of its closure and its bindings of the view's modules (`ViewCache`), once made
  (`ContentHashes.closureView`, `boundKeyed`). -/
  view : IO.Ref (Option ViewCache)
  /-- The decision's start (`Lean.ModuleUsage.monoNow`): it takes a record only after each of its files was seen with
  the recorded stamp after this (`observedSince`). -/
  t0 : UInt64

/-- An empty `ContentHashes`, for one decision. -/
public def ContentHashes.new : BaseIO ContentHashes :=
  return {
    shards := ← Shards.new 256 {}
    imports := ← IO.mkRef {}
    keptImports := ← IO.mkRef {}
    sidecarReads := ← IO.mkRef {}
    facts := ← IO.mkRef {}
    arts := ← IO.mkRef {}
    taken := ← IO.mkRef {}
    keptClosure := ← IO.mkRef none
    changedImport := ← IO.mkRef none
    view := ← IO.mkRef none
    t0 := ← ModuleUsage.monoNow
  }

/-- The hash the decision took or recorded for `file`, if any, with the stamp it was read under if the decision read
it (`ContentHashes.shards`) and that stood for the bytes. -/
def ContentHashes.findStamped? (hashes : ContentHashes) (file : FilePath) :
    BaseIO (Option (ModuleUsage.Digest × Option ModuleUsage.FileStamp)) := do
  if let some d := (← hashes.taken.get)[file]? then return some (d, none)
  (hashes.shards.get (Hashable.hash file)).atomically (return (← get).find? file)

/-- The hash the decision took or recorded for `file`, if any. -/
public def ContentHashes.find? (hashes : ContentHashes) (file : FilePath) : BaseIO (Option ModuleUsage.Digest) :=
  return (← hashes.findStamped? file).map (·.1)

/--
Records `hash` for `file`, read under `stamp?`, unless the decision took or recorded a hash for it first, and returns
the one it holds. A path has one shard, and the first insert under that shard's mutex wins, so every task of the
decision gets one hash for each path.
-/
public def ContentHashes.record (hashes : ContentHashes) (file : FilePath) (hash : ModuleUsage.Digest)
    (stamp? : Option ModuleUsage.FileStamp) : BaseIO (ModuleUsage.Digest × Option ModuleUsage.FileStamp) := do
  if let some d := (← hashes.taken.get)[file]? then return (d, none)
  (hashes.shards.get (Hashable.hash file)).atomically <| modifyGet fun all => match all.find? file with
    | some first => (first, all)
    | none => ((hash, stamp?), all.insert file (hash, stamp?))

/-- Appends a record of `file`'s digest under `stamp` to the workspace's stamped digest log (`DigestLogState`), one
`write` per record; after a failure to open it, the build appends nothing more. -/
def appendDigestLog (log : DigestLogState) (file : FilePath) (stamp : ModuleUsage.FileStamp)
    (digest : ModuleUsage.Digest) : BaseIO Unit := do
  let some path := log.file? | return
  -- after the read, which can write the log again (`loadDigestLog`)
  discard <| IO.wait log.loaded
  log.handle.atomically do
    let h? ← match (← get) with
      | some h? => pure h?
      | none =>
        let h? := (← (IO.FS.Handle.mk path .append).toBaseIO).toOption
        set (some h?)
        pure h?
    let some h := h? | return
    if (← (do h.write (DigestLog.encode file stamp digest); h.flush : IO Unit).toBaseIO) matches .error _ then
      set (some (none : Option IO.FS.Handle))

/--
The hash of `file`'s current bytes (`Lean.ModuleUsage.fileDigest`, 128 bits), never read from a
`.hash` file: an `.olean` rewritten behind Lake's back (e.g., by `lean -o`) keeps its old `.hash`,
and a usage-cutoff decision must see the new bytes. Taken from an earlier decision of the build, or from the
workspace's stamped digest log that earlier Lake processes wrote (`BuildContext.digestLog`), only if the file's stamp
(`Lean.ModuleUsage.fileStamp`) is the one recorded when those bytes were read (`BuildContext.fileDigests`). A hash
computed here under a settled stamp goes to the build's memo, and to the log only if the stamp's file system sets
status-change times itself (`Lean.ModuleUsage.stampsFine`, with a nonzero nanosecond field): on others (NFS, FUSE such
as sshfs, which copies the modification time) a stamp can stay while the bytes change, or look older than the server's
file, across processes.
-/
def stampedDigestStamped (file : FilePath) : JobM (ModuleUsage.Digest × Option ModuleUsage.FileStamp) := do
  let ctx ← getBuildContext
  let memo := ctx.fileDigests.get (Hashable.hash file)
  if let some stamp ← ModuleUsage.fileStamp file then
    if let some (recorded, hash) ← memo.atomically (return (← get).find? file) then
      if recorded == stamp then return (hash, some stamp)
    if let some (recorded, hash) := ctx.digestLog.loaded.get[file]? then
      if recorded == stamp then
        memo.atomically (modify (·.insert file (stamp, hash)))
        return (hash, some stamp)
  let (hash, stamp?) ← ModuleUsage.fileDigestStamped file
  if let some stamp := stamp? then
    memo.atomically (modify (·.insert file (stamp, hash)))
    if ctx.digestLog.file?.isSome && stamp.ctimeNsec != 0 then
      if (← ModuleUsage.stampsFine file) then appendDigestLog ctx.digestLog file stamp hash
  return (hash, stamp?)

@[inherit_doc stampedDigestStamped]
def stampedDigest (file : FilePath) : JobM ModuleUsage.Digest :=
  return (← stampedDigestStamped file).1

/--
The hash of `file`'s bytes (`stampedDigest`) for one decision (`hashes`): the one the decision took from the build's
earlier reads (`ContentHashes.taken`), else the first one a task of the decision records (`ContentHashes.record`),
with the stamp it was read under if that stood for the bytes.
-/
def contentHashStamped (hashes : ContentHashes) (file : FilePath) :
    JobM (ModuleUsage.Digest × Option ModuleUsage.FileStamp) := do
  if let some r ← hashes.findStamped? file then return r
  let (hash, stamp?) ← stampedDigestStamped file
  hashes.record file hash stamp?

@[inherit_doc contentHashStamped]
def contentHash (hashes : ContentHashes) (file : FilePath) : JobM ModuleUsage.Digest :=
  return (← contentHashStamped hashes file).1

/-- The fewest elements `parallelRuns` gives a task. -/
def minRunsPerTask : Nat := 64

/--
Runs `x`, a usage-cutoff check, key write or closure read before a compile (`usekeyBefore`), counted in
`BuildContext.usageCutoffInFlight`. The count goes down on every exit path: a return, an error, or the end of a
cancelled job's run.
-/
@[inline] def countedInFlight (x : JobM α) : JobM α := do
  let inFlight := (← getBuildContext).usageCutoffInFlight
  inFlight.modify (· + 1)
  try x finally inFlight.modify (· - 1)

/--
How many tasks one usage-cutoff check, key write or closure read before a compile may spawn for its reads:
`LAKE_USAGE_CUTOFF_READ_TASKS` if set (`Lake.Env.usageCutoffReadTasks?`), else twice the hardware threads shared by
those that run now (`BuildContext.usageCutoffInFlight`). At least 1, so that a slice is never empty and the count of
slices is never a division by zero.
-/
def usageCutoffReadTasks : JobM Nat := do
  if let some n := (← getLakeEnv).usageCutoffReadTasks? then return max 1 n
  let threads := 2 * max 1 (System.Platform.Internal.getHardwareConcurrency ()).toNat
  return max 1 (threads / max 1 (← (← getBuildContext).usageCutoffInFlight.get))

/-- Runs `x` on its own: the entries it logged, and its value or the position in those entries of the error it threw
(`LoggedRun`), which `replayRun` logs and returns or throws. -/
def loggedRun (x : JobM β) : JobM (LoggedRun β) :=
  JobM.ofFn fun fetch pkg? stack store ctx s => do
    return .ok (match ← x.toFn fetch pkg? stack store ctx {} with
      | .ok b s' => (s'.log.entries, .ok b)
      | .error e s' => (s'.log.entries, .error e.val)) s

/--
Runs `f` on each element of `xs` on its own (`LoggedRun`), so that the caller replays the runs it needs, in order
(`replayRun`). Up to `usageCutoffReadTasks` tasks take slices of `xs`; with one, the runs are serial.

A check alone in a build, or one of a few, is on the build's critical path, and its reads in tasks use idle cores. A
round of a large workspace runs hundreds of checks at once, each its own job, so the reads already use every core,
and a check's own tasks only add traffic on the Lean runtime's task manager and on Lake's build-wide maps. Measured on
the Linux tree on 96 cores: a round that checks 13,000 modules takes 100-125 s of wall time with serial reads against
125-143 s with a task per 64 modules, and a round that rebuilds 1-3 modules 23-31 s serial against 13-17 s.
-/
def parallelRuns (xs : Array α) (f : α → JobM β) : JobM (Array (LoggedRun β)) := do
  let tasks ← usageCutoffReadTasks
  JobM.ofFn fun fetch pkg? stack store ctx s => do
    let run (x : α) : BaseIO (LoggedRun β) := do
      return match ← (f x).toFn fetch pkg? stack store ctx {} with
        | .ok b s' => (s'.log.entries, .ok b)
        | .error e s' => (s'.log.entries, .error e.val)
    let size := max minRunsPerTask ((xs.size + tasks - 1) / tasks)
    if xs.size ≤ size then
      return .ok (← xs.mapM run) s
    let chunks ← (Array.range ((xs.size + size - 1) / size)).mapM fun i => BaseIO.asTask do
      (xs.extract (i * size) ((i + 1) * size)).mapM run
    let mut runs := Array.mkEmpty xs.size
    for chunk in chunks do
      runs := runs ++ (← IO.wait chunk)
    return .ok runs s

/--
`f` of each element of `xs`, in order, for reads that log nothing and throw nothing: in up to `usageCutoffReadTasks`
tasks that take slices of `xs`, as `parallelRuns` slices, but with no `JobM` run per element.
-/
def parallelMap (xs : Array α) (f : α → BaseIO β) : JobM (Array β) := do
  let tasks ← usageCutoffReadTasks
  let size := max minRunsPerTask ((xs.size + tasks - 1) / tasks)
  if xs.size ≤ size then return ← xs.mapM fun x => f x
  let chunks ← (Array.range ((xs.size + size - 1) / size)).mapM fun i => BaseIO.asTask do
    (xs.extract (i * size) ((i + 1) * size)).mapM f
  let mut out := Array.mkEmpty xs.size
  for chunk in chunks do
    out := out ++ (← IO.wait chunk)
  return out

/-- The build's reads of closures (`BuildContext.usageFacts`) as they are now: a pass of a decision takes one snapshot
and looks its records up in it without a lock. -/
public def usageFactsSnapshot [Monad m] [MonadBuild m] [MonadLiftT BaseIO m] : m UsageFacts := do
  let ctx ← getBuildContext
  let s ← (ctx.usageFacts.atomically get : BaseIO UsageFacts)
  return s

@[inline] def UsageFacts.importFact? (s : UsageFacts) (m : Name) : Option ImportFact :=
  (s.imports.find? m).bind (·.get? ImportFact)

@[inline] def UsageFacts.artsFact? (s : UsageFacts) (m : Name) (paths : Nat) : Option ArtsFact :=
  (s.arts.find? (m, paths)).bind (·.get? ArtsFact)

@[inline] public def UsageFacts.cell? (s : UsageFacts) (m : Name) : Option ModuleCell :=
  (s.cells.find? m).bind (·.get? ModuleCell)

/-- What a pass read that the build's later passes may take (`publishFacts`), and how many records it took from
earlier reads or read again. -/
public structure FactBatch where
  imports : Array (Name × ImportFact) := #[]
  arts : Array ((Name × Nat) × ArtsFact) := #[]
  cells : Array (Name × ModuleCell) := #[]
  frozen : Array FilePath := #[]
  taken : Nat := 0
  read : Nat := 0
  artsTaken : Nat := 0
  artsRead : Nat := 0

/-- Adds `b` to the build's reads (`BuildContext.usageFacts`) in one update: a record replaces the one it has for the
same module, whatever file state each describes, since a decision takes a record only after it checked each file's
stamp. -/
public def publishFacts [Monad m] [MonadBuild m] [MonadLiftT BaseIO m] (b : FactBatch) : m Unit := do
  if b.imports.isEmpty && b.arts.isEmpty && b.cells.isEmpty && b.frozen.isEmpty &&
      b.taken + b.read + b.artsTaken + b.artsRead == 0 then
    return
  let ctx ← getBuildContext
  (ctx.usageFacts.atomically <| modify fun s => { s with
    imports := b.imports.foldl (fun m (k, v) => m.insert k (Dynamic.mk v)) s.imports
    arts := b.arts.foldl (fun m (k, v) => m.insert k (Dynamic.mk v)) s.arts
    cells := b.cells.foldl (fun m (k, v) => m.insert k (Dynamic.mk v)) s.cells
    frozen := b.frozen.foldl (fun m p => m.insert p ()) s.frozen
    taken := s.taken + b.taken, read := s.read + b.read
    artsTaken := s.artsTaken + b.artsTaken, artsRead := s.artsRead + b.artsRead
  } : BaseIO Unit)

/-- Whether the file at `path` has the stamp `stamp` now, all of its fields (`Lean.ModuleUsage.FileStamp`'s `BEq`). -/
def stampIs (path : FilePath) (stamp : ModuleUsage.FileStamp) : BaseIO Bool := do
  match ← (ModuleUsage.fileStamp path).toBaseIO with
  | .ok (some s) => return s == stamp
  | _ => return false

/--
Whether each file of `files`, a record's files with the stamps it was read under, was seen with its stamp after `t0`,
the start of the decision that asks (`ContentHashes.t0`). Either a check of this build saw them all in one sweep and
then raised `observed` to a reading it took before that sweep, and that reading is later than `t0`
(`Lean.ModuleUsage.ObservedAt.after`: acquire order, strictly greater); or the caller sees them all now, after which
`observed` is raised to `t`, a reading the caller took before its first stat (`ObservedAt.raise`: release order, after
the whole sweep matched). A reading of another process or an earlier build is never in `observed`, which only this
build's checks make and raise.
-/
public def observedSince (observed : ModuleUsage.ObservedAt) (files : Array (FilePath × ModuleUsage.FileStamp))
    (t0 t : UInt64) : BaseIO Bool := do
  if ← observed.after t0 then return true
  for (p, s) in files do
    unless ← stampIs p s do return false
  observed.raise t
  return true

/--
Takes the artifact hashes of each `module` file of the closure (`importArts`) that the decision has not hashed from the
build's earlier reads (`ArtsFact`): one read of the same paths each of whose files was seen with the recorded stamp
after the decision started (`observedSince`). The decision then holds those hashes (`ContentHashes.arts`,
`ContentHashes.taken`) for every later `contentHash` of them. A module of which the decision hashed a file already keeps
the hashes it read. Returns how many modules it took.
-/
def bindArts (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) : JobM Nat := do
  let bound ← hashes.arts.get
  let snap ← usageFactsSnapshot
  let mut cands := #[]
  for (m, arts) in importArts do
    unless arts.oleanServer?.isSome do continue
    if bound.contains m then continue
    let paths := arts.toArrays.flatten
    let some f := snap.artsFact? m paths.size | continue
    unless f.paths == paths do continue
    if ← paths.anyM fun p => return (← hashes.findStamped? p).isSome then continue
    cands := cands.push (m, f)
  if cands.isEmpty then return 0
  -- before the first stat of the pass
  let t ← ModuleUsage.monoNow
  let ok ← parallelMap cands fun (_, f) => observedSince f.observed f.files hashes.t0 t
  let mut taken := #[]
  let mut took := #[]
  for c in cands, b in ok do
    if b then
      took := took.push c
      for p in c.2.paths, d in c.2.digests do
        taken := taken.push (p, d)
  if took.isEmpty then return 0
  -- With `-v` only: the records this pass took, which the usage-cutoff tests match
  if ← getIsVerbose then
    for (m, _) in took do logVerbose s!"usage cutoff: fact arts taken {m}"
  hashes.arts.modify fun all => took.foldl (fun a (m, f) => a.insert m f) all
  hashes.taken.modify fun all => taken.foldl (fun a (p, d) => a.insert p d) all
  return took.size

/--
A hash of every artifact of every module-system module in an import closure, with its name.
Module-system files carry no meaning digests (Lean writes them at the private level only), so a
non-module importer's digest chain cannot see through one; its skip requires these bytes unchanged
(`contentHash`). A module's hashes come from one earlier read of the build whose files all have their stamps now
(`bindArts`), or else from `contentHash` of each file; such a read, if each of its stamps stood for its bytes, is
published for later decisions (`publishFacts`).
-/
public def modsysHash (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) :
    JobM ModuleUsage.Digest := do
  let artsTaken ← bindArts hashes importArts
  let bound ← hashes.arts.get
  let mut e : ModuleUsage.Enc := {}
  let mut read := #[]
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then
      let paths := arts.toArrays.flatten
      e := e.name m |>.nat paths.size
      if let some f := bound[m]? then
        for d in f.digests do
          e := e.digest d
      else
        -- a module this decision hashed already gives the same hashes again, and was published then
        let fresh := (← paths.anyM fun p => return (← hashes.findStamped? p).isSome) == false
        let mut stamps := #[]
        let mut digests := #[]
        for path in paths do
          let (d, s?) ← contentHashStamped hashes path
          e := e.digest d
          digests := digests.push d
          stamps := stamps.push s?
        if fresh then read := read.push (m, paths, stamps, digests)
  let mut arts := #[]
  for (m, paths, stamps, digests) in read do
    let some stamps := stamps.mapM id | continue
    arts := arts.push ((m, paths.size), ({ paths, stamps, digests, observed := ← ModuleUsage.ObservedAt.new } : ArtsFact))
  publishFacts { artsTaken, artsRead := read.size, arts }
  return e.finish

/--
Reads the sidecars of the importee whose `.olean` is `olean` as `importUsage?` does, without hashing the `.olean`:
for a module-system file (`modsys`), its `.usage`; otherwise its `.usekey` alone, whose `importer` holds the fields an
importer reads (`UsekeySidecar.importer`), with the `olean` hash the key records and whether a kept-module check kept
the module (`UsekeySidecar.kept`). `none` if there is no such sidecar of this format version. With the stamp of the
sidecar the value stands for (`readUsageSidecarStamped`).
-/
def readImportSidecarsStamped? (olean : FilePath) (modsys : Bool) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport × Bool) × Option ModuleUsage.FileStamp) := do
  if modsys then
    let (usage?, stamp?) ← readUsageSidecarStamped UsageImport ModuleUsage.usageVersion (olean.withExtension "usage")
    return (usage?.map (none, ·, false), stamp?)
  let (key?, stamp?) ← readUsageSidecarStamped UsekeySidecar usekeyVersion (olean.withExtension "usekey")
  let some key := key? | return (none, stamp?)
  return (some (some key.olean, key.importer, key.kept), stamp?)

@[inherit_doc readImportSidecarsStamped?]
def readImportSidecars? (olean : FilePath) (modsys : Bool) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport × Bool)) :=
  return (← readImportSidecarsStamped? olean modsys).1

/-- What a read with `kept` or without it (`importUsage?`) takes from `read?` (`readImportSidecars?`): without `kept`,
nothing of a kept module's key. -/
def importSidecars (read? : Option (Option ModuleUsage.Digest × UsageImport × Bool)) (kept : Bool) :
    Option (Option ModuleUsage.Digest × UsageImport) :=
  read?.bind fun (keyOlean?, imp, keptKey) => if keptKey && !kept then none else some (keyOlean?, imp)

/-- `readImportSidecars?` of the importee whose `.olean` is `olean`, as a read with `kept` or without it takes it
(`importSidecars`). -/
def readImportSidecars (olean : FilePath) (modsys : Bool) (kept := false) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport)) :=
  return importSidecars (← readImportSidecars? olean modsys) kept

/--
What a build first read of an imported module's sidecars (`readImportSidecars`), kept in `BuildContext.usageViews`
under the module's `.usage`. Every importer-side read without `kept` fills it, if it is empty: `importUsage?`, in any
module's check or `Module.writeUsekey`, and the usage index's pre-filter (`usagePrefilter`). A module's reads of its
own sidecars do not. In a build no other process writes to, an importee's view is what every check of the build reads
of it, since a module is checked after its whole closure is done, and built at most once per build.
-/
structure UsageView where
  read? : Option (Option ModuleUsage.Digest × UsageImport)
  deriving TypeName

/--
The build's view of the importee whose `.usage` is `usageFile` (`UsageView`), made `read?` if it has none: returns
it, and whether it was made now. A view is never replaced.
-/
def freezeUsageView (usageFile : FilePath) (read? : Option (Option ModuleUsage.Digest × UsageImport)) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport) × Bool) := do
  ((← getBuildContext).usageViews.get (hash usageFile)).atomically do
    if let some view := (← getThe (Lean.PHashMap FilePath Dynamic)).find? usageFile then
      let some view := view.get? UsageView | error s!"{usageFile}: cached usage view has the wrong type"
      return (view.read?, false)
    modifyThe (Lean.PHashMap FilePath Dynamic) (·.insert usageFile (Dynamic.mk (UsageView.mk read?)))
    return (read?, true)

/--
The build's view of importee `m` (`UsageView`), read now if the build has none, and whether it was read now. `none`
if `m` has no `.olean` in `importArts`.
-/
public def usageView? (importArts : NameMap ImportArtifacts) (m : Name) :
    JobM (Option (Option ModuleUsage.Digest × UsageImport) × Bool) := do
  let some arts := importArts.find? m | return (none, false)
  let some olean := arts.olean? | return (none, false)
  let usageFile := olean.withExtension "usage"
  let frozen? ← ((← getBuildContext).usageViews.get (hash usageFile)).atomically do
    return (← getThe (Lean.PHashMap FilePath Dynamic)).find? usageFile
  if let some view := frozen? then
    let some view := view.get? UsageView | error s!"{usageFile}: cached usage view has the wrong type"
    return (view.read?, false)
  freezeUsageView usageFile (← readImportSidecars olean arts.oleanServer?.isSome)

/-- The `.olean` of importee `m` in `importArts` and what a read of its sidecars found (`readImportSidecars?`), or
`none` if `importArts` has no `.olean` for it: what both bindings of `m` take (`readImportUsage?`). With the stamp of
the sidecar the read stands for. -/
def readImportSidecarsOf? (importArts : NameMap ImportArtifacts) (m : Name) :
    JobM (Option (FilePath × Option (Option ModuleUsage.Digest × UsageImport × Bool)) ×
      Option ModuleUsage.FileStamp) := do
  let some arts := importArts.find? m | return (none, none)
  let some olean := arts.olean? | return (none, none)
  let (read?, stamp?) ← readImportSidecarsStamped? olean arts.oleanServer?.isSome
  return (some (olean, read?), stamp?)

/--
The `.olean` of an importee and what its importers read of its `.usage` (`UsageImport`), from `read`, the decision's
read of its sidecars (`readImportSidecarsOf?`, whose log this replays), or `none` if nothing shows that those fields
describe that `.olean`. Unless the importee is a module-system file, they come from its `.usekey` alone
(`UsekeySidecar.importer`, copied from the `.usage` the key was written from), and only if the key records the
`.olean`'s current bytes (`UsekeySidecar.olean`, `contentHash`). The key is one file, read once per decision for both
bindings, so the check sees one state of the module or none even while another workspace rebuilds it. An `.olean`
rewritten behind Lake's back (e.g., by `lean -o` of other contents, which leaves the old sidecars and `.hash`) is not
checked against the old key either, and a `.usage` beside the key is never read: one from another compile changes
nothing. A module-system file's `.usage` is read instead, its bytes pinned by `modsysHash`.

Nor is the key of a module that a kept-module check kept (`UsekeySidecar.kept`) taken, unless `kept`: its meaning
digests, and the table digests its recorded `closure` folds in (`Lean.ModuleUsage.closureDigest`), describe the
module's declarations as Lean compiled them, which the accept did not compile again. With `kept`, a reader takes from
it only what the unchanged `.olean` fixes: what the module provides (`UsageSidecar.resolvedUnchanged`,
`UsageSidecar.kernelDisjoint`), and its recorded closures as the ones before the accept, to tell whether an
importer's closure changed (`Module.usageVerdict`). No key is written and no module is skipped over a kept module's
digests (`untrustedClosureModule?`). Without `kept`, the build's view of the importee (`UsageView`) is what this
binding takes, if the build had none.

With the `.olean`'s hash and stamp, if the binding hashed it and the stamp stood for the bytes.
-/
def readImportUsage? (hashes : ContentHashes) (kept : Bool) (read : SidecarRead) :
    JobM (Option (FilePath × UsageImport) × Option (ModuleUsage.FileStamp × ModuleUsage.Digest)) := do
  let some (olean, read?) ← replayRun read | return (none, none)
  let read? := importSidecars read? kept
  unless kept do discard <| freezeUsageView (olean.withExtension "usage") read?
  let some (keyOlean?, imp) := read? | return (none, none)
  if let some keyOlean := keyOlean? then
    let (hash, stamp?) ← contentHashStamped hashes olean
    let olean? := stamp?.map (·, hash)
    unless keyOlean == hash do return (none, olean?)
    return (some (olean, imp), olean?)
  return (some (olean, imp), none)

/-- The reads of the decision's importees that `importUsage?` binds, with `kept` or without (`ContentHashes`). -/
@[inline] def ContentHashes.reads (hashes : ContentHashes) (kept : Bool) : IO.Ref (Std.HashMap Name ImportRead) :=
  if kept then hashes.keptImports else hashes.imports

/-- The binding with `kept` or without it that `readImportUsage?` computes from the read `read?` of the importee whose
`.olean` is `olean`, with the `.olean`'s stamp and hash `olean?` if that read hashed it, or `none` if the binding needs
that hash and `olean?` does not hold it. -/
def ImportFact.bindingOf (olean : FilePath) (read? : Option (Option ModuleUsage.Digest × UsageImport × Bool))
    (olean? : Option (ModuleUsage.FileStamp × ModuleUsage.Digest)) (kept : Bool) :
    Option (Option (FilePath × UsageImport)) :=
  match importSidecars read? kept with
  | none => some none
  | some (none, imp) => some (some (olean, imp))
  | some (some keyOlean, imp) => olean?.map fun (_, d) => if keyOlean == d then some (olean, imp) else none

/-- A new record (`ImportFact`) of the read `read?` of the importee whose `.olean` is `olean` from the bytes of
`sidecar` under `stamp`, with what every decision that takes it derives from those (`ImportFact.bindingOf` of each
kind, the files with their stamps, the `.usage` path), and an observation reading of 0 (`observedSince`). -/
public def ImportFact.make (olean : FilePath) (modsys : Bool) (sidecar : FilePath) (stamp : ModuleUsage.FileStamp)
    (read? : Option (Option ModuleUsage.Digest × UsageImport × Bool))
    (olean? : Option (ModuleUsage.FileStamp × ModuleUsage.Digest)) : BaseIO ImportFact :=
  return {
    olean, modsys, sidecar, stamp, read?, olean?
    observed := ← ModuleUsage.ObservedAt.new
    files := match olean? with
      | some (s, _) => #[(sidecar, stamp), (olean, s)]
      | none => #[(sidecar, stamp)]
    keptBinding := ImportFact.bindingOf olean read? olean? true
    plainBinding := ImportFact.bindingOf olean read? olean? false
    usageFile := olean.withExtension "usage"
  }

/-- `f`'s binding with `kept` or without it (`ImportFact.bindingOf`, as `ImportFact.make` computed it). -/
@[inline] public def ImportFact.project (f : ImportFact) (kept : Bool) : Option (Option (FilePath × UsageImport)) :=
  if kept then f.keptBinding else f.plainBinding

/--
Takes from the build's earlier reads (`BuildContext.usageFacts`) the record (`ImportFact`) of each module of `mods`,
which the decision has not read: one of the importee's `.olean` and kind in `importArts`, each of whose files was seen
with the recorded stamp after the decision started (`observedSince`: in a stat of this pass, or of another check of the
build that came after the decision's start), and whose `.olean` the decision has not hashed. A taken record serves both
bindings of its module in the decision (`ContentHashes.facts`), and its `.olean` hash every `contentHash` of that file
(`ContentHashes.taken`). The stamps are read in parallel (`parallelMap`). Returns the snapshot it looked in and how
many records it took.
-/
def bindFacts (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (mods : Array Name) :
    JobM (UsageFacts × Nat) := do
  let snap ← usageFactsSnapshot
  let mut cands := #[]
  for m in mods do
    let some arts := importArts.find? m | continue
    let some olean := arts.olean? | continue
    let some f := snap.importFact? m | continue
    unless f.olean == olean && f.modsys == arts.oleanServer?.isSome do continue
    if f.olean?.isSome then
      if (← hashes.findStamped? olean).isSome then continue
    cands := cands.push (m, f)
  if cands.isEmpty then return (snap, 0)
  -- before the first stat of the pass
  let t ← ModuleUsage.monoNow
  let ok ← parallelMap cands fun (_, f) => observedSince f.observed f.files hashes.t0 t
  let mut took := #[]
  let mut taken := #[]
  for c in cands, b in ok do
    if b then
      took := took.push c
      if let some (_, d) := c.2.olean? then taken := taken.push (c.2.olean, d)
  unless took.isEmpty do
    -- With `-v` only: the records this pass took, which the usage-cutoff tests match
    if ← getIsVerbose then
      for (m, _) in took do logVerbose s!"usage cutoff: fact import taken {m}"
    hashes.facts.modify fun all => took.foldl (fun a (m, f) => a.insert m f) all
    hashes.taken.modify fun all => taken.foldl (fun a (p, d) => a.insert p d) all
  return (snap, took.size)

/--
Binds (`readImportUsage?`, with `kept`) each module of `mods` that the decision has not bound so yet
(`ContentHashes.reads`), each with its log and error, which the step that binds the module replays (`importUsage?`).
A module is bound for both kinds from one source in a decision. Either the build's earlier read of it whose files all
have their stamps now (`bindFacts`), whose binding is what `readImportUsage?` computes from the same bytes, with no
log; or a read of its sidecars once per decision (`readImportSidecarsOf?`), whose other binding takes that read
(`ContentHashes.sidecarReads`), many in parallel (`parallelRuns`). A read of the second kind that logged nothing,
threw nothing and stood for its bytes is published for later decisions (`ImportFact`, `publishFacts`). A binding
without `kept` freezes the importee's view (`freezeUsageView`) as `readImportUsage?` does, unless the build's snapshot
shows the view exists.
-/
def readImports (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (mods : Array Name)
    (kept := false) : JobM Unit := do
  let reads := hashes.reads kept
  let known ← reads.get
  let mods := mods.filter (!known.contains ·)
  if mods.isEmpty then return
  let sidecars ← hashes.sidecarReads.get
  let had ← hashes.facts.get
  let (snap, taken) ← bindFacts hashes importArts (mods.filter fun m => !had.contains m && !sidecars.contains m)
  let facts ← hashes.facts.get
  let mut fast : Array (Name × ImportRead) := #[]
  let mut slow : Array Name := #[]
  let mut frozen : Array FilePath := #[]
  for m in mods do
    let some (f, b) := facts[m]?.bind fun f => (f, ·) <$> f.project kept
      | slow := slow.push m
    if kept then
      fast := fast.push (m, (#[], .ok b))
      continue
    let usageFile := f.usageFile
    if snap.frozen.contains usageFile then
      fast := fast.push (m, (#[], .ok b))
      continue
    let r ← loggedRun do
      discard <| freezeUsageView usageFile (importSidecars f.read? false)
      return b
    if r.1.isEmpty && r.2 matches .ok _ then frozen := frozen.push usageFile
    fast := fast.push (m, r)
  unless fast.isEmpty do
    reads.modify fun all => fast.foldl (fun a (m, r) => a.insert m r) all
  if slow.isEmpty then
    publishFacts { frozen, taken }
    return
  let runs ← parallelRuns slow fun m => do
    let (read, stamp?, fresh) ← match sidecars[m]? with
      | some (read, stamp?) => pure (read, stamp?, false)
      | none => match facts[m]? with
        | some f => pure (((#[], .ok (some (f.olean, f.read?))) : SidecarRead), some f.stamp, false)
        | none => do
          let r ← loggedRun (readImportSidecarsOf? importArts m)
          pure ((r.1, r.2.map (·.1)), r.2.toOption.bind (·.2), true)
    let (b, olean?) ← readImportUsage? hashes kept read
    return (if fresh then some (read, stamp?) else none, b, olean?, read, stamp?)
  reads.modify fun reads => Id.run do
    let mut reads := reads
    for m in slow, r in runs do
      reads := reads.insert m (r.1, r.2.map (·.2.1))
    return reads
  hashes.sidecarReads.modify fun all => Id.run do
    let mut all := all
    for m in slow, r in runs do
      if let .ok (some read, _) := r.2 then all := all.insert m read
    return all
  let mut imports : Array (Name × ImportFact) := #[]
  let mut read := 0
  for m in slow, r in runs do
    if r.2 matches .ok (some _, _) then read := read + 1
    unless r.1.isEmpty do continue
    let .ok (_, _, olean?, (#[], .ok (some (olean, read?))), some stamp) := r.2 | continue
    let modsys := (importArts.find? m).any (·.oleanServer?.isSome)
    let sidecar := olean.withExtension (if modsys then "usage" else "usekey")
    imports := imports.push (m, ← ImportFact.make olean modsys sidecar stamp read? olean?)
  publishFacts { imports, frozen, taken, read }

/--
`readImportUsage?` of `m`, read once per decision, and once with `kept` (`readImports`): a decision binds `m` once,
and once with `kept` (`ContentHashes.imports`, `ContentHashes.keptImports`). Logs what that read logged the first
time the decision binds `m`, and throws its error each time.
-/
def importUsage? (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (m : Name) (kept := false) :
    JobM (Option (FilePath × UsageImport)) := do
  let reads := hashes.reads kept
  unless (← reads.get).contains m do readImports hashes importArts #[m] (kept := kept)
  let some r := (← reads.get)[m]? | return none
  if !r.1.isEmpty && (r.2 matches .ok _) then
    reads.modify (·.insert m (#[], r.2))
  replayRun r

unsafe def sameClosureUnsafe (a b : NameMap ImportArtifacts) : Bool := ptrEq a b

/-- Whether `a` and `b` are one map object: a decision's view describes the closure it was made from, and is made again
for any other. Opaque: compiled code compares the pointers (`sameClosureUnsafe`), and nothing may be proved of it. -/
@[implemented_by sameClosureUnsafe] opaque sameClosure (a b : NameMap ImportArtifacts) : Bool

/-- The decision's view of its closure `importArts` (`ClosureView`): made from `importArts` and the build's cells
(`UsageFacts.cell?`, else `findModule?`) the first time a check of the decision asks, then kept
(`ContentHashes.view`). -/
def ContentHashes.closureView (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) : JobM ClosureView := do
  if let some c ← hashes.view.get then
    if sameClosure c.importArts importArts then return c.view
  let snap ← usageFactsSnapshot
  let mut entries := Array.emptyWithCapacity importArts.size
  let mut keyed := #[]
  let mut modsys := #[]
  for (m, arts) in importArts do
    let cell? := snap.cell? m
    let findable ← match cell? with
      | some c => pure c.findable
      | none => do pure (← findModule? m).isSome
    let keyed? := if arts.oleanServer?.isSome then none else some keyed.size
    entries := entries.push { name := m, arts, cell?, findable, keyed? }
    if arts.oleanServer?.isNone then keyed := keyed.push m else modsys := modsys.push m
  let view := { entries, keyed, modsys }
  hashes.view.set (some { importArts, view })
  return view

/--
The view of `importArts` with the decision's binding of each of its keyed modules (`ClosureView.keyed`, in order) with
`kept` or without (`ContentHashes.reads`): after `readImports` of them all, the first time a check of the decision asks
for that kind, then kept (`ContentHashes.view`). It holds what a snapshot of `ContentHashes.reads` taken then holds; a
check takes a binding through `KeyedBindings.usage?` or `KeyedBindings.now`, which go to the decision's map for one with
a log, as a snapshot of its own would.
-/
def boundKeyed (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (kept : Bool) :
    JobM (ClosureView × KeyedBindings) := do
  let view ← hashes.closureView importArts
  if let some c ← hashes.view.get then
    if let some b := if kept then c.kept? else c.plain? then return (view, b)
  readImports hashes importArts view.keyed (kept := kept)
  let reads ← (hashes.reads kept).get
  let b : KeyedBindings := { kept, bound := view.keyed.map (reads[·]?) }
  -- the closure view just made or checked is this closure's: `closureView` keeps only the last one it made
  hashes.view.modify (·.map fun c => if kept then { c with kept? := some b } else { c with plain? := some b })
  return (view, b)

/-- The binding of the view's entry `e` in `b` (`none` for a `module` file, which `b` does not hold). -/
@[inline] def KeyedBindings.get? (b : KeyedBindings) (e : ClosureEntry) : Option ImportRead :=
  match e.keyed? with
  | some k => b.bound[k]?.join
  | none => none

/-- `importUsage?` of the view's entry `e`, with `b`'s kind, from its binding in `b` when that binding logged nothing
and threw nothing: `importUsage?` then only returns it, and an entry with no log is never replaced. Otherwise
`importUsage?` itself, which replays the binding's log the first time a step of the decision meets it. -/
@[inline] def KeyedBindings.usage? (b : KeyedBindings) (hashes : ContentHashes) (importArts : NameMap ImportArtifacts)
    (e : ClosureEntry) : JobM (Option (FilePath × UsageImport)) := do
  if let some (log, .ok r) := b.get? e then
    if log.isEmpty then return r
  importUsage? hashes importArts e.name (kept := b.kept)

/-- The binding of the view's entry `e` with `b`'s kind that a snapshot of `ContentHashes.reads` taken now holds (none:
`(#[], .ok none)`): its binding in `b`, unless that holds a log, which a step may have replayed and dropped since
(`importUsage?`). -/
def KeyedBindings.now (b : KeyedBindings) (hashes : ContentHashes) (e : ClosureEntry) : BaseIO ImportRead := do
  if let some r := b.get? e then
    if r.1.isEmpty then return r
  return (← (hashes.reads b.kept).get)[e.name]?.getD (#[], .ok none)

/--
`Lean.ModuleUsage.specProviders` of the specialization-cache keys a module looked up (`lookups`, the first components
of `UsageSidecar.specLookups`) over the keys (`UsageImport.specKeys`) of its closure's non-module workspace modules,
which `specKeys? m` gives, or `none` if it gives none for one.
-/
def specProvidersIn (lookups : Array ModuleUsage.Digest) (importArts : NameMap ImportArtifacts)
    (specKeys? : Name → JobM (Option (Array (ModuleUsage.Digest × Name)))) :
    JobM (Option (Array (ModuleUsage.Digest × ModuleUsage.Digest))) := do
  let mut modules : Array (Name × Array (ModuleUsage.Digest × Name)) := #[]
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then continue
    let some keys ← specKeys? m | return none
    modules := modules.push (m, keys)
  return some (ModuleUsage.specProviders lookups modules)

/--
Whether every key the module looked up in the specialization cache (`UsageSidecar.specLookups`) has the same
providers in its closure as when Lean compiled it: the closure's non-module workspace modules that map the key, each
with the specialization it maps the key to, digested by the function Lean used (`Lean.ModuleUsage.specProviders`).
Each closure module's keys come from its binding without `kept` (`boundKeyed`, `importUsage?`), which binds them to
the module's current `.olean` in this check's `hashes`. An import that starts providing a key the module missed, stops
providing one it hit, or maps it elsewhere changes which specialization a fresh compile uses, so the module rebuilds. A
module-system module's keys are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.specProvidersUnchanged (usage : UsageSidecar) (hashes : ContentHashes)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  if usage.specLookups.isEmpty then return true
  let (view, bound) ← boundKeyed hashes importArts (kept := false)
  let mut modules : Array (Name × Array (ModuleUsage.Digest × Name)) := #[]
  for e in view.entries do
    if e.keyed?.isNone then continue
    let some (_, imp) ← bound.usage? hashes importArts e | return false
    modules := modules.push (e.name, imp.specKeys)
  return ModuleUsage.specProviders (usage.specLookups.map (·.1)) modules == usage.specLookups

/-- The direct workspace imports of the module, sorted by `Name.quickLt`, each once. -/
def directModules (presetup : ModulePreSetup) : Array Name :=
  presetup.directImports.filterMap (·.module?) |>.map (·.name) |>.qsort Name.quickLt |>.eraseReps

/--
The digest `closureHash` folds from the recorded `closure` digest of each direct workspace import, which
`closure? m` gives, with its name, or `none` if it gives none for one.
-/
def foldClosureHash (presetup : ModulePreSetup) (closure? : Name → JobM (Option ModuleUsage.Digest)) :
    JobM (Option ModuleUsage.Digest) := do
  let mods := directModules presetup
  let mut e := ({} : ModuleUsage.Enc).nat mods.size
  for m in mods do
    let some closure ← closure? m | return none
    e := e.name m |>.digest closure
  return some e.finish

/--
A digest of the recorded `closure` digest of each direct workspace import, with its name, or `none`
if `importUsage?` accepts nothing for one (with `kept`, it accepts a kept import's), or, given `importedClosures?`
(`UsageSidecar.importedClosures`), if one's `closure` is not the one the compile imported. A module's closure is its
direct imports plus their closures; a direct toolchain import is pinned by the source text and the Lean githash
(local trace). A module is replayed only if this digest is unchanged and every edge of its closure is current
(`closureEdgesCurrent`), so every workspace module's recorded closure digest is its current closure, and this digest
covers the importer's whole closure. A kept import's is the exception: its recorded closure is the one before the
accept, which folds in table digests of its own declarations as Lean compiled them. So with `kept` the digest only
tells whether the closure changed (`Module.usageVerdict`, which then decides at best `recheck`), and
`Module.writeUsekey` never takes it. The direct imports are read in parallel (`readImports`).
-/
def closureHash (hashes : ContentHashes) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts)
    (importedClosures? : Option (NameMap ModuleUsage.Digest) := none) (kept := false) :
    JobM (Option ModuleUsage.Digest) := do
  let memo? := if kept && importedClosures?.isNone then some hashes.keptClosure else none
  if let some memo := memo? then
    if let some closure ← memo.get then return closure
  readImports hashes importArts (directModules presetup) (kept := kept)
  let closure ← foldClosureHash presetup fun m => do
    let some (_, imp) ← importUsage? hashes importArts m (kept := kept) | return none
    if let some imported := importedClosures? then
      unless imported.find? m == some imp.closure do return none
    return some imp.closure
  if let some memo := memo? then memo.set (some closure)
  return closure

/--
A direct workspace import whose closure now is not the one the module's compile imported, as the module's key records
it (`UsekeySidecar.importer`, `UsageImport.importedClosures`), with its current closure (`none` if `importUsage?` with
`kept` accepts nothing for it), looked for only among the imports whose `.usekey` changed after `usekeyFile`, the
module's own; `none` if each of those has the closure the compile imported. The key's `closure` folds the imported
closures (`Module.writeUsekey`), so such an import shows that the closure `closureHash` with `kept` folds now is not
the key's: the verdict that reads every direct import would compile too. A root module that imports every module of a
workspace finds it among the few imports a round rebuilt, where `closureHash` reads every direct import. The
imports' stamps are read in parallel (`parallelRuns`); an import whose `.usekey` cannot be stamped is read.
-/
def changedDirectImport? (hashes : ContentHashes) (presetup : ModulePreSetup) (importArts : NameMap ImportArtifacts)
    (key : UsekeySidecar) (usekeyFile : FilePath) : JobM (Option (Name × Option ModuleUsage.Digest)) := do
  let some own ← ModuleUsage.fileStamp usekeyFile | return none
  let mods := directModules presetup
  let runs ← parallelRuns mods fun m => do
    let some olean := (importArts.find? m).bind (·.olean?) | return false
    let some s ← ModuleUsage.fileStamp (olean.withExtension "usekey") | return true
    return s.mtimeSec > own.mtimeSec || (s.mtimeSec == own.mtimeSec && s.mtimeNsec > own.mtimeNsec)
  for m in mods, r in runs do
    unless (← replayRun r) do continue
    let current := (← importUsage? hashes importArts m (kept := true)).map (·.2.closure)
    let recorded := key.importedClosure? m
    if current.isNone || current != recorded then
      return some (m, current)
  return none

/-- Whether `m`, a module of a closure, is a workspace module (`findModule?`): its cell's answer in `snap`
(`ModuleCell.findable`), which a build computes once per module, or else `findModule?`. -/
def closureFindable (snap : UsageFacts) (m : Name) : JobM Bool := do
  if let some c := snap.cell? m then return c.findable
  return (← findModule? m).isSome

/--
The first workspace module of the closure (`importArts`; module-system files aside, which `modsysHash` pins) whose
`.usage` importers do not trust (`importUsage?`): a module a kept-module check kept, or one without a usage key that
binds its `.usage` to its current `.olean`. A compile against a kept module records that module's digests, which
describe its declarations as Lean compiled them, as what it used. The closure's modules are read in parallel and
walked from the decision's view (`boundKeyed`).
-/
def untrustedClosureModule? (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) :
    JobM (Option Name) := do
  let (view, bound) ← boundKeyed hashes importArts (kept := false)
  for e in view.entries do
    if e.keyed?.isNone then continue
    unless e.findable do continue
    if (← bound.usage? hashes importArts e).isNone then return some e.name
  return none

/--
The closure state `Module.writeUsekey` must find unchanged after the compile: the `modsysHash` of the closure
(`modsysBefore`), and whether any workspace module of the closure is untrusted — kept, or without a key binding its
`.usage` to its `.olean` (`untrustedClosureModule?`). A compile reads these at its start; `writeUsekey` writes a key
only when they still hold, because another workspace can change a shared dependency while the module compiles. With
`decision?`, the module's decision before the compile (`Module.skipOrBuild`), the `modsysHash` is taken from the
files it read, which were read earlier, so the comparison is stricter. The untrusted module is read now: a dependency
can be kept between the decision and the compile. Counted in `BuildContext.usageCutoffInFlight` while it runs
(`countedInFlight`).
-/
public def usekeyBefore (importArts : NameMap ImportArtifacts) (decision? : Option ContentHashes := none) :
    JobM (ModuleUsage.Digest × Option Name) := countedInFlight do
  let hashes ← ContentHashes.new
  return (← modsysHash (decision?.getD hashes) importArts, ← untrustedClosureModule? hashes importArts)

/--
Whether every edge of the closure is current: for every module `x` of the closure that is not a module-system file
(`ClosureView.keyed`) and every direct import `y` of `x` recorded with a closure (`UsageImport.importedClosures`),
`y`'s current `closure`, read through `importUsage?` with `kept`, is the one `x`'s compile imported. `closureHash`
reads only the direct imports' records of their closures, and such a record names the closures its compile read:
another workspace can rewrite a shared dependency after this build kept or compiled an intermediate module, which then
still records the dependency's old closure. With every edge current, every recorded closure describes the current
files. A module-system file imports only module-system files, whose bytes `modsysHash` pins, so no edge into a keyed
module starts at one. An `x` whose `y` is a toolchain module or a module-system file, or has no digests, records no
closure for it, or one pinned as above: only `y`s of the closure are compared, and one `importUsage?` accepts nothing
for fails the check. A kept module's recorded closures count too: a module is kept only when its closure was
unchanged, so they were current at the accept. The closure's modules are bound in two passes, its keyed modules
(`boundKeyed`) and then its module-system files (`readImports`), each in parallel; a binding's log is replayed when
the walk first meets the module, as before.
-/
def closureEdgesCurrent (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) : JobM Bool := do
  let (view, bound) ← boundKeyed hashes importArts (kept := true)
  readImports hashes importArts view.modsys (kept := true)
  let reads ← hashes.keptImports.get
  for e in view.entries do
    if e.keyed?.isNone then continue
    let some (_, imp) ← bound.usage? hashes importArts e | return false
    for (y, recorded) in imp.importedClosures do
      -- an importee bound to an `.olean` is one of the closure
      if let some (log, .ok (some (_, cur))) := reads[y]? then
        if log.isEmpty then
          unless cur.closure == recorded do return false
          continue
      unless importArts.contains y do continue
      let some (_, cur) ← importUsage? hashes importArts y (kept := true) | return false
      unless cur.closure == recorded do return false
  return true

/--
Whether every workspace module of the closure (`importArts`) carried digests when Lean compiled the
module (`UsageSidecar.digested`). A `.usage` records only imported constants that have digests:
without this, a module compiled against an `.olean` without digests (built with the cutoff off, or
rewritten by `lean -o` without `--usage`, which leaves the old sidecars beside it) would be replayed
without checking what it uses from that module. A toolchain module is pinned by the Lean githash in
the local trace instead.
-/
def UsageSidecar.coversClosure (usage : UsageSidecar) (importArts : NameMap ImportArtifacts) : Bool :=
  Id.run do
    -- both in `Name.quickLt` order: one walk of `digested`
    let ds := usage.digested
    let mut i := 0
    for (m, _) in importArts do
      while h : i < ds.size do
        if Name.quickLt ds[i].1 m then i := i + 1 else break
      unless ds[i]?.any (·.1 == m) do return false
    return true

/-- A copy of the module name `n` that shares no object with it, for a name read from a compacted region that is freed
later. A module name has only string components (`modToFilePath`). -/
def copyName : Name → Name
  | .str p s => .str (copyName p) s.toSlice.copy
  | .num p k => .num (copyName p) k
  | .anonymous => .anonymous

/-- Frees `regions`, then returns `a`, which must not refer into them. Taking `a` makes callers compute it first. -/
@[noinline] def freeRegionsThen (regions : Array CompactedRegion) (a : α) : IO α := do
  for r in regions do unsafe CompactedRegion.free r
  return a

/--
The kernel constant names of the module whose `.olean` parts `load` reads, as name hashes (`Name.hash` of
`ModuleData.constNames` of the last part, the private level), and its direct imports, or `none`, with a warning, if
the parts cannot be read.
-/
def readKernelProvides (load : IO (Array (Lean.ModuleData × CompactedRegion))) :
    JobM (Option (Array UInt64 × Array Name)) := do
  match (← go.toBaseIO) with
  | .ok r => return some r
  | .error e =>
    logWarning s!"usage cutoff: {e}"
    return none
where
  go : IO (Array UInt64 × Array Name) := do
    let parts ← load
    -- built by `push` into new arrays: `Array.map` of an empty array returns that array, which is in a region
    let names := parts.back?.elim #[] (·.1.constNames)
    let hashes := names.foldl (·.push ·.hash) (Array.mkEmpty names.size)
    let imports := (parts[0]?.elim #[] (·.1.imports)).foldl (·.push <| copyName ·.module) #[]
    freeRegionsThen (parts.map (·.2)) (hashes, imports)

/-- A filter of the hashes of `claims` (`UsageSidecar.kernelDisjoint`): the bit `h &&& mask` of its bytes is set for
each claimed hash `h`, at least 32 bits per claim and at most `2 ^ 32` bits, so that most constants that are not claimed
are told apart by one bit instead of a lookup, and the low 32 bits of a hash (`UsageImport.kernelLows`) select the same
bit as the whole hash. -/
def claimFilter (claims : Std.HashMap UInt64 (Array Name)) : ByteArray × UInt64 := Id.run do
  let bits := min (2 ^ 32) (max 512 (32 * claims.size).nextPowerOfTwo)
  let mut b := ByteArray.emptyWithCapacity (bits / 8)
  for _ in [0:bits / 8] do
    b := b.push 0
  let mask := (bits - 1).toUInt64
  for (h, _) in claims do
    let i := ((h &&& mask) >>> 3).toNat
    b := b.set! i (b.get! i ||| ((1 : UInt8) <<< (h &&& 7).toUInt8))
  return (b, mask)

/-- Whether the claim filter `f` (`claimFilter`) may hold hash `h`: `false` only if no claim has it. -/
@[inline] def claimFilterMayHave (f : ByteArray × UInt64) (h : UInt64) : Bool :=
  f.1.get! ((h &&& f.2) >>> 3).toNat &&& ((1 : UInt8) <<< (h &&& 7).toUInt8) != 0

/-- Whether module `k`, bound to `imp`, declares a kernel constant that another module claims (`kernelDisjoint`'s
`clash`): the claim filter (`claimFilter`) tests the low bits of each constant's hash (`UsageImport.kernelLows`), and
only a constant it may hold is looked up. -/
def declaresClaimed (filter : ByteArray × UInt64) (claims : Std.HashMap UInt64 (Array Name)) (k : Name)
    (imp : UsageImport) : Bool := Id.run do
  let lows := imp.kernelLows.get
  for i in [0:lows.size] do
    if claimFilterMayHave filter lows[i]!.toUInt64 then
      if let some n := imp.provides.1[i]? then
        if claims[n.hash]?.any (·.any (· != k)) then return true
  return false

/-- Whether toolchain module `t`'s walk is complete in `p` (`KernelProviders.complete`): it was read without a failure
and each of its imports is no workspace module (`findable`) and complete; `memo` holds the answers so far. -/
partial def toolchainCompleteIn (p : KernelProviders) (findable : NameSet) (memo : Std.HashMap Name Bool)
    (t : Name) : Bool × Std.HashMap Name Bool :=
  if p.complete.contains t then (true, memo) else
  match memo[t]? with
  | some b => (b, memo)
  | none =>
    match p.toolchain.find? t with
    | some (some (_, imports)) =>
      let (b, memo) := imports.foldl (init := (true, memo.insert t false)) fun (b, memo) i =>
        if !b then (b, memo)
        else if findable.contains i then (false, memo)
        else toolchainCompleteIn p findable memo i
      (b, memo.insert t b)
    | _ => (false, memo.insert t false)

/-- Marks complete (`KernelProviders.complete`) each module of `seen`, the toolchain modules a walk of
`UsageSidecar.kernelDisjoint` read without a failure, whose walk is complete (`toolchainCompleteIn`). -/
def markToolchainComplete (seen : NameSet) : JobM Unit := do
  let kp := (← getBuildContext).kernelProviders
  let p ← kp.atomically get
  let mut todo : Array Name := #[]
  for t in seen do
    unless p.complete.contains t do todo := todo.push t
  if todo.isEmpty then return
  let mut findable : NameSet := {}
  for t in todo do
    let some (some (_, imports)) := p.toolchain.find? t | continue
    for i in imports do
      if (← findModule? i).isSome then findable := findable.insert i
  let memo := todo.foldl (init := ({} : Std.HashMap Name Bool)) fun memo t =>
    (toolchainCompleteIn p findable memo t).2
  let done := todo.filter (memo[·]? == some true)
  unless done.isEmpty do
    kp.atomically (modify fun s => { s with complete := done.foldl (init := s.complete) (·.insert · ()) })

/--
Whether no closure module whose provides changed (`changed`, each with its `provides` as `importUsage?` binds them)
declares a kernel constant that another module of the compile declares too, unless the compile depended on that
module's copy (`used` lists the name under it, as `Lean.ModuleUsage.moduleUsed` lists every declarer of each duplicate
the import saw). For such a name a fresh compile fails at the import (`throwAlreadyImported`) or at the module's own
declaration, or keeps a copy the compile did not depend on (`subsumesInfo`). The other declarers are every other
workspace module of the closure (`importArts`), the compiled module itself (`UsageSidecar.provides`) and every
toolchain module a fresh compile imports: those its direct imports and the workspace modules' (their
`ModuleInput.imports`) name outside the workspace, and their imports (`ModuleData.imports`), transitively, as a
non-`module` file imports every module its imports reach. Lean finds such a module's `.olean` in the workspace's
library directories (`getLeanPath`, which Lake passes as `LEAN_PATH`) and then its own (`Lean.initSearchPath`), and
reads its parts as an import does (`Lean.readModuleDataPartsOfFile`). A non-`module` file's kernel constants come from
its `provides`, which its `.usekey` holds and binds to its `.olean` (`importUsage?` with `kept`: a kept module's too,
since they come from its `.olean`, which the accept did not change); a `module` file's and a toolchain module's from
the private part of their `.olean`, pinned by `modsysHash` and by the Lean githash. A module that starts to declare a
name has changed provides unless it is a toolchain module, a `module` file or the compiled module, so every new
duplicate has a declarer this checks.

Names are compared by `Name.hash`, so a hash collision only rebuilds. The `.olean` reads assume the data layout of
the Lean that Lake was built with, so with another Lean, or if a read fails, the check fails. A `module` file's kernel
constants are kept per build and module state, a toolchain module's per build (`BuildContext.kernelProviders`), so a
later check does not read them again. The check reads those maps once, takes their mutex again for each module they
lack, and, when no other duplicate decided it, once more at the end, to read the build's index of the toolchain
modules' kernel constants by hash (`KernelProviders.toolchainIndex`), in which it looks up each claimed constant: every
check of the build takes the mutex, and a module's entry only ever holds what some read of it gave. A closure module's
outside imports come from its cell (`ModuleCell.outside`) when the build has one. The walk is skipped when every
toolchain module it starts from is complete (`KernelProviders.complete`, `markToolchainComplete`): such a walk reads
nothing, logs nothing and fails nowhere, so it can decide only through a claimed constant in the index, and the walk
runs if one is there. The workspace modules' reads' logs and errors are replayed in closure order before any duplicate
decides the check, as a serial check meets them.
-/
def UsageSidecar.kernelDisjoint (usage : UsageSidecar) (presetup : ModulePreSetup) (hashes : ContentHashes)
    (importArts : NameMap ImportArtifacts) (changed : Array (Name × UsageImport)) :
    JobM Bool := do
  unless (← getLeanInstall).githash == Lean.githash do return false
  -- each kernel constant a changed module declares whose other copies the compile did not depend on, as its hash,
  -- with the changed modules that declare it, and whether the compiled module declares one of them itself
  let mut claims : Std.HashMap UInt64 (Array Name) := {}
  let mut clashes := false
  for (m, imp) in changed do
    let declared := (usage.used.binSearch (m, #[]) (Name.quickLt ·.1 ·.1)).elim #[] (·.2)
    for n in imp.provides.1 do
      if (declared.binSearch (n, default) (Name.quickLt ·.1 ·.1)).isSome then continue
      if usage.provides.1.binSearchContains n Name.quickLt then clashes := true
      claims := claims.alter n.hash fun ms? => some ((ms?.getD #[]).push m)
  -- whether module `k` declaring the constant with hash `h` duplicates a claimed constant: most constants of the
  -- closure and the toolchain are claimed by none, which the filter tells without a lookup
  let filter := claimFilter claims
  let clash (k : Name) (h : UInt64) : Bool := claimFilterMayHave filter h && claims[h]?.any (·.any (· != k))
  let outside (r : Array Name) (i : ModuleImport) := if i.module?.isNone then r.push i.module else r
  let kp := (← getBuildContext).kernelProviders
  let providers ← kp.atomically get
  let (view, known) ← boundKeyed hashes importArts (kept := true)
  let snap ← getBuildStoreSnapshot
  -- the digest of a `module` file's state, from its `.olean` parts' hashes
  let partsDigest (hash : FilePath → JobM ModuleUsage.Digest) (parts : Array FilePath) : JobM ModuleUsage.Digest := do
    let mut e : ModuleUsage.Enc := {}
    for p in parts do
      e := e.digest (← hash p)
    return e.finish
  -- whether a `module` file's kernel constants duplicate a claimed one, or `none` if they cannot be read or the parts no
  -- longer have the bytes the check hashed
  let modsysClash (x : Name × ModuleUsage.Digest × Array FilePath) : JobM (Option Bool) := do
    let (m, d, parts) := x
    let cached ← match providers.modsys.find? (m, d) with
      | some hs => pure (some hs)
      | none => kp.atomically (return (← get).modsys.find? (m, d))
    let hs ← match cached with
      | some hs => pure hs
      | none =>
        let some (hs, _) ← readKernelProvides (readModuleDataParts parts) | return none
        -- the read opens the parts again: another workspace's build may have replaced them since the check hashed them
        unless (← partsDigest stampedDigest parts) == d do return none
        kp.atomically (modify fun s => { s with modsys := s.modsys.insert (m, d) hs })
        pure hs
    return some (hs.any (clash m))
  -- Each workspace module of the closure, in order: the toolchain modules it imports, from its cell if the build has
  -- one; whether its kernel constants duplicate a claimed one, or, for a `module` file, the digest of its state and its
  -- `.olean` parts, whose constants are read next. A module without a kept binding, or a `module` file without its
  -- private part, fails the check.
  let mut toolchain := presetup.directImports.foldl outside #[]
  let mut modsys := #[]
  for e in view.entries do
    let imports? ← match e.cell? with
      | some c => pure (if c.findable then some c.outside else none)
      | none => do
        let some mod ← findModule? e.name | pure none
        pure (some ((← (← fetchFrom snap mod.input).await).imports.foldl outside #[]))
    let some imports := imports? | continue
    match e.keyed? with
    | none =>
      if e.arts.oleanPrivate?.isNone then return false
      let parts := e.arts.oleanParts false
      modsys := modsys.push (e.name, ← partsDigest (contentHash hashes) parts, parts)
    | some _ =>
      let some (_, imp) ← replayRun (← known.now hashes e) | return false
      clashes := clashes || declaresClaimed filter claims e.name imp
    toolchain := toolchain ++ imports
  for r in ← parallelRuns modsys modsysClash do
    let some c ← replayRun r | return false
    clashes := clashes || c
  -- A walk from toolchain modules that are all `complete` reads nothing, logs nothing and fails nowhere, and its modules
  -- are all in the index: it decides only through the index, and only if a claimed constant is there.
  if toolchain.all providers.complete.contains then
    if clashes then return false
    let index := (← kp.atomically get).toolchainIndex
    unless claims.toArray.any fun (h, _) => (index.find? h).any (!·.isEmpty) do return true
  let searchPath := (← getLeanPath) ++ [← getLeanLibDir]
  let mut seen : NameSet := {}
  let mut providers := providers
  while h : 0 < toolchain.size do
    let m := toolchain.back
    toolchain := toolchain.pop
    if seen.contains m || importArts.contains m then continue
    seen := seen.insert m
    let mut cached := providers.toolchain.find? m
    if cached.isNone then
      providers ← kp.atomically get
      cached := providers.toolchain.find? m
    let read? ← match cached with
      | some read? => pure read?
      | none =>
        let read? ← match ← Lean.SearchPath.findWithExt searchPath "olean" m with
          | some olean => readKernelProvides (readModuleDataPartsOfFile olean)
          | none => pure none
        kp.atomically (modify fun s => { s with
          toolchain := s.toolchain.insert m read?
          toolchainIndex := (read?.elim #[] (·.1)).foldl (init := s.toolchainIndex) fun ix h =>
            ix.insert h (((ix.find? h).getD #[]).push m) })
        pure read?
    let some (_, imports) := read? | return false
    toolchain := toolchain ++ imports
  markToolchainComplete seen
  -- A toolchain module the walk read declares a claimed constant: every claimer is a module of the closure, which the
  -- walk skips, so any such declarer clashes. The walk's modules are all in the index, with their kernel constants.
  unless clashes do
    let index := (← kp.atomically get).toolchainIndex
    for (h, _) in claims do
      if (index.find? h).any (·.any seen.contains) then
        clashes := true
        break
  return !clashes

/--
The module's `.resolved` sidecar at `file` (Lean writes it next to its `.usage`, `Lean.ModuleUsage.encodeResolved`), if
its bytes have the digest the `.usage` records (`UsageSidecar.resolvedDigest`, `Lean.ModuleUsage.Digest.ofBytes`) and
decode (`Lean.ModuleUsage.ResolvedTable.decode?`): `none` if it is missing, has other bytes or does not decode. Fails if
it exists but cannot be read. Only a check that needs the recorded names reads it (`UsageSidecar.resolvedUnchanged`).
-/
def readResolvedSidecar (usage : UsageSidecar) (file : FilePath) : IO (Option ModuleUsage.ResolvedTable) := do
  match (← IO.FS.readBinFile file |>.toBaseIO) with
  | .ok bytes =>
    if ModuleUsage.Digest.ofBytes bytes != usage.resolvedDigest then return none
    return (ModuleUsage.ResolvedTable.decode? bytes).toOption
  | .error (.noFileOrDirectory ..) => return none
  | .error e => throw e

/--
Whether every name whose defining module the compile looked up, used or referred to (the module's `.resolved` sidecar
at `resolvedFile?`, `readResolvedSidecar`; a check that needs it fails without one) still resolves to the same module,
with the same kinds, as when Lean compiled it, no closure module gained a kernel constant another declares
(`UsageSidecar.kernelDisjoint`), and no closure module that changed gives one of those names a non-local attribute.
Each workspace module of the closure whose provides digest (`UsageImport.providesDigest`, which `importUsage?` binds
to its current `.olean`; a kept module's too, since what it provides comes from its `.olean`, which the accept did not
change) differs from the one the compile imported (`UsageSidecar.digested`) must still provide each name the resolver
mapped to it with the recorded kinds, and none of the other names (`Lean.ModuleUsage.ResolvedTable.providerUnchanged`),
and none of those names may be in its `indirect`: a fresh compile that records an extra module use of such a name
(`Lean.recordExtraModUseFromDecl`, which looks the name up first) also records that module. A module the compile
recorded as an extra use is not asked: its `.olean` is pinned (`UsekeySidecar.extra`), so its provides digest is
unchanged. A module whose provides digest is unchanged is not asked about any name, and the sidecar is read only once
one is not. If the compile read the resolver's whole map (`UsageSidecar.resolvedAll`), no such module may exist.

This decides without restating how the resolver ranks providers (`Environment.getModuleIdxFor?`), which differs
between toolchains. It relies on one property, which every such resolver has: for a resolver that picks a winner
among a name's providers (each a module with a kind, kernel constant or compiled name) by a fixed priority of the
provider alone, here import order (pinned by `closureHash`) and kind, dropping a non-winner cannot change the winner.
The resolvers: first provider in import order, kernel constants of a module before its compiled names (this
branch's `getModuleIdxFor?`, whose `const2ModIdx` `finalizeImport` fills first provider first); compiled names first
for code-generator-shaped names, then import order (`isCodegenName` and `getModuleIdxFor?` at 434ce3c398); and the
lowest module index among kernel and compiled providers (`getModuleIdxFor?` at 4693098fec). A gained provider, a lost
winner or a winner that changed kinds fails the check. A non-winner may still provide a name as a kernel constant
alone if the compile depended on its copy (`used` lists the name under it, as `moduleUsed` lists each kernel
declarer, and `Module.usageVerdict` checks that copy's digest): the module provided the name then as a kernel
constant, possibly also as a compiled name, and keeping or dropping a non-winner's provider cannot change the winner.
A module-system module's provides are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.resolvedUnchanged (usage : UsageSidecar) (presetup : ModulePreSetup)
    (resolvedFile? : Option FilePath) (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) : JobM Bool := do
  let (view, bound) ← boundKeyed hashes importArts (kept := true)
  let mut changed := #[]
  let mut table? : Option ModuleUsage.ResolvedTable := none
  -- `digested` is in `Name.quickLt` order, as the closure is: one walk of it
  let ds := usage.digested
  let mut i := 0
  for e in view.entries do
    if e.keyed?.isNone then continue
    unless e.findable do continue
    let m := e.name
    while h : i < ds.size do
      if Name.quickLt ds[i].1 m then i := i + 1 else break
    let some (_, recorded) := ds[i]?.filter (·.1 == m) | return false
    let some (_, imp) ← bound.usage? hashes importArts e | return false
    if imp.providesDigest == recorded then continue
    if usage.resolvedAll then return false
    if table?.isNone then
      table? ← match resolvedFile? with
        | some resolvedFile => readResolvedSidecar usage resolvedFile
        | none => pure none
    let some table := table? | return false
    let declared := (usage.used.binSearch (m, #[]) (Name.quickLt ·.1 ·.1)).elim #[] (·.2.map (·.1))
    unless table.providerUnchanged m imp.providedIds.get declared do return false
    if imp.indirectIds.get.any table.entries.contains then return false
    changed := changed.push (m, imp)
  if changed.isEmpty then return true
  usage.kernelDisjoint presetup hashes importArts changed

/--
The `.usage` files this process's compiles wrote a key for, as `Module.writeUsekey` parsed them, with the digest of
their bytes, by their artifact hash (`Artifact.hash`): the usage index's compact record of one is made from here
(`takeCompactUsage?`), not from a second parse. An entry is removed when it is taken, and all are dropped once
`maxParsedUsages` wait, so that compiles whose outputs no index takes cannot keep their records for the whole build.
-/
builtin_initialize parsedUsages : Std.Mutex (Std.HashMap Hash (UsageSidecar × ModuleUsage.Digest)) ←
  Std.Mutex.new {}

/-- How many entries `parsedUsages` holds at most. -/
def maxParsedUsages : Nat := 64

/--
Writes the module's `.usekey` from the `.usage` Lean just wrote: the digest of the `.usage` bytes, the module's
local trace hash, the hash of its `.olean`, the `modsysHash` of its closure, the `closureHash` of its direct imports,
for each workspace `extra` module, the hash of its `.olean` and its current `moduleDigest`, and the `.usage` fields its
importers read (`UsageSidecar.importerJson`). Each `.olean` hash is of its bytes (`contentHash`).

The key must describe what the compile read, and another workspace can rebuild a shared dependency while the module
compiles. So every direct import's `closure` and every `extra` module's `moduleDigest`, read now through
`importUsage?`, must be what the compile imported (`UsageSidecar.importedClosures`, `importedDigests`, which Lean
took from the `.olean` files it loaded), and the closure's module-system files must have the bytes they had before
the compile (`modsysBefore`).
Writes nothing if not, or if the `.usage` does not cover the closure (`UsageSidecar.coversClosure`) or is missing,
or if `importUsage?` accepts nothing for a direct import or a workspace `extra` module, so the module is never
skipped. A kept module's `.usage` holds digests of its declarations as Lean compiled them, and a compile against it
records those as what it used: a key over them would let a later check skip the module once the kept module compiles
again, against declarations that mean something else. So a module compiled while a workspace module of its closure
is untrusted — kept, or without a key binding its fields to its `.olean` (`untrustedClosureModule?`, which covers
the direct imports and the `extra` modules) — gets no key, and it compiles the next time it is stale. That check is
read twice: `untrustedBefore?` is its result as the compile started, and it is run again here. Another workspace can
rebuild a kept dependency normally while this module compiles, so a module untrusted when the compile read it can
have an ordinary key by the time the compile ends; the key is written only when neither the state the compile read
nor the state now has an untrusted closure module. Counted in `BuildContext.usageCutoffInFlight` while it runs
(`countedInFlight`). With `usageArt?`, the artifact hash of the `.usage`, it keeps the `.usage` it read for the usage
index when it writes the key (`parsedUsages`), so that the index does not parse it again (`Module.indexUsage`).
-/
public def Module.writeUsekey (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) (modsysBefore : ModuleUsage.Digest) (untrustedBefore? : Option Name)
    (oleanDigest? : Option ModuleUsage.Digest := none) (usageArt? : Option Hash := none) : JobM Unit :=
    countedInFlight do
  let some (usage, usageDigest) ← readOwnUsage mod.usageFile | return
  unless usage.coversClosure importArts do return
  let hashes ← ContentHashes.new
  let modsys ← modsysHash hashes importArts
  unless modsys == modsysBefore do return
  -- No key if the compile read an untrusted closure module (kept, or without a key binding its fields to its
  -- `.olean`): `untrustedBefore?` is that check as the compile started, rechecked here, since another workspace can
  -- give a kept dependency an ordinary key while this module compiles.
  if untrustedBefore?.isSome then return
  if (← untrustedClosureModule? hashes importArts).isSome then return
  let some closure ← closureHash hashes presetup importArts (importedClosures? := some usage.importedClosures)
    | return
  let mut extra := #[]
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (olean, imp) ← importUsage? hashes importArts m | return
    unless usage.importedDigests.find? m == some imp.moduleDigest do return
    extra := extra.push <|
      Json.arr #[ModuleUsage.nameToJson m, toJson (← contentHash hashes olean), toJson imp.moduleDigest]
  let key := Json.mkObj [
    ("version", usekeyVersion),
    ("usage", toJson usageDigest),
    ("local", toJson presetup.localTrace.hash.hex),
    ("olean", toJson (← oleanDigest?.getDM (contentHash hashes mod.oleanFile))),
    ("modsys", toJson modsys),
    ("closure", toJson closure),
    ("extra", Json.arr extra),
    ("importer", usage.importerJson)
  ]
  ModuleUsage.writeFileReplacing mod.usekeyFile key.compress.toUTF8
  if let some art := usageArt? then
    -- a few entries at most: `Module.indexUsage` takes each one after the module's build, unless the build fails or
    -- does not cache; an entry no build takes is dropped at the next insert past `maxParsedUsages`
    parsedUsages.atomically <| modify fun m =>
      (if m.size ≥ maxParsedUsages then {} else m).insert art (usage, usageDigest)

/-- What a stale module's usage records say about it (`Module.usageVerdict`). -/
public inductive UsageVerdict
  /-- Nothing the module used changed meaning, and no module of its closure is kept: its compile is skipped. -/
  | upToDate
  /--
  The machinery the module used while elaborating and its closure are unchanged, and every name whose defining module
  it looked up, used or referred to resolves as before, but a constant it used changed meaning, a
  specialization-cache key it looked up has other providers, or a workspace module of its closure is kept: its proofs
  may be re-checked instead of compiled (`keptCandidate?`).
  -/
  | recheck
  /--
  The machinery the module used changed, its import closure changed, a name whose defining module it looked up, used
  or referred to may resolve to another module, or its records cannot say: it compiles.
  -/
  | compile (reason : String)

/-- The files a usage verdict (`Module.usageVerdict`) reads: a module's own, or a cached compile's. -/
public structure UsageFiles where
  usekey : FilePath
  usage : FilePath
  olean : FilePath
  resolved? : Option FilePath

/-- The module's own `.usekey`, `.usage`, `.resolved`, and `.olean`, in its build directory. -/
public def Module.usageFiles (mod : Module) : UsageFiles :=
  {usekey := mod.usekeyFile, usage := mod.usageFile, olean := mod.oleanFile, resolved? := some mod.resolvedFile}

/--
Decides a stale module from its usage records. `upToDate` if nothing the module used changed meaning since Lean
wrote its `.usage`: its `.usekey` (read first) was written from its current `.usage` (`UsekeySidecar.usage`) and
`.olean`, its `.usage` covers its closure (`importArts`, `UsageSidecar.coversClosure`), its local inputs are
unchanged, no module-system module in its closure changed (`modsysHash`), its closure is unchanged (`closureHash`,
with every edge of it current: `closureEdgesCurrent`), every constant it used from a workspace module has the same
digest in that module's `own` (which its key binds to its current `.olean`, `importUsage?`), every workspace `extra`
module has the same `.olean` hash and `moduleDigest`, every name whose defining module it looked up, used or
referred to resolves as before (`UsageSidecar.resolvedUnchanged`), every specialization-cache key it looked up has
the same providers (`UsageSidecar.specProvidersUnchanged`), and no workspace module of its closure is kept
(`untrustedClosureModule?`). Every `.olean` hash is of the file's bytes (`contentHash`), never read from a `.hash`
file.

Otherwise the rule for kept modules applies. The module compiles when the machinery it used while elaborating
changed (an `extra` module: its tactics, macros, elaborators, simp lemmas or instances), when its closure changed,
when a name whose defining module it looked up, used or referred to may resolve to another module now, and when its
records cannot show these unchanged: a fresh compile could then produce other code, which a re-check of its proofs
does not see, and `resolvedUnchanged` can tell only for an unchanged closure. When only the meaning of constants it
used changed, the providers of a specialization-cache key it looked up, or a module of its closure is kept, it is
`recheck`: a kept module's digests describe its declarations as Lean compiled them, so an importer of a kept module is
re-checked or compiled, never skipped, until that module compiles again. A kept import's recorded closure is the one
before the accept (`closureHash` with `kept`): it serves only to tell whether the closure changed, and its recorded
closures only to tell whether the closure's edges are current (`closureEdgesCurrent`, which reads with `kept`).

The records are `files`: by default the module's own, in its build directory; the usage index's lookup
(`Module.restoreFromUsageIndex?`) decides a cached compile of the module the same way. Every file is read in
`hashes`, the module's decision (`ContentHashes`). Counted in `BuildContext.usageCutoffInFlight` while it runs
(`countedInFlight`).
-/
public def Module.usageVerdict (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) (hashes : ContentHashes) (files : UsageFiles := mod.usageFiles) :
    JobM UsageVerdict := countedInFlight do
  let some key ← readUsageSidecar UsekeySidecar usekeyVersion files.usekey
    | return .compile "it has no usage key"
  -- The checks that need only the key come first: they all lead to `compile`, and a module whose closure changed (a
  -- library's root, which imports every module) then never parses its `.usage`.
  if key.localHash != presetup.localTrace.hash then return .compile "its local inputs changed"
  unless (← contentHash hashes files.olean) == key.olean do
    return .compile "its usage record describes another .olean"
  unless (← modsysHash hashes importArts) == key.modsys do
    return .compile "a module-system file of its closure changed"
  if let some changed ← changedDirectImport? hashes presetup importArts key files.usekey then
    hashes.changedImport.set (some changed)
    return .compile "its import closure changed, so a name it looked up, used or referred to may resolve elsewhere"
  let some closure ← closureHash hashes presetup importArts (kept := true)
    | return .compile "a direct import has no usage record that shows its closure"
  unless closure == key.closure do
    return .compile "its import closure changed, so a name it looked up, used or referred to may resolve elsewhere"
  let some (usage, _) ← readOwnUsage files.usage (expected? := key.usage)
    | return .compile "its usage record is missing or is not the one its key was written from"
  if usage.noskip then return .compile "its usage record may be incomplete"
  unless usage.coversClosure importArts do
    return .compile "a module of its closure had no usage digests when it was compiled"
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (oleanHash, digest) := key.extra.find? m
      | return .compile s!"its usage key does not record {m}, whose machinery it used"
    let some (olean, imp) ← importUsage? hashes importArts m
      | return .compile s!"{m}, whose machinery it used, has no current usage record"
    unless (← contentHash hashes olean) == oleanHash && imp.moduleDigest == digest do
      return .compile s!"{m}, whose machinery it used, changed"
  unless (← closureEdgesCurrent hashes importArts) do
    return .compile "an import's closure changed after a module of its closure was compiled or kept"
  unless (← usage.resolvedUnchanged presetup files.resolved? hashes importArts) do
    return .compile "a name it looked up, used or referred to may now resolve to another module"
  -- A module outside the workspace is a toolchain module, pinned by the Lean githash in `localTrace`.
  let ws ← getWorkspace
  let snap ← usageFactsSnapshot
  -- a module of the closure is a workspace module as its cell says; any other is one if the workspace finds it
  let inWorkspace (m : Name) : JobM Bool :=
    if importArts.contains m then closureFindable snap m else return (ws.findModule? m).isSome
  readImports hashes importArts <| ← usage.used.filterMapM fun (m, _) => do
    return if ← inWorkspace m then some m else none
  for (m, consts) in usage.used do
    unless ← inWorkspace m do continue
    let some (_, imp) ← importUsage? hashes importArts m | return .recheck
    for (c, d) in consts do
      unless imp.own.find? c == some d do return .recheck
  unless (← usage.specProvidersUnchanged hashes importArts) do return .recheck
  -- `resolvedUnchanged` read every workspace module of the closure, so a module importers do not trust is kept
  if (← untrustedClosureModule? hashes importArts).isSome then return .recheck
  return .upToDate

/--
What the usage index's pre-filter (`usagePrefilter`) reads of a cached compile's `.usage`: `noskip`, the names of
the `digested` modules, `used`, `extra` and `specLookups`, each as the `.usage` has it (`UsageSidecar`), in its order.
The usage index keeps it for each compile it records in a compact file (`PrefilterUsage.encode`), so that a lookup
decodes it instead of parsing the whole `.usage`, whose JSON costs the pre-filter most of its time.
-/
structure PrefilterUsage where
  noskip : Bool
  digested : Array Name
  used : Array (Name × Array (Name × ModuleUsage.Digest))
  extra : Array Name
  specLookups : Array (ModuleUsage.Digest × ModuleUsage.Digest)

/-- The parts of a `.usage` the usage index's pre-filter reads (`PrefilterUsage`). -/
def UsageSidecar.toPrefilter (u : UsageSidecar) : PrefilterUsage :=
  { noskip := u.noskip, digested := u.digested.map (·.1), used := u.used, extra := u.extra,
    specLookups := u.specLookups }

/-- `UsageSidecar.coversClosure`, from the names of the `digested` modules, in the `.usage`'s order. -/
def PrefilterUsage.coversClosure (usage : PrefilterUsage) (importArts : NameMap ImportArtifacts) : Bool :=
  Id.run do
    for (m, _) in importArts do
      unless (usage.digested.binSearch m Name.quickLt).isSome do return false
    return true

namespace PrefilterUsage

/-- The first bytes of a compact usage record (`encode`), with its format version. -/
def magic : ByteArray := "LKUP\x01".toUTF8

@[inline] def putU64 (b : ByteArray) (v : UInt64) : ByteArray :=
  b.push v.toUInt8 |>.push (v >>> 8).toUInt8 |>.push (v >>> 16).toUInt8 |>.push (v >>> 24).toUInt8
    |>.push (v >>> 32).toUInt8 |>.push (v >>> 40).toUInt8 |>.push (v >>> 48).toUInt8 |>.push (v >>> 56).toUInt8

@[inline] def putNat (b : ByteArray) (n : Nat) : ByteArray := putU64 b n.toUInt64

@[inline] def putDigest (b : ByteArray) (d : ModuleUsage.Digest) : ByteArray := putU64 (putU64 b d.hi) d.lo

/-- The names of a record, each once, a name's prefix before it: `ids` maps a name to its index from 1 (0 is the
anonymous name), and `table` holds, per name in index order, its prefix's index, then `0` and a string component's
length and UTF-8 bytes, or `1` and a number component. -/
structure NameTable where
  table : ByteArray := .empty
  count : Nat := 0
  ids : Std.HashMap Name Nat := {}

/-- `n`'s index in `s`, adding it and its prefixes, or `none` if a number component does not fit 64 bits. -/
partial def NameTable.intern (s : NameTable) : Name → Option (Nat × NameTable)
  | .anonymous => some (0, s)
  | n@(.str p c) => do
    if let some i := s.ids[n]? then return (i, s)
    let (pi, s) ← s.intern p
    let bytes := c.toUTF8
    let i := s.count + 1
    return (i, { table := (putNat (putNat s.table pi |>.push 0) bytes.size).append bytes, count := i,
                 ids := s.ids.insert n i })
  | n@(.num p k) => do
    if let some i := s.ids[n]? then return (i, s)
    guard (k < 2 ^ 64)
    let (pi, s) ← s.intern p
    let i := s.count + 1
    return (i, { table := putNat (putNat s.table pi |>.push 1) k, count := i, ids := s.ids.insert n i })

/--
The compact record of `u`, a `.usage` whose bytes have the digest `usage` (`ModuleUsage.Digest.ofBytes`), which
`decode?` reads back: `magic`, `usage`, `noskip`, the name table (`NameTable`), then `digested`, `used`, `extra` and
`specLookups`, each a count and its elements, names by their index. Every number is 64 bits, least significant byte
first. `none` if a name has a number component that does not fit 64 bits.
-/
def encode (u : PrefilterUsage) (usage : ModuleUsage.Digest) : Option ByteArray := do
  let mut s : NameTable := {}
  for n in u.digested do s := (← s.intern n).2
  for (m, cs) in u.used do
    s := (← s.intern m).2
    for (c, _) in cs do s := (← s.intern c).2
  for n in u.extra do s := (← s.intern n).2
  let id (n : Name) : Nat := s.ids.getD n 0
  let mut b := putDigest magic usage |>.push (if u.noskip then 1 else 0)
  b := putNat b s.count |>.append s.table
  b := putNat b u.digested.size
  for n in u.digested do b := putNat b (id n)
  b := putNat b u.used.size
  for (m, cs) in u.used do
    b := putNat (putNat b (id m)) cs.size
    for (c, d) in cs do b := putDigest (putNat b (id c)) d
  b := putNat b u.extra.size
  for n in u.extra do b := putNat b (id n)
  b := putNat b u.specLookups.size
  for (k, d) in u.specLookups do b := putDigest (putDigest b k) d
  return b

abbrev Dec := ReaderT ByteArray (StateT Nat (Except Unit))

@[inline] def byte : Dec UInt8 := do
  let bs ← read
  let i ← get
  if h : i < bs.size then set (i + 1); return bs[i] else throw ()

def u64 : Dec UInt64 := do
  let bs ← read
  let i ← get
  unless i + 8 ≤ bs.size do throw ()
  set (i + 8)
  let b (k : Nat) : UInt64 := (bs.get! (i + k)).toUInt64
  return b 0 ||| b 1 <<< 8 ||| b 2 <<< 16 ||| b 3 <<< 24 ||| b 4 <<< 32 ||| b 5 <<< 40 ||| b 6 <<< 48 |||
    b 7 <<< 56

@[inline] def nat : Dec Nat := (·.toNat) <$> u64

@[inline] def digest : Dec ModuleUsage.Digest := return ⟨← u64, ← u64⟩

/-- A count of elements each at least `width` bytes long, which the rest of the record can hold. -/
def count (width : Nat) : Dec Nat := do
  let n ← nat
  unless n * width ≤ (← read).size - (← get) do throw ()
  return n

def decoder : Dec (ModuleUsage.Digest × PrefilterUsage) := do
  for b in magic do
    unless (← byte) == b do throw ()
  let usage ← digest
  let noskip ← match ← byte with
    | 0 => pure false
    | 1 => pure true
    | _ => throw ()
  let mut names : Array Name := #[.anonymous]
  for _ in [0:← count 10] do
    let p ← nat
    let some parent := names[p]? | throw ()
    match ← byte with
    | 0 =>
      let len ← count 1
      let i ← get
      let some c := String.fromUTF8? ((← read).extract i (i + len)) | throw ()
      set (i + len)
      names := names.push (.str parent c)
    | 1 => names := names.push (.num parent (← nat))
    | _ => throw ()
  let name : Dec Name := do
    let some n := names[← nat]? | throw ()
    return n
  let mut digested := #[]
  for _ in [0:← count 8] do digested := digested.push (← name)
  let mut used := #[]
  for _ in [0:← count 16] do
    let m ← name
    let mut cs := #[]
    for _ in [0:← count 24] do cs := cs.push ((← name), (← digest))
    used := used.push (m, cs)
  let mut extra := #[]
  for _ in [0:← count 8] do extra := extra.push (← name)
  let mut specLookups := #[]
  for _ in [0:← count 32] do specLookups := specLookups.push ((← digest), (← digest))
  unless (← get) == (← read).size do throw ()
  return (usage, { noskip, digested, used, extra, specLookups })

/-- The record `encode` wrote into `bytes`, with the digest of the `.usage` it was made from, or `none` if `bytes` are
not one. -/
def decode? (bytes : ByteArray) : Option (ModuleUsage.Digest × PrefilterUsage) :=
  match (decoder.run bytes).run' 0 with
  | .ok r => some r
  | .error _ => none

end PrefilterUsage

/--
The compact record (`PrefilterUsage.encode`) of the `.usage` at `path`, a cached compile's that a usage index entry
names, or `none` if it cannot be read or parsed, or has another format version (it is then never read in its place).
-/
public def compactUsage? (path : FilePath) : BaseIO (Option ByteArray) := do
  let .ok bytes ← (IO.FS.readBinFile path).toBaseIO | return none
  let .ok (some usage) := parseUsageSidecar.parse UsageSidecar ModuleUsage.usageVersion bytes | return none
  return usage.toPrefilter.encode (ModuleUsage.Digest.ofBytes bytes)

/-- `compactUsage?` of the `.usage` with artifact hash `art` that `Module.writeUsekey` parsed in this process
(`parsedUsages`), which it removes, if there is one; `none` otherwise. -/
public def takeCompactUsage? (art : Hash) : BaseIO (Option (Option ByteArray)) := do
  let parsed? ← parsedUsages.atomically (modifyGet fun m => (m[art]?, m.erase art))
  return parsed?.map fun (usage, digest) => usage.toPrefilter.encode digest

/--
The compact record at `compactFile` (`compactUsage?`) if it decodes and was made from a `.usage` with the digest
`usage`, the one the compile's key records: the only record any reader takes. `none` otherwise.
-/
def readCompactUsage? (compactFile : FilePath) (usage : ModuleUsage.Digest) : BaseIO (Option PrefilterUsage) := do
  let .ok bytes ← (IO.FS.readBinFile compactFile).toBaseIO | return none
  let some (from_, record) := PrefilterUsage.decode? bytes | return none
  return if from_ == usage then some record else none

/--
Whether the usage index has a compact record a reader takes (`readCompactUsage?`) at `compactFile` for the compile
whose `.usekey` is at `usekeyFile`: one that decodes and was made from the `.usage` that key names. An unusable one
(e.g., a file a crash left empty after its rename, or one damaged since) is never read, so the index writes it again
(`Module.indexUsage`). Every compile and every hit asks, and a fresh compile has no record, so it answers that
before it reads the key, and it reads the key without the build's shared sidecar cache (`readUsageSidecar`), whose
insert under one mutex the question would otherwise add to each of them.
-/
public def hasCompactUsage (compactFile usekeyFile : FilePath) : BaseIO Bool := do
  unless (← compactFile.pathExists) do return false
  let .ok bytes ← (IO.FS.readBinFile usekeyFile).toBaseIO | return false
  let .ok (some key) := parseUsageSidecar.parse UsekeySidecar usekeyVersion bytes | return false
  return (← readCompactUsage? compactFile key.usage).isSome

/--
Reads what the usage index's pre-filter (`usagePrefilter`) reads of a cached compile's `.usage`: from the compile's
compact record at `compactFile` (`compactUsage?`), if it decodes and was made from a `.usage` with the digest `usage`,
the one the compile's key records (`readCompactUsage?`); else from the `.usage` at `usageFile`, without checking its
digest. Both give the same values while the cached `.usage` has the bytes its key names; the check that decides
(`Module.usageVerdict`) reads it by that digest. `none` if neither can be read, or the `.usage` cannot be parsed or
has another format version.
-/
def readCandidateUsage? (compactFile usageFile : FilePath) (usage : ModuleUsage.Digest) :
    BaseIO (Option PrefilterUsage) := do
  if let some record ← readCompactUsage? compactFile usage then return some record
  let .ok bytes ← (IO.FS.readBinFile usageFile).toBaseIO | return none
  let .ok (some u) := parseUsageSidecar.parse UsageSidecar ModuleUsage.usageVersion bytes | return none
  return some u.toPrefilter

/-- How far a cached compile got in the usage index's pre-filter (`usagePrefilter`). -/
public inductive UsagePrefilter
  /-- Rejected on its `.usekey`, before its `.usage` was read. -/
  | key
  /-- Rejected after its `.usage` was read. -/
  | usage
  /-- Passed, with the hash of the `.olean` its `.usekey` records (`UsekeySidecar.olean`). -/
  | passed (olean : ModuleUsage.Digest)

/--
The usage index's pre-filter of a cached compile of the module, whose `.usekey` and `.usage` are `usekeyFile` and
`usageFile` and whose compact record of that `.usage` is `compactFile` (`readCandidateUsage?`): whether it may pass
the cutoff's check (`Module.usageVerdict`) against the module's current imports (`importArts`). It only rejects, and
it binds no importee: it compares the importees as `importee? m` gives them (the module's own bindings,
`ContentHashes`, or else the build's views, `UsageView`), and hashes no `.olean`; the check, which every accept
passes, reads them again. It looks at the importees the check binds. In order: the key's local inputs; a direct import
whose closure the decision found changed (`ContentHashes.changedImport`), whose closure the candidate's key must
record; the key's `closure` against the fold of the direct imports' recorded closures, which is the decision's own
`closureHash` with `kept` once its check computed it (`ContentHashes.keptClosure`). A candidate rejected on either of
these two fails the check, which folds the same closures. Then the `.usage`, which must have no `noskip`,
cover the closure, and record for each constant it used from a workspace module the digest that module's `.usage`
records, for each workspace `extra` module the `moduleDigest` and, unless it is a module-system file (pinned by
`modsys`), the `.olean` hash its `.usekey` records, and for its specialization-cache lookups the providers in the
closure; last, the key's `modsys` against the closure's (`modsysHash`). That hash costs a stamp of every file of the
closure's module-system modules, most of the pre-filter's own time, and a module whose lookup finds no match computes
it for its compile anyway (`usekeyBefore`), into the same `hashes`: compared last, it costs a candidate rejected on
its `.usage` nothing.
-/
public def usagePrefilter (presetup : ModulePreSetup) (importArts : NameMap ImportArtifacts) (hashes : ContentHashes)
    (importee? : Name → JobM (Option (Option ModuleUsage.Digest × UsageImport)))
    (usekeyFile usageFile compactFile : FilePath) : JobM UsagePrefilter := do
  let some key ← readUsageSidecar UsekeySidecar usekeyVersion usekeyFile | return .key
  if key.localHash != presetup.localTrace.hash then return .key
  -- A direct import whose closure the decision found changed rejects a candidate that imported another closure of it,
  -- and the decision's own closure digest, if its check computed it, is the one the candidate's check compares
  if let some (m, current) ← hashes.changedImport.get then
    let recorded := key.importedClosure? m
    if current.isNone || current != recorded then return .key
  let closure ← match (← hashes.keptClosure.get) with
    | some closure => pure closure
    | none => foldClosureHash presetup fun m => return (← importee? m).map (·.2.closure)
  unless closure == some key.closure do return .key
  let some usage ← readCandidateUsage? compactFile usageFile key.usage | return .usage
  if usage.noskip || !usage.coversClosure importArts then return .usage
  -- A module outside the workspace is a toolchain module, pinned by the Lean githash in `localTrace`.
  for (m, consts) in usage.used do
    if (← findModule? m).isNone then continue
    let some (_, imp) ← importee? m | return .usage
    for (c, d) in consts do
      unless imp.own.find? c == some d do return .usage
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (oleanHash, digest) := key.extra.find? m | return .usage
    let some (keyOlean?, imp) ← importee? m | return .usage
    unless imp.moduleDigest == digest && keyOlean?.all (· == oleanHash) do return .usage
  unless usage.specLookups.isEmpty do
    let providers ← specProvidersIn (usage.specLookups.map (·.1)) importArts
      fun m => return (← importee? m).map (·.2.specKeys)
    unless providers == some usage.specLookups do return .usage
  unless (← modsysHash hashes importArts) == key.modsys do return .usage
  return .passed key.olean
