import Lake.Build.UsageCutoff
/-!
A usage-cutoff check takes a record of an earlier read of the build only if each of the record's files was seen with the
recorded stamp after the check started (`Lake.observedSince`): by the check itself, or by a sweep of another check
that published, after all of its stats matched, a reading it took before them, which must be later than the check's
start. A record's builder publishes no reading.
-/
open Lake System Lean.ModuleUsage

def check (ok : Bool) (what : String) : IO Unit :=
  unless ok do throw <| IO.userError s!"failed: {what}"

#eval show IO Unit from do
  let dir : FilePath := "observed-files"
  IO.FS.createDirAll dir
  let a := dir / "a"
  let b := dir / "b"
  IO.FS.writeFile a "a"
  IO.FS.writeFile b "b"
  let some sa ← fileStamp a | throw <| IO.userError "no stamp"
  let some sb ← fileStamp b | throw <| IO.userError "no stamp"
  let files := #[(a, sa), (b, sb)]
  -- a record's builder publishes no reading: no check's start is before 0
  let o ← ObservedAt.new
  check (!(← o.after 0)) "a new record has no reading"
  -- a matching sweep raises the reading to the one taken before it
  let t0 ← monoNow
  let t ← monoNow
  check (← observedSince o files 0 t) "a matching sweep observes"
  check (← o.after (t - 1)) "the sweep raised the reading to its own"
  check (!(← o.after t)) "the reading is the sweep's, not later"
  -- a check that started before the sweep's reading takes it without a stat; ties and later starts do not
  check (← o.after (t - 1)) "t - 1"
  check (!(← o.after t)) "t"
  check (!(← o.after (t + 1))) "t + 1"
  -- a raise never lowers the reading
  o.raise (t - 5)
  check (← o.after (t - 1)) "a lower raise does not lower"
  -- a check that started before the matching sweep takes its observation without its own stat
  check (← observedSince o files t0 t) "an earlier start takes the published sweep"
  -- the second file changes: a check that started after the sweep's reading sees the change and does not raise
  IO.sleep 20
  IO.FS.writeFile b "changed"
  let t1 ← monoNow
  let t2 ← monoNow
  check (!(← observedSince o files t1 t2)) "a changed file is not observed"
  check (!(← o.after t)) "a failed sweep raises nothing"
  IO.println "ok"
