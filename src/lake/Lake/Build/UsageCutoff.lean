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
structure UsageImport where
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
  specKeys : Array (ModuleUsage.Digest × Name)
  /-- Whether a kept-module check accepted the module's `.olean` for other imports (`UsekeySidecar.kept`), copied
  from the key the fields were read from: `importUsage?` hides such a module from readers that do not ask for it. -/
  kept : Bool := false
  deriving TypeName

/-- Reads the fields an importer checks, from a `.usekey`'s `importer` or from a module-system file's `.usage`, which
holds them under the same names and in the same form. -/
instance : FromJson UsageImport where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "own"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × SidecarName)) "specKeys"
    let provides ← providesOfJson (← j.getObjVal? "provides")
    return {
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      importedClosures := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedClosures").map
        fun (n, d) => (n.name, d)
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      providesDigest := ← j.getObjValAs? ModuleUsage.Digest "providesDigest"
      provides
      indirect := ← namesOfJson (← j.getObjVal? "indirect")
      providedIds := .mk fun _ => ModuleUsage.providedIds provides
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

/--
The format version of Lake's `.usekey` sidecar; Lake reads a key of any other version as absent. Version 17 adds
`kept`: a toolchain that ignored it would trust a kept module's digests, which describe its declarations as Lean
compiled them.
-/
def usekeyVersion : Nat := 17

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
  /--
  Set when a kept-module check accepted the module's `.olean` for imports other than those Lean compiled it against
  (`acceptKept`): the `.usage`'s own digests describe the module's constants as they were then, and a constant they
  mention may have changed meaning since. The module's own check still reads the key; its importers do not trust its
  digests (`importUsage?`), none of them is skipped while it is kept, and none compiled meanwhile gets a key
  (`untrustedClosureModule?`).
  -/
  kept : Bool := false
  /-- What importers read of the `.usage` the key was written from (`UsageSidecar.importerJson`), so that an importer
  reads the key alone: `olean` binds these fields to the module's `.olean` as `usage` binds the `.usage`. -/
  importer : UsageImport
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
      kept := (j.getObjValAs? Bool "kept").toOption.getD false
      importer := ← j.getObjValAs? UsageImport "importer"
    }

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

/-- The build's parse of the sidecar at `path`, with the digest of the contents it was parsed from, if the file's
current stamp is the one recorded with it (`BuildContext.sidecarCache`). -/
def stampedSidecar? (path : FilePath) : JobM (Option (ModuleUsage.Digest × Dynamic)) := do
  let some stamp ← ModuleUsage.fileStamp path | return none
  let shard := (← getBuildContext).sidecarCache.get (hash path)
  let some (some recorded, digest, value) ← shard.atomically (return (← get).find? path) | return none
  return if recorded == stamp then some (digest, value) else none

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
Reads a usage-cutoff sidecar. Returns `none` if it does not exist, has another format version
(`parseUsageSidecar`), or its bytes do not have the digest `expected?` (the `.usage` a `.usekey` was written
from). If it exists but is not valid, logs a warning and returns `none`, so the module builds normally. Reuses
the build's parse of the same contents (`BuildContext.sidecarCache`), without reading the file while its stamp is the
one recorded with that parse.
-/
def readUsageSidecar (α : Type) [FromJson α] [TypeName α] (version : Nat) (path : FilePath)
    (expected? : Option ModuleUsage.Digest := none) : JobM (Option α) := do
  if let some (digest, cached) ← stampedSidecar? path then
    if expected?.any (· != digest) then return none
    let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
    return some value
  let some (bytes, digest, stamp?) ← readSidecarBytes? path expected? | return none
  (← getBuildContext).sidecarCache.get (hash path) |>.atomically do
    let entries ← getThe (PHashMap FilePath SidecarEntry)
    if let some (_, parsedFrom, cached) := entries.find? path then
      if parsedFrom == digest then
        let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
        modifyThe (PHashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, cached))
        return some value
    let some value ← parseUsageSidecar α version path bytes | return none
    modifyThe (PHashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, Dynamic.mk value))
    return some value

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

