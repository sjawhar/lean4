/-!
`Child.takeStdin` keeps `setsid`: `kill` on the child it returns signals the child's whole process
group, as `kill` on the original child does, so the child's own children die with it.
-/

open IO.Process

/--
Spawns `sh` as a session leader whose child `sleep` holds its stdout, takes its stdin, kills it, and
reports whether its stdout reached end of file at once, which it does only when `sleep` died too.
Windows has no process groups (`setsid` is ignored there), so the check is skipped.
-/
def killReachesGroup : IO String := do
  if System.Platform.isWindows then return "ok"
  let child ← spawn {
    cmd := "sh", args := #["-c", "sleep 30 & echo started; wait"]
    stdin := .piped, stdout := .piped, setsid := true
  }
  -- `sleep` has been forked once `sh` prints
  let started ← child.stdout.getLine
  unless started == "started\n" do return s!"unexpected output {repr started}"
  let (_stdin, child) ← child.takeStdin
  child.kill
  discard child.wait
  let start ← IO.monoMsNow
  discard child.stdout.readToEnd
  let ms := (← IO.monoMsNow) - start
  return if ms < 10000 then "ok" else s!"stdout stayed open for {ms} ms after the kill"

/-- info: "ok" -/
#guard_msgs in #eval killReachesGroup
