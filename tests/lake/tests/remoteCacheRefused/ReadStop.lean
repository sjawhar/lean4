import Lake

/-!
Checks `Lake.RemoteReadStatus.noteRead`, which stops and resumes a build's reads of the shared
remote cache, read by read (`test.sh` runs it as `case_read_stop`): reads that fail without an
answer stop the reads once they are 3 in a row over the stall time (3 s), only a probe that gets an
answer resumes them, and a read sent before the reads last stopped or resumed counts for nothing.
Times are in milliseconds.
-/

open Lake

/-- A read that could not reach the remote (a refused connection), whose transfer took 10 ms. -/
def refused : ReadBroker.Meter := {transferMs := 10, unreachable := true}

/-- A read that got an HTTP answer at once (such as a 404). -/
def answered : ReadBroker.Meter := {transferMs := 10, answered := true}

/-- A read whose two tries each waited the stall time for an answer that did not come. -/
def silent : ReadBroker.Meter := {transferMs := 6000}

/-- A read that got an answer whose body then stalled for the stall time. -/
def stalled : ReadBroker.Meter := {transferMs := 3010, answered := true}

/-- One read: what its sends saw, whether it failed, when it was sent and ended, whether a probe. -/
structure Read where
  meter : ReadBroker.Meter
  failed : Bool := true
  sentAt : Nat
  endAt : Nat
  probe : Bool := false

/-- Notes `reads` in order, and returns the status and the notices they logged. -/
def note (s : RemoteReadStatus) (reads : List Read) : RemoteReadStatus × Array String :=
  reads.foldl (init := (s, #[])) fun (s, notices) r =>
    let (s, notice?) := s.noteRead r.meter r.failed r.sentAt r.endAt r.probe
    (s, notice?.elim notices notices.push)

def check (what : String) (ok : Bool) : IO Unit :=
  unless ok do throw <| .userError s!"failed: {what}"

/-- Refused reads sent at 1 s, 2 s, 3 s and 4 s. -/
def refusedRow : List Read :=
  [1000, 2000, 3000, 4000].map fun t => {meter := refused, sentAt := t, endAt := t + 10}

/-- The status once the reads of `refusedRow` stopped the reads, at 4.01 s. -/
def stopped : RemoteReadStatus := (note {} refusedRow).1

#eval do
  let (s, notices) := note {} (refusedRow.take 3)
  check "3 refused reads over 2 s do not stop the reads" (s.stopped?.isNone && notices.isEmpty)
  let (s, notices) := note {} refusedRow
  check "the 4th makes the row 3 s long and stops the reads" (s.stopped?.isSome && s.stops == 1)
  check "the stop is logged once, and names the probe"
    (notices.size == 1 && notices[0]!.startsWith "stopped reading the remote cache: 4 reads" &&
      (notices[0]!.splitOn "a probe read goes at most every 2 s").length == 2)
  check "the first probe may go 2 s after the stop" (s.probeAt == 6010)
  let (s, _) := note {} [{meter := answered, failed := false, sentAt := 1000, endAt := 1010}]
  check "an answered read does not count" (s.unansweredInRow == 0)

#eval do
  let (s, notices) := note stopped
    [{meter := answered, failed := false, sentAt := 3500, endAt := 5000}]
  check "an answered read sent before the stop does not resume the reads"
    (s.stopped?.isSome && s.resumes == 0 && notices.isEmpty)
  let (s, notices) := note stopped
    [{meter := answered, failed := false, sentAt := 4500, endAt := 5010}]
  check "an answered read sent after the stop that is not a probe does not resume the reads"
    (s.stopped?.isSome && s.resumes == 0 && notices.isEmpty)
  let (s, notices) := note stopped
    [{meter := refused, sentAt := 6010, endAt := 6020, probe := true},
     {meter := stalled, sentAt := 8010, endAt := 11020, probe := true}]
  check "a probe that got no answer, or whose answer stalled, leaves the reads stopped"
    (s.stopped?.isSome && s.resumes == 0 && notices.isEmpty)
  let (s, notices) := note stopped
    [{meter := answered, failed := false, sentAt := 6010, endAt := 6020, probe := true}]
  check "a probe that got an answer resumes the reads, once"
    (s.stopped?.isNone && s.resumes == 1 && s.changedAt == 6020 && s.unansweredInRow == 0 &&
      notices.size == 1 && notices[0]!.startsWith "resumed reading the remote cache: a probe read")
  let (s, notices) := note stopped
    [{meter := answered, failed := true, sentAt := 6010, endAt := 6020, probe := true}]
  check "a probe answered with an error (such as a 403) resumes the reads"
    (s.stopped?.isNone && notices.size == 1)

/-- The status once a probe resumed the reads of `stopped` at 6.02 s. -/
def resumed : RemoteReadStatus :=
  (note stopped
    [{meter := answered, failed := false, sentAt := 6010, endAt := 6020, probe := true}]).1

#eval do
  let (s, notices) := note resumed
    ([5000, 5500, 6000].map fun t => {meter := silent, sentAt := t, endAt := t + 7000})
  check "reads sent before the resumption that fail after it do not stop the reads again"
    (s.stopped?.isNone && s.unansweredInRow == 0 && notices.isEmpty)
  let (s, notices) := note resumed
    ([7000, 7500, 8000].map fun t => {meter := silent, sentAt := t, endAt := t + 7000})
  check "reads sent after the resumption that wait for no answer stop the reads again"
    (s.stopped?.isSome && s.stops == 2 && notices.size == 1)
