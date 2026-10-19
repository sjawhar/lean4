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
  /-- The imported modules whose `.olean` carried digests when Lean compiled the module
  (`Lean.ModuleUsage.digestedModules`), sorted by `Name.quickLt`. -/
  digested : Array Name
  /-- Each direct import's `closure` as the compile imported it (`Lean.ModuleUsage.writeUsage`). -/
  importedClosures : NameMap ModuleUsage.Digest
  /-- Each `extra` module's `moduleDigest` as the compile imported it. -/
  importedDigests : NameMap ModuleUsage.Digest
  own : NameMap ModuleUsage.Digest
  used : Array (Name × Array (Name × ModuleUsage.Digest))
  extra : Array Name
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
      digested := (← j.getObjValAs? (Array SidecarName) "digested").map (·.name)
      importedClosures := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedClosures").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      importedDigests := (← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "importedDigests").foldl
        (init := {}) fun m (n, d) => m.insert n.name d
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
      used := used.map fun (m, cs) => (m.name, cs.map fun (c, d) => (c.name, d))
      extra := extra.map (·.1.name)
      specKeys := specKeys.map fun (d, n) => (d, n.name)
      specLookups := ← j.getObjValAs? (Array (ModuleUsage.Digest × ModuleUsage.Digest)) "specLookups"
    }

/-- The parts of an imported module's `.usage` that its importers' checks read (`importUsage?`), which
the build's sidecar cache keeps: a `UsageSidecar` without the lists only the module's own checks read. -/
structure UsageImport where
  moduleDigest : ModuleUsage.Digest
  closure : ModuleUsage.Digest
  own : NameMap ModuleUsage.Digest
  specKeys : Array (ModuleUsage.Digest × Name)
  deriving TypeName

/-- The `UsageImport` view of a module's own `.usage`. -/
def UsageSidecar.toImport (u : UsageSidecar) : UsageImport :=
  { moduleDigest := u.moduleDigest, closure := u.closure, own := u.own, specKeys := u.specKeys }

/-- Reads only the fields an importer checks (`importUsage?`). The fields it skips are not importer inputs; a
sidecar that `UsageSidecar` would reject fails its own module's check, and the importer still binds the sidecar to
the `.olean` through the `.usekey`. -/
instance : FromJson UsageImport where
  fromJson? j := do
    let own ← j.getObjValAs? (Array (SidecarName × ModuleUsage.Digest)) "own"
    let specKeys ← j.getObjValAs? (Array (ModuleUsage.Digest × SidecarName)) "specKeys"
    return {
      moduleDigest := ← j.getObjValAs? ModuleUsage.Digest "moduleDigest"
      closure := ← j.getObjValAs? ModuleUsage.Digest "closure"
      own := own.foldl (init := {}) fun m (n, d) => m.insert n.name d
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
The bytes of the usage-cutoff sidecar at `path` with their digest, or `none` if it does not exist or its bytes do
not have the digest `expected?` (the `.usage` a `.usekey` was written from). Fails if it exists but cannot be read.
-/
def readSidecarBytes? (path : FilePath) (expected? : Option ModuleUsage.Digest) :
    JobM (Option (ByteArray × ModuleUsage.Digest)) := do
  match (← IO.FS.readBinFile path |>.toBaseIO) with
  | .ok bytes =>
    let digest := ModuleUsage.Digest.ofBytes bytes
    return if expected?.any (· != digest) then none else some (bytes, digest)
  | .error (.noFileOrDirectory ..) =>
    return none
  | .error e =>
    error s!"{path}: read failed: {e}"

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
the build's parse of the same contents (`BuildContext.sidecarCache`).
-/
def readUsageSidecar (α : Type) [FromJson α] [TypeName α] (path : FilePath)
    (expected? : Option ModuleUsage.Digest := none) : JobM (Option α) := do
  let some (bytes, digest) ← readSidecarBytes? path expected? | return none
  (← getBuildContext).sidecarCache.atomically do
    let entries ← getThe (Std.HashMap FilePath (ModuleUsage.Digest × Dynamic))
    if let some (parsedFrom, cached) := entries.get? path then
      if parsedFrom == digest then
        let some value := cached.get? α | error s!"{path}: cached sidecar has the wrong type"
        return some value
    let some value ← parseUsageSidecar α path bytes | return none
    modifyThe (Std.HashMap FilePath (ModuleUsage.Digest × Dynamic))
      (·.insert path (digest, Dynamic.mk value))
    return some value

/--
Reads a module's own `.usage` as `readUsageSidecar` does, but parses it on every read: only the
module's own checks read all of it. Returns it with the digest of its bytes. Leaves its `UsageImport` in the
build's sidecar cache for the module's importers (`importUsage?`).
-/
def readOwnUsage (path : FilePath) (expected? : Option ModuleUsage.Digest := none) :
    JobM (Option (UsageSidecar × ModuleUsage.Digest)) := do
  let some (bytes, digest) ← readSidecarBytes? path expected? | return none
  let some usage ← parseUsageSidecar UsageSidecar path bytes | return none
  (← getBuildContext).sidecarCache.atomically do
    modifyThe (Std.HashMap FilePath (ModuleUsage.Digest × Dynamic))
      (·.insert path (digest, Dynamic.mk usage.toImport))
  return some (usage, digest)

/--
The hashes of the files one usage-cutoff check (`Module.usageUpToDate`, `Module.writeUsekey`) has
read, so that it reads each file once, and every `importUsage?` binding of the check is to the same bytes. A check
never reuses another's: another workspace's build can rebuild a shared dependency between two checks, and nothing
about a file short of its bytes shows that they did not change since (e.g., a write through a shared mapping can
leave its status-change time as it was).
-/
public abbrev ContentHashes := IO.Ref (Std.HashMap FilePath ModuleUsage.Digest)

/--
The hash of `file`'s current bytes (`Lean.ModuleUsage.fileDigest`, 128 bits), never read from a
`.hash` file: an `.olean` rewritten behind Lake's back (e.g., by `lean -o`) keeps its old `.hash`,
and a usage-cutoff decision must see the new bytes. Read at most once per check (`hashes`).
-/
def contentHash (hashes : ContentHashes) (file : FilePath) : JobM ModuleUsage.Digest := do
  if let some hash := (← hashes.get)[file]? then return hash
  let hash ← ModuleUsage.fileDigest file
  hashes.modify (·.insert file hash)
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
      unless usage.digested.binSearchContains m Name.quickLt do return false
    return true

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
workspace `extra` module has the same `.olean` hash and `moduleDigest`, and every specialization-cache key it looked
up has the same providers (`UsageSidecar.specProvidersUnchanged`). Every `.olean` hash is of the file's bytes
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
  usage.specProvidersUnchanged hashes importArts
