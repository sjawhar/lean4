/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lake.Build.Job.Monad
public import Lake.Config.Monad
import Lake.Build.RemoteCache
import Lake.Config.PushQueue
import Lake.Util.IO
import Std.Internal.UV.Timer
import Std.Internal.UV.System
import Std.Sync.Mutex
import Std.Time

/-! # Claims in the Shared Remote Cache

A build that writes the shared remote cache (with `LAKE_REMOTE_CACHE_QUEUE`, unless
`LAKE_REMOTE_CACHE_CLAIMS` is false; see `Env.remoteCacheClaimService?`) claims each input that it
is about to compile, so that two machines that build the same targets at once compile each one
once. The claim of an input is the object `claim/<remoteScope>/<inputHash>` (see
`remoteClaimScope`), whose body (`RemoteClaim`) names its holder and what the holder does.

* Before it compiles a target whose outputs are neither in the local nor in the remote cache, a
  build creates the claim of the input (only if it does not exist: `x-goog-if-generation-match: 0`)
  with state `building` (`claimInput`).
* The build that created it compiles the target, and rewrites the claim (only if it still has the
  generation the build last wrote) every 60 seconds until the compile ends (`registerClaim`; see
  `remoteClaimRefreshSecs`). Then it queues the outputs with the claim's generation and starts a
  detached `lake cache push` (`queueCompiledOutputs`, `startDetachedPush`), which marks the claim
  `done` after the mapping is uploaded. A compile that fails, or that publishes nothing, marks the
  claim `failed` (`withClaim`).
