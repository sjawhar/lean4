import Lake
open Lean Lake DSL

package test

lean_lib Test

/--
`n` jobs whose outputs are `0, ..., n-1`, each with its own trace input and log entry. Job `slow`
sleeps `ms` milliseconds first, so a chain over the jobs is built while it still runs, and records in
`done` when it finishes.
-/
def testJobs (n ms : Nat) (done : IO.Ref Nat) (slow := 0) : FetchM (Array (Job Nat)) :=
  (Array.range n).mapM fun i => Job.async (prio := if i == slow then .dedicated else .default) do
    if i == slow then
      IO.sleep ms.toUInt32
      done.set (← IO.monoMsNow)
    addPureTrace i s!"job {i}"
    logInfo s!"job {i}"
    if i == n / 2 && n % 2 == 1 then error s!"job {i} fails"
    return i

/-- Whether two traces have the same caption, hash and inputs, recursively. -/
partial def sameTrace (s t : BuildTrace) : Bool :=
  s.caption == t.caption && s.hash == t.hash && s.inputs.size == t.inputs.size &&
    (s.inputs.zip t.inputs).all fun (a, b) => sameTrace a b

/-- Whether two job results have the same output, log, action, flags, build time and trace. -/
def sameResult [BEq α] (a b : JobResult α) : Bool :=
  let sameState (s t : JobState) :=
    toJson s.log == toJson t.log && s.action == t.action && s.wantsRebuild == t.wantsRebuild &&
    s.canceled == t.canceled && s.buildTime == t.buildTime && sameTrace s.trace t.trace
  match a, b with
  | .ok x s, .ok y t => x == y && sameState s t
  | .error e s, .error f t => e.val == f.val && sameState s t
  | _, _ => false

/-- Fails unless `new` has the same result as `chain`, the chain of `zipWith` that it replaces. -/
def checkSameAs [BEq α] (name : String) (n : Nat) (new chain : Job α) : FetchM Unit := do
  unless sameResult new.task.get chain.task.get do
    error s!"{name} differs from its chain of zipWith ({n} jobs)"

/--
Fails unless the job folds produce the same results as the chains of `zipWith` they replace, with
all jobs succeeding (`n` even) or one failing (`n` odd).
-/
def checkSame (n : Nat) : FetchM (Job Unit) := do
  let js ← testJobs n 200 (← IO.mkRef 0)
  checkSameAs "Job.collectArray" n (Job.collectArray js) <|
    js.foldl (Job.zipWith (sync := true) Array.push) (Job.traceRoot (Array.mkEmpty js.size) "<collection>")
  checkSameAs "Job.mixArray" n (Job.mixArray js) <|
    js.foldl (·.mix ·) (Job.traceRoot () "<collection>")
  checkSameAs "Job.zipWithAll" n (Job.zipWithAll (· + ·) (Job.pure 0) js) <|
    js.foldl (Job.zipWith (sync := true) (· + ·)) (Job.pure 0)
  checkSameAs "Job.collectList" n (Job.collectList js.toList) <|
    js.toList.foldr (Job.zipWith (sync := true) List.cons) (Job.traceRoot [] "<collection>")
  checkSameAs "Job.mixList" n (Job.mixList js.toList) <|
    js.toList.foldr (·.mix ·) (Job.traceRoot () "<collection>")
  let v := js.toVector
  checkSameAs "Job.collectVector" n (Job.collectVector v) <|
    js.size.fold (init := Job.traceRoot (Vector.replicate js.size 0) "<collection>") fun i h job =>
      job.zipWith (sync := true) (Vector.set · i · h) v[i]
  return Job.nil

target same : Unit := do
  discard <| checkSame 100
  checkSame 101

/--
Prints how many milliseconds `collect` over `n` jobs takes to finish once its slowest job (job
`slow`) is done, i.e., the work that waited for that job.
-/
def collectTime
  (name : String) (collect : Array (Job Nat) → Job β) (n : Nat) (slow := 0)
: FetchM (Job Unit) := do
  let done ← IO.mkRef 0
  let js ← testJobs n 1000 done slow
  let job := collect js
  discard <| IO.wait job.task
  IO.println s!"{name} of {n} jobs: {(← IO.monoMsNow) - (← done.get)} ms after the slowest job"
  return Job.nil

-- `Job.collectArray` and `Job.collectVector` fold left, so the first job is the slow one;
-- `Job.collectList` folds right, so the last one is.
target collectArray1 : Unit := collectTime "collectArray" (Job.collectArray ·) 10000
target collectArray4 : Unit := collectTime "collectArray" (Job.collectArray ·) 40000
target collectVector1 : Unit :=
  collectTime "collectVector" (fun js => (Job.collectVector js.toVector).map (·.toArray)) 10000
target collectVector4 : Unit :=
  collectTime "collectVector" (fun js => (Job.collectVector js.toVector).map (·.toArray)) 40000
target collectList1 : Unit := collectTime "collectList" (Job.collectList ·.toList) 10000 (slow := 9999)
target collectList4 : Unit := collectTime "collectList" (Job.collectList ·.toList) 40000 (slow := 39999)
