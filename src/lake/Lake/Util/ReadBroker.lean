/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Util.Log
public import Lake.Util.Url
import Lake.Util.IO
import Lake.Util.BuildSlots
import Lake.Util.Proc
import Std.Sync.Mutex
import Init.Data.String.TakeDrop
import Init.Data.String.Search
import Init.Data.String.Legacy

/-! # Read Broker

The jobs of a build read the shared remote cache (its mappings and artifacts) through one broker
per Lake process, which sends their reads in shared `curl` runs (`-Z`) instead of one `curl`
process per read. A run takes the reads that wait when it starts, up to `runSize`, and at most
`maxRuns` runs go at a time; a read that comes while they all go waits for the next run. A read
lets the job that sent it give its worker up (see `send`), so a build reads at the rate of the
network and not at the rate of its workers; what the build runs at once stays bounded all the
same, because every command of a build, and the hashing of what it downloads, takes a slot
(`withBuildSlot`), of which there are as many as the pool has workers.

So the reads of a build share a few connections (HTTP/2 carries a run's transfers to one host on
one connection) instead of opening one for each object. Measured on 2026-10-26 from an Azure VM
to Cloud Storage: one `curl -Z --parallel-max 256` run read 2,000 mappings in 0.74 s, where a new
`curl` process per read took 90 ms each (p50) and, with 160 of them at a time, lost about a tenth
of its connections to the network's limit on new ones.

A transfer of a run gives up as its read's `TransferLimits` say, and the broker tries a read that
failed transiently (see `isTransientFailure`) again in a later run, never with `curl --retry`
(see `transferRetryArgs`: a `-Z` run with a waiting retry may never end).
-/

open System

namespace Lake.ReadBroker

/--
How many reads one `curl` run takes at most, all at once (`--parallel-max`): 128. One `curl`
process then holds about 256 file descriptors (an output file and a socket for each transfer),
well within a 1,024 limit.
-/
def runSize : Nat := 128

/-- How many `curl` runs go at once. -/
def maxRuns : Nat := 8

/-- One read of the broker: a `GET` of `url` whose body goes to `out`. -/
public structure Request where
  url : String
  /-- The file that receives the body; `curl` replaces its contents when the answer comes. -/
  out : FilePath
  /--
  The cache token that the read sends (see `withCacheToken`), if any. Without one, the read
  follows redirects; with one, it does not (see `curlFollowArgs`).
  -/
  token? : Option String := none
  /-- The largest body that the read accepts. It also bounds each try (see `transferMaxSecs`). -/
  maxBytes : Nat
  /-- How a try gives up, and how often a transient failure is tried again. -/
  limits : TransferLimits := {}

/--
How a read ended: `curl`'s exit code, the HTTP status (0 without an answer), the error, and how
long its tries were in `curl` runs (`transferMs`).
-/
public structure Outcome where
  exitCode : Nat := 0
  code : Nat := 0
  message : String := ""
  /--
  How long the tries of the read took, in milliseconds: each from the start of the `curl` run that
  carried it to the moment `curl` reported it. The time the read waited for a run (in the queue,
  or before a retry) is not in it.
  -/
  transferMs : Nat := 0
  deriving Inhabited

/-- A read that waits for a run, or goes in one. -/
structure Pending where
  req : Request
  promise : IO.Promise Outcome
  /-- How many tries of the read have ended. -/
  tries : Nat := 0
  /-- The monotonic time (in milliseconds) at which the read was sent first. -/
  sentAt : Nat
  /-- How long the tries that ended took in `curl` runs (see `Outcome.transferMs`). -/
  transferMs : Nat := 0

/-- Whether two reads can go in one run: they send the same token with the same limits. -/
def Request.sharesRun (a b : Request) : Bool :=
  a.token? == b.token? && a.maxBytes == b.maxBytes && a.limits.stallSecs == b.limits.stallSecs

structure State where
  /-- The reads that wait for a run, oldest first. -/
  queue : Array Pending := #[]
  /-- How many runs go. -/
  runs : Nat := 0
  deriving Inhabited