* Another build waits: it looks for the mapping of the input every 5 seconds
  (`remoteClaimPollMs`), and reads through it once it is there. It takes the claim over (a rewrite
  only if the claim still has the generation it read) and compiles when the claim says `failed`, or
  when the remote cache last replaced the claim at least `LAKE_CLAIM_TAKEOVER_SECS` before (by the
  `Last-Modified` and `Date` of the claim's `GET`, so the machines' clocks do not matter; the same
  `GET` returns the claim's state). A module waits with no thread at all (`runWithClaimWaits`);
  another target waits on its job's thread, which gives its slot in the pool to another job
  meanwhile (`waitForClaim`).

Generations are only compared for equality, as Cloud Storage guarantees nothing else.
Any failure to read or write a claim is a miss: the build compiles as it would without claims,
and records the failure in its read status (`remote-status-read.json`).
-/

open System Lean

namespace Lake

/-- The holder of this process's claims: `<host>:<pid>`. -/
public def claimHolder : BaseIO String := do
  let host ← match (← Std.Internal.UV.System.osGetHostname.toBaseIO) with
    | .ok host => pure host
    | .error _ => pure "unknown"
  return s!"{host}:{← IO.Process.getPID}"

/-- The body of a claim that `holder` writes now, with state `state`. -/
def claimBody (holder : String) (state : RemoteClaimState) : IO String := do
  return (toJson ({holder, state, writtenAt := ← wallClockSecs} : RemoteClaim)).compress

/-- The messages of `log`, or `default` if it has none. -/
def logMessages (log : Log) (default : String) : String :=
  let msg := log.entries.foldl (init := "") fun msg entry =>
    if msg.isEmpty then entry.message else s!"{msg}\n- {entry.message}"
  if msg.isEmpty then default else msg

/-- Runs `act` and returns its result, or the messages of its log if it failed. -/
public def tryLogIO (act : LogIO α) : BaseIO (Except String α) := do
  match ← act.run? {} with
  | (some a, _) => return .ok a
  | (none, log) => return .error (logMessages log "request failed")

/--
Marks the claim at `url` `done` (only if it still has `generation`), as `lake cache push` does
once the claimed input's mapping is uploaded, and returns the HTTP status code of the answer:
200 if it did, 412 if another build changed the claim meanwhile.
-/
public def markClaimDone (service : CacheService) (url generation holder : String) : LogIO Nat := do
  return (← service.putRemoteObjectIf url (← claimBody holder .done) generation).code

/-- Records a failure to read or write a claim in the build's read status, and logs it. -/
def recordClaimFailure (msg : String) : JobM Unit := do
  let status := (← getBuildContext).remoteReadStatus
  liftM (m := BaseIO) <| status.modify (·.add msg)
  -- Cache failures remain verbose so --wfail and --iofail builds still compile locally
  logVerbose msg

/-- Seconds since the Unix epoch of an HTTP date (e.g., a `Date` or `Last-Modified` header). -/
def httpDateSecs? (date : String) : Option Int :=
  match Std.Time.DateTime.fromHTTPDateString date.trimAscii.copy with
  | .ok date => some (Std.Time.Internal.UnitVal.val (α := 1) date.toTimestamp.toSecondsSinceUnixEpoch)
  | .error _ => none

/--
How long before the response the remote cache last replaced the object, in seconds, by the
remote cache's own clock (`Date` minus `Last-Modified`).
-/
def CacheService.RemoteObjectResponse.age? (r : CacheService.RemoteObjectResponse) : Option Int := do
  let now ← httpDateSecs? (← r.header? "date")
  let modified ← httpDateSecs? (← r.header? "last-modified")
  return now - modified

/-! ## Holding Claims -/

/-- A claim that this process holds, which it rewrites while it compiles the claimed input. -/
structure Held where
  service : CacheService
  holder : String
  /-- The generation that the last write of this process gave the claim. -/
  generation : String
  /-- The read status of the build that holds the claim, where a failed rewrite is recorded. -/
  status : IO.Ref RemoteReadStatus

/-- The claims that this process holds, by URL, and the timer of their next rewrite. -/
structure Registry where
  claims : Std.HashMap String Held := {}
  timer? : Option Std.Internal.UV.Timer := none
  /-- How often the claims are rewritten, in milliseconds (see `remoteClaimRefreshSecs`). -/
  periodMs : Nat := 60000
  deriving Inhabited

builtin_initialize registry : Std.Mutex Registry ← Std.Mutex.new {}

/--
Starts a timer that runs `refresh` on a dedicated thread after `periodMs`, holding no thread
until then. Returns `none` if no timer could be made: the claims are then not rewritten, and other
builds can take them over after the takeover time.
-/
def armRefresh (periodMs : Nat) (refresh : BaseIO Unit) : BaseIO (Option Std.Internal.UV.Timer) := do
  let act : IO Std.Internal.UV.Timer := do
    let timer ← Std.Internal.UV.Timer.mk periodMs.toUInt64 false
    let promise ← timer.next
    -- A stopped timer drops its promise, which then resolves to `none`
    BaseIO.chainTask promise.result? (prio := .dedicated) fun r? =>
      if r?.isSome then refresh else pure ()
    return timer
  return (← act.toBaseIO).toOption

/--
Rewrites each claim this process holds (state `building`), only if the claim still has the
generation of the last write, and arms the timer of the next rewrite while any claim is held.
A claim whose rewrite finds another generation (HTTP 412) was taken over by another build: this
process no longer holds it. The rewrite does not hold the registry's lock, so a claim that its
build released in the meantime is left as the release left it.
-/
partial def refreshClaims : BaseIO Unit := do
  let claims ← registry.atomically do
    modify ({· with timer? := none})
    return (← get).claims.toArray
  for (url, held) in claims do
    let r ← tryLogIO do
      held.service.putRemoteObjectIf url (← claimBody held.holder .building) held.generation
    registry.atomically do
      let s ← get
      let some cur := s.claims[url]?
        | return
      match r with
      | .ok r =>
        if r.code == 200 then
          if let some generation := r.header? "x-goog-generation" then
            set {s with claims := s.claims.insert url {cur with generation}}
        else if r.code == 412 then
          set {s with claims := s.claims.erase url}
        else
          cur.status.modify (·.add s!"could not rewrite the claim {url} (HTTP {r.code})")
      | .error msg =>
        cur.status.modify (·.add s!"could not rewrite the claim {url}:\n{msg}")
  registry.atomically do
    let s ← get
    if !s.claims.isEmpty && s.timer?.isNone then
      set {s with timer? := ← armRefresh s.periodMs refreshClaims}

/-- Starts rewriting the claim at `url` (see `refreshClaims`). -/
def registerClaim (url : String) (held : Held) (periodMs : Nat) : BaseIO Unit :=
  registry.atomically do
    let s ← get
    let s := {s with claims := s.claims.insert url held, periodMs}
    if s.timer?.isNone then
      set {s with timer? := ← armRefresh periodMs refreshClaims}
    else
      set s

/--
Stops rewriting the claim at `url`, and returns it if this process still held it. Once no claim is
held, the timer of the next rewrite is stopped, so nothing is left to run after the compiles end.
-/
def releaseClaim (url : String) : BaseIO (Option Held) :=
  registry.atomically do
    let s ← get
    let held? := s.claims[url]?
    let claims := s.claims.erase url
    if claims.isEmpty then
      if let some timer := s.timer? then
        discard <| timer.stop.toBaseIO
      set {s with claims, timer? := none}
    else
      set {s with claims}
    return held?

/-- A claim that this build holds on an input it compiles (see `claimInput`). -/
public structure HeldClaim where
  /-- The URL of the claim. -/
  url : String

/--
Marks the claim at `url`, which this process held as `held`, `failed` (only if it still has the
generation of the last write), so that a build that waits for it compiles the input at once.
-/
def markClaimFailed (url : String) (held : Held) : JobM Unit := do
  let r ← tryLogIO do
    held.service.putRemoteObjectIf url (← claimBody held.holder .failed) held.generation
  match r with
  | .ok r =>
    unless r.code == 200 do
      logVerbose s!"could not mark the claim {url} failed (HTTP {r.code})"
  | .error msg =>
    logVerbose s!"could not mark the claim {url} failed:\n{msg}"

/--
Stops rewriting the claim, and marks it `failed` if this build still held it (see
`markClaimFailed`). A claim whose outputs were queued (see `queueCompiledOutputs`) is no longer
held, and is left for `lake cache push` to mark `done`.
-/
def HeldClaim.abandon (claim : HeldClaim) : JobM Unit := do
  if let some held ← releaseClaim claim.url then
    markClaimFailed claim.url held

/--
Runs `build`, the compile of an input whose claim this build holds (if `claim?`), and then marks
the claim `failed` if the build did not queue the outputs (see `HeldClaim.abandon`), whether
`build` succeeded or not.
-/
public def withClaim (claim? : Option HeldClaim) (build : JobM α) : JobM α := do
  let some claim := claim?
    | build
  try
    let a ← build
    claim.abandon
    return a
  catch e =>
    claim.abandon
    throw e

/-! ## Taking Claims -/

/--
What a build waits for when another build holds the claim of an input: a promise that resolves
when it is time to look for the input's mapping again.
-/
public structure ClaimWait where
  promise : IO.Promise Unit
  /--
  Whether the claim said `done`, so the mapping should be there. If it is still missing when the
  build looks again, the build takes the claim over instead of waiting again.
  -/
  sawDone : Bool

/-- A wait of `ms` milliseconds, which holds no thread. -/
def ClaimWait.after (ms : Nat) (sawDone : Bool) : IO ClaimWait := do
  let timer ← Std.Internal.UV.Timer.mk ms.toUInt64 false
  return {promise := ← timer.next, sawDone}

/-- What a build does about the claim of an input that it is about to compile. -/
public inductive ClaimStep
/-- Compile the input: this build holds its claim (`some`), or it compiles without one. -/
| compile (claim? : Option HeldClaim)
/-- Another build holds the claim: look for the input's mapping again after the wait. -/
| wait (wait : ClaimWait)

/--
Takes the claim at `url` (with generation `generation`, `0` for a claim that does not exist).
Returns the claim if this build now holds it, `none` if another build changed the claim first
(HTTP 412), and errors on any other answer.
-/
def takeClaim
  (service : CacheService) (url holder generation : String) (takeoverSecs : Nat)
: JobM (Option HeldClaim) := do
  let r ← service.putRemoteObjectIf url (← claimBody holder .building) generation
  if r.code == 412 then
    return none
  unless r.code == 200 do
    error s!"could not write the claim {url} (HTTP {r.code})"
  let generation ← match r.header? "x-goog-generation" with
    | some generation => pure generation
    | none =>
      -- The generation of a write is in its answer; read it if it is not
      let r ← service.getRemoteObject url
      match r.header? "x-goog-generation" with
      | some generation => pure generation
      | none => error s!"the remote cache reported no generation for the claim {url}"
  let status := (← getBuildContext).remoteReadStatus
  registerClaim url {service, holder, generation, status}
    (remoteClaimRefreshSecs takeoverSecs * 1000)
  return some {url}

/--
Claims `inputHash` of `pkg` before this build compiles it (see the module docs), if this build
takes claims. `sawDone` is the `ClaimWait.sawDone` of the wait that preceded this call, if any.
Every failure is a miss: the build then compiles without a claim (`.compile none`).
-/
public def claimInput (pkg : Package) (inputHash : Hash) (sawDone := false) : JobM ClaimStep := do
  let ws ← getWorkspace
  let some name := ws.lakeEnv.remoteCacheClaimService?
    | return .compile none
  if (← getNoBuild) then
    return .compile none
  let .ok service := ws.lakeConfig.findRemoteCacheService? name
    | return .compile none -- the read through the service records the unknown name
  let url := service.remoteClaimUrl (remoteCacheScope ws.lakeEnv.leanGithash pkg.cacheScope) inputHash
  -- Claims are only for the service that accepts the cache token (a Cloud Storage bucket)
  unless service.sendsCacheToken url do
    return .compile none
  let takeoverSecs := ws.lakeEnv.claimTakeoverSecs
  let holder ← claimHolder
  try
    if let some claim ← takeClaim service url holder "0" takeoverSecs then
      return .compile (some claim)
    -- Another build holds the claim
    let r ← service.getRemoteObject url
    if r.code == 404 then
      -- It was removed in the meantime: claim the input when the build looks again
      return .wait (← ClaimWait.after remoteClaimPollMs false)
    unless r.code == 200 do
      error s!"could not read the claim {url} (HTTP {r.code})"
    let some generation := r.header? "x-goog-generation"
      | error s!"the remote cache reported no generation for the claim {url}"
    let claim? := (Json.parse r.body >>= fromJson? (α := RemoteClaim)).toOption
    let state? := claim?.map (·.state)
    -- By the remote cache's clock; by the holder's clock only if the answer has no times
    let age? ← match r.age?, claim? with
      | some age, _ => pure (some age)
      | none, some claim => pure (some ((← wallClockSecs) - claim.writtenAt))
      | none, none => pure none
    let stale : Bool := (age?.map (decide <| · ≥ (takeoverSecs : Int))).getD false
    if state? == some .done && !sawDone then
      -- The mapping should be there now: look for it again at once
      return .wait (← ClaimWait.after 0 true)
    if state? == some .failed || state? == some .done || stale then
      logVerbose s!"taking over the claim {url} (state {state?.map toString |>.getD "unknown"}, \
        last written {age?.map toString |>.getD "?"} s ago)"
      if let some claim ← takeClaim service url holder generation takeoverSecs then
        return .compile (some claim)
    logVerbose s!"waiting for the claim {url}: {r.body.trimAscii}"
    return .wait (← ClaimWait.after remoteClaimPollMs false)
  catch e =>
    recordClaimFailure s!"claim of input `{inputHash}` failed:\n\
      {logMessages (← takeLogFrom e) "claim request failed"}"
    return .compile none

/-- A step of a job that can wait for a claim (see `runWithClaimWaits`). -/
public inductive ClaimLoop (α : Type)
/-- The job is done with its result. -/
| done (a : α)
/-- Another build holds the claim of the job's input: run the step again after the wait. -/
| wait (wait : ClaimWait)

/--
Runs `step` as a job, and again after each wait for a claim that it returns (with that wait's
`ClaimWait.sawDone`), holding no thread while it waits: each wait is a promise, and the job
continues it (see `Job.bindM`). Each run of `step` starts with the current trace.
-/
public partial def runWithClaimWaits
  [OptDataKind α] (step : (sawDone : Bool) → JobM (ClaimLoop α)) (sawDone := false)
: JobM (Job α) := do
  let trace ← getTrace
  match ← step sawDone with
  | .done a =>
    -- `Job.bindM` keeps this run's state and takes the trace from the job it returns
    return .ofTask (.pure (.ok a {trace := ← getTrace}))
  | .wait wait =>
    let waited : Job Unit := .ofTask (wait.promise.result?.map (sync := true) fun _ => .ok () {})
    waited.bindM fun _ => do
      setTrace trace
      runWithClaimWaits step wait.sawDone

/-- The outcome of `waitForClaim`. -/
public inductive ClaimWaitResult (α : Type)
/-- Another build published the outputs, which `retry` found. -/
| found (a : α)
/-- Compile the input: this build holds its claim (`some`), or it compiles without one. -/
| compile (claim? : Option HeldClaim)

instance : Nonempty (ClaimWaitResult α) := ⟨.compile none⟩

/--
Claims `inputHash` of `pkg` (see `claimInput`), and while another build holds the claim, waits for
it on this job's thread and looks for the published outputs with `retry` after each wait. A job
that waits for a task gives its slot in the pool to another job meanwhile (the pool starts another
worker), so only the thread waits. A module's job waits without a thread instead
(see `runWithClaimWaits`).
-/
public def waitForClaim
  (pkg : Package) (inputHash : Hash) (retry : JobM (Option α))
: JobM (ClaimWaitResult α) := do
  let mut sawDone := false
  repeat
    match ← claimInput pkg inputHash sawDone with
    | .compile claim? => return .compile claim?
    | .wait wait =>
      discard <| IO.wait wait.promise.result?
      if let some a ← retry then
        return .found a
      sawDone := wait.sawDone
  return .compile none

/-! ## Publishing -/

/-- Serializes the decisions of this process to start a detached `lake cache push`. -/
builtin_initialize pushStartLock : Std.Mutex Unit ← Std.Mutex.new ()

/-- Whether a `lake cache push` holds the push lock of `cache` (see `Cache.pushLockFile`). -/
def pushRuns (cache : Cache) : IO Bool := do
  IO.FS.createDirAll cache.dir
  let h ← IO.FS.Handle.mk cache.pushLockFile .append
  if ← h.tryLock then
    h.unlock
    return false
  return true

/-- The size above which a detached push moves `Cache.pushLogFile` to `push.log.1` first. -/
def pushLogMaxBytes : UInt64 := 4 * 1024 * 1024

/--
The shell that starts a detached push: `/bin/bash`, the shell that can close every descriptor by
number (`sh` cannot close those above 9). Without it, no push is detached: the build runs the push
in the foreground at its end instead (see `runForegroundPush`), so no inherited descriptor can
outlive the build.
-/
def detachedPushShell : FilePath := "/bin/bash"

/--
The script that starts a detached `lake cache push`: `bash -c <script> sh <log> <lake> cache push`.
It closes every descriptor above 2 that Lake inherited (for example the lock of a wrapper such as
`lbq.sh`, which the push would otherwise hold until it ends; Lean closes none of them when it starts
a process), sends its output to the log, writes a line that names the push, and runs it.
-/
def detachedPushScript : String :=
  "log=$1; shift; " ++
  "for fd in /proc/$$/fd/* /dev/fd/*; do n=${fd##*/}; case $n in " ++
  "\"\"|*[!0-9]*|0|1|2) ;; *) eval \"exec $n>&-\" ;; esac; done; " ++
  "exec >>\"$log\" 2>&1 </dev/null; " ++
  "echo \"lake cache push: started, pid $$, by pid $PPID, at $(date -u +%Y-%m-%dT%H:%M:%SZ)\"; " ++
  "exec \"$@\""

/-- Moves `Cache.pushLogFile` to `push.log.1` once it is larger than `pushLogMaxBytes`. -/
def rotatePushLog (cache : Cache) : BaseIO Unit := do
  let log := cache.pushLogFile
  if let .ok md ← log.metadata.toBaseIO then
    if md.byteSize > pushLogMaxBytes then
      discard <| (IO.FS.rename log (log.toString ++ ".1")).toBaseIO

/-- The environment of a push of `cache`'s queue that the build starts. -/
def pushEnv (env : Env) (cache : Cache) : Array (String × Option String) :=
  #[("LAKE_CACHE_DIR", some cache.dir.toString)] ++
    (env.lakeConfig?.map (fun cfg => #[("LAKE_CONFIG", some cfg.toString)]) |>.getD #[])

/--
Starts a detached `lake cache push` of `cache`'s queue (see `Cache.pushQueueFile`), unless one
runs (it holds `Cache.pushLockFile`) or there is no `detachedPushShell`, and returns its process
ID. It runs in a session of its own, with the environment of this process and its cache, so it
outlives the build and a Ctrl-C that stops it; this process never waits for it. Its output goes to
`Cache.pushLogFile`.

One push at a time: the decisions of this process are serialized, and after it starts a push it
waits until the push holds the lock (or has ended, or 2 seconds passed), so that the next compile
of this build sees it run.
-/
public def startDetachedPush (env : Env) (cache : Cache) : IO (Option UInt32) :=
  pushStartLock.atomically do
    unless ← detachedPushShell.pathExists do
      return none
    if ← pushRuns cache then
      return none
    rotatePushLog cache
    let log := cache.pushLogFile
    let child ← IO.Process.spawn {
      cmd := detachedPushShell.toString
      args := #["-c", detachedPushScript, "sh", log.toString, env.lake.lake.toString, "cache", "push"]
      stdin := .null, stdout := .null, stderr := .null
      setsid := true
      env := pushEnv env cache
    }
    let deadline := (← IO.monoMsNow) + 2000
    repeat
      if (← pushRuns cache) || (← child.tryWait).isSome || (← IO.monoMsNow) ≥ deadline then
        break
      IO.sleep 10
    return some child.pid

/--
Runs `lake cache push` of `cache`'s queue and waits for it, appending its output to
`Cache.pushLogFile`: what a build that takes claims does at its end when there is no
`detachedPushShell`. The push ends before the build does, so a descriptor it inherited is closed
by then. Returns its exit code.
-/
public def runForegroundPush (env : Env) (cache : Cache) : IO UInt32 :=
  pushStartLock.atomically do
    rotatePushLog cache
    let out ← IO.Process.output {
      cmd := env.lake.lake.toString, args := #["cache", "push", "--wait"], env := pushEnv env cache
    }
    let h ← IO.FS.Handle.mk cache.pushLogFile .append
    h.putStr s!"lake cache push: ran in the foreground of pid {← IO.Process.getPID}, \
      exit code {out.exitCode}\n{out.stdout}{out.stderr}"
    return out.exitCode

/-- Whether builds can start detached pushes (see `detachedPushShell`). -/
public def canDetachPush : BaseIO Bool :=
  detachedPushShell.pathExists

/--
Queues outputs that this build just compiled (see `queueRemotePush`), with the generation of the
input's claim if this build held it, which it stops rewriting. When this build takes claims, it
then starts a detached `lake cache push` (see `startDetachedPush`), which uploads the outputs and
marks the claim `done`, so the builds that wait for the claim find the mapping. If the outputs
could not be queued, the claim is marked `failed` instead.
-/
public def queueCompiledOutputs
  (claim? : Option HeldClaim) (pkg : Package) (inputHash : Hash) (target : String)
  (srcHash? : Option Hash) (data : Json) (log : Log)
: JobM Unit := do
  let held? ← match claim? with
    | some claim => releaseClaim claim.url
    | none => pure none
  let queued ← queueRemotePush pkg inputHash target srcHash? data log
    (claimGeneration? := held?.map (·.generation))
  if let (some claim, some held) := (claim?, held?) then
    unless queued do
      markClaimFailed claim.url held
  let ws ← getWorkspace
  if queued && ws.lakeEnv.remoteCacheClaimService?.isSome then
    match (← (startDetachedPush ws.lakeEnv ws.lakeCache).toBaseIO) with
    | .ok (some pid) =>
      logVerbose s!"started `lake cache push` (pid {pid}), log: {ws.lakeCache.pushLogFile}"
    | .ok none => pure ()
    | .error e => logWarning s!"could not start `lake cache push`: {e}"

end Lake
