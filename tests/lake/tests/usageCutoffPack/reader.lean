import Lake.Build.UsagePack
/-!
The reader of a usage-cutoff pack (`Lake.UsagePack.readSidecar`), on the files that `test.sh` (e) makes in `reader/`:

* `big.usepack`, one byte larger than `maxWhole` (the bound of Lean's whole-file reader), with its `.usekey` intact
  and a header whose lengths add up to its size: `invalid` for every record, whether the read is the key read (which
  has the file's size), the whole read (which Lean's reader refuses), or a whole read that returned that many bytes
  (`partOf`: Lean's reader can return more than its bound where it cannot read the size of the file it opened).
* `edge.usepack`, of `maxWhole` bytes exactly and valid: read.
* `locked-big.usepack` and `locked-small.usepack`, which this user may not read (absent when the test runs as root):
  every read throws the file system's error. An error of the file system is never taken for the bound.
-/
open Lake Lake.UsagePack System

def check (ok : Bool) (what : String) : IO Unit :=
  unless ok do throw <| IO.userError s!"failed: {what}"

def kind : Read → String
  | .found bytes .. => s!"found {bytes.size}"
  | .absent => "absent"
  | .invalid _ reason => s!"invalid: {reason}"

def tooLarge : String := s!"invalid: it is larger than the {maxWhole} bytes that Lake reads of a record file"

#eval show IO Unit from do
  let dir : FilePath := "reader"
  let key ← IO.FS.readBinFile (dir / "key")
  -- a pack this module writes is read back
  write (dir / "ok.usepack") (some key) (some "usage".toUTF8) none
  check (kind (← readSidecar (dir / "ok.usekey")) == s!"found {key.size}") "ok.usekey"
  check (kind (← readSidecar (dir / "ok.usage")) == "found 5") "ok.usage"
  check (kind (← readSidecar (dir / "ok.resolved")) == "absent") "ok.resolved"
  -- larger than the bound: invalid for every record
  for ext in ["usekey", "usage", "resolved"] do
    let r ← readSidecar (dir / s!"big.{ext}")
    check (kind r == tooLarge) s!"big.{ext}: {kind r}"
  let bytes ← IO.FS.readBinFile (dir / "big.usepack")
  check (bytes.size == maxWhole + 1) s!"big.usepack has {bytes.size} bytes"
  for p in [Part.usekey, Part.usage, Part.resolved] do
    let r := partOf (dir / "big.usepack") bytes bytes.size p none
    check (kind r == tooLarge) s!"partOf of big.usepack read whole: {kind r}"
  -- of the bound exactly: read
  let edge ← IO.FS.readBinFile (dir / "edge.usepack")
  check (edge.size == maxWhole) s!"edge.usepack has {edge.size} bytes"
  check (kind (← readSidecar (dir / "edge.usekey")) == s!"found {key.size}") "edge.usekey"
  match ← readSidecar (dir / "edge.usage") with
  | .found u .. => check (u.size > maxWhole - 1000 - key.size) s!"edge.usage has {u.size} bytes"
  | r => check false s!"edge.usage: {kind r}"
  -- a file the user may not read: the file system's error, for a pack of any size
  if (← (dir / "locked-big.usepack").pathExists) then
    for f in ["locked-big.usekey", "locked-big.usage", "locked-big.resolved", "locked-small.usekey",
        "locked-small.usage"] do
      match ← (readSidecar (dir / f)).toBaseIO with
      | .error (.permissionDenied ..) => pure ()
      | .error e => check false s!"{f}: {e}"
      | .ok r => check false s!"{f}: {kind r}"
  IO.println "ok"