/--
The hashes of the files one usage-cutoff check (`Module.usageVerdict`, `Module.writeUsekey`) has
read, so that every `importUsage?` binding of the check is to one hash of each file, also in the check's parallel
tasks (`parallelRuns`), which share it. A check never reuses another's: another workspace's build can
rebuild a shared dependency between two checks. Across checks, a file's hash is reused only while its stamp shows its
bytes unchanged (`BuildContext.fileDigests`). Split into 256 shards by the path's hash, each behind its own mutex: the
check's tasks hash about every file of the closure, and one mutex for all of them is contended. Persistent, because
the tasks share it: an insert into a hash map that other threads can reach copies the whole map.
-/
public structure ContentHashes where
  shards : Vector (Std.Mutex (PHashMap FilePath ModuleUsage.Digest)) 256

/-- An empty `ContentHashes`, for one check. -/
public def ContentHashes.new : BaseIO ContentHashes :=
  return ⟨← (Vector.replicate 256 ()).mapM fun _ => Std.Mutex.new {}⟩

/-- The shard of `file`, from the top bits of its hash: a `Lean.PersistentHashMap` in a shard branches on the low bits. -/
@[inline] def ContentHashes.shard (hashes : ContentHashes) (file : FilePath) :
    Std.Mutex (PHashMap FilePath ModuleUsage.Digest) :=
  hashes.shards[(⟨(hash file >>> 56).toNat % 256, Nat.mod_lt _ (by decide)⟩ : Fin 256)]

/-- The hash the check recorded for `file`, if any. -/
public def ContentHashes.find? (hashes : ContentHashes) (file : FilePath) : BaseIO (Option ModuleUsage.Digest) :=
  (hashes.shard file).atomically (return (← get).find? file)

/--
Records `hash` for `file` unless the check recorded a hash for it first, and returns the recorded one. A path has one
shard, and the first insert under that shard's mutex wins, so every task of the check gets one hash for each path.
-/
public def ContentHashes.record (hashes : ContentHashes) (file : FilePath) (hash : ModuleUsage.Digest) :
    BaseIO ModuleUsage.Digest :=
  (hashes.shard file).atomically <| modifyGet fun all => match all.find? file with
    | some first => (first, all)
    | none => (hash, all.insert file hash)

/--
The hash of `file`'s current bytes (`Lean.ModuleUsage.fileDigest`, 128 bits), never read from a
`.hash` file: an `.olean` rewritten behind Lake's back (e.g., by `lean -o`) keeps its old `.hash`,
and a usage-cutoff decision must see the new bytes. One hash per check (`hashes`): the first one a task of the check
records (`ContentHashes.record`). Taken from an earlier check of the build only if the file's stamp
(`Lean.ModuleUsage.fileStamp`) is the one recorded when those bytes were read (`BuildContext.fileDigests`).
-/
def contentHash (hashes : ContentHashes) (file : FilePath) : JobM ModuleUsage.Digest := do
  if let some hash ← hashes.find? file then return hash
  hashes.record file (← stampedDigest)
where
  stampedDigest : JobM ModuleUsage.Digest := do
    let memo := (← getBuildContext).fileDigests.get (Hashable.hash file)
    if let some stamp ← ModuleUsage.fileStamp file then
      if let some (recorded, hash) ← memo.atomically (return (← get).find? file) then
        if recorded == stamp then return hash
    let (hash, stamp?) ← ModuleUsage.fileDigestStamped file
    if let some stamp := stamp? then
      memo.atomically (modify (·.insert file (stamp, hash)))
    return hash

/-- A run of a `JobM` action on its own: the entries it logged, and its value or the position in those entries of the
error it threw. -/
abbrev LoggedRun (β : Type) := Array LogEntry × Except Nat β

/-- Logs the entries of the run `r` and returns its value or throws its error, as running the action again would. -/
def replayRun (r : LoggedRun β) : JobM β := do
  let pos ← getLogPos
  for e in r.1 do logEntry e
  match r.2 with
  | .ok b => return b
  | .error i => throw (⟨pos.val + i⟩ : Log.Pos)

