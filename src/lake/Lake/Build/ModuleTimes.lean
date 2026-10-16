/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Std.Data.HashMap
import Std.Data.HashSet
public import Lake.Util.IO
public import Lake.Util.Log
import Init.Data.Array.QSort
import Init.Data.String.Compare
import Init.Data.ToString.Macro
import Init.While

/-! # Module times

The workspace's record of each module's last compile time and direct local imports
(`.lake/module-times.tsv`). A build reads it to start the compiles with the longest remaining
path first, and writes back the modules it compiled.

The file is a header line `lake-module-times 3`, then one line per module, sorted by encoded name:
`<ms>\t<rem>\t<name>\t<import> <import> ...`, where `ms` is the module's last compile time,
`rem` its remaining path when the file was written, and each import is the index (from 0) of the
imported module's line among the module lines. A module with no compile time of its own has `ms`
0, no imports, and a line only while some line imports it and its source exists, so that the edge
survives until the module is compiled and timed.

A name is written as its components joined by `.`. In a component, the characters `%`, `.`,
space, tab, CR and LF are written `%XX` (two uppercase hex digits); an empty component is `%-`, a
numeric component `n` is `%#n`, and the anonymous name is `%!`. Every name has exactly one
encoding, so the lines are ordered by their encoded names, byte by byte.

Reading the record (every build) parses only the names and the stored remaining paths; writing it
(every build that compiled something) recomputes the remaining paths over the merged record.
-/

open System
open Lean (Name)

namespace Lake

/-- A module's last compile wall time and its direct local imports at that compile. -/
public structure ModuleTimeEntry where
  name : Name
  ms : Nat
  imports : Array Name
  deriving Inhabited

/-- The record's file name inside the workspace's Lake directory. -/
public def moduleTimesFileName : FilePath := "module-times.tsv"

/-- The file name of the records of older Lakes (formats 1 and 2), which this one ignores. -/
public def legacyModuleTimesFileName : String := "module-times.json"

/-- The record's first line. -/
public def moduleTimesHeader : String := "lake-module-times 3"

/-! ## Bytes -/

@[inline] def byteAt (s : String) (i : Nat) : UInt8 :=
  if h : i < s.utf8ByteSize then s.getUTF8Byte ⟨i⟩ h else 0

@[inline] def slice (s : String) (b e : Nat) : String :=
  String.Pos.Raw.extract s ⟨b⟩ ⟨e⟩

/-- The first index in `[i, stop)` holding byte `c`, or `stop`. -/
partial def findByte (s : String) (c : UInt8) (i stop : Nat) : Nat :=
  if i < stop then
    if byteAt s i == c then i else findByte s c (i + 1) stop
  else
    stop

/-- The first index in `[i, stop)` holding a tab or a line feed, or `stop`. -/
partial def findFieldEnd (s : String) (i stop : Nat) : Nat :=
  if i < stop then
    let c := byteAt s i
    if c == 9 || c == 10 then i else findFieldEnd s (i + 1) stop
  else
    stop

/-- The length of the common prefix of `s[a, ae)` and `s[b, be)`. -/
partial def commonPrefix (s : String) (a ae b be : Nat) (n : Nat := 0) : Nat :=
  if a + n < ae && b + n < be && byteAt s (a + n) == byteAt s (b + n) then
    commonPrefix s a ae b be (n + 1)
  else
    n

/-- Compares `s[b, e)` with `t`, byte by byte. -/
partial def compareRange (s : String) (b e : Nat) (t : String) (j : Nat := 0) : Ordering :=
  if b < e then
    if j < t.utf8ByteSize then
      let x := byteAt s b
      let y := byteAt t j
      if x < y then .lt else if y < x then .gt else compareRange s (b + 1) e t (j + 1)
    else
      .gt
  else if j < t.utf8ByteSize then .lt else .eq

/-- The number written in `s[b, e)`: decimal digits, no leading zero unless it is `0`. -/
def parseNat? (s : String) (b e : Nat) : Option Nat := Id.run do
  if b ≥ e || (byteAt s b == 48 && e > b + 1) then return none
  let mut n := 0
  for i in [b:e] do
    let c := byteAt s i
    unless 48 ≤ c && c ≤ 57 do return none
    n := 10 * n + (c - 48).toNat
  return some n

