/-
Copyright (c) 2026 the machcsl authors. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Init

/-! # CPU-adaptive admission of build processes

Lake runs its build jobs on the Lean task pool, whose size (`LEAN_NUM_THREADS`, default: the number of CPUs)
caps the number of concurrently running compiler processes.  On a machine with many cores that cap is a poor
proxy for load: `lean` processes are themselves multi-threaded, their CPU use varies by orders of magnitude
between modules, and other builds may share the machine.

The CPU gate replaces the fixed cap by feedback from the operating system: a compiler process is started only
while the system shows idle CPU time.  Every job that is about to spawn a CPU-heavy external process
(`lean`, the C compiler, the linker) first `acquire`s a slot and `release`s it when the process exits.  A
controller thread samples `/proc/stat` every `intervalMs` and admits waiting jobs (first come, first served)
while the measured idle CPU, minus a reservation for processes admitted so recently that their load is not
yet visible, is at least `idleCores`.  At least `minProcs` processes are always admitted so a build
progresses even on a saturated machine, and never more than `maxProcs` (default: the number of CPUs).

Waiting for admission does not hold a task-pool thread: the waiter blocks on a `Promise`, and the Lean task
manager raises its worker limit while a task waits on another task.

Configuration (environment variables; the gate is active by default on Linux, where `/proc/stat` exists):
* `LAKE_ADAPTIVE=0` — disable; the fixed task-pool cap governs as before.
* `LAKE_ADAPTIVE_MAX=<n>` — hard cap on admitted processes (default: number of CPUs).
* `LAKE_ADAPTIVE_MIN=<n>` — processes admitted regardless of idle time (default 1).
* `LAKE_ADAPTIVE_IDLE=<cores>` — idle cores required for one more admission (default 1.0).
* `LAKE_ADAPTIVE_RESERVE=<cores>` — cores assumed used by a freshly admitted process until it shows up in
  the samples (default 1.0; `lean` imports single-threaded before elaborating in parallel).
* `LAKE_ADAPTIVE_RAMP_MS=<ms>` — how long an admission counts as fresh (default 500, two sampling periods).
* `LAKE_ADAPTIVE_INTERVAL_MS=<ms>` — sampling period of the controller (default 250).
* `LAKE_ADAPTIVE_BURST=<n>` — growth: admissions per sampling period at most (default 8, i.e. 32/s at the
  default interval; 0 = no limit beyond the idle-core accounting). A finished process always hands its slot to
  the next waiter regardless.
* `LAKE_ADAPTIVE_SYS_MAX=<percent>` — no growth while system time exceeds this share of the busy CPU time
  (default 30). Many `lean` processes importing at once spend their time in page faults; that contention is
  invisible to the idle measure and is what a fixed job cap was protecting against.
* `LAKE_ADAPTIVE_LOG=<file>` — append one line per sample and admission for tuning.
-/

namespace Lake
namespace CpuGate

/-- Gate parameters (read from the environment once, on first use). -/
public structure Config where
  enabled : Bool := true
  maxProcs : Nat := 0
  minProcs : Nat := 1
  idleCores : Float := 1.0
  reserveCores : Float := 1.0
  rampMs : Nat := 500
  intervalMs : Nat := 250
  burst : Nat := 8
  /-- Hold growth while system time exceeds this share of busy CPU time (page-fault storms of many
  simultaneous imports show up as system time, not as idle). -/
  sysMax : Float := 0.3
  logPath? : Option System.FilePath := none
  deriving Inhabited

/-- Gate state, shared by every job of the process. -/
public structure State where
  config? : Option Config := none
  numCpus : Nat := 0
  waiters : Std.Queue (IO.Promise Unit) := ∅
  numWaiting : Nat := 0
  running : Nat := 0
  /-- Monotonic clock (ms) of the admissions younger than `rampMs`. -/
  recent : Array Nat := #[]
  /-- Idle cores available for admissions, per the last sample, net of the reservations. -/
  availCores : Float := 0
  /-- (summed idle time, wall time) of the last `/proc/uptime` sample, centiseconds. -/
  lastSample : Option (Nat × Nat) := none
  controllerAlive : Bool := false
  /-- System share of busy CPU time over the last `/proc/stat` window (sampled by a second thread). -/
  sysShare : Float := 0
  /-- (system ticks, busy ticks) of the last `/proc/stat` sample. -/
  lastStat : Option (Nat × Nat) := none
  statTask? : Option (Task Unit) := none
  /-- Keeps the controller's task object alive (a dropped task is cancelled before it starts). -/
  controllerTask? : Option (Task Unit) := none
  totalAdmitted : Nat := 0