/-- The fewest elements `parallelRuns` gives a task. -/
def minRunsPerTask : Nat := 64

/--
Runs `f` on each element of `xs` on its own (`LoggedRun`), so that the caller replays the runs it needs, in order
(`replayRun`). Many elements run in parallel tasks, each over a slice of `xs`.
-/
def parallelRuns (xs : Array α) (f : α → JobM β) :
    JobM (Array (LoggedRun β)) := JobM.ofFn fun fetch pkg? stack store ctx s => do
  let run (x : α) : BaseIO (LoggedRun β) := do
    return match ← (f x).toFn fetch pkg? stack store ctx {} with
      | .ok b s' => (s'.log.entries, .ok b)
      | .error e s' => (s'.log.entries, .error e.val)
  let tasks := 2 * max 1 (System.Platform.Internal.getHardwareConcurrency ()).toNat
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
A hash of every artifact of every module-system module in an import closure, with its name.
Module-system files carry no meaning digests (Lean writes them at the private level only), so a
non-module importer's digest chain cannot see through one; its skip requires these bytes unchanged
(`contentHash`).
-/
public def modsysHash (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) :
    JobM ModuleUsage.Digest := do
  let mut e : ModuleUsage.Enc := {}
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then
      let paths := arts.toArrays.flatten
      e := e.name m |>.nat paths.size
      for path in paths do
        e := e.digest (← contentHash hashes path)
  return e.finish