partial def pushNat (out : String) (n : Nat) : String :=
  if n < 10 then out.push (Char.ofNat (48 + n))
  else (pushNat out (n / 10)).push (Char.ofNat (48 + n % 10))

/-! ## Names -/

@[inline] def isEscapedByte (c : UInt8) : Bool :=
  c == 37 || c == 46 || c == 32 || c == 9 || c == 10 || c == 13

@[inline] def isEscaped (c : Char) : Bool :=
  c.toNat < 128 && isEscapedByte c.toNat.toUInt8

def hexDigit (n : Nat) : Char :=
  if n < 10 then Char.ofNat (48 + n) else Char.ofNat (55 + n)

/-- Appends `s[i, e)` to `out`, escaping its special bytes (all ASCII, so never inside a character). -/
partial def pushEscaped (out s : String) (i e : Nat) : String :=
  if i < e then
    let c := byteAt s i
    if isEscapedByte c then
      let out := out.push '%' |>.push (hexDigit (c.toNat / 16)) |>.push (hexDigit (c.toNat % 16))
      pushEscaped out s (i + 1) e
    else
      let next := findSpecial s (i + 1) e
      pushEscaped (out ++ slice s i next) s next e
  else
    out
where
  findSpecial (s : String) (i e : Nat) : Nat :=
    if i < e && !isEscapedByte (byteAt s i) then findSpecial s (i + 1) e else i

def pushComponent (out s : String) : String :=
  if s.utf8ByteSize == 0 then out ++ "%-" else pushEscaped out s 0 s.utf8ByteSize

def pushNameCore (out : String) : Name → String
  | .anonymous => out
  | .str p s => pushComponent (sep (pushNameCore out p) p) s
  | .num p k => pushNat (sep (pushNameCore out p) p ++ "%#") k
where
  sep (out : String) : Name → String
    | .anonymous => out
    | _ => out.push '.'

/-- The encoding of a module name in the record. -/
public def encodeModuleName : Name → String
  | .anonymous => "%!"
  | n => pushNameCore "" n

def hexVal? (c : UInt8) : Option Nat :=
  if 48 ≤ c && c ≤ 57 then some (c - 48).toNat
  else if 65 ≤ c && c ≤ 70 then some (c - 55).toNat
  else none

/-- 0 if `s[i, e)` holds no `%`, space or CR; 1 if it holds a `%` but no space or CR; 2 otherwise. -/
partial def componentKind (s : String) (i e : Nat) (k : UInt8 := 0) : UInt8 :=
  if i < e then
    let c := byteAt s i
    if c == 32 || c == 13 then 2 else componentKind s (i + 1) e (if c == 37 then 1 else k)
  else
    k

def badComponent (s : String) (b e : Nat) : Except String α :=
  throw s!"bad name component '{slice s b e}'"

/-- Decodes the component `s[b, e)` and appends it to `p`. -/
def decodeComponent (s : String) (b e : Nat) (p : Name) : Except String Name := do
  let bad {α} (_ : Unit) : Except String α := badComponent s b e
  if b ≥ e then
    throw "empty name component (an empty component is written %-)"
  if byteAt s b == 37 && e == b + 2 && byteAt s (b + 1) == 45 then -- `%-`
    return .str p ""
  if byteAt s b == 37 && b + 1 < e && byteAt s (b + 1) == 35 then -- `%#`
    let some k := parseNat? s (b + 2) e | bad ()
    return .num p k
  match componentKind s b e with
  | 0 => return .str p (slice s b e)
  | 1 => pure ()
  | _ => return ← bad ()
  let mut out := ""
  let mut i := b
  while i < e do
    if byteAt s i == 37 then
      unless i + 2 < e do return ← bad ()
      let some hi := hexVal? (byteAt s (i + 1)) | bad ()
      let some lo := hexVal? (byteAt s (i + 2)) | bad ()
      let ch := Char.ofNat (16 * hi + lo)
      unless isEscaped ch do return ← bad ()
      out := out.push ch
      i := i + 3
    else
      let next := findByte s 37 i e
      out := out ++ slice s i next
      i := next
  return .str p out

/-! ## The record -/

