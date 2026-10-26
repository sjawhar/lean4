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
import Init.Data.String.Legacy

/-! # Claims in the Shared Remote Cache

A build that writes the shared remote cache (with `LAKE_REMOTE_CACHE_QUEUE`, unless
`LAKE_REMOTE_CACHE_CLAIMS` is false; see `Env.remoteCacheClaimService?`) claims an input that it
is about to compile when every other worker thread of it compiles, so that machines that build
the same targets at once, and have more to compile than they can at once, compile each input
once and share the compiles out. The claim of an input is the object
`claim/<remoteScope>/<inputHash>` (see `remoteClaimScope`), whose body (`RemoteClaim`) names its
holder and what the holder does.

* A build claims, and waits for other builds, only when `LAKE_CLAIM_SLOTS` of its compiles
  already run (`runningCompiles`). The default is one less than its worker threads: the job that
  asks runs on a worker itself, so with `n` workers at most `n - 1` compiles run beside it, and
  the default claims exactly when every other worker compiles. With a worker free, it compiles at
  once without a claim. Waiting for another build saves a build time only when it cannot compile
  more at once, and every claim request and every wait lies on the build's path; a build whose
  dependency graph leaves its workers idle (one measured cold build ran 6 compiles at once on
  average on 160 cores) waits on nothing but that path. `LAKE_CLAIM_SLOTS=0` claims every input.
* Before it compiles a target whose outputs are neither in the local nor in the remote cache, a
  build whose workers are all busy creates the claim of the input (only if it does not exist:
  `x-goog-if-generation-match: 0`) with state `building` (`claimInput`).