builtin_initialize state : Std.Mutex State ← Std.Mutex.new {}

/-- How many reads wait for their outcome with a worker of the pool given up (see `send`). -/
builtin_initialize waiters : IO.Ref Nat ← IO.mkRef 0

/--
Takes the reads of the next run: the oldest waiting read, and up to `runSize` in all of those
after it that can go in its run. With no read waiting, returns none and counts this run as ended.
-/
def take : BaseIO (Option (Array Pending)) :=
  state.atomically do
    let s : State ← get
    let some first := s.queue[0]?
      | set {s with runs := s.runs - 1}
        return none
    let mut run := #[]
    let mut rest := #[]
    for p in s.queue do
      if run.size < runSize && p.req.sharesRun first.req then
        run := run.push p
      else
        rest := rest.push p
    set {s with queue := rest}
    return some run

/-- The `curl` write-out of each transfer of a run, on its standard error (see `parseOutcome`). -/
def writeOut : String := "%{stderr}%{urlnum} %{exitcode} %{http_code} %{errormsg}\n"

/-- The index in its run and the outcome of the transfer in a line of `writeOut`. -/
def parseOutcome (line : String) : Option (Nat × Outcome) := do
  let parts := line.trimAsciiEnd.copy.splitOn " "
  let i ← parts[0]? >>= String.toNat?
  let exitCode ← parts[1]? >>= String.toNat?
  let code ← parts[2]? >>= String.toNat?
  return (i, {exitCode, code, message := " ".intercalate (parts.drop 3)})

/--
Reads the lines of `writeOut` from `h` until it ends, and hands the outcome of each transfer of
`run` that it reports to `done` at once, recording in `seen` which ones it has handed over. An
error on `h` ends the reading: `seen` then names the transfers that `done` already took, so that
the caller gives none of them to `done` a second time.
-/
partial def readOutcomes
  (h : IO.FS.Handle) (run : Array Pending) (done : Pending → Outcome → BaseIO Unit)
  (seen : IO.Ref (Array Bool))
: BaseIO Unit := do
  let line? ← (h.getLine).toBaseIO
  let .ok line := line?
    | return
  if line.isEmpty then
    return
  if let some (i, outcome) := parseOutcome line then
    if let some p := run[i]? then
      unless (← seen.get)[i]! do
        seen.modify (·.set! i true)
        done p outcome
  readOutcomes h run done seen

/--
Runs one `curl` process for the reads of `run` (which `take` chose, so that they share their
token and limits), and hands each read's outcome to `done` as soon as `curl` reports it, marking
it in `seen`. Returns what went wrong for the reads that it did not report (those that `seen`
does not mark), which the caller ends or sends again: no read is given to `done` twice.
`curl` is stopped if it runs longer than a try of its transfers may take (`transferMaxSecs`),
and 10 seconds more.
-/
def runCurl
  (run : Array Pending) (done : Pending → Outcome → BaseIO Unit) (seen : IO.Ref (Array Bool))
: BaseIO String := do
  let some first := run[0]?
    | return ""
  let req := first.req
  let act : IO String := IO.FS.withTempFile fun h cfg => do
    if let some token := req.token? then
      h.putStrLn (CacheToken.curlHeaderLine token)
    for p in run do
      h.putStrLn s!"url = {p.req.url.quote}"
      h.putStrLn s!"output = {p.req.out.toString.quote}"
    h.flush
    let maxSecs := transferMaxSecs req.maxBytes
    let args := curlLeadArgs req.token? ++
      #["-Z", "--parallel-max", toString runSize, "-s", "-w", writeOut] ++
      curlFollowArgs req.token? ++ transferTimeoutArgs req.limits.stallSecs ++
      #["--max-filesize", toString req.maxBytes, "--max-time", toString maxSecs,
        "--config", cfg.toString]
    let child ← spawnProc {
      cmd := ← Internal.getCurl, args
      stdin := .null, stdout := .null, stderr := .piped
    }
    let reader ← BaseIO.asTask (prio := .dedicated) <| readOutcomes child.stderr run done seen
    let ended ← waitUntil reader ((← IO.monoMsNow) + (maxSecs + 10) * 1000)
    unless ended do
      -- Ends the reader, which then reads the end of the output
      try child.kill catch _ => pure ()
    discard <| IO.wait reader
    let rc ← child.wait
    if !ended then
      return s!"curl had not ended after {maxSecs + 10} s; Lake stopped it"
    else
      return s!"curl exited with code {rc} without reporting the transfer"
  -- The run itself can fail (e.g. `curl` could not be started): then no read it did not already
  -- report was sent, and each is tried again or ends with that error
  match ← act.toBaseIO with
  | .ok why => return why
  | .error e => return toString e