/-- A module's line in the record file. -/
public structure ModuleTimeRow where
  name : Name
  ms : Nat
  /-- The remaining path stored in the file. -/
  rem : Nat
  /-- The encoded name, `contents[keyStart, keyStop)`. -/
  keyStart : Nat
  keyStop : Nat
  /-- The imports field, `contents[impStart, impStop)`. -/
  impStart : Nat
  impStop : Nat
  deriving Inhabited

/-- The record as read from the file. -/
public structure ModuleTimeRecord where
  contents : String := ""
  rows : Array ModuleTimeRow := #[]

/--
Checks the imports field from `i` (space-separated line indices) and returns where the line ends
and the largest index in it.
-/
def scanImports (s : String) (i size : Nat) : Except String (Nat × Nat) := do
  let mut p := i
  let mut top := 0
  if p < size && byteAt s p != 10 then
    while true do
      let q := Id.run do
        let mut q := p
        while q < size do
          let c := byteAt s q
          unless 48 ≤ c && c ≤ 57 do break
          q := q + 1
        return q
      let some n := parseNat? s p q | throw "bad import index"
      top := max top n
      if q < size && byteAt s q == 32 then
        p := q + 1
      else
        p := q
        break
  unless p == size || byteAt s p == 10 do throw "bad import index"
  return (p, top)

/-- The previous line's name: where it is, its components' ends (relative to its start), and its prefixes. -/
structure PrevName where
  start : Nat := 0
  stop : Nat := 0
  ends : Array Nat := #[]
  prefixes : Array Name := #[]

/--
Decodes the name `s[kb, ke)`, reusing the components it shares with the previous line's name, and
checks that it comes after that name (if `ordered`).
-/
def decodeKey (s : String) (kb ke : Nat) (ordered : Bool) (prev : PrevName) :
    Except String (Name × PrevName) := do
  let lcp := commonPrefix s prev.start prev.stop kb ke
  if ordered && (lcp == ke - kb ||
      (lcp < prev.stop - prev.start && byteAt s (kb + lcp) < byteAt s (prev.start + lcp))) then
    throw s!"'{slice s kb ke}' is not after '{slice s prev.start prev.stop}' (lines are sorted by name)"
  if ke == kb + 2 && byteAt s kb == 37 && byteAt s (kb + 1) == 33 then -- `%!`
    return (.anonymous, {start := kb, stop := ke})
  let {ends, prefixes, ..} := prev
  let mut shared := 0
  for h : j in [0:ends.size] do
    let r := ends[j]
    if r < lcp || (r == lcp && byteAt s (kb + r) == 46) then shared := j + 1 else break
  let mut ends := ends
  let mut prefixes := prefixes
  while ends.size > shared do
    ends := ends.pop
    prefixes := prefixes.pop
  let mut name := prefixes.back?.getD .anonymous
  let mut pos := if shared == 0 then kb else kb + ends.back! + 1
  while true do
    let dot := findByte s 46 pos ke
    name ← decodeComponent s pos dot name
    ends := ends.push (dot - kb)
    prefixes := prefixes.push name
    if dot == ke then break
    pos := dot + 1
  return (name, {start := kb, stop := ke, ends, prefixes})

/-- Parses a record. -/
def parseModuleTimes (s : String) : Except String ModuleTimeRecord := do
  let size := s.utf8ByteSize
  let hdrEnd := findByte s 10 0 size
  let hdr := slice s 0 hdrEnd
  unless hdr == moduleTimesHeader do
    throw s!"line 1: expected '{moduleTimesHeader}', got '{hdr}'"
  let mut rows : Array ModuleTimeRow := #[]
  -- The previous line's name, so that a name shares the components it has in common with it.
  let mut prev : PrevName := {}
  let mut top := 0
  let mut topLine := 0
  let mut i := hdrEnd + 1
  let mut line := 2
  while i < size do
    let err (msg : String) : String := s!"line {line}: {msg}"
    let t1 := findFieldEnd s i size
    let t2 := findFieldEnd s (t1 + 1) size
    let t3 := findFieldEnd s (t2 + 1) size
    unless byteAt s t1 == 9 && byteAt s t2 == 9 && byteAt s t3 == 9 do
      throw <| err "expected <ms>\\t<rem>\\t<name>\\t<imports>"
    let some ms := parseNat? s i t1 | throw <| err s!"bad compile time '{slice s i t1}'"
    let some rem := parseNat? s (t1 + 1) t2
      | throw <| err s!"bad remaining path '{slice s (t1 + 1) t2}'"
    let kb := t2 + 1
    let ke := t3
    let (name, next) ← (decodeKey s kb ke (!rows.isEmpty) prev).mapError err
    prev := next
    let (le, lineTop) ← (scanImports s (ke + 1) size).mapError err
    if lineTop > top || topLine == 0 then
      top := lineTop
      topLine := line
    rows := rows.push {name, ms, rem, keyStart := kb, keyStop := ke, impStart := ke + 1, impStop := le}
    i := le + 1
    line := line + 1
  if topLine != 0 && top ≥ rows.size then
    throw s!"line {topLine}: import index {top}, but there are {rows.size} lines"
  return {contents := s, rows}

