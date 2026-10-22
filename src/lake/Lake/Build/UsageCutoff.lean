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
meaning (`Module.usageUpToDate`), and the `.usekey` Lake writes after a compile (`Module.writeUsekey`), which binds
the `.usage` Lean wrote (`Lean.ModuleUsage.writeUsage`) to the module's `.olean` and inputs.
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
  /-- Every name whose defining module the module's compile looked up, used or referred to, grouped by the module the
  resolver mapped it to (`none`: the module itself, or no module), each with the kinds under which that module
  provided it (`Lean.ModuleUsage.resolvedGroups`). -/
  resolved : Array (Option Name × Array (Name × UInt8))
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

/-- A module's `.usekey` sidecar: what Lake saw of the module's build when Lean wrote its `.usage`. -/
structure UsekeySidecar where
  localHash : Hash
  /-- The digest of the bytes of the module's `.usage` (`ModuleUsage.Digest.ofBytes`) the key was written from:
  readers take the key first and accept only that `.usage`. -/
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
  deriving TypeName

/-- Reads a JSON array of `[name, digest, digest]` triples into a map. -/
def nameDigestPairs (j : Json) : Except String (NameMap (ModuleUsage.Digest × ModuleUsage.Digest)) := do
  (← j.getArr?).foldlM (init := {}) fun m e => do
    let #[n, a, b] ← e.getArr? | throw s!"expected a triple, got {e.compress}"
    return m.insert (← fromJson? (α := ModuleUsage.JName) n).name (← fromJson? a, ← fromJson? b)

/-- Reads a JSON array of names. -/
def namesOfJson (j : Json) : Except String (Array Name) :=
  return (← fromJson? (α := Array ModuleUsage.JName) j).map (·.name)

/-- Reads a module's `provides`: a JSON pair of name arrays. -/
def providesOfJson (j : Json) : Except String (Array Name × Array Name) := do
  let #[k, e] ← j.getArr? | throw s!"expected a pair of name arrays, got {j.compress}"
  return (← namesOfJson k, ← namesOfJson e)

instance : FromJson UsageSidecar where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (ModuleUsage.JName × ModuleUsage.Digest)) "own"
    let used ← j.getObjValAs? (Array (ModuleUsage.JName × Array (ModuleUsage.JName × ModuleUsage.Digest))) "used"
    let extra ← j.getObjValAs? (Array (ModuleUsage.JName × Bool)) "extra"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × ModuleUsage.JName)) "specKeys"
    return {
      noskip := ← j.getObjValAs? Bool "noskip"
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      digested := (← j.getObjValAs? (Array (ModuleUsage.JName × ModuleUsage.Digest)) "digested").map fun (n, d) => (n.name, d)
      importedClosures := (← j.getObjValAs? (Array (ModuleUsage.JName × ModuleUsage.Digest)) "importedClosures").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      importedDigests := (← j.getObjValAs? (Array (ModuleUsage.JName × ModuleUsage.Digest)) "importedDigests").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      used := used.map fun (m, cs) => (m.name, cs.map fun (c, d) => (c.name, d))
      extra := extra.map (·.1.name)
      resolved := ← ModuleUsage.resolvedOfJson (← j.getObjVal? "resolved")
      resolvedAll := ← j.getObjValAs? Bool "resolvedAll"
      providesDigest := ← j.getObjValAs? ModuleUsage.Digest "providesDigest"
      provides := ← providesOfJson (← j.getObjVal? "provides")
      indirect := ← namesOfJson (← j.getObjVal? "indirect")
      specKeys := specKeys.map fun (d, n) => (d, n.name)
      specLookups := ← j.getObjValAs? (Array (ModuleUsage.Digest × ModuleUsage.Digest)) "specLookups"
    }

/-- The parts of an imported module's `.usage` that its importers' checks read (`importUsage?`), which
the build's sidecar cache keeps: a `UsageSidecar` without the lists only the module's own checks read. -/
structure UsageImport where
  moduleDigest : ModuleUsage.Digest
  closure : ModuleUsage.Digest
  own : NameMap ModuleUsage.Digest
  providesDigest : ModuleUsage.Digest
  provides : Array Name × Array Name
  indirect : Array Name
  specKeys : Array (ModuleUsage.Digest × Name)
  deriving TypeName

