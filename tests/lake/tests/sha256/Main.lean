import Lake

/-!
A checker for Lake's SHA-256 (`Lake.sha256Bytes` and `Lake.sha256File`), linked against Lake.

* `sha256 --vectors` checks the SHA-256 example messages of NIST FIPS 180-4 and exits with 1
  on a mismatch.
* `sha256 --check FILE...` prints `<digest>  FILE` for each file (the `sha256sum` format) from
  `sha256File`, and exits with 1 if `sha256Bytes` of the file's bytes gives another digest.
* `sha256 FILE...` prints the same lines from `sha256File` only, without reading a file whole.
-/

open Lake

/-- The SHA-256 example messages of NIST FIPS 180-4 and their digests. -/
def vectors : Array (String × ByteArray × String) := #[
  ("empty", "".toUTF8,
    "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"),
  ("abc", "abc".toUTF8,
    "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"),
  ("448 bits", "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq".toUTF8,
    "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1"),
  ("896 bits",
    ("abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmno" ++
      "ijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu").toUTF8,
    "cf5b16a778af8380036ce59e7b0492370b249b11e8f07a51afac45037afee9d1"),
  ("one million a", ⟨.replicate 1000000 97⟩,
    "cdc76e5c9914fb9281a1c7e284d73e67f1809a48a497200e046d39ccc7112cd0")
]

def checkVectors : IO UInt32 := do
  let mut rc := 0
  for (name, msg, expected) in vectors do
    let actual := sha256Bytes msg
    if actual == expected then
      IO.println s!"ok: {name}"
    else
      IO.eprintln s!"mismatch: {name}: expected {expected}, got {actual}"
      rc := 1
  return rc

def checkFiles (files : List String) : IO UInt32 := do
  let mut rc := 0
  for file in files do
    let digest ← sha256File file
    let bytesDigest := sha256Bytes (← IO.FS.readBinFile file)
    if digest != bytesDigest then
      IO.eprintln s!"mismatch: {file}: sha256File gives {digest}, sha256Bytes gives {bytesDigest}"
      rc := 1
    IO.println s!"{digest}  {file}"
  return rc

def main : List String → IO UInt32
  | ["--vectors"] => checkVectors
  | "--check" :: files => checkFiles files
  | files => do
    for file in files do
      IO.println s!"{← sha256File file}  {file}"
    return 0