instance : Nonempty State := ⟨{}⟩

builtin_initialize stateRef : IO.Ref State ← IO.mkRef {}

private def parseFloat? (s : String) : Option Float :=
  match s.trimAscii.copy.splitOn "." with
  | [a] => Float.ofNat <$> a.toNat?
  | [a, b] => do
    let n ← if a.isEmpty then some 0 else a.toNat?
    let f ← if b.isEmpty then some 0 else b.toNat?
    return Float.ofNat n + Float.ofNat f / Float.ofNat (10 ^ b.length)
  | _ => none

private def envNat (name : String) (dflt : Nat) : BaseIO Nat := do
  match ← IO.getEnv name with
  | some s => return s.trimAscii.copy.toNat?.getD dflt
  | none => return dflt

private def envFloat (name : String) (dflt : Float) : BaseIO Float := do
  match ← IO.getEnv name with
  | some s => return (parseFloat? s).getD dflt
  | none => return dflt

/-- `/proc/uptime`: (idle time summed over all CPUs, wall-clock uptime), both in centiseconds. Reading it is
cheap; `/proc/stat` is not on a large machine (its per-IRQ sums walk every CPU: 30 ms mean, up to 1 s under
load on a 160-vCPU VM). -/
private def readUptime : BaseIO (Option (Nat × Nat)) := do
  match ← (IO.FS.readFile "/proc/uptime").toBaseIO with
  | .error _ => return none
  | .ok txt =>
    let fields := (txt.trimAscii.copy.splitOn " ").filter (· ≠ "")
    let parse (f : String) : Option Nat :=
      match f.splitOn "." with
      | [a, b] => do
        let n ← a.toNat?
        let c ← (b.take 2).toNat?
        return n * 100 + (if b.length ≥ 2 then c else c * 10)
      | [a] => a.toNat?.map (· * 100)
      | _ => none
    match fields with
    | [up, idle] =>
      let some up := parse up | return none
      let some idle := parse idle | return none
      return some (idle, up)
    | _ => return none

/-- The `cpu` lines of `/proc/stat`: (idle+iowait ticks, total ticks), (system+irq+softirq ticks, busy ticks) of
the summary line, and the CPU count. Slow on large machines (see `readUptime`): sampled at a lower rate by a
separate thread, for the system-time brake only. -/
private def readStat : BaseIO (Option ((Nat × Nat) × (Nat × Nat) × Nat)) := do
  match ← (IO.FS.readFile "/proc/stat").toBaseIO with
  | .error _ => return none
  | .ok txt =>
    let lines := txt.splitOn "\n"
    let some first := lines.head? | return none
    let fields := (first.splitOn " ").filter (· ≠ "")
    unless fields.head? == some "cpu" do return none
    let nums := fields.drop 1 |>.filterMap String.toNat?
    -- user nice system idle iowait irq softirq steal (guest/guest_nice are included in user/nice)
    let nums := nums.take 8
    if nums.length < 8 then return none
    let idle := nums[3]! + nums[4]!
    let total := nums.foldl (· + ·) 0
    let sys := nums[2]! + nums[5]! + nums[6]!
    let cpus := lines.countP fun l => l.startsWith "cpu" && !l.startsWith "cpu "
    return some ((idle, total), (sys, total - idle), cpus)

private def readConfig : BaseIO Config := do
  let enabled := (← IO.getEnv "LAKE_ADAPTIVE").map (fun v => !["0", "false", "off", "no"].contains v) |>.getD true
  return {
    enabled
    maxProcs := ← envNat "LAKE_ADAPTIVE_MAX" 0
    minProcs := ← envNat "LAKE_ADAPTIVE_MIN" 1
    idleCores := ← envFloat "LAKE_ADAPTIVE_IDLE" 1.0
    reserveCores := ← envFloat "LAKE_ADAPTIVE_RESERVE" 1.0
    rampMs := ← envNat "LAKE_ADAPTIVE_RAMP_MS" 500
    intervalMs := max 20 (← envNat "LAKE_ADAPTIVE_INTERVAL_MS" 250)
    burst := ← envNat "LAKE_ADAPTIVE_BURST" 8
    sysMax := Float.ofNat (← envNat "LAKE_ADAPTIVE_SYS_MAX" 30) / 100
    logPath? := (← IO.getEnv "LAKE_ADAPTIVE_LOG").map (·)
  }