/-- The `UsageImport` view of a module's own `.usage`. -/
def UsageSidecar.toImport (u : UsageSidecar) : UsageImport :=
  { moduleDigest := u.moduleDigest, closure := u.closure, own := u.own, providesDigest := u.providesDigest,
    provides := u.provides, indirect := u.indirect, specKeys := u.specKeys }

/-- Reads only the fields an importer checks (`importUsage?`). The fields it skips are not importer inputs; a
sidecar that `UsageSidecar` would reject fails its own module's check, and the importer still binds the sidecar to
the `.olean` through the `.usekey`. -/
instance : FromJson UsageImport where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (ModuleUsage.JName × ModuleUsage.Digest)) "own"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × ModuleUsage.JName)) "specKeys"
    return {
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      providesDigest := ← j.getObjValAs? ModuleUsage.Digest "providesDigest"
      provides := ← providesOfJson (← j.getObjVal? "provides")
      indirect := ← namesOfJson (← j.getObjVal? "indirect")
      specKeys := specKeys.map fun (d, n) => (d, n.name)
    }

instance : FromJson UsekeySidecar where
  fromJson? j := do
    return {
      localHash := ← j.getObjValAs? Hash "local"
      usage := ← j.getObjValAs? ModuleUsage.Digest "usage"
      olean := ← j.getObjValAs? ModuleUsage.Digest "olean"
      modsys := ← j.getObjValAs? ModuleUsage.Digest "modsys"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      extra := ← nameDigestPairs (← j.getObjVal? "extra")
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
  let some (some recorded, digest, value) ← (← getBuildContext).sidecarCache.atomically (return (← get)[path]?)
    | return none
  return if recorded == stamp then some (digest, value) else none

/-- Parses the bytes of the usage-cutoff sidecar at `path`: `none` if it has another format version than
`Lean.ModuleUsage.usageVersion` (another toolchain wrote it), or, with a warning, if it is not valid, so that the
module builds normally. -/
def parseUsageSidecar (α : Type) [FromJson α] (path : FilePath) (bytes : ByteArray) : JobM (Option α) := do
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
    if v != ModuleUsage.usageVersion then return none
    some <$> fromJson? (α := α) j

/--
Reads a usage-cutoff sidecar. Returns `none` if it does not exist, has another format version
(`parseUsageSidecar`), or its bytes do not have the digest `expected?` (the `.usage` a `.usekey` was written
from). If it exists but is not valid, logs a warning and returns `none`, so the module builds normally. Reuses
the build's parse of the same contents (`BuildContext.sidecarCache`), without reading the file while its stamp is the
one recorded with that parse.
-/
def readUsageSidecar (α : Type) [FromJson α] [TypeName α] (path : FilePath)
    (expected? : Option ModuleUsage.Digest := none) : JobM (Option α) := do
  if let some (digest, cached) ← stampedSidecar? path then
    if expected?.any (· != digest) then return none
    let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
    return some value
  let some (bytes, digest, stamp?) ← readSidecarBytes? path expected? | return none
  (← getBuildContext).sidecarCache.atomically do
    let entries ← getThe (Std.HashMap FilePath SidecarEntry)
    if let some (_, parsedFrom, cached) := entries.get? path then
      if parsedFrom == digest then
        let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
        modifyThe (Std.HashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, cached))
        return some value
    let some value ← parseUsageSidecar α path bytes | return none
    modifyThe (Std.HashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, Dynamic.mk value))
    return some value

/--
Reads a module's own `.usage` as `readUsageSidecar` does, but parses it on every read: only the
module's own checks read all of it. Returns it with the digest of its bytes. Leaves its `UsageImport` in the
build's sidecar cache for the module's importers (`importUsage?`).
-/
def readOwnUsage (path : FilePath) (expected? : Option ModuleUsage.Digest := none) :
    JobM (Option (UsageSidecar × ModuleUsage.Digest)) := do
  let some (bytes, digest, stamp?) ← readSidecarBytes? path expected? | return none
  let some usage ← parseUsageSidecar UsageSidecar path bytes | return none
  (← getBuildContext).sidecarCache.atomically do
    modifyThe (Std.HashMap FilePath SidecarEntry) (·.insert path (stamp?, digest, Dynamic.mk usage.toImport))
  return some (usage, digest)

