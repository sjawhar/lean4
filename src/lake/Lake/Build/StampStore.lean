/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Init.System.IO
import Init.Data.Array.QSort
import Init.Data.Hashable
import Init.Data.ToString.Macro
import Init.While
import Lake.Util.IO
public import Std.Data.HashMap
import Std.Data.HashSet
import Std.Sync.Mutex

/-! # Stamp Files

A stamp file holds small records, one per module of a package and keyed by the module's name,
that let a later build skip work (such as reading a source again). A process reads each stamp file
once, in the background when its first build starts (`openStamps`), and keeps that view, or the
file as it last wrote it, for its builds' lookups; a lookup takes no lock (`StampView`). The
records a build changes are written after it reports its result (`writeStamps`), and before that
in the background each time no record has changed for a tenth of a second or a change has waited a
second, so that the stamps it sets before it compiles are written while it compiles, and most of
those of a build that changes records all along are written while it runs. Adding a change takes
no lock either. A write reads the file again while it holds a lock on `<file>.lock`, merges the
changes into it and replaces it, so that records other processes wrote are kept.

Format (integers are little-endian `UInt64`s): the magic `LKSTAMP1`; the count `n` of records; the
file's size; `n` index entries, each the key's hash and the record's offset, in the order of the
hashes; the records, each the key's length, the value's length, the key and the value (UTF-8, with
no NUL byte). A file without this form (such as one a crash left cut short or zero-filled from its
start) holds no records, and a record whose value holds a NUL byte (a block a crash left
zero-filled inside it) is no record.
-/

open System

namespace Lake

/-- `LKSTAMP1` as a little-endian `UInt64`. -/
def stampMagic : UInt64 := 0x31504D4154534B4C

def getU64 (bs : ByteArray) (i : Nat) : UInt64 :=
  (bs.get! i).toUInt64 ||| (bs.get! (i + 1)).toUInt64 <<< 8 |||
  (bs.get! (i + 2)).toUInt64 <<< 16 ||| (bs.get! (i + 3)).toUInt64 <<< 24 |||
  (bs.get! (i + 4)).toUInt64 <<< 32 ||| (bs.get! (i + 5)).toUInt64 <<< 40 |||
  (bs.get! (i + 6)).toUInt64 <<< 48 ||| (bs.get! (i + 7)).toUInt64 <<< 56

def pushU64 (bs : ByteArray) (v : UInt64) : ByteArray :=
  bs.push v.toUInt8 |>.push (v >>> 8).toUInt8 |>.push (v >>> 16).toUInt8 |>.push (v >>> 24).toUInt8
    |>.push (v >>> 32).toUInt8 |>.push (v >>> 40).toUInt8 |>.push (v >>> 48).toUInt8
    |>.push (v >>> 56).toUInt8

/--
The contents of a stamp file with `count` records, whose form is checked: the index's hashes in
order, and the records whole and back to back in the index's order, up to the file's end.
-/
public structure StampData where
  bytes : ByteArray := .empty
  count : Nat := 0

def StampData.ofBytes (bs : ByteArray) : StampData := Id.run do
  unless bs.size ≥ 24 && getU64 bs 0 == stampMagic && (getU64 bs 16).toNat == bs.size do return {}
  let n := (getU64 bs 8).toNat
  unless 24 + 16 * n ≤ bs.size do return {}
  let mut prev : UInt64 := 0
  let mut off := 24 + 16 * n
  let mut i := 0
  while i < n do
    let h := getU64 bs (24 + 16 * i)
    unless prev ≤ h && (getU64 bs (24 + 16 * i + 8)).toNat == off && off + 16 ≤ bs.size do return {}
    off := off + 16 + (getU64 bs off).toNat + (getU64 bs (off + 8)).toNat
    prev := h
    i := i + 1
  unless off == bs.size do return {}
  return {bytes := bs, count := n}

/--
A record of a stamp file being written: the bytes `[start, stop)` of the old file (a whole record,
its lengths included), or a new record.
-/
inductive StampPiece
  | old (start stop : Nat)
  | new (key value : ByteArray)

