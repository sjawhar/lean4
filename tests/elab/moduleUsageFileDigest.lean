import Lean
/-! `ModuleUsage.fileDigest` is the XXH3-128 of a file's bytes, read in 256 KiB chunks. The expected values
are those `xxhsum -H2` (xxHash 0.8.3) prints for the same files: empty, one byte, one byte short of a chunk,
exactly one chunk, one byte over, and three chunks and five bytes. A missing file is an error. -/
open Lean

def contents (n : Nat) : ByteArray := Id.run do
  let mut b := ByteArray.emptyWithCapacity n
  for i in [0:n] do
    b := b.push ((i * 31 + 7) % 251).toUInt8
  return b

#eval show IO Unit from IO.FS.withTempDir fun dir => do
  for n in [0, 1, 262143, 262144, 262145, 786437] do
    let p := dir / s!"f{n}"
    IO.FS.writeBinFile p (contents n)
    IO.println s!"{(← ModuleUsage.fileDigest p).hex}  f{n}"
  try
    discard <| ModuleUsage.fileDigest (dir / "missing")
    IO.println "missing: no error"
  catch
    | .noFileOrDirectory .. => IO.println "missing: noFileOrDirectory"
    | e => IO.println s!"missing: {e}"