private def log (cfg : Config) (line : String) : BaseIO Unit := do
  if let some p := cfg.logPath? then
    let _ ← (IO.FS.withFile p .append fun h => h.putStrLn line).toBaseIO

/-- Whether `st` may admit one more process now (not counting `burst`). -/
@[inline] private def canAdmit (cfg : Config) (st : State) : Bool :=
  st.running < cfg.maxProcs && (st.running < cfg.minProcs || st.availCores ≥ cfg.idleCores)

/-- Account one admission at time `now`. -/
@[inline] private def admitOne (cfg : Config) (st : State) (now : Nat) : State :=
  { st with
    running := st.running + 1
    recent := st.recent.push now
    availCores := st.availCores - cfg.reserveCores
    totalAdmitted := st.totalAdmitted + 1 }

/-- One controller tick: fold the new sample into the state and admit waiters. Returns the promises to
resolve, the idle cores measured, and whether the controller should keep running. -/
private def tick (cfg : Config) (now : Nat) (sample? : Option (Nat × Nat))
: State → (Array (IO.Promise Unit) × Float × Bool) × State := fun st => Id.run do
  let mut st := st
  -- measured idle cores over the last interval
  let mut idleCores : Float := st.availCores
  if let some (ci, ct) := sample? then
    if let some (pi, pt) := st.lastSample then
      if ct > pt then
        idleCores := Float.ofNat (ci - pi) / Float.ofNat (ct - pt)
    st := { st with lastSample := some (ci, ct) }
  -- reservations for admissions still ramping up
  st := { st with recent := st.recent.filter fun t => now - t < cfg.rampMs }
  st := { st with availCores := idleCores - Float.ofNat st.recent.size * cfg.reserveCores }
  -- admit (no growth while the machine is thrashing in the kernel)
  let mut admitted : Array (IO.Promise Unit) := #[]
  let burst := if st.sysShare > cfg.sysMax then 0 else if cfg.burst == 0 then st.numWaiting else cfg.burst
  for _ in [0:burst] do
    unless canAdmit cfg st do break
    let some (p, q) := st.waiters.dequeue? | break
    st := admitOne cfg { st with waiters := q, numWaiting := st.numWaiting - 1 } now
    admitted := admitted.push p
  let continue? := st.numWaiting > 0 || st.running > 0
  unless continue? do st := { st with controllerAlive := false }
  return ((admitted, idleCores, continue?), st)

/-- Samples `/proc/stat` every two intervals while the controller lives and publishes the system share. -/
private partial def statSampler (cfg : Config) : BaseIO Unit := do
  if let some (_, s, _) ← readStat then
    stateRef.modify fun st => { st with lastStat := some s }
  let rec loop : BaseIO Unit := do
    IO.sleep (2 * cfg.intervalMs).toUInt32
    let sample? := (← readStat).map (·.2.1)
    let alive ← stateRef.modifyGet fun st =>
      let st := match sample?, st.lastStat with
        | some (cs, cb), some (ps, pb) =>
          let share := if cb > pb then Float.ofNat (cs - ps) / Float.ofNat (cb - pb) else st.sysShare
          { st with sysShare := share, lastStat := some (cs, cb) }
        | some s, none => { st with lastStat := some s }
        | none, _ => st
      (st.controllerAlive, st)
    if alive then loop
  loop

