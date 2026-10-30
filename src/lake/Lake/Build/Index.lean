/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Build.Fetch
import Lake.Config.Monad
import Lake.Build.Topological
import Lake.Util.StoreInsts

/-!
# The Lake Build Index

The Lake build index is the complete map of Lake build keys to
Lake build functions, which is used by Lake to build any Lake build info.

This module leverages the index to perform topologically-based recursive builds.
-/

open Lean (Name)
open System (FilePath)

namespace Lake

/--
Returns the job of `key` from the build store, or makes it with `create` and stores it. Atomic across the build's
threads (`BuildStore.reserve`): while one fetch runs `create`, another fetch of `key` waits until it returns and then
returns the job that it stored. If `create` fails, the next waiting fetch runs `create` itself.

So a fetch can block. A fetch in a `(sync := true)` continuation (`Job.mapM`, `Job.bindM`) panics if it has to wait
(`Task.get` from a sync task); fetch in the `FetchM` code that makes the job instead.
-/
partial def fetchOrCreateJob
  (key : BuildKey) [t : FamilyOut (Job <| BuildData ·) key α] (create : FetchM α)
: FetchM α := do
  if let some job := (← getThe BuildStore).get? key then
    return cast t.fam_eq job
  let promise ← IO.Promise.new
  match ← modifyGetThe BuildStore (·.reserve key promise) with
  | .stored job => return cast t.fam_eq job
  | .taken other =>
    discard <| IO.wait other.result?
    fetchOrCreateJob key create
  | .made =>
    let job ← try create catch e =>
      modifyThe BuildStore (·.release key)
      promise.resolve ()
      throw e
    modifyThe BuildStore (·.finish key (cast t.fam_eq.symm job))
    promise.resolve ()
    return job

/-- Recursive build function for anything in the Lake build index. -/
def recBuildWithIndex (info : BuildInfo) : FetchM (Job (BuildData info.key)) :=
  match info with
  | .target pkg target => do
    if let some decl := pkg.findTargetDecl? target then
      if h : decl.kind.isAnonymous then
        let key := BuildKey.packageTarget pkg.keyName target
        fetchOrCreateJob key do (decl.targetConfig h).fetchFn pkg
      else
        let kind := ⟨decl.kind, by simp [decl.target_eq_type h]⟩
        let job := Job.pure (kind := kind) <| decl.mkConfigTarget pkg
        return cast (by simp [decl.data_eq_target h]) job
    else
      error s!"invalid target '{info}': target not found in package"
  | .facet target kind data facet => do
    if let some config := (← getWorkspace).findFacetConfig? facet then
      if h : config.kind = kind then
        let recFetch := config.fetchFn <| cast (by simp [h]) data
        if config.memoize then
          let key := BuildKey.facet target facet
          fetchOrCreateJob key recFetch
        else
          recFetch
      else
        error s!"invalid target '{info}': \
          input target is of kind '{kind}', but facet expects '{config.kind}'"
    else
      error s!"invalid target '{info}': unknown facet '{facet}'"

/-- Recursive build function with memoization. -/
def recFetchWithIndex : (info : BuildInfo) → RecBuildM (Job (BuildData info.key)) :=
 inline <| recFetchAcyclic (β := (Job <| BuildData ·.key)) BuildInfo.key recBuildWithIndex

/--
Run a recursive Lake build using the Lake build index
and a topological / suspending scheduler.
-/
@[inline] public nonrec def FetchT.run (x : FetchT m α) : RecBuildT m α :=
  x.run recFetchWithIndex
