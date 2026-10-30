/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Util.Store
public import Lake.Build.Job.Basic

/-!
# The Lake Build Store

The Lake build store is the map of Lake build keys to build task and/or
build results that is slowly filled during a recursive build (e.g., via
topological-based build of an initial key's dependencies).
-/

namespace Lake
open Lean (Name NameMap)

/-- A monad equipped with a Lake build store. -/
public abbrev MonadBuildStore (m) := MonadDStore BuildKey (Job <| BuildData ·) m

/--
The type of the Lake build store: the job of each build key fetched so far, and the keys whose jobs a fetch is
making now (see `BuildStore.reserve`).
-/
public structure BuildStore where
  /-- The job of each build key fetched so far. -/
  jobs : Std.DTreeMap BuildKey (Job <| BuildData ·) BuildKey.quickCmp := Std.DTreeMap.empty
  /--
  The keys whose jobs a fetch is making now, each with the promise of the fetches that wait for it, if any (see
  `BuildStore.wait`). The fetch that makes the job resolves it when it ends the reservation.
  -/
  reserved : Std.DTreeMap BuildKey (fun _ => Option (IO.Promise Unit)) BuildKey.quickCmp := Std.DTreeMap.empty
  /--
  How many jobs have been stored. Every change of `jobs` must increase it (`insert`, `finish`): `reserve` relies on it.
  -/
  stores : Nat := 0

@[inline] public def BuildStore.empty : BuildStore := {}

namespace BuildStore

/-- The job stored for `key`, if any. -/
public def get? (self : BuildStore) (key : BuildKey) : Option (Job (BuildData key)) :=
  self.jobs.get? key

/--
Stores `job` as the job of `key`, without regard to reservations. A fetch that makes a job uses `reserve` and `finish`
(`fetchOrCreateJob`), so that two threads do not both make it.
-/
public def insert (self : BuildStore) (key : BuildKey) (job : Job (BuildData key)) : BuildStore :=
  {self with jobs := self.jobs.insert key job, stores := self.stores + 1}

/-- The outcome of `BuildStore.reserve`. -/
public inductive Reservation (key : BuildKey)
  /-- The store has the job of the key. -/
  | stored (job : Job (BuildData key))
  /-- Another fetch is making the job of the key. -/
  | taken
  /-- The caller now makes the job of the key. It must then call `finish` or `release`. -/
  | made

/--
Reserves `key` for the caller, who then makes its job, unless the store has the job of `key` or another fetch has
reserved it. Run it atomically (`modifyGet` of the store's reference). `missedAt` is `stores` of a store in which
the caller found no job for `key`: if no job was stored since, the store still has none, and `reserve` does not look
again.
-/
public def reserve (self : BuildStore) (key : BuildKey) (missedAt : Nat) : Reservation key × BuildStore :=
  let stored? := if self.stores == missedAt then none else self.jobs.get? key
  match stored? with
  | some job => (.stored job, self)
  | none =>
    if self.reserved.contains key then (.taken, self)
    else (.made, {self with reserved := self.reserved.insert key none})

/-- The outcome of `BuildStore.wait`. -/
public inductive Wait (key : BuildKey)
  /-- The store has the job of the key. -/
  | stored (job : Job (BuildData key))
  /-- Another fetch is making the job of the key: it resolves this promise when it ends the reservation. -/
  | until (promise : IO.Promise Unit)
  /-- Nobody has reserved the key. -/
  | free

/--
Joins the fetches that wait for the reservation of `key`, if there is one: the result is the promise that the fetch
that holds the reservation resolves when it ends it. `promise` becomes that promise if no fetch waits yet. Run it
atomically (`modifyGet` of the store's reference).
-/
public def wait (self : BuildStore) (key : BuildKey) (promise : IO.Promise Unit) : Wait key × BuildStore :=
  match self.jobs.get? key with
  | some job => (.stored job, self)
  | none =>
    match Std.DTreeMap.Const.get? self.reserved key with
    | some (some other) => (.until other, self)
    | some none => (.until promise, {self with reserved := self.reserved.insert key (some promise)})
    | none => (.free, self)

/--
Stores `job` as the job of the reserved `key` and ends the reservation. The result is the promise of the fetches that
wait for it, if any, which the caller must resolve.
-/
public def finish (self : BuildStore) (key : BuildKey) (job : Job (BuildData key)) :
    Option (IO.Promise Unit) × BuildStore :=
  ((Std.DTreeMap.Const.get? self.reserved key).join,
    {jobs := self.jobs.insert key job, reserved := self.reserved.erase key, stores := self.stores + 1})

/--
Ends the reservation of `key` without a job. The result is the promise of the fetches that wait for it, if any, which
the caller must resolve.
-/
public def release (self : BuildStore) (key : BuildKey) : Option (IO.Promise Unit) × BuildStore :=
  ((Std.DTreeMap.Const.get? self.reserved key).join, {self with reserved := self.reserved.erase key})

/-- Reads and writes the store's jobs without regard to reservations (see `BuildStore.insert`). -/
public instance [MonadLiftT (ST ω) m] [Monad m] :
    MonadDStore BuildKey (Job <| BuildData ·) (StateRefT' ω BuildStore m) where
  fetch? k := (·.get? k) <$> get
  store k a := modify (·.insert k a)

set_option linter.deprecated false in
def getModuleFacetJob? (facet : Name) [FamilyOut FacetOut facet α]
    (k : BuildKey) (v : Job (BuildData k)) : Option (Name × Job α) :=
  match k with
  | .moduleFacet m f
  | .packageModuleFacet p m f =>
    if h : f = facet then
      have of_data := by unfold BuildData; simp [h]
      some (m, cast of_data v)
    else none
  | _ => none

set_option linter.deprecated false in
/-- Derive an array of built module facets from the store. -/
@[deprecated "Deprecated without replacement." (since := "2025-11-13")]
public def collectModuleFacetArray
  (self : BuildStore) (facet : Name) [FamilyOut FacetOut facet α]
: Array (Job α) := Id.run do
  let mut res : Array (Job α) := #[]
  for ⟨k, v⟩ in self.jobs do
    if let some (_, job) := getModuleFacetJob? facet k v then
      res := res.push job
  return res

set_option linter.deprecated false in
/-- Derive a map of module names to built facets from the store. -/
@[deprecated "Deprecated without replacement." (since := "2025-11-13")]
public def collectModuleFacetMap
  (self : BuildStore) (facet : Name) [FamilyOut FacetOut facet α]
: NameMap (Job α) := Id.run do
  let mut res := Lean.mkNameMap (Job α)
  for ⟨k, v⟩ in self.jobs do
    if let some (m, job) := getModuleFacetJob? facet k v then
      res := res.insert m job
  return res

def getPackageFacetJob? (facet : Name) [FamilyOut FacetOut facet α]
    (k : BuildKey) (v : Job (BuildData k)) : Option (Job α) :=
  match k with
  | .packageFacet p f =>
    if h : f = facet then
      have of_data := by unfold BuildData; simp [h]
      some (cast of_data v)
    else none
  | _ => none

/-- Derive an array of built package facets from the store. -/
@[deprecated "Deprecated without replacement." (since := "2025-11-13")]
public def collectPackageFacetArray
  (self : BuildStore) (facet : Name) [FamilyOut FacetOut facet α]
: Array (Job α) := Id.run do
  let mut res : Array (Job α) := #[]
  for ⟨k, v⟩ in self.jobs do
    if let some job := getPackageFacetJob? facet k v then
      res := res.push job
  return res

def getTargetFacetJob? (facet : Name) [FamilyOut FacetOut facet α]
    (k : BuildKey) (v : Job (BuildData k)) : Option (Job α) :=
  match k with
  | .targetFacet _ _ f =>
    if h : f = facet then
      have of_data := by unfold BuildData; simp [h]
      some (cast of_data v)
    else none
  | _ => none

/-- Derive an array of built target facets from the store. -/
@[deprecated "Deprecated without replacement." (since := "2025-11-13")]
public def collectTargetFacetArray
  (self : BuildStore) (facet : Name) [FamilyOut FacetOut facet α]
: Array (Job α) := Id.run do
  let mut res : Array (Job α) := #[]
  for ⟨k, v⟩ in self.jobs do
    if let some job := getTargetFacetJob? facet k v then
      res := res.push job
  return res

set_option linter.deprecated false in
/-- Derive an array of built external shared libraries from the store. -/
@[deprecated "Deprecated without replacement." (since := "2025-11-13")]
public def collectSharedExternLibs
  (self : BuildStore) [FamilyOut FacetOut `externLib.shared α]
: Array (Job α) := self.collectTargetFacetArray `externLib.shared
