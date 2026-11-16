/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Lean.Util.ModuleUsage.Basic
import Std.Time.DateTime.Timestamp

/-!
# Packed usage-cutoff sidecars

With usage cutoff, a module has three records beside its `.olean`: the `.usage` and the `.resolved` that Lean writes
(`Lean.ModuleUsage.writeUsage`) and the `.usekey` that Lake writes from them (`Lake.Module.writeUsekey`). Lake keeps
the three in one file, the module's pack `X.usepack` (`packOf`), so that a build with the cutoff on writes, restores
and links one file per module more than a build with it off, and no `.hash` file for it.

The pack is a header line, then the parts in this order: the `.usekey`, the `.usage`, the `.resolved`. The header is
ASCII: `lake-usepack 1 k=<size>:<digest> u=<size>:<digest> v=<size>:<digest>` and a newline, where `k`, `u` and `v`
name the `.usekey`, the `.usage` and the `.resolved`, `<size>` is the part's length in bytes, `<digest>` the 32 hex
digits of `Lean.ModuleUsage.Digest.ofBytes` of its bytes, and a part the pack does not hold is written `k=-` (and so
on). The `.usekey` comes first, so that an importer, which reads only the keys of its imports, reads only the start
of each pack (`readPrefixStamped`).

The rest of Lake names a record by the path it had as a file of its own (`X.usekey`, `X.usage`, `X.resolved`): the
sidecar path, from which `packOf` finds the pack and `Part.ofSidecar?` the part. `readSidecar` reads a part from the
pack if the pack exists, and otherwise the file at the sidecar path itself, the layout Lake wrote before packs, so that
a tree built then is read as it was. A pack that is not one of this format, whose size is not the one its header
records, whose part does not have the digest its header records, or whose `.usage` or `.resolved` is asked for and
which is larger than Lake reads of a record file (`maxWhole`), is read as `invalid`: the module's records are then
absent, so the cutoff never skips the module on them and its importers take it to have no usage record.
-/

open System Lean

namespace Lake.UsagePack

/-- The extension of a module's pack. -/
public def ext : String := "usepack"

/-- The first word of a pack's header. -/
def magic : String := "lake-usepack"

/-- The pack format version, the second word of the header; a pack of another version is `invalid`. -/
def version : Nat := 1

/-- No header is longer: the two words and three parts of at most 20 size digits and a 32-digit digest each. -/
def maxHeader : Nat := 256

/-- A part of a pack: the record a module once kept in the file of that extension. -/
public inductive Part
  | usekey
  | usage
  | resolved
  deriving BEq, Inhabited

/-- The part that the sidecar path `sidecar` names by its extension (`.usekey`, `.usage`, `.resolved`), if any. -/
public def Part.ofSidecar? (sidecar : FilePath) : Option Part :=
  match sidecar.extension with
  | some "usekey" => some .usekey
  | some "usage" => some .usage
  | some "resolved" => some .resolved
  | _ => none

/-- The pack that holds the record of the sidecar path `sidecar`: the same path with the extension `usepack`. -/
public def packOf (sidecar : FilePath) : FilePath :=
  sidecar.withExtension ext

/-- The size and the digest (32 hex digits) of a part, as a header records them. -/
structure Entry where
  size : Nat
  digest : String

/-- A pack's header. -/
structure Header where
  /-- The length of the header line, its newline included: where the first part starts. -/
  length : Nat
  usekey? : Option Entry
  usage? : Option Entry
  resolved? : Option Entry

/-- The bytes of a pack of the given parts. -/
public def encode (usekey? usage? resolved? : Option ByteArray) : ByteArray :=
  let field (tag : String) (bytes? : Option ByteArray) : String :=
    match bytes? with
    | none => s!" {tag}=-"
    | some b => s!" {tag}={b.size}:{(ModuleUsage.Digest.ofBytes b).hex}"
  let line := s!"{magic} {version}" ++ field "k" usekey? ++ field "u" usage? ++ field "v" resolved? ++ "\n"
  line.toUTF8 ++ usekey?.getD .empty ++ usage?.getD .empty ++ resolved?.getD .empty

