import Lake
import Lake.Build.UsageCutoff
import Lean.Util.ModuleUsage.Basic

open Lake DSL Lean

package test

private structure Parsed where
  ok : Bool
  deriving TypeName

private instance : FromJson Parsed where
  fromJson? j := return ⟨← j.getObjValAs? Bool "ok"⟩

private def usageJson : String :=
  "{\"version\":12,\"noskip\":false,\"moduleDigest\":\"00000000000000000000000000000000\",\"closure\":\"00000000000000000000000000000000\",\"digested\":[],\"importedClosures\":[],\"importedDigests\":[],\"own\":[],\"used\":[],\"extra\":[],\"resolved\":[],\"resolvedAll\":false,\"providesDigest\":\"00000000000000000000000000000000\",\"provides\":[[],[]],\"specKeys\":[],\"specLookups\":[]}"

private def awaitSuccess (job : Job Unit) : JobM Unit := do
  match ← IO.wait job.task with
  | .ok _ state => state.log.replay
  | .error .. => error "sidecar reader failed"

private def readParsed (path : System.FilePath) (expected : Bool) : JobM Unit := do
  let some value ← readUsageSidecar Parsed path | error "sidecar reader found no value"
  unless value.ok == expected do error "sidecar reader received the wrong value"

private def readFailure (path : System.FilePath) : JobM Unit := do
  if (← readUsageSidecar Parsed path).isSome then
    error "invalid sidecar parsed successfully"

private def startTogether (read : JobM Unit) : JobM Unit := do
  let ready ← IO.Promise.new
  let waiting ← IO.mkRef 0
  let waitForPeer : JobM Unit := do
    let n ← waiting.modifyGet fun n => (n + 1, n + 1)
    if n == 2 then ready.resolve ()
    let some _ ← IO.wait ready.result? | error "sidecar readers did not start together"
    read
  let left ← Job.async waitForPeer
  let right ← Job.async waitForPeer
  awaitSuccess (left.mix right)

@[default_target]
target matchingReaders pkg : Unit := Job.async do
  let path := pkg.dir / "valid.usage"
  IO.FS.writeFile path "{\"version\":12,\"ok\":true}"
  startTogether (readParsed path true)

@[default_target]
target failedReaders pkg : Unit := Job.async do
  startTogether (readFailure <| pkg.dir / "invalid.usage")

@[default_target]
target ownUsageReleasesPending pkg : Unit := Job.async do
  let path := pkg.dir / "own.usage"
  IO.FS.writeFile path usageJson
  let some stamp ← ModuleUsage.fileStamp path | error "could not stamp own usage fixture"
  let pending ← IO.Promise.new
  (← getBuildContext).sidecarCache.atomically do
    let (nextId, entries) ← get
    set (nextId, entries.insert path (.pending (some stamp) nextId pending))
  let some _ ← readOwnUsage path | error "could not read own usage fixture"
  let some result? ← IO.wait pending.result? | error "readOwnUsage dropped the pending reader"
  unless result?.isSome do error "readOwnUsage released the pending reader without a value"

@[default_target]
target racyStampReloads pkg : Unit := Job.async do
  let path := pkg.dir / "racy.usage"
  IO.FS.writeFile path "{\"version\":12,\"ok\":true}"
  readParsed path true
  IO.FS.writeFile path "{\"version\":12,\"ok\":false}"
  readParsed path false
