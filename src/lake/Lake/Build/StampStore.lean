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
import Std.Data.HashMap
import Std.Data.HashSet
import Std.Sync.Mutex

/-! # Stamp Files

A stamp file holds small records, one per module of a package and keyed by the module's name,
that let a later build skip work (such as reading a source again). A process reads each stamp file
once, when it first looks up one of its records, and keeps that view for its lookups until it
writes the file. The records a build changes are written after it reports its result
(`writeStamps`), and before that in the background each time no record has changed for a tenth of
a second or a change has waited a second, so that the stamps it sets before it compiles are written
while it compiles, and most of those of a build that changes records all along are written while
it runs. A write reads the file again while it holds a lock on `<file>.lock`, merges the changes
into it and replaces it, so that records other processes wrote are kept.

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
structure StampData where
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

/-- Each stamp file as this process last read or wrote it. -/
builtin_initialize stampFiles : Std.Mutex (Std.HashMap FilePath StampData) ← Std.Mutex.new {}

/-- A change to a record, made by the next write of the queue. -/
inductive StampChange
  /-- Set the record's value, if `keep` holds for the metadata of the new file. -/
  | set (value : String) (keep : IO.FS.Metadata → BaseIO Bool)
  | remove

/-- The changes to stamp files not written yet, and the state of their background writer. -/
structure StampQueue where
  /--
  The changes (`setStamp`, `removeStamp`), the newest first. Build jobs on many threads share the
  queue, so its value is never exclusive and an array would be copied by each push.
  -/
  changes : List (FilePath × String × StampChange) := []
  /-- When the newest change was made (`IO.monoNanosNow`). -/
  newest : Nat := 0
  /-- When the oldest change on the queue was made (`IO.monoNanosNow`). -/
  oldest : Nat := 0
  /-- The moment before which the background writer (`writeWhenQuiet`) does not write again. -/
  notBefore : Nat := 0
  /-- Whether a build runs that writes the queue when it ends (`startStampWrites`, `writeStamps`). -/
  building : Bool := false
  /-- The background writer, while it runs. -/
  writer : Option (Task Unit) := none
  deriving Inhabited

builtin_initialize stampQueue : Std.Mutex StampQueue ← Std.Mutex.new {}

/--
Held from taking changes off the queue to the end of their write, so that writes keep the order of
the changes.
-/
builtin_initialize stampWriting : Std.Mutex Unit ← Std.Mutex.new ()

/-- The stamp file `file` as it is now (no records if it is missing or does not have the form). -/
def readStamps (file : FilePath) : BaseIO StampData := do
  match ← (IO.FS.readBinFile file).toBaseIO with
  | .ok bs => return StampData.ofBytes bs
  | .error _ => return {}

/-- The stamp file `file` as this process last read or wrote it (reading it the first time). -/
def loadStamps (file : FilePath) : BaseIO StampData :=
  stampFiles.atomically do
    if let some d := (← get)[file]? then return d
    let d ← readStamps file
    modify (·.insert file d)
    return d

/--
The value of the record of `key` in the stamp file `file`, as the file was when this process first
read it or last wrote it: the changes since then (`setStamp`, `removeStamp`) are not seen.
-/
public def findStamp? (file : FilePath) (key : String) : BaseIO (Option String) :=
  return (← loadStamps file).find? key

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
      stampFiles.atomically <| modify (·.insert file {bytes, count := pieces.size})
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

/-- Writes the changes on the queue: each stamp file once, and where a key has several, the last. -/
def writeQueued : BaseIO Unit :=
  stampWriting.atomically do
    let changes ← stampQueue.atomically <| modifyGet fun q => (q.changes, {q with changes := []})
    writeStampFiles changes.reverse

/--
The background writer: writes the queue once no change has come for `stampQuietNanos`, or once its
oldest change has waited `stampMaxWaitNanos`, and ends when the queue is empty or the build ends
(`writeStamps`). After a write it waits nine times as long as the write took before the next, so
that background writes take at most a tenth of the time.
-/
partial def writeWhenQuiet : BaseIO Unit := do
  IO.sleep stampWriterSliceMs
  let now ← IO.monoNanosNow
  let quiet? ← stampQueue.atomically <| modifyGet fun q =>
    if !q.building || q.changes.isEmpty then (none, {q with writer := none})
    else (some (now ≥ q.notBefore &&
      (now - q.newest ≥ stampQuietNanos || now - q.oldest ≥ stampMaxWaitNanos)), q)
  match quiet? with
  | none => return
  | some false => writeWhenQuiet
  | some true =>
    writeQueued
    let done ← IO.monoNanosNow
    stampQueue.atomically <| modify fun q => {q with notBefore := done + 9 * (done - now)}
    writeWhenQuiet

/-- Puts `change` on the queue, and starts the background writer if a build runs and none does. -/
def queueChange (change : FilePath × String × StampChange) : BaseIO Unit := do
  let now ← IO.monoNanosNow
  stampQueue.atomically do
    let q ← get
    let oldest := if q.changes.isEmpty then now else q.oldest
    let q := {q with changes := change :: q.changes, newest := now, oldest}
    if q.building && q.writer.isNone then
      set {q with writer := some (← BaseIO.asTask (prio := .dedicated) writeWhenQuiet)}
    else
      set q

/--
Sets the record of `key` in the stamp file `file` to `value` at the next write of the queue, if
`keep` holds then for the metadata of the new file (taken before its records are chosen).
-/
public def setStamp (file : FilePath) (key value : String)
    (keep : IO.FS.Metadata → BaseIO Bool := fun _ => pure true) : BaseIO Unit :=
  queueChange (file, key, .set value keep)

/-- Removes the record of `key` from the stamp file `file` at the next write of the queue. -/
public def removeStamp (file : FilePath) (key : String) : BaseIO Unit :=
  queueChange (file, key, .remove)

/--
Starts a build's writes of its stamp changes in the background (`writeWhenQuiet`); the build ends
them with `writeStamps`.
-/
public def startStampWrites : BaseIO Unit :=
  stampQueue.atomically <| modify fun q => {q with building := true, notBefore := 0}

/--
Ends a build's writes of its stamp changes: stops the background writer, then writes the changes
not written yet (`setStamp`, `removeStamp`), each stamp file once, by a temporary file that replaces
it, and where a key has several changes, the last.
-/
public def writeStamps : BaseIO Unit := do
  let writer? ← stampQueue.atomically <| modifyGet fun q => (q.writer, {q with building := false})
  if let some w := writer? then IO.wait w
  writeQueued