def StampPiece.size : StampPiece → Nat
  | .old start stop => stop - start
  | .new key value => 16 + key.size + value.size

def StampData.hashAt (d : StampData) (i : Nat) : UInt64 :=
  getU64 d.bytes (24 + 16 * i)

/--
The key's and the value's byte ranges of the `i`th record in the index, if the file holds a whole
one there.
-/
def StampData.rangesAt? (d : StampData) (i : Nat) : Option (Nat × Nat × Nat) := do
  let bs := d.bytes
  let off := (getU64 bs (24 + 16 * i + 8)).toNat
  guard (off + 16 ≤ bs.size)
  let keyEnd := off + 16 + (getU64 bs off).toNat
  let valEnd := keyEnd + (getU64 bs (off + 8)).toNat
  guard (valEnd ≤ bs.size)
  return (off + 16, keyEnd, valEnd)

/-- The value of the record of `key` in `d`, if it has one (and the value holds no NUL byte). -/
def StampData.find? (d : StampData) (key : String) : Option String := Id.run do
  let h := hash key
  let mut lo := 0
  let mut hi := d.count
  while lo < hi do
    let mid := (lo + hi) / 2
    if d.hashAt mid < h then lo := mid + 1 else hi := mid
  let keyBytes := key.toUTF8
  while lo < d.count && d.hashAt lo == h do
    if let some (start, keyEnd, valEnd) := d.rangesAt? lo then
      if (d.bytes.extract start keyEnd).data == keyBytes.data then
        let mut i := keyEnd
        while i < valEnd do
          if d.bytes.get! i == 0 then return none
          i := i + 1
        return String.fromUTF8? (d.bytes.extract keyEnd valEnd)
    lo := lo + 1
  return none

/-- The records of `d`, each as its key and its value. -/
def StampData.toArray (d : StampData) : Array (String × String) := Id.run do
  let mut out := Array.emptyWithCapacity d.count
  let mut i := 0
  while i < d.count do
    if let some (start, keyEnd, valEnd) := d.rangesAt? i then
      let k? := String.fromUTF8? (d.bytes.extract start keyEnd)
      if let (some k, some v) := (k?, String.fromUTF8? (d.bytes.extract keyEnd valEnd)) then
        out := out.push (k, v)
    i := i + 1
  return out

/--
The pieces of a stamp file in the order of their keys' hashes: the records of `old` whose keys
`changed` does not contain, and `new` (each piece with its key's hash; their keys must differ from
each other and from those of the old records that stay). `hashes` holds the hash of each key that
`changed` contains.
-/
def mergeStamps (old : StampData) (changed : String → Bool) (hashes : Std.HashSet UInt64)
    (new : Array (UInt64 × StampPiece)) : Array (UInt64 × StampPiece) := Id.run do
  let new := new.qsort (·.1 < ·.1)
  let mut out := Array.emptyWithCapacity (old.count + new.size)
  let mut i := 0
  let mut j := 0
  while i < old.count do
    if let some (start, keyEnd, valEnd) := old.rangesAt? i then
      let h := old.hashAt i
      unless hashes.contains h && (String.fromUTF8? (old.bytes.extract start keyEnd)).any changed do
        while hj : j < new.size do
          if new[j].1 ≤ h then out := out.push new[j]; j := j + 1 else break
        out := out.push (h, .old (start - 16) valEnd)
    i := i + 1
  return out ++ new.extract j

/-- The stamp file of `pieces` (`mergeStamps`), where `.old` pieces are bytes of `old`. -/
def encodeStamps (old : ByteArray) (pieces : Array (UInt64 × StampPiece)) : ByteArray := Id.run do
  let indexEnd := 24 + 16 * pieces.size
  let size := pieces.foldl (init := indexEnd) fun n (_, p) => n + p.size
  let header := pushU64 (pushU64 (.emptyWithCapacity size) stampMagic) pieces.size.toUInt64
  let mut bs := pushU64 header size.toUInt64
  let mut off := indexEnd
  for (h, p) in pieces do
    bs := pushU64 (pushU64 bs h) off.toUInt64
    off := off + p.size
  for (_, p) in pieces do
    match p with
    | .old start stop => bs := old.copySlice start bs bs.size (stop - start)
    | .new key value =>
      bs := pushU64 (pushU64 bs key.size.toUInt64) value.size.toUInt64 ++ key ++ value
  return bs