/-- Warns that the record at hand is not used: the build starts a new one. -/
def logIgnoredRecord [MonadLog BaseIO] (why : String) : BaseIO Unit :=
  logWarning s!"{why}; ignoring it and starting a new record (delete it to silence this warning)"

/--
Reads the record. A missing file is an empty record. An older Lake's record
(`legacyModuleTimesFileName`) beside a missing file, or a file that does not parse, is logged as a
warning naming the file and read as an empty record: the record only orders compiles, so the build
goes on, and its save starts a new record. A file that cannot be read is an error.
-/
@[nospecialize] public def readModuleTimes [logger : MonadLog BaseIO] (path : FilePath) :
    IO ModuleTimeRecord := do
  unless (← path.pathExists) do
    let legacy := path.withFileName legacyModuleTimesFileName
    if ← legacy.pathExists then
      logIgnoredRecord s!"{legacy}: a module-times record from an older Lake"
    return {}
  match parseModuleTimes (← IO.FS.readFile path) with
  | .ok r => return r
  | .error e =>
    logIgnoredRecord s!"{path}: {e}"
    return {}

/-- The import indices in `s[b, e)` (already checked by `parseModuleTimes`). -/
def importIndices (s : String) (b e : Nat) : Array Nat := Id.run do
  let mut out := #[]
  let mut n := 0
  let mut digits := false
  for i in [b:e] do
    let c := byteAt s i
    if c == 32 then
      out := out.push n
      n := 0
      digits := false
    else
      n := 10 * n + (c - 48).toNat
      digits := true
  if digits then out := out.push n
  return out

/--
Writes `contents` to the record file through a temporary file, so a reader sees the old file or
the new one. The temporary file is per process: concurrent writers (e.g. `lake setup-file` runs)
each rename a whole file, and the last one wins. A failed write removes its temporary file.
-/
public def writeModuleTimesFile (path : FilePath) (contents : String) : IO Unit := do
  let tmp := path.addExtension s!"{← IO.Process.getPID}.tmp"
  createParentDirs path
  try
    IO.FS.withFile tmp .write fun h => do
      h.putStr contents
      -- `putStr` is buffered, and closing a handle drops its errors: flush to see a failed write.
      h.flush
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

/-! ## Remaining paths -/

structure RemState where
  rem : Array Nat
  /-- Per module: 0 not visited, 1 on the current path, 2 done. -/
  mark : ByteArray

partial def visitRemaining (ms : Array Nat) (importers : Array (Array Nat))
    (n : Nat) : StateM RemState Nat := do
  let m := (← get).mark.get! n
  if m == 2 then return (← get).rem[n]!
  -- `n` is on the current path: the record holds a stale cycle, and this edge counts 0.
  if m == 1 then return 0
  modify fun st => {st with mark := st.mark.set! n 1}
  let mut best := 0
  for r in importers[n]! do
    best := max best (← visitRemaining ms importers r)
  let t := ms[n]! + best
  modify fun st => {rem := st.rem.set! n t, mark := st.mark.set! n 2}
  return t

/--
Each module's remaining path in milliseconds: its own compile time (`ms`) plus the longest
remaining path among the modules that import it (`importers`).
-/
public def remainingPaths (ms : Array Nat) (importers : Array (Array Nat)) : Array Nat :=
  let act : StateM RemState Unit := do
    for n in [0:ms.size] do
      discard <| visitRemaining ms importers n
  let init := {rem := Array.replicate ms.size 0, mark := ByteArray.mk (Array.replicate ms.size 0)}
  (Id.run (act.run init)).2.rem