/--
The hashes of the files one usage-cutoff check (`Module.usageUpToDate`, `Module.writeUsekey`) has
read, so that it reads each file once, and every `importUsage?` binding of the check is to the same bytes. A check
never reuses another's: another workspace's build can rebuild a shared dependency between two checks. Across checks,
a file's hash is reused only while its stamp shows its bytes unchanged (`BuildContext.fileDigests`).
-/
public abbrev ContentHashes := IO.Ref (Std.HashMap FilePath ModuleUsage.Digest)

/--
The hash of `file`'s current bytes (`Lean.ModuleUsage.fileDigest`, 128 bits), never read from a
`.hash` file: an `.olean` rewritten behind Lake's back (e.g., by `lean -o`) keeps its old `.hash`,
and a usage-cutoff decision must see the new bytes. Read at most once per check (`hashes`), and taken from an
earlier check of the build only if the file's stamp (`Lean.ModuleUsage.fileStamp`) is the one recorded when those
bytes were read (`BuildContext.fileDigests`).
-/
def contentHash (hashes : ContentHashes) (file : FilePath) : JobM ModuleUsage.Digest := do
  if let some hash := (← hashes.get)[file]? then return hash
  let hash ← stampedDigest
  hashes.modify (·.insert file hash)
  return hash
where
  stampedDigest : JobM ModuleUsage.Digest := do
    let memo := (← getBuildContext).fileDigests
    if let some stamp ← ModuleUsage.fileStamp file then
      if let some (recorded, hash) ← memo.atomically (return (← get)[file]?) then
        if recorded == stamp then return hash
    let (hash, stamp?) ← ModuleUsage.fileDigestStamped file
    if let some stamp := stamp? then
      memo.atomically (modify (·.insert file (stamp, hash)))
    return hash

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
The `.olean` of importee `m` in `importArts` and its `.usage`, or `none` if either is missing, the
`.usage` is invalid, or nothing shows that the `.usage` describes that `.olean`: unless `m` is a
module-system file, its `.usekey` is read first, and the `.usage` must be the one it was written from (its digest,
`UsekeySidecar.usage`) and the `.olean` the one it records (`contentHash` of the current bytes). Another workspace can
replace the three files while they are read; reading the key first makes every mixture of old and new files fail
one of the two comparisons, so the check sees one state of the module or none. An `.olean` rewritten behind Lake's
back (e.g., by `lean -o` of other contents, which leaves the old sidecars and `.hash`) is not checked against the
old `.usage` either. A module-system file's bytes are pinned by `modsysHash` instead.
-/
def importUsage? (hashes : ContentHashes) (importArts : NameMap ImportArtifacts) (m : Name) :
    JobM (Option (FilePath × UsageImport)) := do
  let some arts := importArts.find? m | return none
  let some olean := arts.olean? | return none
  let usageFile := olean.withExtension "usage"
  if arts.oleanServer?.isSome then
    return (olean, ·) <$> (← readUsageSidecar UsageImport usageFile)
  let some key ← readUsageSidecar UsekeySidecar (olean.withExtension "usekey") | return none
  let some usage ← readUsageSidecar UsageImport usageFile (expected? := key.usage) | return none
  unless key.olean == (← contentHash hashes olean) do return none
  return some (olean, usage)

/--
Whether every key the module looked up in the specialization cache (`UsageSidecar.specLookups`) has the same
providers in its closure as when Lean compiled it: the closure's non-module workspace modules that map the key, each
with the specialization it maps the key to, digested by the function Lean used (`Lean.ModuleUsage.specProviders`).
Each closure module's keys come from its `.usage` once `importUsage?` has bound it to the module's current `.olean`,
in this check's `hashes`. An import that starts providing a key the module missed, stops providing one it
hit, or maps it elsewhere changes which specialization a fresh compile uses, so the module rebuilds. A module-system
module's keys are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.specProvidersUnchanged (usage : UsageSidecar) (hashes : ContentHashes)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  if usage.specLookups.isEmpty then return true
  let mut modules : Array (Name × Array (ModuleUsage.Digest × Name)) := #[]
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then continue
    let some (_, imp) ← importUsage? hashes importArts m | return false
    modules := modules.push (m, imp.specKeys)
  return ModuleUsage.specProviders (usage.specLookups.map (·.1)) modules == usage.specLookups