mutual

/--
Ends `p` with `outcome`, or, if it failed transiently and its limits allow another try, sends it
again after 1 s and then twice as long each time (as `curl --retry` would), unless
`retryMaxSecs` have passed since it was sent first. `outcome.transferMs` is the time of all of
`p`'s tries so far, this one included.
-/
partial def finish (p : Pending) (outcome : Outcome) : BaseIO Unit := do
  let delayMs := 1000 * 2 ^ p.tries
  let late := (← IO.monoMsNow) + delayMs - p.sentAt > p.req.limits.retryMaxSecs * 1000
  if isTransientFailure outcome.exitCode outcome.code && p.tries < p.req.limits.retries && !late then
    let p := {p with tries := p.tries + 1, transferMs := outcome.transferMs}
    discard <| BaseIO.asTask (prio := .dedicated) do
      IO.sleep delayMs.toUInt32
      enqueue p
  else
    p.promise.resolve outcome

/-- Runs the reads that wait, one run after another, until none waits. -/
partial def runLoop : BaseIO Unit := do
  let some run ← take
    | return
  let seen ← IO.mkRef (Array.replicate run.size false)
  -- Each try counts from the start of its run: the time it waited for one is not the remote's
  let start ← IO.monoMsNow
  let ended (p : Pending) (outcome : Outcome) : BaseIO Unit := do
    finish p {outcome with transferMs := p.transferMs + ((← IO.monoMsNow) - start)}
  let why ← runCurl run ended seen
  -- A transfer that `curl` did not report may not have been sent: it is tried again
  for (p, seen) in run.zip (← seen.get) do
    unless seen do
      ended p {exitCode := 28, message := why}
  runLoop

/-- Adds `p` to the waiting reads, and starts a run if fewer than `maxRuns` go. -/
partial def enqueue (p : Pending) : BaseIO Unit := do
  let start ← state.atomically do
    let s : State ← get
    let start := decide (s.runs < maxRuns)
    set {s with queue := s.queue.push p, runs := if start then s.runs + 1 else s.runs}
    return start
  if start then
    discard <| BaseIO.asTask (prio := .dedicated) runLoop

end

/--
Sends `req` through the broker and waits for its outcome.

The wait lets another job of the build run: `IO.wait` adds a worker to the task pool's limit
while this job waits, so a build reads at the rate of the network and not at the rate of its
workers. What a build runs at once stays bounded all the same, because every command it runs
takes a slot (`withBuildSlot`), of which there are as many as the pool has workers.

Only `maxRuns * runSize` reads wait that way at once, one for each transfer the broker can have
in flight; a read beyond them waits holding its worker (`IO.waitAny` adds none), so that a
build's waiting reads cannot take an unbounded number of threads.
-/
public def send (req : Request) : BaseIO Outcome := do
  let promise ← IO.Promise.new
  enqueue {req, promise, sentAt := ← IO.monoMsNow}
  let borrow ← waiters.modifyGet fun n =>
    if n < maxRuns * runSize then (true, n + 1) else (false, n)
  let outcome? ←
    if borrow then
      try IO.wait promise.result? finally waiters.modify (· - 1)
    else
      IO.waitAny [promise.result?]
  return outcome?.getD {message := "the read broker dropped the read"}