* The build that created it compiles the target, and rewrites the claim (only if it still has the
  generation the build last wrote) every 60 seconds until the compile ends (`registerClaim`; see
  `remoteClaimRefreshSecs`). Then it queues the outputs with the claim's generation, and leaves
  the claim `building`; its first queued output starts the build's one detached `lake cache
  push`, which follows the build until the build ends and uploads each output as it is queued
  (`queueCompiledOutputs`, `startBuildPush`, `endBuildPush`). The push marks each claim `queued`
  with its own process ID as soon as it has staged the entry, and `done` after the mapping is
  uploaded, so the holder of a claim is always the process that must still run for the mapping
  to arrive. A compile that fails, or that publishes nothing, marks the claim `failed`
  (`withClaim`).
* Another build waits: it looks for the mapping of the input every 5 seconds
  (`remoteClaimPollMs`), and reads through it once it is there. It takes the claim over (a rewrite
  only if the claim still has the generation it read) and compiles when the claim says `failed`,
  when it says `building` or `queued` and its holder is a process of this host that no longer
  runs (a killed build or push) and this build has seen the claim unchanged for 5 seconds
  (`remoteClaimGoneGraceSecs`: a build that ended normally leaves its last claims to its push,
  which takes them in that time), or when the claim is stale: the remote cache last replaced it
  at least `LAKE_CLAIM_TAKEOVER_SECS` before (by the `Last-Modified` and `Date` of the claim's
  `GET`, so the machines' clocks do not matter; the same `GET` returns the claim's state), or
  this build has seen it keep one generation for that long by its own monotonic clock
  (`observeClaim`). No time that the holder wrote is trusted, and an answer without times, or
  with times in the future, only leaves the second bound. A module waits with no thread at all
  (`runWithClaimWaits`); another target waits on its job's thread, which gives its slot in the
  pool to another job meanwhile (`waitForClaim`).
* Builds share the inputs out instead of racing for them. A build that has read a live claim
  that says `building` knows the build that holds it (a push holds `queued` and `done` claims
  with its own process ID, and compiles nothing), and gives each input it is about to compile to
  one of the builds it knows, by the input's hash (`inputOwner?`): it claims its own and leaves
  the others. A build that has seen no other build claims everything it reaches, which is what
  a build alone must do, and it starts to share as soon as it reads such a claim. Without this
  the build that is ahead takes nearly every input: another build reaches an input only once it
  has what the input is built from, which it gets from the build ahead, so it always asks too
  late. An input that its build leaves unclaimed for `LAKE_CLAIM_DEFER_SECS` (15 s by default, 0
  to leave none) is claimed by whichever build reaches it next, and that build then leaves no
  more inputs to the one that did not claim it (`forgetHolder`) until it reads a live claim of it
  that says `building` again: a build that stops costs each other build one wait, not a compile
  or a wait per input. A build that starts after another has started compiling rarely reads a
  claim of it before it reaches an input, so it mostly restores what the other compiles, and the
  two do not share the compiles.

Generations are only compared for equality, as Cloud Storage guarantees nothing else.
Any failure to read or write a claim is a miss: the build compiles as it would without claims,
and records the failure in its read status (`remote-status-read.json`). That includes a claim
that cannot be read, and a request that does not end within its limits (see
`CacheService.requestRemoteObject`).
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

/--
Marks the claim at `url` (only if it still has `generation`) `queued`, with `holder` as its
holder: `lake cache push` does this when it starts to upload the input's outputs, so that the
claim names the process that will publish the mapping, and is not taken over while that process
runs (see `holderGone`). Returns the claim's new generation if it wrote it, and `none` otherwise
(the claim is left as it is, and the `done` write still finds `generation`).
-/
public def markClaimQueued
  (service : CacheService) (url generation holder : String)
: LogIO (Option String) := do
  let r ← service.putRemoteObjectIf url (← claimBody holder .queued) generation
  if r.code == 200 then
    return some ((r.header? "x-goog-generation").getD generation)
  return none

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

/-- What this process knows of a claim it holds, behind the claim's own lock. -/
structure HeldState where
  /-- The generation that the last write of this process gave the claim. -/
  generation : String
  /-- Whether this process stopped holding the claim (its build released it, or lost it). -/
  released : Bool := false
  deriving Inhabited

/-- A claim that this process holds, which it rewrites while it compiles the claimed input. -/
structure Held where
  /-- Tells this registration from a later one of the same claim. -/
  id : Nat
  service : CacheService
  holder : String
  /--
  The generation and whether the claim is released. Each write of the claim by this process holds
  this lock, so a release waits for a rewrite in flight, and no rewrite follows a release.
  -/
  state : Std.Mutex HeldState
  /-- The read status of the build that holds the claim, where a failed rewrite is recorded. -/
  status : IO.Ref RemoteReadStatus

/-- The claims that this process holds, by URL, and the timer of their next rewrite. -/
structure Registry where
  claims : Std.HashMap String Held := {}
  timer? : Option Std.Internal.UV.Timer := none
  /-- Whether a round of rewrites runs (it arms the next timer when it ends). -/
  refreshing : Bool := false
  /-- How often the claims are rewritten, in milliseconds (see `remoteClaimRefreshSecs`). -/
  periodMs : Nat := 60000
  deriving Inhabited

builtin_initialize registry : Std.Mutex Registry ← Std.Mutex.new {}

/-- Counts the registrations of claims in this process (see `Held.id`). -/
builtin_initialize claimIds : IO.Ref Nat ← IO.mkRef 0

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

/-- Removes the registration `held` of the claim at `url`, if it is still the registered one. -/
def unregister (url : String) (held : Held) : BaseIO Unit :=
  registry.atomically do
    let s ← get
    let claims := if s.claims[url]?.any (·.id == held.id) then s.claims.erase url else s.claims
    if claims.isEmpty then
      if let some timer := s.timer? then
        discard <| timer.stop.toBaseIO
      set {s with claims, timer? := none}
    else
      set {s with claims}

/--
Rewrites each claim this process holds (state `building`), only if the claim still has the
generation of this process's last write, and arms the timer of the next round while any claim is
held. One round runs at a time. Each rewrite holds the claim's own lock and skips a claim that its
build released meanwhile. A claim whose rewrite finds another generation (HTTP 412) was taken over
by another build: this process no longer holds it.
-/
partial def refreshClaims : BaseIO Unit := do
  let claims ← registry.atomically do
    modify ({· with timer? := none, refreshing := true})
    return (← get).claims.toArray
  for (url, held) in claims do
    let lost ← held.state.atomically do
      let st ← get
      if st.released then
        return false
      let r ← tryLogIO do
        held.service.putRemoteObjectIf url (← claimBody held.holder .building) st.generation
      match r with
      | .ok r =>
        if r.code == 200 then
          if let some generation := r.header? "x-goog-generation" then
            set {st with generation}
          return false
        else if r.code == 412 then
          set {st with released := true}
          return true
        else
          held.status.modify (·.add s!"could not rewrite the claim {url} (HTTP {r.code})")
          return false
      | .error msg =>
        held.status.modify (·.add s!"could not rewrite the claim {url}:\n{msg}")
        return false
    if lost then
      unregister url held
  registry.atomically do
    let s ← get
    let s := {s with refreshing := false}
    if !s.claims.isEmpty && s.timer?.isNone then
      set {s with timer? := ← armRefresh s.periodMs refreshClaims}
    else
      set s

/-- Starts rewriting the claim at `url` (see `refreshClaims`). -/
def registerClaim (url : String) (held : Held) (periodMs : Nat) : BaseIO Unit :=
  registry.atomically do
    let s ← get
    let s := {s with claims := s.claims.insert url held, periodMs}
    if !s.refreshing && s.timer?.isNone then
      set {s with timer? := ← armRefresh periodMs refreshClaims}
    else
      set s

/--
Stops holding the claim at `url`, and returns it with the generation of this process's last write
if this process still held it. It waits for a rewrite of the claim in flight, and no rewrite
follows it, so that generation is the claim's. Once no claim is held, the timer of the next round
is stopped, so nothing is left to run after the compiles end.
-/
def releaseClaim (url : String) : BaseIO (Option (Held × String)) := do
  let some held ← registry.atomically do return (← get).claims[url]?
    | return none
  let generation? ← held.state.atomically do
    let st ← get
    if st.released then
      return none
    set {st with released := true}
    return some st.generation
  unregister url held
  return generation?.map (held, ·)

/-- A claim that this build holds on an input it compiles (see `claimInput`). -/
public structure HeldClaim where
  /-- The URL of the claim. -/
  url : String

/--
Marks the claim at `url`, which this process held as `held` with generation `generation`, `failed`
(only if it still has that generation), so that a build that waits for it compiles the input at
once.
-/
def markClaimFailed (url : String) (held : Held) (generation : String) : JobM Unit := do
  let r ← tryLogIO do
    held.service.putRemoteObjectIf url (← claimBody held.holder .failed) generation
  match r with
  | .ok r =>
    unless r.code == 200 do
      logVerbose s!"could not mark the claim {url} failed (HTTP {r.code})"
  | .error msg =>
    logVerbose s!"could not mark the claim {url} failed:\n{msg}"

/--
Stops holding the claim, and marks it `failed` if this build still held it (see
`markClaimFailed`). A claim whose outputs were queued (see `queueCompiledOutputs`) is no longer
held, and is left for `lake cache push` to mark `done`.
-/
def HeldClaim.abandon (claim : HeldClaim) : JobM Unit := do
  if let some (held, generation) ← releaseClaim claim.url then
    markClaimFailed claim.url held generation

/--
How many compiles of inputs this process runs now (see `withClaim`): a build claims an input, and
waits for other builds, only once these fill `Env.claimSlots` (see `claimInput`).
-/
builtin_initialize runningCompiles : IO.Ref Nat ← IO.mkRef 0

/--
Runs `build`, the compile of an input (counted in `runningCompiles` while it runs) whose claim
this build holds (if `claim?`), and then marks the claim `failed` if the build did not queue the
outputs (see `HeldClaim.abandon`), whether `build` succeeded or not.
-/
public def withClaim (claim? : Option HeldClaim) (build : JobM α) : JobM α := do
  let run : JobM α := do
    let some claim := claim?
      | build
    try
      let a ← build
      claim.abandon
      return a
    catch e =>
      claim.abandon
      throw e
  runningCompiles.modify (· + 1)
  try run finally runningCompiles.modify (· - 1)

/-! ## Sharing the Inputs Out -/

/--
The holders of the live claims that say `building` that this build has read, and this build's
own holder (`claimHolder`): the builds that compile these targets together, as far as this build
has seen (see `inputOwner?`).
-/
builtin_initialize claimParty : Std.Mutex (Std.TreeSet String) ← Std.Mutex.new {}

/-- Adds `holder` to the builds this one has seen (see `claimParty`). -/
def noteHolder (holder : String) : BaseIO Unit :=
  claimParty.atomically (modify (·.insert holder))

/--
Removes `holder` from the builds this one has seen (see `claimParty`): it left one of its inputs
unclaimed for the whole wait, so it has stopped or does not build these targets. It comes back
once this build reads a live claim of it that says `building` again (see `claimInput`).
-/
def forgetHolder (holder : String) : BaseIO Unit :=
  claimParty.atomically (modify (·.erase holder))

/--
The build that should compile `inputHash`, of those this build has seen, or `none` while it has
seen no other build. The holders are ordered and the hash picks one, so every build that has seen
the same holders gives each input to the same one of them, and each gets about the same share of
the inputs. A build that has not seen another build yet claims everything it reaches, which is
what a build alone must do.
-/
def inputOwner? (inputHash : Hash) : BaseIO (Option String) := do
  let holders ← claimParty.atomically do
    let party ← get
    if party.size ≤ 1 then return #[] else return party.toArray
  if holders.isEmpty then return none
  return holders[inputHash.val.toNat % holders.size]?

/--
To which build this build last left each input, and since when, by its own monotonic clock
(milliseconds), by claim URL (see `observeDeferral`).
-/
builtin_initialize deferrals : Std.Mutex (Std.HashMap String (String × Nat)) ← Std.Mutex.new {}

/--
Records that this build leaves the input at `url` to the build `owner`, and returns for how many
seconds it has left it to that build. The clock starts again when the owner changes (the builds
this build has seen changed), so a build is only judged by the time it owned the input.
-/
def observeDeferral (url owner : String) : BaseIO Nat := do
  let now ← IO.monoMsNow
  deferrals.atomically do
    let s ← get
    match s[url]? with
    | some (was, since) =>
      if was == owner then
        return (now - since) / 1000
      set (s.insert url (owner, now))
      return 0
    | none =>
      set (s.insert url (owner, now))
      return 0

/-! ## Taking Claims -/

/--
When this process first saw each claim with the generation it last saw, by its own monotonic clock
(milliseconds), by URL: the claims it waits for (see `observeClaim`).
-/
builtin_initialize claimSightings : Std.Mutex (Std.HashMap String (String × Nat)) ←
  Std.Mutex.new {}

/--
Records that this process sees the claim at `url` with `generation`, and returns for how many
seconds, by this process's own monotonic clock, the claim has had that generation since this
process first saw it so. A live holder rewrites its claim (a new generation) well within the
takeover time, so a claim that keeps a generation for the takeover time is stale, whatever the
times that the remote cache or the holder report.
-/
def observeClaim (url generation : String) : BaseIO Nat := do
  let now ← IO.monoMsNow
  claimSightings.atomically do
    let s ← get
    match s[url]? with
    | some (seen, since) =>
      if seen == generation then
        return (now - since) / 1000
      set (s.insert url (generation, now))
      return 0
    | none =>
      set (s.insert url (generation, now))
      return 0

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
  let id ← claimIds.modifyGet fun n => (n, n + 1)
  let state ← Std.Mutex.new ({generation} : HeldState)
  registerClaim url {id, service, holder, state, status}
    (remoteClaimRefreshSecs takeoverSecs * 1000)
  return some {url}

/--
Whether `holder` (`<host>:<pid>`, see `claimHolder`) names a process of this host that no longer
runs, so that its claim can be taken over at once: its build or its push was killed (Lake writes
no claim on a signal). A `building` claim names the build that compiles the input, and a `queued`
claim the `lake cache push` that uploads its outputs, so in both states the holder is the process
that must still run for the mapping to arrive. This needs `/proc`; elsewhere no holder counts as
gone, and its claim goes stale after the takeover time. A wrong answer (another host with this
host's name, whose process has this process ID) costs one more compile of the input, never a
wrong output.
-/
def holderGone (holder : String) : BaseIO Bool := do
  let parts := holder.splitOn ":"
  let some pid := parts.getLast? >>= (·.toNat?)
    | return false
  let host := ":".intercalate parts.dropLast
  let ourHost := ((← claimHolder).splitOn ":").dropLast
  unless host == ":".intercalate ourHost do
    return false
  unless ← ("/proc/self" : FilePath).pathExists do
    return false
  return !(← (FilePath.mk s!"/proc/{pid}").pathExists)

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
  -- With a free compile slot, this build compiles at once and neither claims nor waits: waiting
  -- for another build saves it time only when it cannot compile more at once, and every claim
  -- request and every wait lies on its path, which is all a build whose dependency graph leaves
  -- its slots idle waits on
  if (← runningCompiles.get) < ws.lakeEnv.claimSlots then
    return .compile none
  let takeoverSecs := ws.lakeEnv.claimTakeoverSecs
  let deferSecs := ws.lakeEnv.claimDeferSecs
  let holder ← claimHolder
  noteHolder holder
  try
    -- An input of another build of these targets is left to it, so that the builds share the
    -- compiles out instead of racing for them (the first to ask would take nearly all of them:
    -- the others only reach an input once they have what it is built from, which they get from
    -- the build that is ahead). It is taken when that build has not claimed it for `deferSecs`.
    let mut lapsed? : Option String := none
    if deferSecs > 0 then
      if let some owner ← inputOwner? inputHash then
        if owner != holder then
          let deferredSecs ← observeDeferral url owner
          if deferredSecs < deferSecs then
            logVerbose s!"leaving the input {inputHash} to the build {owner} \
              ({deferredSecs} s of {deferSecs} s)"
            return .wait (← ClaimWait.after remoteClaimDeferPollMs false)
          logVerbose s!"taking the input {inputHash}, which the build {owner} \
            left unclaimed for {deferredSecs} s"
          lapsed? := some owner
    if let some claim ← takeClaim service url holder "0" takeoverSecs then
      -- The owner never claimed the input: it has stopped, or it does not build these targets,
      -- so it gets no more inputs, and each of them costs no wait, until it is seen again
      if let some owner := lapsed? then
        forgetHolder owner
        logVerbose s!"leaving no more inputs to the build {owner} until it is seen building"
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
    -- An unreadable claim is a claim failure: the build compiles without a claim
    let claim ← match Json.parse r.body >>= fromJson? (α := RemoteClaim) with
      | .ok claim => pure claim
      | .error e => error s!"the claim {url} is unreadable: {e}"
    let state := claim.state
    if state == .done && !sawDone then
      -- The mapping should be there now: look for it again at once
      return .wait (← ClaimWait.after 0 true)
    -- Stale by the remote cache's clock (`Date` minus `Last-Modified` of this answer), or by
    -- this build's own clock: the claim has kept this generation since this build first saw it
    -- for the takeover time. No time that the holder wrote is trusted, and a missing or future
    -- time of the remote cache only leaves the second bound.
    let serverAge? := r.age?
    let unchangedSecs ← observeClaim url generation
    let stale := (serverAge?.any (· ≥ (takeoverSecs : Int))) || unchangedSecs ≥ takeoverSecs
    let holderDead ← if state == .building || state == .queued then holderGone claim.holder
      else pure false
    -- A holder of this host whose process is gone frees the claim, once this build has seen the
    -- claim unchanged for `remoteClaimGoneGraceSecs` by its own clock: a build that ended
    -- normally leaves its last claims `building` until its push, which outlives it, takes them
    -- (a new generation, so the sighting starts again)
    let gone := holderDead && unchangedSecs ≥ remoteClaimGoneGraceSecs
    -- A live claim that says `building` names a build of these targets, which takes its share
    -- of the inputs. Any other state was written by a push (`queued`, `done`: its own process
    -- ID, and a push compiles nothing) or by a build that failed, and a stale claim or one whose
    -- holder is gone (also within the grace) names a build that has stopped: none takes a share.
    if state == .building && !stale && !holderDead then
      noteHolder claim.holder
    if state == .failed || state == .done || stale || gone then
      logVerbose s!"taking over the claim {url} (state {state}, last written \
        {serverAge?.map toString |>.getD "?"} s ago, unchanged for {unchangedSecs} s here\
        {if gone then ", holder gone" else ""})"
      -- A build that left its claim stale or gone has stopped: it gets no more inputs
      if stale || gone then
        forgetHolder claim.holder
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
      -- A build canceled after a failure (`--fail-fast`) stops waiting, as a module's job does
      if let some tk := (← getBuildContext).cancelTk? then
        if ← tk.isSet then
          Job.cancelJob
      if let some a ← retry then
        return .found a
      sawDone := wait.sawDone
  return .compile none

/-! ## Publishing -/

/--
What this process did about the push of the build that runs: whether it started one (see
`startBuildPush`), the lock it holds on that push's follow file (in `Cache.pushFollowDir`) while
the build runs, which tells the push that the build still runs, and whether the build already
reported a push that could not start. The build releases the lock when it ends (`endBuildPush`);
the lock also goes when the process ends, however it ends.
-/
structure BuildPush where
  started : Bool := false
  followLock? : Option IO.FS.Handle := none
  startFailed : Bool := false
  deriving Inhabited

builtin_initialize buildPush : Std.Mutex BuildPush ← Std.Mutex.new {}

/--
Notes that this build's push could not start, and returns whether it is the first time in this
build, so the build reports it once however many compiles try to start it again.
-/
def firstPushStartFailure : BaseIO Bool :=
  buildPush.atomically do
    let first := !(← get).startFailed
    modify ({· with startFailed := true})
    return first

/-- The size above which a detached push moves `Cache.pushLogFile` to `push.log.1` first. -/
def pushLogMaxBytes : UInt64 := 4 * 1024 * 1024

/--
The shell that starts a detached push: `LAKE_PUSH_SHELL`, by default `/bin/bash` (see
`Env.pushShell`). It must be able to close every descriptor by number, which `sh` cannot do above
9. Where it does not exist (a machine without `/bin/bash` and without `LAKE_PUSH_SHELL`), no push
is detached: the build runs the push in the foreground at its end instead (see
`runForegroundPush`), so no inherited descriptor can outlive the build.
-/
def detachedPushShell (env : Env) : FilePath := env.pushShell

/--
The script that starts a detached `lake cache push`: `bash -c <script> sh <log> <lake> cache push …`.
It closes every descriptor above 2 that Lake inherited (for example the lock of a wrapper such as
`lbq.sh`, which the push would otherwise hold until it ends; Lean closes none of them when it starts
a process), sends its output to the log, starts the push in the background, writes a line that
names it, and ends. So the push is no child of Lake (which reaps the shell at once) and no zombie
stays behind.
-/
def detachedPushScript : String :=
  "log=$1; shift; " ++
  "for fd in /proc/$$/fd/* /dev/fd/*; do n=${fd##*/}; case $n in " ++
  "\"\"|*[!0-9]*|0|1|2) ;; *) eval \"exec $n>&-\" ;; esac; done; " ++
  "exec >>\"$log\" 2>&1 </dev/null; " ++
  "\"$@\" & " ++
  "echo \"lake cache push: started, pid $!, by pid $PPID, at $(date -u +%Y-%m-%dT%H:%M:%SZ)\""

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

/-- How old a follow file of no build must be before a later build removes it: one day. -/
def followFileMaxAgeSecs : Int := 24 * 60 * 60

/--
Removes the follow files of `Cache.pushFollowDir` that no build holds (their lock is free, the
probe that `followedBuildRuns` makes) and that are older than `followFileMaxAgeSecs`, except
`keep`. A push removes its own file in its last pass; these are the files of the pushes that
never ran or were killed. The age keeps a build that has just made its file, and not yet locked
it, from losing it.
-/
def reapFollowFiles (cache : Cache) (keep : FilePath) : BaseIO Unit := do
  let .ok entries ← cache.pushFollowDir.readDir.toBaseIO
    | return
  let .ok now ← wallClockSecs.toBaseIO
    | return
  for entry in entries do
    if entry.path == keep then
      continue
    let .ok md ← entry.path.metadata.toBaseIO
      | continue
    if now - md.modified.sec < followFileMaxAgeSecs then
      continue
    let .ok h ← (IO.FS.Handle.mk entry.path .read).toBaseIO
      | continue
    if let .ok true ← h.tryLock.toBaseIO then
      discard <| h.unlock.toBaseIO
      discard <| (removeFileIfExists entry.path).toBaseIO

/--
Starts this build's one detached push of `cache`'s queue, `lake cache push --wait --follow <file>`
(see `pushRemoteCache`), unless it started one already or there is no `detachedPushShell`.
Returns whether it started it now. The push follows this build: it uploads each line as the build
queues it, and ends once the build has ended (see `endBuildPush`) and the queue is pushed. With
`--wait`, it pushes after any push that runs, which also uploads this build's lines meanwhile.

The follow file, in `Cache.pushFollowDir`, is named with this process's ID and 64 random bits (see
`uniqueTmpSuffix`), so a build of another process with the same ID (in a container that shares the
cache) never holds it. A build that takes its own file also removes the files that no build holds
and no push removed (see `reapFollowFiles`). A spawn that fails leaves no file and no push, so
the build's next queued output starts a push again; the build reports the failure once, as a
cache failure (see `queueCompiledOutputs`).

The push runs in a session of its own, with the environment of this process and its cache, so it
outlives the build and a Ctrl-C that stops it. Its output goes to `Cache.pushLogFile`.
-/
public def startBuildPush (env : Env) (cache : Cache) : IO Bool :=
  buildPush.atomically do
    if (← get).started then
      return false
    unless ← (detachedPushShell env).pathExists do
      return false
    let followFile := cache.pushFollowDir / s!"build{← uniqueTmpSuffix}"
    createParentDirs followFile
    let lock ← IO.FS.Handle.mk followFile .append
    -- Nobody else has this name; a lock that is held anyway means no follow, so no push
    unless ← lock.tryLock do
      return false
    modify ({· with followLock? := some lock})
    reapFollowFiles cache followFile
    rotatePushLog cache
    match (← (IO.Process.spawn {
      cmd := (detachedPushShell env).toString
      args := #["-c", detachedPushScript, "sh", cache.pushLogFile.toString,
        env.lake.lake.toString, "cache", "push", "--wait", "--follow", followFile.toString]
      stdin := .null, stdout := .null, stderr := .null
      setsid := true
      env := pushEnv env cache
    }).toBaseIO) with
    | .error e =>
      -- No push follows this build: the next queued output tries again
      discard <| lock.unlock.toBaseIO
      discard <| (removeFileIfExists followFile).toBaseIO
      modify ({· with started := false, followLock? := none})
      throw e
    | .ok child =>
      -- The shell ends as soon as the push runs in the background
      discard <| child.wait
      modify ({· with started := true})
      return true

/--
Ends the follow of this build's push (see `startBuildPush`), at the end of the build: the push
then does its last pass and ends, also while this process goes on (e.g., `lake exe` runs the
program it built). A later build of this process starts a push of its own.
-/
public def endBuildPush : BaseIO Unit :=
  buildPush.atomically do
    if let some lock := (← get).followLock? then
      discard <| lock.unlock.toBaseIO
    set ({} : BuildPush)

/--
Runs `lake cache push` of `cache`'s queue and waits for it, appending its output to
`Cache.pushLogFile`: what a build that takes claims does at its end when there is no
`detachedPushShell`. The push ends before the build does, so a descriptor it inherited is closed
by then. Returns its exit code.
-/
public def runForegroundPush (env : Env) (cache : Cache) : IO UInt32 := do
  rotatePushLog cache
  let out ← IO.Process.output {
    cmd := env.lake.lake.toString, args := #["cache", "push", "--wait"], env := pushEnv env cache
  }
  let h ← IO.FS.Handle.mk cache.pushLogFile .append
  h.putStr s!"lake cache push: ran in the foreground of pid {← IO.Process.getPID}, \
    exit code {out.exitCode}\n{out.stdout}{out.stderr}"
  return out.exitCode

/-- Whether builds can start detached pushes (see `detachedPushShell`). -/
public def canDetachPush (env : Env) : BaseIO Bool :=
  (detachedPushShell env).pathExists

/--
Queues outputs that this build just compiled (see `queueRemotePush`), with the generation of the
input's claim if this build held it, which it stops rewriting. The claim stays `building` until
the build's `lake cache push` takes it over (`queued`, then `done`), so a build killed before its
queue line exists leaves a `building` claim whose holder's process is gone, which another build
takes over at once, instead of a `queued` claim that promises a mapping no process will upload.
When this build takes claims, it then starts its one detached push if it has not yet (see
`startBuildPush`). If the outputs could not be queued, the claim is marked `failed`. A push that
cannot start is a cache failure: the build reports it once, at verbose level, in its read status
(see `recordClaimFailure`).
-/
public def queueCompiledOutputs
  (claim? : Option HeldClaim) (pkg : Package) (inputHash : Hash) (target : String)
  (srcHash? : Option Hash) (data : Json) (log : Log)
: JobM Unit := do
  let released? ← match claim? with
    | some claim => releaseClaim claim.url
    | none => pure none
  let queued ← queueRemotePush pkg inputHash target srcHash? data log
    (claimGeneration? := released?.map (·.2))
  if let (some claim, some (held, generation)) := (claim?, released?) then
    unless queued do
      markClaimFailed claim.url held generation
  let ws ← getWorkspace
  if queued && ws.lakeEnv.remoteCacheClaimService?.isSome then
    match (← (startBuildPush ws.lakeEnv ws.lakeCache).toBaseIO) with
    | .ok true =>
      logVerbose s!"started `lake cache push --follow`, log: {ws.lakeCache.pushLogFile}"
    | .ok false => pure ()
    | .error e =>
      -- A cache failure, not a build failure (it is verbose, so `--wfail` builds compile), and
      -- reported once per build, however many compiles try to start the push again
      if ← firstPushStartFailure then
        recordClaimFailure s!"could not start `lake cache push`: {e}"

end Lake
