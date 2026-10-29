import Lake.Build.UsageCutoff
/-!
A plain import does not take a record from a kept module, while a kept check takes the same record.
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
  let f : ImportFact := {
    olean := "kept.olean"
    modsys := false
    sidecar := "kept.usekey"
    stamp := default
    read? := some (some default, imp, true)
    olean? := some (default, default)
    observed := ← ObservedAt.new
  }
  check (match f.project false with | some none => true | _ => false) "a plain read rejects a kept record"
  check (match f.project true with | some (some _) => true | _ => false) "a kept read takes a kept record"
  IO.println "ok"