/-- Writes the pack `pack` of the given parts as a new file renamed over it (`ModuleUsage.writeFileReplacing`), never
through the file at `pack`, which can be a read-only link to a cache entry. -/
public def write (pack : FilePath) (usekey? usage? resolved? : Option ByteArray) : IO Unit :=
  ModuleUsage.writeFileReplacing pack (encode usekey? usage? resolved?)

/-- The pieces of `bytes` between the bytes `sep`, in order (empty pieces included). -/
def splitBytes (bytes : List UInt8) (sep : UInt8) : List (List UInt8) :=
  let (cur, done) := bytes.foldl (init := ([], [])) fun (cur, done) b =>
    if b == sep then ([], cur.reverse :: done) else (b :: cur, done)
  (cur.reverse :: done).reverse

/-- The number that the decimal digits `ds` write, if they are one or more decimal digits. -/
def decimal? (ds : List UInt8) : Option Nat := do
  guard !ds.isEmpty
  ds.foldlM (init := 0) fun n d => do
    guard ('0'.toUInt8 ≤ d && d ≤ '9'.toUInt8)
    return 10 * n + (d - '0'.toUInt8).toNat

/-- The entry `<tag>=<size>:<digest>` or `<tag>=-` (`none`), or nothing if `w` is neither. -/
def parseEntry? (tag : UInt8) (w : List UInt8) : Option (Option Entry) := do
  let t :: e :: rest := w | none
  guard (t == tag && e == '='.toUInt8)
  if rest == ['-'.toUInt8] then return none
  let [n, d] := splitBytes rest ':'.toUInt8 | none
  let size ← decimal? n
  guard (d.length == 32 && d.all fun b => ('0'.toUInt8 ≤ b && b ≤ '9'.toUInt8) || ('a'.toUInt8 ≤ b && b ≤ 'f'.toUInt8))
  return some {size, digest := ← String.fromUTF8? ⟨d.toArray⟩}

/-- The header at the start of `bytes`, if they begin with a whole header line of this format and version. -/
def Header.parse? (bytes : ByteArray) : Option Header := do
  let limit := min bytes.size maxHeader
  let nl ← (List.range limit).find? (bytes[·]! == 10)
  let [m, v, k, u, r] := splitBytes (bytes.extract 0 nl).data.toList ' '.toUInt8 | none
  guard (m == magic.toUTF8.data.toList && v == (toString version).toUTF8.data.toList)
  let usekey? ← parseEntry? 'k'.toUInt8 k
  let usage? ← parseEntry? 'u'.toUInt8 u
  let resolved? ← parseEntry? 'v'.toUInt8 r
  return {length := nl + 1, usekey?, usage?, resolved?}

/-- The size of the pack the header describes. -/
def Header.total (h : Header) : Nat :=
  h.length + (h.usekey?.map (·.size)).getD 0 + (h.usage?.map (·.size)).getD 0 + (h.resolved?.map (·.size)).getD 0

/-- Where part `p` starts in the pack, with its entry, if the pack holds it. -/
def Header.span? (h : Header) (p : Part) : Option (Nat × Entry) :=
  let k := (h.usekey?.map (·.size)).getD 0
  let u := (h.usage?.map (·.size)).getD 0
  match p with
  | .usekey => h.usekey?.map (h.length, ·)
  | .usage => h.usage?.map (h.length + k, ·)
  | .resolved => h.resolved?.map (h.length + k + u, ·)

/-- What a read of one record found (`readSidecar`). -/
public inductive Read
  /-- The record's bytes, their digest (`Lean.ModuleUsage.Digest.ofBytes`), and the stamp of the file they were read
  from if it stands for them. -/
  | found (bytes : ByteArray) (digest : ModuleUsage.Digest) (stamp? : Option ModuleUsage.FileStamp)
  /-- Neither a pack nor a file of the record's own exists, or the pack does not hold the record. -/
  | absent
  /-- The pack exists and is not one this Lake can read, for the reason given. -/
  | invalid (pack : FilePath) (reason : String)