/--
The priority of a module's compile job: `⌊log₂⌋` of its remaining path in seconds, clamped to
`0..7`. `Task.Priority.max` (8) belongs to Lake's other jobs.
-/
public def compilePrio (remainingMs : Nat) : Task.Priority :=
  min 7 (Nat.log2 (remainingMs / 1000))

/-! ## One build's view -/

/--
One build's view of the record: the file and priorities as read at the start of the build (with
the file's size and modification time then), the entries this build compiled, and the modules
whose compile job ran.
-/
public structure ModuleTimes where
  path : FilePath
  stamp? : Option (UInt64 × IO.FS.SystemTime)
  file : ModuleTimeRecord
  prios : Std.HashMap Name Task.Priority
  /-- Entries this build recorded, newest first. A list, so that recording one is O(1). -/
  new : IO.Ref (List ModuleTimeEntry)
  /-- Modules whose compile job ran in this build (compiled or up to date), so their sources exist. -/
  seen : IO.Ref (List Name)

/--
Reads the record at the start of a build. A record that cannot be read (a directory in its place, no
permission, an I/O error) is logged as a warning naming it, like one that does not parse, and the
build starts with no priorities.
-/
@[nospecialize] public def ModuleTimes.load [logger : MonadLog BaseIO] (path : FilePath) :
    IO ModuleTimes := do
  -- Stamp before reading: a write that lands in between makes the stamp stale, never the record.
  let (stamp?, file) ← try
      let stamp? ← moduleTimesStamp? path
      pure (stamp?, ← readModuleTimes path)
    catch e =>
      logIgnoredRecord s!"{path}: {e}"
      pure (none, ({} : ModuleTimeRecord))
  let mut prios : Std.HashMap Name Task.Priority := Std.HashMap.emptyWithCapacity file.rows.size
  for row in file.rows do
    prios := prios.insert row.name (compilePrio row.rem)
  return {path, stamp?, file, prios, new := ← IO.mkRef [], seen := ← IO.mkRef []}

public def ModuleTimes.prio (self : ModuleTimes) (mod : Name) : Task.Priority :=
  self.prios.getD mod Task.Priority.default

public def ModuleTimes.record (self : ModuleTimes) (e : ModuleTimeEntry) : BaseIO Unit :=
  self.new.modify (e :: ·)

/-- Notes that the compile job of `mod` ran in this build: its source exists, so `save` keeps its row without asking. -/
public def ModuleTimes.markSeen (self : ModuleTimes) (mod : Name) : BaseIO Unit :=
  self.seen.modify (mod :: ·)

/--
For each row, whether its module may keep a line: not if this build compiled it again (`fresh`);
yes if its compile job ran (`seen`); otherwise only if `sourceOf` resolves it to a source file that
exists. The names are resolved serially and the files checked in parallel chunks: resolving
touches the shared workspace, whose reference counts parallel tasks would contend on, while a
chunk of paths is the task's own.
-/
def keepRows (rows : Array ModuleTimeRow) (fresh seen : Name → Bool)
    (sourceOf : Name → Option FilePath) : BaseIO ByteArray := do
  let mut flags := ByteArray.emptyWithCapacity rows.size
  let mut ask : Array Nat := #[]
  let mut paths : Array FilePath := #[]
  for h : i in [0:rows.size] do
    let name := rows[i].name
    if fresh name then
      flags := flags.push 0
    else if seen name then
      flags := flags.push 1
    else
      flags := flags.push 0
      if let some path := sourceOf name then
        ask := ask.push i
        paths := paths.push path
  let chunk := 512
  let mut tasks := #[]
  for c in [0:(paths.size + chunk - 1) / chunk] do
    let part := paths.extract (c * chunk) ((c + 1) * chunk)
    tasks := tasks.push (c * chunk, ← BaseIO.asTask (part.mapM (·.pathExists)))
  for (start, t) in tasks do
    let found ← IO.wait t
    for h : j in [0:found.size] do
      if found[j] then flags := flags.set! ask[start + j]! 1
  return flags