/--
The `.olean` of importee `m` in `importArts` and what its importers read of its `.usage` (`UsageImport`), or `none`
if nothing shows that those fields describe that `.olean`. Unless `m` is a module-system file, they come from its
`.usekey` alone (`UsekeySidecar.importer`, copied from the `.usage` the key was written from), and only if the key
records the `.olean`'s current bytes (`UsekeySidecar.olean`, `contentHash`). The key is one file, read once, so the
check sees one state of the module or none even while another workspace rebuilds it. An `.olean` rewritten behind
Lake's back (e.g., by `lean -o` of other contents, which leaves the old sidecars and `.hash`) is not checked against
the old key either, and a `.usage` beside the key is never read: one from another compile changes nothing. A
module-system file's `.usage` is read instead, its bytes pinned by `modsysHash`. The read carries the key's `kept`
(`UsekeySidecar.kept`); `importUsage?` decides who sees a kept module's fields.
-/
def readImportUsage? (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (m : Name) :
    JobM (Option (FilePath × UsageImport)) := do
  let some arts := importArts.find? m | return none
  let some olean := arts.olean? | return none
  if arts.oleanServer?.isSome then
    return (olean, ·) <$>
      (← readUsageSidecar UsageImport ModuleUsage.usageVersion (olean.withExtension "usage"))
  let some key ← readUsageSidecar UsekeySidecar usekeyVersion (olean.withExtension "usekey") | return none
  unless key.olean == (← contentHash hashes olean) do return none
  return some (olean, {key.importer with kept := key.kept})

/--
The `readImportUsage?` of each module one usage-cutoff check has read (`readImports`), so that the check reads a
module's `.usekey` once and every step of the check binds the module to that read. A check never reuses another's, as
with `ContentHashes`.
-/
abbrev ImportReads := IO.Ref (Std.HashMap Name (LoggedRun (Option (FilePath × UsageImport))))

/--
Reads (`readImportUsage?`) each module of `mods` that `reads` lacks into `reads`, many in parallel (`parallelRuns`).
-/
def readImports (hashes : ContentHashes) (reads : ImportReads) (importArts : NameMap ImportArtifacts)
    (mods : Array Name) : JobM Unit := do
  let known ← reads.get
  let mods := mods.filter (!known.contains ·)
  if mods.isEmpty then return
  let runs ← parallelRuns mods (readImportUsage? hashes importArts)
  reads.modify fun reads => Id.run do
    let mut reads := reads
    for m in mods, r in runs do
      reads := reads.insert m r
    return reads

/--
`readImportUsage?` of `m`, read once per check (`readImports`): logs what that read logged and returns its result.

Nothing for a module a kept-module check kept (`UsekeySidecar.kept`), unless `kept`: its meaning digests, and the
table digests its recorded `closure` folds in (`Lean.ModuleUsage.closureDigest`), describe the module's declarations
as Lean compiled them, which the accept did not compile again. With `kept`, a reader takes from it only what the
unchanged `.olean` fixes: what the module provides (`UsageSidecar.resolvedUnchanged`, `UsageSidecar.kernelDisjoint`),
and its recorded closure as the one before the accept, to tell whether an importer's closure changed
(`Module.usageVerdict`). No key is written and no module is skipped over a kept module (`untrustedClosureModule?`).
-/
def importUsage? (hashes : ContentHashes) (reads : ImportReads) (importArts : NameMap ImportArtifacts) (m : Name)
    (kept := false) : JobM (Option (FilePath × UsageImport)) := do
  unless (← reads.get).contains m do readImports hashes reads importArts #[m]
  let some r := (← reads.get)[m]? | return none
  let some (olean, imp) ← replayRun r | return none
  if imp.kept && !kept then return none
  return some (olean, imp)

/-- The modules of the closure that are not `module` files: `importUsage?` reads their fields from their `.usekey`. -/
def keyedModules (importArts : NameMap ImportArtifacts) : Array Name := Id.run do
  let mut mods := #[]
  for (m, arts) in importArts do
    if arts.oleanServer?.isNone then mods := mods.push m
  return mods

/--
Whether every key the module looked up in the specialization cache (`UsageSidecar.specLookups`) has the same
providers in its closure as when Lean compiled it: the closure's non-module workspace modules that map the key, each
with the specialization it maps the key to, digested by the function Lean used (`Lean.ModuleUsage.specProviders`).
Each closure module's keys come from `importUsage?`, which binds them to the module's current `.olean` in this check's
`hashes`. An import that starts providing a key the module missed, stops providing one it
hit, or maps it elsewhere changes which specialization a fresh compile uses, so the module rebuilds. A module-system
module's keys are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.specProvidersUnchanged (usage : UsageSidecar) (hashes : ContentHashes) (reads : ImportReads)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  if usage.specLookups.isEmpty then return true
  let mods := keyedModules importArts
  readImports hashes reads importArts mods
  let mut modules : Array (Name × Array (ModuleUsage.Digest × Name)) := #[]
  for m in mods do
    let some (_, imp) ← importUsage? hashes reads importArts m | return false
    modules := modules.push (m, imp.specKeys)
  return ModuleUsage.specProviders (usage.specLookups.map (·.1)) modules == usage.specLookups

/--
A digest of the recorded `closure` digest of each direct workspace import, with its name, or `none`
if `importUsage?` accepts nothing for one (with `kept`, it accepts a kept import's), or, given `importedClosures?`
(`UsageSidecar.importedClosures`), if one's `closure` is not the one the compile imported. A module's closure is its
direct imports plus their closures; a direct toolchain import is pinned by the source text and the Lean githash
(local trace). A module is replayed only if this digest is unchanged and every edge of its closure is current
(`closureEdgesCurrent`), so every workspace module's recorded closure digest is its current closure, and
this digest covers the importer's whole closure. A kept import's is the exception: its recorded closure is the one
before the accept, which folds in table digests of its own declarations as Lean compiled them. So with `kept` the
digest only tells whether the closure changed (`Module.usageVerdict`, which then decides at best `recheck`), and
`Module.writeUsekey` never takes it.
-/
def closureHash (hashes : ContentHashes) (reads : ImportReads) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts)
    (importedClosures? : Option (NameMap ModuleUsage.Digest) := none) (kept := false) :
    JobM (Option ModuleUsage.Digest) := do
  let mods := presetup.directImports.filterMap (·.module?) |>.map (·.name) |>.qsort Name.quickLt |>.eraseReps
  readImports hashes reads importArts mods
  let mut e := ({} : ModuleUsage.Enc).nat mods.size
  for m in mods do
    let some (_, imp) ← importUsage? hashes reads importArts m (kept := kept) | return none
    if let some imported := importedClosures? then
      unless imported.find? m == some imp.closure do return none
    e := e.name m |>.digest imp.closure
  return some e.finish

/--
Whether every edge of the closure is current: for every module `x` of the closure that is not a module-system file
(`keyedModules`) and every direct import `y` of `x` recorded with a closure (`UsageImport.importedClosures`), `y`'s
current `closure`, read through `importUsage?`, is the one `x`'s compile imported. `closureHash` reads only the direct
imports' records of their closures, and such a record names the closures its compile read: another workspace can
rewrite a shared dependency after this build kept or compiled an intermediate module, which then still records the
dependency's old closure. With every edge current, every recorded closure describes the current files. A module-system
file imports only module-system files, whose bytes `modsysHash` pins, so no edge into a keyed module starts at one.
An `x` whose `y` is a toolchain module or a module-system file, or has no digests, records no closure for it, or one
pinned as above: only `y`s that `importUsage?` reads are compared, and one it cannot read fails the check. A kept
module's record is read here (`kept`): it names the closures its compile read, which is what this compares, and a
kept module in the closure already holds every importer to `recheck` at best (`untrustedClosureModule?`).
-/
def closureEdgesCurrent (hashes : ContentHashes) (reads : ImportReads)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  let mods := keyedModules importArts
  readImports hashes reads importArts mods
  for x in mods do
    let some (_, imp) ← importUsage? hashes reads importArts x (kept := true) | return false
    for (y, recorded) in imp.importedClosures do
      unless importArts.contains y do continue
      let some (_, cur) ← importUsage? hashes reads importArts y (kept := true) | return false
      unless cur.closure == recorded do return false
  return true

/--
The first workspace module of the closure (`importArts`; module-system files aside, which `modsysHash` pins) whose
fields importers do not trust (`importUsage?`): a module a kept-module check kept, or one without a usage key that
binds them to its current `.olean`. A compile against a kept module records that module's digests, which describe its
declarations as Lean compiled them, as what it used.
-/
def untrustedClosureModule? (hashes : ContentHashes) (reads : ImportReads)
    (importArts : NameMap ImportArtifacts) : JobM (Option Name) := do
  let mods := keyedModules importArts
  readImports hashes reads importArts mods
  let ws ← getWorkspace
  for m in mods do
    if (ws.findModule? m).isNone then continue
    if (← importUsage? hashes reads importArts m).isNone then return some m
  return none

/--
The closure state `Module.writeUsekey` must find unchanged after the compile: the `modsysHash` of the closure
(`modsysBefore`), and whether any workspace module of the closure is untrusted — kept, or without a key binding its
fields to its `.olean` (`untrustedClosureModule?`). A compile reads these at its start; `writeUsekey` writes a key
only when they still hold, because another workspace can change a shared dependency while the module compiles.
-/
public def usekeyBefore (importArts : NameMap ImportArtifacts) :
    JobM (ModuleUsage.Digest × Option Name) := do
  let hashes ← ContentHashes.new
  let reads ← IO.mkRef {}
  return (← modsysHash hashes importArts, ← untrustedClosureModule? hashes reads importArts)

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
    for (m, _) in importArts do
      unless (usage.digested.binSearch (m, default) (Name.quickLt ·.1 ·.1)).isSome do return false
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
its `provides`, which its `.usekey` holds and binds to its `.olean` (`importUsage?`, read here also for a kept module:
what it provides comes from its `.olean`, which the accept did not change); a `module` file's and a toolchain
module's from the private part of their `.olean`, pinned by `modsysHash` and by the Lean githash. A module that starts
to declare a name has changed provides unless it is a toolchain module, a `module` file or the compiled module, so
every new duplicate has a declarer this checks.

Names are compared by `Name.hash`, so a hash collision only rebuilds. The `.olean` reads assume the data layout of
the Lean that Lake was built with, so with another Lean, or if a read fails, the check fails. A `module` file's kernel
constants are kept per build and module state, a toolchain module's per build (`BuildContext.kernelProviders`), so a
later check does not read them again. The workspace modules are read in parallel (`parallelRuns`), and their reads'
logs and errors are replayed in closure order before any duplicate decides the check, as a serial check meets them.
-/
def UsageSidecar.kernelDisjoint (usage : UsageSidecar) (presetup : ModulePreSetup) (hashes : ContentHashes)
    (reads : ImportReads) (importArts : NameMap ImportArtifacts) (changed : Array (Name × UsageImport)) :
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
  -- whether module `k` declaring the constant with hash `h` duplicates a claimed constant
  let clash (k : Name) (h : UInt64) : Bool := claims[h]?.any (·.any (· != k))
  let outside (r : Array Name) (i : ModuleImport) := if i.module?.isNone then r.push i.module else r
  let kp := (← getBuildContext).kernelProviders
  readImports hashes reads importArts (keyedModules importArts)
  let known ← reads.get
  let snap ← getBuildStoreSnapshot
  -- a workspace module of the closure: the toolchain modules it imports, and whether its kernel constants duplicate a
  -- claimed one or, for a `module` file, the digest of its state and its `.olean` parts, whose constants are read next;
  -- `none` if they cannot be read
  let scan (x : Name × ImportArtifacts) :
      JobM (Option (Array Name × (Bool ⊕ (Name × ModuleUsage.Digest × Array FilePath)))) := do
    let (m, arts) := x
    let some mod ← findModule? m | return some (#[], .inl false)
    let imports := (← (← fetchFrom snap mod.input).await).imports.foldl outside #[]
    if arts.oleanServer?.isSome then
      if arts.oleanPrivate?.isNone then return none
      let parts := arts.oleanParts false
      let mut e : ModuleUsage.Enc := {}
      for p in parts do
        e := e.digest (← contentHash hashes p)
      return some (imports, .inr (m, e.finish, parts))
    let some (_, imp) ← replayRun (known[m]?.getD (#[], .ok none)) | return none
    return some (imports, .inl (imp.provides.1.any (clash m ·.hash)))
  -- whether a `module` file's kernel constants duplicate a claimed one, or `none` if they cannot be read
  let modsysClash (x : Name × ModuleUsage.Digest × Array FilePath) : JobM (Option Bool) := do
    let (m, d, parts) := x
    let hs ← match ← kp.atomically (return (← get).modsys.find? (m, d)) with
      | some hs => pure hs
      | none =>
        let some (hs, _) ← readKernelProvides (readModuleDataParts parts) | return none
        kp.atomically (modify fun s => { s with modsys := s.modsys.insert (m, d) hs })
        pure hs
    return some (hs.any (clash m))
  let mut closure := #[]
  for x in importArts do
    closure := closure.push x
  let mut toolchain := presetup.directImports.foldl outside #[]
  let mut modsys := #[]
  for r in ← parallelRuns closure scan do
    let some (imports, kernel) ← replayRun r | return false
    toolchain := toolchain ++ imports
    match kernel with
    | .inl c => clashes := clashes || c
    | .inr x => modsys := modsys.push x
  for r in ← parallelRuns modsys modsysClash do
    let some c ← replayRun r | return false
    clashes := clashes || c
  let searchPath := (← getLeanPath) ++ [← getLeanLibDir]
  let mut seen : NameSet := {}
  while h : 0 < toolchain.size do
    let m := toolchain.back
    toolchain := toolchain.pop
    if seen.contains m || importArts.contains m then continue
    seen := seen.insert m
    let read? ← match ← kp.atomically (return (← get).toolchain.find? m) with
      | some read? => pure read?
      | none =>
        let read? ← match ← Lean.SearchPath.findWithExt searchPath "olean" m with
          | some olean => readKernelProvides (readModuleDataPartsOfFile olean)
          | none => pure none
        kp.atomically (modify fun s => { s with toolchain := s.toolchain.insert m read? })
        pure read?
    let some (hs, imports) := read? | return false
    clashes := clashes || hs.any (clash m)
    toolchain := toolchain ++ imports
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
at `resolvedFile`, `readResolvedSidecar`) still resolves to the same module, with the same kinds, as when Lean compiled
it, no closure module gained a kernel constant another declares (`UsageSidecar.kernelDisjoint`), and no closure module
that changed gives one of those names a non-local attribute. Each workspace module of the closure whose provides
digest (`UsageImport.providesDigest`, which `importUsage?` binds to its current `.olean`; a kept module's too, since
what it provides comes from its `.olean`, which the accept did not change) differs from
the one the compile imported (`UsageSidecar.digested`) must still provide each name the resolver mapped to it with the
recorded kinds, and none of the other names (`Lean.ModuleUsage.ResolvedTable.providerUnchanged`), and none of those
names may be in its `indirect`: a fresh compile that records an extra module use of such a name
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
declarer, and `usageVerdict` checks that copy's digest): the module provided the name then as a kernel constant,
possibly also as a compiled name, and keeping or dropping a non-winner's provider cannot change the winner. A
module-system module's provides are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.resolvedUnchanged (usage : UsageSidecar) (presetup : ModulePreSetup) (resolvedFile : FilePath)
    (hashes : ContentHashes) (reads : ImportReads) (importArts : NameMap ImportArtifacts) : JobM Bool := do
  readImports hashes reads importArts (keyedModules importArts)
  let mut changed := #[]
  let mut table? : Option ModuleUsage.ResolvedTable := none
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then continue
    if (← findModule? m).isNone then continue
    let some (_, recorded) := usage.digested.binSearch (m, default) (Name.quickLt ·.1 ·.1) | return false
    let some (_, imp) ← importUsage? hashes reads importArts m (kept := true) | return false
    if imp.providesDigest == recorded then continue
    if usage.resolvedAll then return false
    if table?.isNone then
      table? ← readResolvedSidecar usage resolvedFile
    let some table := table? | return false
    let declared := (usage.used.binSearch (m, #[]) (Name.quickLt ·.1 ·.1)).elim #[] (·.2.map (·.1))
    unless table.providerUnchanged m imp.providedIds.get declared do return false
    if imp.indirect.any (table.entries.contains <| ModuleUsage.resolvedId ·) then return false
    changed := changed.push (m, imp)
  if changed.isEmpty then return true
  usage.kernelDisjoint presetup hashes reads importArts changed

/--
Writes the module's `.usekey` from the `.usage` Lean just wrote: the digest of the `.usage` bytes, the module's
local trace hash, the hash of its `.olean`, the `modsysHash` of its closure, the `closureHash` of its direct imports,
for each workspace `extra` module, the hash of its `.olean` and its current `moduleDigest`, `kept` as `false` (only a
kept-module check's accept sets it, `acceptKept`, so a key of this version always carries the field), and the
`.usage` fields its importers read (`UsageSidecar.importerJson`). Each `.olean` hash is of its bytes (`contentHash`).

The key must describe what the compile read, and another workspace can rebuild a shared dependency while the module
compiles. So every direct import's `closure` and every `extra` module's `moduleDigest`, read now through
`importUsage?`, must be what the compile imported (`UsageSidecar.importedClosures`, `importedDigests`, which Lean
took from the `.olean` files it loaded), and the closure's module-system files must have the bytes they had before
the compile (`modsysBefore`).
Writes nothing if not, or if the `.usage` does not cover the closure (`UsageSidecar.coversClosure`) or is missing,
so the module is never skipped. A kept module's fields hold digests of its declarations as Lean compiled them, and a
compile against it records those as what it used: a key over them would let a later check skip the module once the
kept module compiles again, against declarations that mean something else. So a module compiled while a workspace
module of its closure is untrusted — kept, or without a key binding its fields to its `.olean`
(`untrustedClosureModule?`, which covers the direct imports and the `extra` modules) — gets no key, and it compiles
the next time it is stale. That check is read twice: `untrustedBefore?` is its result as the compile started, and it
is run again here. Another workspace can rebuild a kept dependency normally while this module compiles, so a module
untrusted when the compile read it can have an ordinary key by the time the compile ends; the key is written only
when neither the state the compile read nor the state now has an untrusted closure module.
-/
public def Module.writeUsekey (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) (modsysBefore : ModuleUsage.Digest)
    (untrustedBefore? : Option Name) (oleanDigest? : Option ModuleUsage.Digest := none) : JobM Unit := do
  let some (usage, usageDigest) ← readOwnUsage mod.usageFile | return
  unless usage.coversClosure importArts do return
  let hashes ← ContentHashes.new
  let reads ← IO.mkRef {}
  let modsys ← modsysHash hashes importArts
  unless modsys == modsysBefore do return
  -- No key if the compile read an untrusted closure module (kept, or without a key binding its fields to its
  -- `.olean`): `untrustedBefore?` is that check as the compile started, rechecked here, since another workspace can
  -- give a kept dependency an ordinary key while this module compiles.
  if untrustedBefore?.isSome then return
  if (← untrustedClosureModule? hashes reads importArts).isSome then return
  let some closure ← closureHash hashes reads presetup importArts (importedClosures? := some usage.importedClosures)
    | return
  let mut extra := #[]
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (olean, imp) ← importUsage? hashes reads importArts m | return
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
    ("kept", toJson false),
    ("importer", usage.importerJson)
  ]
  ModuleUsage.writeFileReplacing mod.usekeyFile key.compress.toUTF8

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
before the accept (`closureHash` and `closureEdgesCurrent` with `kept`): it serves only to tell whether the closure
changed.
-/
public def Module.usageVerdict (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) : JobM UsageVerdict := do
  let some key ← readUsageSidecar UsekeySidecar usekeyVersion mod.usekeyFile
    | return .compile "it has no usage key"
  let some (usage, _) ← readOwnUsage mod.usageFile (expected? := key.usage)
    | return .compile "its usage record is missing or is not the one its key was written from"
  if usage.noskip then return .compile "its usage record may be incomplete"
  if key.localHash != presetup.localTrace.hash then return .compile "its local inputs changed"
  unless usage.coversClosure importArts do
    return .compile "a module of its closure had no usage digests when it was compiled"
  let hashes ← ContentHashes.new
  let reads ← IO.mkRef {}
  unless (← contentHash hashes mod.oleanFile) == key.olean do
    return .compile "its usage record describes another .olean"
  unless (← modsysHash hashes importArts) == key.modsys do
    return .compile "a module-system file of its closure changed"
  let ws ← getWorkspace
  for m in usage.extra do
    if (ws.findModule? m).isNone then continue
    let some (oleanHash, digest) := key.extra.find? m
      | return .compile s!"its usage key does not record {m}, whose machinery it used"
    let some (olean, imp) ← importUsage? hashes reads importArts m
      | return .compile s!"{m}, whose machinery it used, has no current usage record"
    unless (← contentHash hashes olean) == oleanHash && imp.moduleDigest == digest do
      return .compile s!"{m}, whose machinery it used, changed"
  let some closure ← closureHash hashes reads presetup importArts (kept := true)
    | return .compile "a direct import has no usage record that shows its closure"
  unless closure == key.closure do
    return .compile "its import closure changed, so a name it looked up, used or referred to may resolve elsewhere"
  unless (← closureEdgesCurrent hashes reads importArts) do
    return .compile "a module of its closure no longer imports the closure it was compiled against"
  unless (← usage.resolvedUnchanged presetup mod.resolvedFile hashes reads importArts) do
    return .compile "a name it looked up, used or referred to may now resolve to another module"
  -- A module outside the workspace is a toolchain module, pinned by the Lean githash in `localTrace`.
  readImports hashes reads importArts <| usage.used.filterMap fun (m, _) =>
    if (ws.findModule? m).isSome then some m else none
  for (m, consts) in usage.used do
    if (ws.findModule? m).isNone then continue
    let some (_, imp) ← importUsage? hashes reads importArts m | return .recheck
    for (c, d) in consts do
      unless imp.own.find? c == some d do return .recheck
  unless (← usage.specProvidersUnchanged hashes reads importArts) do return .recheck
  -- `resolvedUnchanged` read every workspace module of the closure, so a module importers do not trust is kept
  if (← untrustedClosureModule? hashes reads importArts).isSome then return .recheck
  return .upToDate
