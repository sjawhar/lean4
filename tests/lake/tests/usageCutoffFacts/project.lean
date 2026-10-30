import Lake.Build.UsageCutoff
/-!
A plain import does not take a record from a kept module, while a kept check takes the same record; a record holds the
bindings of both kinds, its files and its `.usage` path as computed from its read when it is made, and a `module`
file's artifact record pairs each of its paths with its stamp.
-/
open Lake Lean.ModuleUsage

def check (ok : Bool) (what : String) : IO Unit :=
  unless ok do throw <| IO.userError s!"failed: {what}"

#eval show IO Unit from do
  let imp : UsageImport := {
    moduleDigest := default
    closure := default
    importedClosures := #[]
    own := {}
    providesDigest := default
    provides := (#[], #[])
    indirect := #[]
    providedIds := .mk fun _ => #[]
    indirectIds := .mk fun _ => #[]
    kernelLows := .mk fun _ => #[]
    specKeys := #[]
  }
  let oleanStamp : FileStamp := { (default : FileStamp) with ino := 2 }
  let f ← ImportFact.make "kept.olean" false "kept.usekey" default (some (some default, imp, true))
    (some (oleanStamp, default))
  check (match f.project false with | some none => true | _ => false) "a plain read rejects a kept record"
  check (match f.project true with | some (some _) => true | _ => false) "a kept read takes a kept record"
  let g ← ImportFact.make "plain.olean" false "plain.usekey" default (some (some default, imp, false)) none
  check (match g.project false with | none => true | _ => false) "a plain read of a key needs the .olean's hash"
  check (match g.project true with | none => true | _ => false) "a kept read of a key needs the .olean's hash"
  check (f.files.map (·.1.toString) == #["kept.usekey", "kept.olean"] && f.files[1]!.2 == oleanStamp)
    "a record's files are its sidecar and its hashed .olean, each with its stamp"
  check (g.files.map (·.1.toString) == #["plain.usekey"]) "a record that did not hash its .olean has its sidecar alone"
  check (f.usageFile.toString == "kept.usage") "a record's .usage is its .olean's"
  let a : ArtsFact := {
    paths := #["p.olean", "p.olean.server"]
    stamps := #[oleanStamp, default]
    digests := #[default, default]
    observed := ← ObservedAt.new
  }
  check (a.files.map (·.1.toString) == #["p.olean", "p.olean.server"] && a.files[0]!.2 == oleanStamp &&
    a.files[1]!.2 == default) "an artifact record's files pair its paths with their stamps"
  IO.println "ok"