def newPiece (key value : String) : UInt64 × StampPiece :=
  (hash key, .new key.toUTF8 value.toUTF8)

/--
The records of the stamp file `file`: none if it does not exist or does not have the form. For
Lake's tests, which read and edit records.
-/
public def readStampFile (file : FilePath) : BaseIO (Array (String × String)) := do
  let .ok bs ← (IO.FS.readBinFile file).toBaseIO | return #[]
  return (StampData.ofBytes bs).toArray

/--
Writes the stamp file `file` of `records` (whose keys must differ): a temporary file, renamed. For
Lake's tests, which read and edit records.
-/
public def writeStampFile (file : FilePath) (records : Array (String × String)) : IO Unit := do
  let tmp := file.addExtension s!"{← IO.Process.getPID}.tmp"
  createParentDirs file
  let pieces := mergeStamps {} (fun _ => false) ∅ (records.map fun (k, v) => newPiece k v)
  IO.FS.writeBinFile tmp (encodeStamps .empty pieces)
  IO.FS.rename tmp file

/--
Each stamp file as this process last read or wrote it, as the task that reads it (`openStamps`) or
the value a write left. Only the start of a build and the end of a write take its lock, not a lookup.
-/
builtin_initialize stampFiles : Std.Mutex (Std.HashMap FilePath (Task StampData)) ←
  Std.Mutex.new {}

/-- A change to a record, made by the next write of the queue. -/
inductive StampChange
  /-- Set the record's value, if `keep` holds for the metadata of the new file. -/
  | set (value : String) (keep : IO.FS.Metadata → BaseIO Bool)
  | remove

/--
The changes to stamp files not written yet (`setStamp`, `removeStamp`), the newest first, with when
the newest and the oldest of them were made (`IO.monoNanosNow`).
-/
structure StampPending where
  changes : List (FilePath × String × StampChange) := []
  newest : Nat := 0
  oldest : Nat := 0
  deriving Inhabited

/--
The pending changes. Build jobs on many threads add to them, so a change is put on with one update
of a reference (no lock, and no wait but for another update), and the list is never exclusive, so
an array would be copied by each push.
-/
builtin_initialize stampPending : IO.Ref StampPending ← IO.mkRef {}

/-- The state of the background writer (`writeWhenQuiet`), which only its start and end change. -/
structure StampWriter where
  /-- Whether a build runs that writes the changes when it ends (`startStampWrites`, `writeStamps`). -/
  building : Bool := false
  /-- The number of the build's writer: a writer of an earlier build that sees another ends. -/
  generation : Nat := 0
  /-- The background writer, while the build runs. -/
  writer : Option (Task Unit) := none
  deriving Inhabited

builtin_initialize stampWriter : Std.Mutex StampWriter ← Std.Mutex.new {}

/--
Held from taking the pending changes to the end of their write, so that writes keep the order of
the changes.
-/
builtin_initialize stampWriting : Std.Mutex Unit ← Std.Mutex.new ()

/-- The stamp file `file` as it is now (no records if it is missing or does not have the form). -/
def readStamps (file : FilePath) : BaseIO StampData := do
  match ← (IO.FS.readBinFile file).toBaseIO with
  | .ok bs => return StampData.ofBytes bs
  | .error _ => return {}

/--
The task that reads the stamp file `file` for this process (started the first time, on a thread of
its own, so that the read and the check of its form hold neither the lock of `stampFiles` nor a
worker of the task pool).
-/
def stampLoad (file : FilePath) : BaseIO (Task StampData) :=
  stampFiles.atomically do
    if let some t := (← get)[file]? then return t
    let t ← BaseIO.asTask (prio := .dedicated) (readStamps file)
    modify (·.insert file t)
    return t