/--
Part `p` of the pack whose first bytes are `bytes`, if they reach that far, for a pack of `size` bytes: `absent` if
the pack does not hold `p`, `invalid` if the bytes are not a pack of this format and size or the part does not have
the digest the header records. The stamp `stamp?` goes with the part's bytes.
-/
def partOf (pack : FilePath) (bytes : ByteArray) (size : Nat) (p : Part) (stamp? : Option ModuleUsage.FileStamp) :
    Read := Id.run do
  let some h := Header.parse? bytes | return .invalid pack "not a pack of this format"
  unless h.total == size do return .invalid pack s!"its header records {h.total} bytes, the file has {size}"
  let some (start, e) := h.span? p | return .absent
  unless start + e.size ≤ bytes.size do return .invalid pack "it ends before its part"
  let part := bytes.extract start (start + e.size)
  let digest := ModuleUsage.Digest.ofBytes part
  unless digest.hex == e.digest do return .invalid pack "a part does not have the digest its header records"
  return .found part digest stamp?

/-- Up to `n` more bytes read from `h` after `acc`, fewer only at the file's end. -/
partial def readUpTo (h : IO.FS.Handle) (n : Nat) (acc : ByteArray := .empty) : IO ByteArray := do
  if acc.size ≥ n then return acc
  let chunk ← h.read (n - acc.size).toUSize
  if chunk.isEmpty then return acc
  readUpTo h n (acc ++ chunk)

/-- How long before a read began the status-change time of the file read must lie for the stamp taken around the read
to stand for its bytes: the general bound of `Lean.ModuleUsage.stampSettled`, which holds on every file system. -/
def settleNs : Int := 2000000000

/--
The largest pack Lake reads: the bound of `Lean.ModuleUsage.readFileStamped`, which reads a pack whole and fails for a
larger file (`max_stamped_read`, `src/library/usage_digest.cpp`), so that a damaged record cannot make Lake allocate
without bound. The `.usage` of a module whose closure has about 4,900 workspace modules is about 3 MB.
-/
def maxWhole : Nat := 256 * 1024 * 1024

/-- What a read finds of a pack of `size` bytes, more than `maxWhole`. -/
def tooLarge (pack : FilePath) (size : Nat) : Read :=
  .invalid pack s!"it has {size} bytes, more than the {maxWhole} that Lake reads of a record file"

/--
The first bytes of the pack at `pack`, its header and its `.usekey`, with the pack's size and with its stamp if that
stands for the bytes: the stamp is the same before the read and after it, and its status-change time lay more than
`settleNs` before the read began (as `Lean.ModuleUsage.readFileStamped` judges a whole read, by the bound it uses on a
file system whose clock it cannot read). The stamps are the path's, taken around an open of it, not the opened
file's: they stand for the bytes where the file at the path is only replaced by a rename over it (as Lake and Lean
write records), which gives it a new status-change time; a switch of the path to another file and back between the
two stats, such as of a symlinked parent directory, is not seen. The size is the stamp's from before the read (a stat
it takes anyway; only where no stamp can be read, as on Windows, the file's metadata). The `.usekey` is read only if
it ends within that size and the pack is no larger than `maxWhole`: otherwise the header does not describe a pack
Lake reads, nothing past the first bytes is read, so no length a header claims is ever allocated that the pack's size
and `maxWhole` do not bound, and `readSidecar` reads the pack as `invalid`. Throws if the pack cannot be opened or
read (`noFileOrDirectory` if it does not exist).
-/
def readPrefixStamped (pack : FilePath) : IO (ByteArray × Nat × Option ModuleUsage.FileStamp) := do
  let start := (← Std.Time.Timestamp.now).toNanosecondsSinceUnixEpoch.val
  let before? ← ModuleUsage.fileStamp pack
  let h ← IO.FS.Handle.mk pack .read
  let size ← match before? with
    | some s => pure s.size.toNat
    | none => pure (← pack.metadata).byteSize.toNat
  let head ← readUpTo h maxHeader
  let want := match Header.parse? head with
    | some hdr => hdr.length + (hdr.usekey?.map (·.size)).getD 0
    | none => 0
  let bytes ← if want ≤ head.size || want > size || size > maxWhole then pure head else readUpTo h want head
  let after? ← ModuleUsage.fileStamp pack
  let stamp? := before?.filter fun s =>
    after? == some s && start - (s.ctimeSec.toNat * 1000000000 + s.ctimeNsec.toNat : Int) > settleNs
  return (bytes, size, stamp?)