/--
A digest of the recorded `closure` digest of each direct workspace import, with its name, or `none`
if `importUsage?` accepts no `.usage` for one, or, given `importedClosures?` (`UsageSidecar.importedClosures`), if
one's `closure` is not the one the compile imported. A module's closure is its direct imports plus their
closures; a direct toolchain import is pinned by the source text and the Lean githash (local
trace). A module is replayed only if this digest is unchanged, so every workspace module's recorded
closure digest stays equal to its current closure, and this digest covers the importer's whole
closure.
-/
def closureHash (hashes : ContentHashes) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts)
    (importedClosures? : Option (NameMap ModuleUsage.Digest) := none) :
    JobM (Option ModuleUsage.Digest) := do
  let mods := presetup.directImports.filterMap (·.module?) |>.map (·.name)
    |>.qsort Name.quickLt |>.toList.eraseDups
  let mut e := ({} : ModuleUsage.Enc).nat mods.length
  for m in mods do
    let some (_, imp) ← importUsage? hashes importArts m | return none
    if let some imported := importedClosures? then
      unless imported.find? m == some imp.closure do return none
    e := e.name m |>.digest imp.closure
  return some e.finish

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
Whether no closure module whose provides changed (`changed`, each with its current `.usage`) declares a kernel
constant that another module of the compile declares too, unless the compile depended on that module's copy (`used`
lists the name under it, as `Lean.ModuleUsage.moduleUsed` lists every declarer of each duplicate the import saw). For
such a name a fresh compile fails at the import (`throwAlreadyImported`) or at the module's own declaration, or keeps
a copy the compile did not depend on (`subsumesInfo`). The other declarers are every other workspace module of the
closure (`importArts`), the compiled module itself (`UsageSidecar.provides`) and every toolchain module a fresh
compile imports: those its direct imports and the workspace modules' (their `ModuleInput.imports`) name outside the
workspace, and their imports (`ModuleData.imports`), transitively, as a non-`module` file imports every module its
imports reach. Lean finds such a module's `.olean` in the workspace's library directories (`getLeanPath`, which Lake
passes as `LEAN_PATH`) and then its own (`Lean.initSearchPath`), and reads its parts as an import does
(`Lean.readModuleDataPartsOfFile`). A non-`module` file's kernel constants come from its current `.usage`, which its
`.usekey` binds to its `.olean`; a `module` file's and a toolchain module's from the private part of their `.olean`,
pinned by `modsysHash` and by the Lean githash. A module that starts to declare a name has changed provides unless it
is a toolchain module, a `module` file or the compiled module, so every new duplicate has a declarer this checks.