/--
Sends a read of `url` whose body goes to `out` through the broker, with the cache token if
`cacheToken` (see `withCacheToken`). Fails if `curl` got no answer or did not end the transfer.
Adds the time of each send's transfers (`Outcome.transferMs`) to `transferMs`, also when it
fails: a read that waited for the token, or for a run, waited for neither in its transfer.
-/
def sendWithToken
  (url : String) (out : FilePath) (cacheToken : Bool) (maxBytes : Nat) (limits : TransferLimits)
  (transferMs : IO.Ref Nat)
: LogIO (Outcome × Bool) := do
  let (_, outcome, token) ← withCacheToken url cacheToken fun token? => do
    let outcome ← send {url, out, token?, maxBytes, limits}
    transferMs.modify (· + outcome.transferMs)
    return (outcome.code, outcome)
  if outcome.exitCode != 0 then
    error s!"{url}: the read failed (curl exit code {outcome.exitCode}): {outcome.message}"
  if outcome.code == 0 then
    error s!"{url}: the read got no answer: {outcome.message}"
  return (outcome, token)

/--
Performs a HTTP `GET` of `url` through the broker (see `getUrl?`) and returns the body on HTTP 200
and `none` on 404; any other answer is an error. With `cacheToken`, the read carries the cache
token and does not follow redirects (see `withCacheToken`). A body larger than `maxFileSize`
fails, and the read gives up and tries again as `limits` says. Adds the time its transfers took to
`transferMs` (see `sendWithToken`).

The body goes to a file of this read alone under `tmpDir`, which is removed when the read ends.
No handle on it is held while the read waits: a build has thousands of reads in flight, and an
open handle for each would exhaust the process's file descriptors.
-/
public def getUrl?
  (url : String) (tmpDir : FilePath) (cacheToken := false) (maxFileSize : Nat)
  (limits : TransferLimits := {}) (transferMs : IO.Ref Nat)
: LogIO (Option String) := withLogErrorPos do
  let bodyFile ← uniqueTmpPath (tmpDir / "remote-read")
  createParentDirs bodyFile
  try
    let (outcome, _) ← sendWithToken url bodyFile cacheToken maxFileSize limits transferMs
    let body ← IO.FS.readFile bodyFile
    if outcome.code == 200 then
      return some body.trimAscii.copy
    else if outcome.code == 404 then
      return none
    else
      error s!"failed to GET URL, error {outcome.code}; received:\n{body}"
  finally
    discard <| (removeFileIfExists bodyFile).toBaseIO

/--
Downloads `url` to `file` through the broker (see `download`), replacing any existing file.

The body goes to a temporary file next to `file`, unique to this download, which `check` vets
before it is renamed into place; so `file` never holds a partial download, and a failed download
leaves it as it was. With `cacheToken`, the read carries the cache token and does not follow
redirects (see `withCacheToken`). A body larger than `maxFileSize` fails, and the read gives up
and tries again as `limits` says. Adds the time its transfers took to `transferMs` (see
`sendWithToken`): the wait for a slot of the build before `check`, and `check` itself, are not in
it.
-/
public def download
  (url : String) (file : FilePath) (cacheToken := false) (maxFileSize : Nat)
  (limits : TransferLimits := {}) (check : FilePath → LogIO PUnit := fun _ => pure ())
  (transferMs : IO.Ref Nat)
: LogIO PUnit := do
  createParentDirs file
  let tmp ← uniqueTmpPath file
  try
    let (outcome, token) ← sendWithToken url tmp cacheToken maxFileSize limits transferMs
    let code := outcome.code
    if 300 ≤ code && code < 400 then
      if token then
        error s!"{url}: the server redirected the download (status {code}), and a request \
          that carries the token of `{CacheToken.cmdVar}` does not follow redirects"
      else
        error s!"{url}: the server answered the download with a redirect (status {code}) \
          that `curl` could not follow"
    unless code == 200 do
      error s!"{url}: the download failed (HTTP {code})"
    -- `check` reads and hashes the whole file, so it takes a slot of the build, as a command
    -- would: the transfers of a run end together, and every job that one wakes checks at once
    withBuildSlot <| check tmp
    IO.FS.rename tmp file
  finally
    -- After a successful download, the temporary file is already gone
    discard <| (removeFileIfExists tmp).toBaseIO

end Lake.ReadBroker