/--
Reads the record that the sidecar path `sidecar` names (`Part.ofSidecar?`): from its pack (`packOf`) if that exists,
otherwise from the file at `sidecar`, the layout before packs. A `.usekey` is read with the start of its pack only
(`readPrefixStamped`), the other parts with the whole pack (`Lean.ModuleUsage.readFileStamped`). A pack larger than
`maxWhole` is `invalid` for every part, as any other pack this Lake cannot read: the key read has its size, and for
a whole read that fails the size is looked up after the failure. Throws if a file exists but cannot be read for
another reason.
-/
public def readSidecar (sidecar : FilePath) : IO Read := do
  let pack := packOf sidecar
  let some p := Part.ofSidecar? sidecar | return ← own
  let read? : Except IO.Error Read ← if p == .usekey then
      (do let (bytes, size, stamp?) ← readPrefixStamped pack
          return if size > maxWhole then tooLarge pack size else partOf pack bytes size p stamp?).toBaseIO
    else
      (do let (bytes, stamp?) ← ModuleUsage.readFileStamped pack; return partOf pack bytes bytes.size p stamp?).toBaseIO
  match read? with
  | .ok r => return r
  | .error (.noFileOrDirectory ..) => own
  | .error e =>
    if p == .usekey then throw e
    match (← pack.metadata.toBaseIO) with
    | .ok md => if md.byteSize.toNat > maxWhole then return tooLarge pack md.byteSize.toNat else throw e
    | .error _ => throw e
where
  own : IO Read := do
    match (← (ModuleUsage.readFileStamped sidecar).toBaseIO) with
    | .ok (bytes, stamp?) => return .found bytes (ModuleUsage.Digest.ofBytes bytes) stamp?
    | .error (.noFileOrDirectory ..) => return .absent
    | .error e => throw e

/-- The bytes of the record `sidecar` names (`readSidecar`), or `none` if it is absent or its pack is invalid. -/
public def readSidecarBytes? (sidecar : FilePath) : IO (Option ByteArray) := do
  match (← readSidecar sidecar) with
  | .found bytes .. => return some bytes
  | _ => return none

/-- The file that `readSidecar sidecar` reads: the pack, if it exists, else the file at `sidecar`. -/
public def sidecarFile (sidecar : FilePath) : IO FilePath := do
  let pack := packOf sidecar
  return if (Part.ofSidecar? sidecar).isSome && (← pack.pathExists) then pack else sidecar

/-- `Lean.ModuleUsage.fileStamp` of the file that `readSidecar sidecar` reads (`sidecarFile`). -/
public def sidecarStamp (sidecar : FilePath) : IO (Option ModuleUsage.FileStamp) := do
  if (Part.ofSidecar? sidecar).isSome then
    if let some s ← ModuleUsage.fileStamp (packOf sidecar) then return some s
  ModuleUsage.fileStamp sidecar

/--
`sidecarStamp` of the `.usekey` record path `usekey`, but `none` when its pack holds no `.usekey` or is not a pack of
this format: a module whose compile made no key had no `.usekey` file before packs either, and a reader that compares
the times of keys (`Lake.changedDirectImport?`) reads such a module's records instead.
-/
public def usekeyStamp (usekey : FilePath) : IO (Option ModuleUsage.FileStamp) := do
  let pack := packOf usekey
  match (← (do readUpTo (← IO.FS.Handle.mk pack .read) maxHeader : IO ByteArray).toBaseIO) with
  | .ok head =>
    let some hdr := Header.parse? head | return none
    if hdr.usekey?.isNone then return none
    ModuleUsage.fileStamp pack
  | .error (.noFileOrDirectory ..) => ModuleUsage.fileStamp usekey
  | .error _ => return none

end Lake.UsagePack