/--
A line of the record being written: a row of the file kept as it is, a row of the file kept only
as an import (`hollow`: no time, no imports), an entry from this build, or a module that is only
imported by one (`extra`: no time, no imports).
-/
inductive OutLine
  | kept (row : Nat)
  | hollow (row : Nat)
  | fresh (entry : Nat)
  | extra (name : Nat)
  deriving Inhabited

/-- The index `i < n` where `cmp i` is `.eq`, if any, for `cmp` increasing in `i`. -/
def bsearch (n : Nat) (cmp : Nat → Ordering) : Option Nat := Id.run do
  let mut lo := 0
  let mut hi := n
  while lo < hi do
    let mid := (lo + hi) / 2
    match cmp mid with
    | .lt => lo := mid + 1
    | .gt => hi := mid
    | .eq => return some mid
  return none

/--
Writes this build's entries over the record as it is on disk now, and recomputes every remaining
path. If the file's size or modification time changed since `load` (another Lake process saved it
during this build), the file is read again, so that process's entries survive (a file that no
longer parses is replaced, as `readModuleTimes` says); otherwise the record read by `load` is reused.

A row of the file is kept if its module was not compiled again and either its compile job ran in
this build or `sourceOf` resolves it to a source file that exists. A row with a compile time keeps
its line then. A module with no time of its own (`ms` 0) keeps a line only while, in addition, some
line imports it, so the edge outlives the build that saw it: when the module is compiled later, its
new line takes the importer's path into its remaining path.