/--
The stamp files of a build as it found them when it started (`openStamps`): each file, by its
path, with the task that reads it. A build's jobs look records up in it (`StampView.find?`), which
takes no lock and changes no shared state, so that lookups on many threads never wait for each
other; only a lookup that comes before its file's read ends waits, for that read.
-/
public structure StampView where
  files : Std.HashMap FilePath (Task StampData) := {}

/--
The view of the stamp files of a build whose packages' build directories are `dirs` (each
directory's files named `*.stamps`), as this process last read or wrote each one. The reads of
those it has not read run on threads of their own and the call returns before they end, so that
they overlap the start of the build. A file that is not there when the build starts has no records
for it.
-/
public def openStamps (dirs : Array FilePath) : BaseIO StampView := do
  let mut files : Std.HashMap FilePath (Task StampData) := {}
  for dir in dirs do
    let .ok entries ← dir.readDir.toBaseIO | continue
    for e in entries do
      if e.path.extension == some "stamps" then
        files := files.insert e.path (← stampLoad e.path)
  return {files}

/--
The value of the record of `key` in the stamp file `file`, as the file was when the build that
opened `view` started (`openStamps`): the changes since then (`setStamp`, `removeStamp`) are not
seen.
-/
public def StampView.find? (view : StampView) (file : FilePath) (key : String) :
    BaseIO (Option String) := do
  let some t := view.files[file]? | return none
  return (← IO.wait t).find? key

/--
How long the queue must go without a change before the background writer writes it: the stamps
that a build sets before it compiles (its sources', and its outputs' where it stamps them again) are
then written while it compiles, and those of a build that ends soon after are written before it
ends, not after it reports its result.
-/
def stampQuietNanos : Nat := 100000000

/--
How long a change may wait on the queue while others keep coming before the background writer
writes it: a build that changes records all along (one that stamps every module again, as in a copy
of the tree) then writes most of them while it runs, not after it reports its result.
-/
def stampMaxWaitNanos : Nat := 1000000000

/--
How often the background writer looks at the queue, which also bounds how long `writeStamps` waits
for it to stop.
-/
def stampWriterSliceMs : UInt32 := 10

/--
How long a write waits for another process's lock on a stamp file (which a stopped or hung process
can hold) before it writes without it.
-/
def stampLockWaitMs : Nat := 5000

/--
Writes the stamp file `file` with the changes `changes` (one per key) to its records, unless no
change sets or removes a record. It holds a lock on `file` with `.lock` added while it reads the
file, merges the changes and replaces the file, so that writes from other processes are not lost;
where the lock cannot be taken (a filesystem without advisory locks, or another process holds it
for `stampLockWaitMs`), it writes without it. Errors are ignored, as the records only let a later
build skip work.
-/
def writeStampChanges (file : FilePath) (changes : Std.HashMap String StampChange) :
    BaseIO Unit := do
  let tmp := file.addExtension s!"{← IO.Process.getPID}.tmp"
  let write : IO Unit := do
    createParentDirs file
    let lock? ← try
        let lock ← IO.FS.Handle.mk (file.addExtension "lock") .append
        let mut waited := 0
        while !(← lock.tryLock) do
          if waited ≥ stampLockWaitMs then throw <| .userError "the stamp lock is busy"
          IO.sleep stampWriterSliceMs
          waited := waited + stampWriterSliceMs.toNat
        pure (some lock)
      catch _ => pure none
    try
      let old ← readStamps file
      IO.FS.writeFile tmp ""
      let fileData ← tmp.metadata
      let mut new := #[]
      let mut changed := false
      for (key, change) in changes do
        if let .set value keep := change then
          if ← keep fileData then
            new := new.push (newPiece key value)
            unless changed do changed := old.find? key != some value
            continue
        unless changed do changed := (old.find? key).isSome
      unless changed do
        IO.FS.removeFile tmp
        return
      let hashes := changes.fold (init := (∅ : Std.HashSet UInt64)) fun s k _ => s.insert (hash k)
      let pieces := mergeStamps old changes.contains hashes new
      let bytes := encodeStamps old.bytes pieces
      IO.FS.writeBinFile tmp bytes
      IO.FS.rename tmp file
      stampFiles.atomically <| modify (·.insert file (.pure {bytes, count := pieces.size}))
    finally
      if let some lock := lock? then lock.unlock
  if let .error _ ← write.toBaseIO then
    discard <| (removeFileIfExists tmp).toBaseIO

