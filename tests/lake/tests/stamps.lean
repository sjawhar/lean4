import Lake.Build.StampStore

/-!
Reads and edits one record of a stamp file (`Lake.Build.StampStore`) for the stamp tests
(`sourceStamp`, `noopOutputs`):
* `get FILE KEY`: prints the record's value; exits 1 if there is none.
* `put FILE KEY`: sets the record's value to standard input.
* `del FILE KEY`: removes the record.
-/

open Lake

def main : List String → IO UInt32
  | ["get", file, key] => do
    match (← readStampFile file).find? (·.1 == key) with
    | some (_, v) => IO.print v; return 0
    | none => return 1
  | ["put", file, key] => do
    let v ← (← IO.getStdin).readToEnd
    writeStampFile file <| ((← readStampFile file).filter (·.1 != key)).push (key, v)
    return 0
  | ["del", file, key] => do
    writeStampFile file <| (← readStampFile file).filter (·.1 != key)
    return 0
  | _ => do IO.eprintln "usage: stamps.lean get|put|del FILE KEY"; return 2