private partial def controller (cfg : Config) : BaseIO Unit := do
  -- baseline sample
  if let some s ← readUptime then
    stateRef.modify fun st => { st with lastSample := some s }
  let t ← BaseIO.asTask (prio := .dedicated) (statSampler cfg)
  stateRef.modify fun st => { st with statTask? := some t }
  let rec loop : BaseIO Unit := do
    let t0 ← IO.monoMsNow
    IO.sleep cfg.intervalMs.toUInt32
    let now ← IO.monoMsNow
    let sample? ← readUptime
    let t2 ← IO.monoMsNow
    let (admitted, idleCores, continue?) ← stateRef.modifyGet (tick cfg now sample?)
    let t3 ← IO.monoMsNow
    for p in admitted do p.resolve ()
    if cfg.logPath?.isSome then
      let t4 ← IO.monoMsNow
      let st ← stateRef.get
      log cfg s!"{now} idle={idleCores} avail={st.availCores} running={st.running} waiting={st.numWaiting} admitted={admitted.size} total={st.totalAdmitted} sys={st.sysShare} ms(sleep/stat/tick/resolve)={now - t0}/{t2 - now}/{t3 - t2}/{t4 - t3}"
    if continue? then loop
  loop

/-- Initialize the configuration on first use; returns `none` if the gate is inactive. -/
private def getConfig : BaseIO (Option Config) := do
  if let some cfg := (← stateRef.get).config? then
    return if cfg.enabled then some cfg else none
  let cfg ← readConfig
  let cfg ← do
    if !cfg.enabled then pure cfg else
    match ← readStat, ← readUptime with
    | none, _ | _, none => pure { cfg with enabled := false }  -- no procfs: not supported here
    | some (_, _, cpus), some _ =>
      let cpus := if cpus == 0 then 1 else cpus
      stateRef.modify fun st => { st with numCpus := cpus }
      pure { cfg with maxProcs := if cfg.maxProcs == 0 then cpus else cfg.maxProcs }
  let (cfg, won) ← stateRef.modifyGet fun st =>
    match st.config? with
    | some cfg => ((cfg, false), st)  -- another thread won the race
    | none => ((cfg, true), { st with config? := some cfg })
  if cfg.enabled && won then
    log cfg s!"config: cpus={(← stateRef.get).numCpus} max={cfg.maxProcs} min={cfg.minProcs} idle={cfg.idleCores} reserve={cfg.reserveCores} ramp={cfg.rampMs} interval={cfg.intervalMs} burst={cfg.burst} sysMax={cfg.sysMax}"
  return if cfg.enabled then some cfg else none

/-- Wait until the system has CPU to spare for one more build process. Pair with `release`. -/
public def acquire : BaseIO Unit := do
  let some cfg ← getConfig | return
  let now ← IO.monoMsNow
  let promise ← IO.Promise.new (α := Unit)
  let (waiting, spawn) ← stateRef.modifyGet fun st =>
    -- immediate admission when nobody is queued and the last sample allows it
    if st.numWaiting == 0 && canAdmit cfg st then
      ((false, false), admitOne cfg st now)
    else
      let st := { st with waiters := st.waiters.enqueue promise, numWaiting := st.numWaiting + 1 }
      let spawn := !st.controllerAlive
      ((true, spawn), { st with controllerAlive := true })
  if spawn then
    let t ← BaseIO.asTask (prio := .dedicated) (controller cfg)
    stateRef.modify fun st => { st with controllerTask? := some t }
  if waiting then
    IO.wait promise.result!

/-- Give back the slot taken by `acquire` (after the external process has exited).

The exiting process frees at least the core it was reserved; that credit admits the next waiter at once
instead of after the controller's next sample, which keeps the machine full through runs of short jobs. -/
public def release : BaseIO Unit := do
  let some cfg ← getConfig | return
  let now ← IO.monoMsNow
  let next? ← stateRef.modifyGet fun st =>
    let st := { st with running := st.running - 1, availCores := st.availCores + cfg.reserveCores }
    if canAdmit cfg st then
      match st.waiters.dequeue? with
      | some (p, q) => (some p, admitOne cfg { st with waiters := q, numWaiting := st.numWaiting - 1 } now)
      | none => (none, st)
    else (none, st)
  if let some p := next? then p.resolve ()

end CpuGate

/-- Run `act` (which spawns one CPU-heavy external process) once the CPU gate admits it. -/
@[inline] public def withCpuSlot [Monad m] [MonadLiftT BaseIO m] [MonadFinally m] (act : m α) : m α := do
  CpuGate.acquire
  try act finally CpuGate.release

end Lake
