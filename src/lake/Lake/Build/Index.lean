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
The part of `fetchOrCreateJob` after a miss in a store whose `stores` was `missedAt`. While another fetch has
reserved `key`, it waits on the promise of that reservation's waiters (`BuildStore.wait`), which only a waiting fetch
makes, and then looks again. `IO.wait` lets the task pool start another thread while this one waits.
-/
def fetchOrCreateJobAfterMiss
  (key : BuildKey) [t : FamilyOut (Job <| BuildData ·) key α] (create : FetchM α) (missedAt : Nat)
: FetchM α := do
  let mut missedAt := missedAt
  repeat
    match ← modifyGetThe BuildStore (·.reserve key missedAt) with
    | .stored job => return cast t.fam_eq job
    | .made =>
      let job ← try create catch e =>
        if let some waiters ← modifyGetThe BuildStore (·.release key) then waiters.resolve ()
        throw e
      if let some waiters ← modifyGetThe BuildStore (·.finish key (cast t.fam_eq.symm job)) then
        waiters.resolve ()
      return job
    | .taken =>
      let promise ← IO.Promise.new
      match ← modifyGetThe BuildStore (·.wait key promise) with
      | .stored job => return cast t.fam_eq job
      | .until waiters => discard <| IO.wait waiters.result?
      | .free => pure ()
      let store ← getThe BuildStore
      if let some job := store.get? key then
        return cast t.fam_eq job
      missedAt := store.stores
  error s!"{key}: fetch loop ended"

/--
Returns the job of `key` from the build store, or makes it with `create` and stores it. Atomic across the build's
threads (`BuildStore.reserve`): while one fetch runs `create`, another fetch of `key` waits until it has returned and
then returns the job that it stored. If `create` fails, the next waiting fetch runs `create` itself.

A fetch that waits uses `IO.wait`, which panics in a `(sync := true)` continuation (`Job.mapM`, `Job.bindM`); Lake's
own continuations fetch nothing.
-/
@[inline] def fetchOrCreateJob
  (key : BuildKey) [t : FamilyOut (Job <| BuildData ·) key α] (create : FetchM α)
: FetchM α := do
  -- The lookup of a hit, the common case, is inlined here, so that it uses map code specialized for the key order.
  let store ← getThe BuildStore
  if let some job := store.jobs.get? key then
    return cast t.fam_eq job
  fetchOrCreateJobAfterMiss key create store.stores

/--
Like `fetchOrCreateJob`, but not atomic across the build's threads: two fetches of `key` at the same time can both run
`create`, and the second job replaces the first in the store. For facets that only compute information from files
and write no build output (not `buildable`), where a second run only repeats the reads.
-/
@[inline] def fetchOrCreateInfoJob
  (key : BuildKey) [t : FamilyOut (Job <| BuildData ·) key α] (create : FetchM α)
: FetchM α := do
  if let some job := (← getThe BuildStore).jobs.get? key then
    return cast t.fam_eq job
  let job ← create
  modifyThe BuildStore (·.insert key (cast t.fam_eq.symm job))
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
          if config.buildable then
            fetchOrCreateJob key recFetch
          else
            fetchOrCreateInfoJob key recFetch
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