/--
Writes each stamp file that `changes` (oldest first) names, the files at the same time, each on a
dedicated thread, so that a busy task pool does not delay them.
-/
def writeStampFiles (changes : List (FilePath × String × StampChange)) : BaseIO Unit := do
  let files := changes.foldl (init := (∅ : Std.HashSet FilePath)) fun s (file, _) => s.insert file
  let writes ← files.toList.mapM fun file => BaseIO.asTask (prio := .dedicated) do
    writeStampChanges file <| changes.foldl (init := ∅) fun m (f, key, change) =>
      if f == file then m.insert key change else m
  for w in writes do IO.wait w

/-- Writes the pending changes: each stamp file once, and where a key has several, the last. -/
def writeQueued : BaseIO Unit :=
  stampWriting.atomically do
    let changes ← stampPending.modifyGet fun p => (p.changes, {p with changes := []})
    writeStampFiles changes.reverse

/--
The background writer of the build numbered `generation`: writes the pending changes once no change
has come for `stampQuietNanos`, or once the oldest has waited `stampMaxWaitNanos`, and ends when
the build ends (`writeStamps`) or another starts. After a write it waits nine times as long as the
write took before the next (until `notBefore`), so that background writes take at most a tenth of
the time.
-/
partial def writeWhenQuiet (generation : Nat) (notBefore : Nat := 0) : BaseIO Unit := do
  IO.sleep stampWriterSliceMs
  let w ← stampWriter.atomically get
  unless w.building && w.generation == generation do return
  let now ← IO.monoNanosNow
  let p ← stampPending.get
  if p.changes.isEmpty || now < notBefore ||
      (now - p.newest < stampQuietNanos && now - p.oldest < stampMaxWaitNanos) then
    return ← writeWhenQuiet generation notBefore
  writeQueued
  let done ← IO.monoNanosNow
  writeWhenQuiet generation (done + 9 * (done - now))

/-- Adds `change` to the pending changes. -/
def queueChange (change : FilePath × String × StampChange) : BaseIO Unit := do
  let now ← IO.monoNanosNow
  stampPending.modify fun p =>
    {changes := change :: p.changes, newest := now,
     oldest := if p.changes.isEmpty then now else p.oldest}

/--
Sets the record of `key` in the stamp file `file` to `value` at the next write of the pending
changes, if `keep` holds then for the metadata of the new file (taken before its records are
chosen).
-/
public def setStamp (file : FilePath) (key value : String)
    (keep : IO.FS.Metadata → BaseIO Bool := fun _ => pure true) : BaseIO Unit :=
  queueChange (file, key, .set value keep)

/-- Removes the record of `key` from the stamp file `file` at the next write of the pending changes. -/
public def removeStamp (file : FilePath) (key : String) : BaseIO Unit :=
  queueChange (file, key, .remove)

/--
Starts a build's writes of its stamp changes in the background (`writeWhenQuiet`), on a thread of
its own for the whole build; the build ends them with `writeStamps`.
-/
public def startStampWrites : BaseIO Unit :=
  stampWriter.atomically do
    let generation := (← get).generation + 1
    let writer ← BaseIO.asTask (prio := .dedicated) (writeWhenQuiet generation)
    set ({building := true, generation, writer := some writer} : StampWriter)

/--
Ends a build's writes of its stamp changes: stops the background writer, then writes the changes
not written yet (`setStamp`, `removeStamp`), each stamp file once, by a temporary file that replaces
it, and where a key has several changes, the last.
-/
public def writeStamps : BaseIO Unit := do
  let writer? ← stampWriter.atomically <| modifyGet fun w =>
    (w.writer, {w with building := false, writer := none})
  if let some w := writer? then IO.wait w
  writeQueued