Names are compared by `Name.hash`, so a hash collision only rebuilds. The `.olean` reads assume the data layout of
the Lean that Lake was built with, so with another Lean, or if a read fails, the check fails. Kernel constants are
indexed once per build, workspace modules' per module state (`BuildContext.kernelProviders`).
-/
def UsageSidecar.kernelDisjoint (usage : UsageSidecar) (presetup : ModulePreSetup) (hashes : ContentHashes)
    (importArts : NameMap ImportArtifacts) (changed : Array (Name × UsageImport)) : JobM Bool := do
  unless (← getLeanInstall).githash == Lean.githash do return false
  let outside (r : Array Name) (i : ModuleImport) := if i.module?.isNone then r.push i.module else r
  let mut toolchain := presetup.directImports.foldl outside #[]
  -- each workspace module of the closure with the digest of its state and, for a non-`module` file, its kernel
  -- constants (a `module` file's are read from its `.olean` parts)
  let mut closure : Array (Name × ModuleUsage.Digest × Option (Array Name)) := #[]
  for (m, arts) in importArts do
    let some mod ← findModule? m | continue
    toolchain := (← (← mod.input.fetch).await).imports.foldl outside toolchain
    if arts.oleanServer?.isSome then
      if arts.oleanPrivate?.isNone then return false
      let mut e : ModuleUsage.Enc := {}
      for p in arts.oleanParts false do
        e := e.digest (← contentHash hashes p)
      closure := closure.push (m, e.finish, none)
    else
      let some (_, imp) ← importUsage? hashes importArts m | return false
      closure := closure.push (m, imp.providesDigest, some imp.provides.1)
  let kp := (← getBuildContext).kernelProviders
  for (m, d, kernel?) in closure do
    if ← kp.atomically (return (← get).indexed.contains (m, d)) then continue
    let hs ← match kernel? with
      | some kernel => pure (kernel.map (·.hash))
      | none =>
        let some (hs, _) ← readKernelProvides <|
          readModuleDataParts ((importArts.find? m).elim #[] (·.oleanParts false)) | return false
        pure hs
    kp.atomically do
      unless (← get).indexed.contains (m, d) do
        modify fun s => { s.index m d hs with indexed := s.indexed.insert (m, d) }
  let searchPath := (← getLeanPath) ++ [← getLeanLibDir]
  let mut current : NameMap ModuleUsage.Digest := closure.foldl (fun c (m, d, _) => c.insert m d) {}
  while h : 0 < toolchain.size do
    let m := toolchain.back
    toolchain := toolchain.pop
    if current.contains m || importArts.contains m then continue
    current := current.insert m default
    let imports? ← match ← kp.atomically (return (← get).toolchain.find? m) with
      | some imports? => pure imports?
      | none =>
        let read? ← match ← Lean.SearchPath.findWithExt searchPath "olean" m with
          | some olean => readKernelProvides (readModuleDataPartsOfFile olean)
          | none => pure none
        kp.atomically do
          unless (← get).toolchain.contains m do
            modify fun s => { (read?.elim s (s.index m default ·.1)) with
              toolchain := s.toolchain.insert m (read?.map (·.2)) }
        pure (read?.map (·.2))
    let some imports := imports? | return false
    toolchain := toolchain ++ imports
  let byHash ← kp.atomically (return (← get).byHash)
  for (m, imp) in changed do
    let declared := (usage.used.binSearch (m, #[]) (Name.quickLt ·.1 ·.1)).elim #[] (·.2)
    for n in imp.provides.1 do
      if (declared.binSearch (n, default) (Name.quickLt ·.1 ·.1)).isSome then continue
      if usage.provides.1.binSearchContains n Name.quickLt ||
          (byHash.findD n.hash #[]).any fun (k, d) => k != m && current.find? k == some d then
        return false
  return true

/--
Whether every name whose defining module the compile looked up, used or referred to (`UsageSidecar.resolved`) still
resolves to the same module, with the same kinds, as when Lean compiled it, no closure module gained a kernel
constant another declares (`UsageSidecar.kernelDisjoint`), and no closure module that changed gives one of those names
a non-local attribute. Each workspace module of the closure whose provides digest (`UsageImport.providesDigest`, from
a `.usage` that `importUsage?` binds to its current `.olean`) differs from the one the compile imported
(`UsageSidecar.digested`) must still provide each name the resolver mapped to it with the recorded kinds, and none of
the other names, and none of those names may be in its `indirect`: a fresh compile that records an extra module use of
such a name (`Lean.recordExtraModUseFromDecl`, which looks the name up first) also records that module. A module the
compile recorded as an extra use is not asked: its `.olean` is pinned (`UsekeySidecar.extra`), so its provides digest
is unchanged. A module whose provides digest is unchanged is not asked about any name. If the compile read the
resolver's whole map (`UsageSidecar.resolvedAll`), no such module may exist.

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
declarer, and `usageUpToDate` checks that copy's digest): the module provided the name then as a kernel constant,
possibly also as a compiled name, and keeping or dropping a non-winner's provider cannot change the winner. A
module-system module's provides are pinned by `modsysHash`, a toolchain module's by the Lean githash.
-/
def UsageSidecar.resolvedUnchanged (usage : UsageSidecar) (presetup : ModulePreSetup) (hashes : ContentHashes)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  let mut changed := #[]
  for (m, arts) in importArts do
    if arts.oleanServer?.isSome then continue
    if (← findModule? m).isNone then continue
    let some (_, recorded) := usage.digested.binSearch (m, default) (Name.quickLt ·.1 ·.1) | return false
    let some (_, imp) ← importUsage? hashes importArts m | return false
    if imp.providesDigest == recorded then continue
    if usage.resolvedAll then return false
    let (kernel, extra) := imp.provides
    let declared := (usage.used.binSearch (m, #[]) (Name.quickLt ·.1 ·.1)).elim #[] (·.2)
    for (m?, ns) in usage.resolved do
      let winner := m? == some m
      for (n, k) in ns do
        let now := ModuleUsage.kindsIn kernel extra n
        if now == (if winner then k else 0) then continue
        unless !winner && now == ModuleUsage.kernelKind &&
            (declared.binSearch (n, default) (Name.quickLt ·.1 ·.1)).isSome do
          return false
    for n in imp.indirect do
      if usage.resolved.any fun (_, ns) => (ns.binSearch (n, 0) (Name.quickLt ·.1 ·.1)).isSome then
        return false
    changed := changed.push (m, imp)
  if changed.isEmpty then return true
  usage.kernelDisjoint presetup hashes importArts changed

/--
Writes the module's `.usekey` from the `.usage` Lean just wrote: the digest of the `.usage` bytes, the module's
local trace hash, the hash of its `.olean`, the `modsysHash` of its closure, the `closureHash` of its direct imports
and, for each workspace `extra` module, the hash of its `.olean` and its current `moduleDigest`. Each `.olean` hash
is of its bytes (`contentHash`).

The key must describe what the compile read, and another workspace can rebuild a shared dependency while the module
compiles. So every direct import's `closure` and every `extra` module's `moduleDigest`, read now through
`importUsage?`, must be what the compile imported (`UsageSidecar.importedClosures`, `importedDigests`, which Lean
took from the `.olean` files it loaded), and the closure's module-system files must have the bytes they had before
the compile (`modsysBefore`).
Writes nothing if not, or if the `.usage` does not cover the closure (`UsageSidecar.coversClosure`) or is missing,
or if `importUsage?` accepts no `.usage` for a direct import or a workspace `extra` module, so the module is never
skipped.
-/
public def Module.writeUsekey (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) (modsysBefore : ModuleUsage.Digest) : JobM Unit := do
  let some (usage, usageDigest) ← readOwnUsage mod.usageFile | return
  unless usage.coversClosure importArts do return
  let hashes ← IO.mkRef {}
  let modsys ← modsysHash hashes importArts
  unless modsys == modsysBefore do return
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
    ("version", ModuleUsage.usageVersion),
    ("usage", toJson usageDigest),
    ("local", toJson presetup.localTrace.hash.hex),
    ("olean", toJson (← contentHash hashes mod.oleanFile)),
    ("modsys", toJson modsys),
    ("closure", toJson closure),
    ("extra", Json.arr extra)
  ]
  IO.FS.writeFile mod.usekeyFile key.compress

/--
Whether nothing the module used changed meaning since Lean wrote its `.usage`: its `.usekey` (read first) was written
from its current `.usage` (`UsekeySidecar.usage`) and `.olean`, its `.usage` covers its closure (`importArts`,
`UsageSidecar.coversClosure`), its local inputs are unchanged, no module-system module in its closure changed
(`modsysHash`), its closure is unchanged (`closureHash`), every constant it used from a workspace module has the
same digest in that module's current `.usage` (one its key binds to its current `.olean`, `importUsage?`), every
workspace `extra` module has the same `.olean` hash and `moduleDigest`, every name whose defining module it looked up,
used or referred to resolves as before (`UsageSidecar.resolvedUnchanged`), and every specialization-cache key it
looked up has the same providers (`UsageSidecar.specProvidersUnchanged`). Every `.olean` hash is of the file's bytes
(`contentHash`), never read from a `.hash` file.
-/
public def Module.usageUpToDate (mod : Module) (presetup : ModulePreSetup)
    (importArts : NameMap ImportArtifacts) : JobM Bool := do
  let some key ← readUsageSidecar UsekeySidecar mod.usekeyFile | return false
  let some (usage, _) ← readOwnUsage mod.usageFile (expected? := key.usage) | return false
  if usage.noskip || key.localHash != presetup.localTrace.hash || !usage.coversClosure importArts then
    return false
  let hashes ← IO.mkRef {}
  unless (← contentHash hashes mod.oleanFile) == key.olean do return false
  unless (← modsysHash hashes importArts) == key.modsys do return false
  unless (← closureHash hashes presetup importArts) == some key.closure do return false
  -- A module outside the workspace is a toolchain module, pinned by the Lean githash in `localTrace`.
  for (m, consts) in usage.used do
    if (← findModule? m).isNone then continue
    let some (_, imp) ← importUsage? hashes importArts m | return false
    for (c, d) in consts do
      unless imp.own.find? c == some d do return false
  for m in usage.extra do
    if (← findModule? m).isNone then continue
    let some (oleanHash, digest) := key.extra.find? m | return false
    let some (olean, imp) ← importUsage? hashes importArts m | return false
    unless (← contentHash hashes olean) == oleanHash do return false
    unless imp.moduleDigest == digest do return false
  unless (← usage.resolvedUnchanged presetup hashes importArts) do return false
  usage.specProvidersUnchanged hashes importArts