Writes nothing and returns 0 when this build compiled nothing; otherwise returns how many entries
this build recorded.
-/
@[nospecialize] public def ModuleTimes.save [logger : MonadLog BaseIO] (self : ModuleTimes)
    (sourceOf : Name → Option FilePath) : IO Nat := do
  let new ← self.new.get
  if new.isEmpty then return 0
  let file ←
    if (← moduleTimesStamp? self.path) == self.stamp? then pure self.file
    else readModuleTimes self.path
  let s := file.contents
  let rows := file.rows
  -- `new` is newest first, so `insertIfNew` keeps a module's latest compile.
  let newMap : Std.HashMap Name ModuleTimeEntry :=
    new.foldl (init := {}) fun m e => m.insertIfNew e.name e
  let fresh : Array (String × ModuleTimeEntry) :=
    newMap.fold (init := #[]) (fun a _ e => a.push (encodeModuleName e.name, e))
      |>.qsort (·.1 < ·.1)
  let seen : Std.HashSet Name := (← self.seen.get).foldl (·.insert ·) {}
  let kept ← keepRows rows (fun n => newMap.contains n) seen.contains sourceOf
  -- What becomes of each row: 0 dropped, 1 kept, 2 replaced by this build's entry, 3 hollow.
  let mut status := ByteArray.mk (Array.replicate rows.size 0)
  let mut replacedBy : Array Nat := Array.replicate rows.size 0
  let mut k := 0
  for h : i in [0:rows.size] do
    let row := rows[i]
    let mut order := Ordering.lt
    while h : k < fresh.size do
      order := compareRange s row.keyStart row.keyStop fresh[k].1
      unless order == .gt do break
      k := k + 1
    if k < fresh.size && order == .eq then
      status := status.set! i 2
      replacedBy := replacedBy.set! i k
    else if kept.get! i != 0 && row.ms > 0 then
      status := status.set! i 1
  let findFresh (key : String) : Option Nat :=
    bsearch fresh.size fun j => let f := fresh[j]!.1; compareRange f 0 f.utf8ByteSize key
  let findRow (key : String) : Option Nat :=
    bsearch rows.size fun i => compareRange s rows[i]!.keyStart rows[i]!.keyStop key
  -- Modules imported by a kept row or by this build's entries keep a line, hollow if need be.
  for h : i in [0:rows.size] do
    if status.get! i != 1 then continue
    for r in importIndices s rows[i].impStart rows[i].impStop do
      if status.get! r == 0 && kept.get! r != 0 then status := status.set! r 3
  let mut extraSet : Std.HashSet String := {}
  for (_, e) in fresh do
    for imp in e.imports do
      let key := encodeModuleName imp
      if (findFresh key).isSome then continue
      match findRow key with
      | some r => if status.get! r == 0 && kept.get! r != 0 then status := status.set! r 3
      | none => extraSet := extraSet.insert key
  let extras := extraSet.toArray.qsort (· < ·)
  -- The lines, merging the three sorted, disjoint streams: kept and hollow rows, this build's
  -- entries, and the extra imported modules.
  let noLine := rows.size + fresh.size + extras.size
  let mut lines : Array OutLine := Array.mkEmpty noLine
  let mut lineOf : Array Nat := Array.replicate rows.size noLine
  let mut freshLine : Array Nat := Array.replicate fresh.size noLine
  let mut extraLine : Array Nat := Array.replicate extras.size noLine
  let mut ri := 0
  let mut fj := 0
  let mut ex := 0
  while true do
    while ri < rows.size do
      let st := status.get! ri
      if st == 1 || st == 3 then break
      ri := ri + 1
    -- The smallest head: 0 a row, 1 an entry, 2 an extra, 3 none left.
    let mut pick := 3
    if ri < rows.size then pick := 0
    if h : fj < fresh.size then
      if pick == 3 || compareRange s rows[ri]!.keyStart rows[ri]!.keyStop fresh[fj].1 == .gt then
        pick := 1
    if h : ex < extras.size then
      let e := extras[ex]
      let below : Bool := match pick with
        | 0 => compareRange s rows[ri]!.keyStart rows[ri]!.keyStop e == .gt
        | 1 => let f := fresh[fj]!.1; compareRange f 0 f.utf8ByteSize e == .gt
        | _ => true
      if below then pick := 2
    match pick with
    | 0 =>
      lineOf := lineOf.set! ri lines.size
      lines := lines.push (if status.get! ri == 1 then .kept ri else .hollow ri)
      ri := ri + 1
    | 1 =>
      freshLine := freshLine.set! fj lines.size
      lines := lines.push (.fresh fj)
      fj := fj + 1
    | 2 =>
      extraLine := extraLine.set! ex lines.size
      lines := lines.push (.extra ex)
      ex := ex + 1
    | _ => break
  for h : r in [0:rows.size] do
    if status.get! r == 2 then lineOf := lineOf.set! r freshLine[replacedBy[r]!]!
  let lineOfKey (key : String) : Option Nat :=
    match findFresh key with
    | some j => some freshLine[j]!
    | none => match findRow key with
      | some r => let l := lineOf[r]!; if l == noLine then none else some l
      | none => (bsearch extras.size fun x => let e := extras[x]!; compareRange e 0 e.utf8ByteSize key).map
          (extraLine[·]!)
  -- Each line's time and imports, as line indices.
  let mut ms : Array Nat := Array.mkEmpty lines.size
  let mut imports : Array (Array Nat) := Array.mkEmpty lines.size
  for l in lines do
    match l with
    | .kept i =>
      let row := rows[i]!
      ms := ms.push row.ms
      imports := imports.push <| (importIndices s row.impStart row.impStop).filterMap fun r =>
        let l := lineOf[r]!
        if l == noLine then none else some l
    | .fresh j =>
      let e := fresh[j]!.2
      ms := ms.push e.ms
      imports := imports.push <| e.imports.filterMap (lineOfKey <| encodeModuleName ·)
    | .hollow _ | .extra _ =>
      ms := ms.push 0
      imports := imports.push #[]
  let mut importers : Array (Array Nat) := Array.replicate lines.size #[]
  for h : l in [0:imports.size] do
    for i in imports[l] do
      importers := importers.modify i (·.push l)
  let rem := remainingPaths ms importers
  let mut out := moduleTimesHeader.push '\n'
  for h : l in [0:lines.size] do
    out := pushNat out ms[l]! |>.push '\t'
    out := pushNat out rem[l]! |>.push '\t'
    out := match lines[l] with
      | .kept i | .hollow i => out ++ slice s rows[i]!.keyStart rows[i]!.keyStop
      | .fresh j => out ++ fresh[j]!.1
      | .extra x => out ++ extras[x]!
    out := out.push '\t'
    let imps := imports[l]!
    for h : m in [0:imps.size] do
      if m > 0 then out := out.push ' '
      out := pushNat out imps[m]
    out := out.push '\n'
  writeModuleTimesFile self.path out
  return new.length
