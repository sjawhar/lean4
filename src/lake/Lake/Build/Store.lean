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
  The keys whose jobs a fetch is making now, each with the promise that the fetch resolves once it has stored the
  job, or once making it failed.
  -/
  reserved : Std.DTreeMap BuildKey (fun _ => IO.Promise Unit) BuildKey.quickCmp := Std.DTreeMap.empty

@[inline] public def BuildStore.empty : BuildStore := {}

namespace BuildStore

/-- The job stored for `key`, if any. -/
@[inline] public def get? (self : BuildStore) (key : BuildKey) : Option (Job (BuildData key)) :=
  self.jobs.get? key

/--
Stores `job` as the job of `key`, without regard to reservations. A fetch that makes a job uses `reserve` and `finish`
(`fetchOrCreateJob`), so that two threads do not both make it.
-/
@[inline] public def insert (self : BuildStore) (key : BuildKey) (job : Job (BuildData key)) : BuildStore :=
  {self with jobs := self.jobs.insert key job}

/-- The outcome of `BuildStore.reserve`. -/
public inductive Reservation (key : BuildKey)
  /-- The store has the job of the key. -/
  | stored (job : Job (BuildData key))
  /-- Another fetch is making the job of the key: it resolves this promise once it has stored it or failed. -/
  | taken (other : IO.Promise Unit)
  /-- The caller now makes the job of the key. It must then call `finish` or `release`. -/
  | made

/--
Reserves `key` for the caller, who then makes its job and resolves `promise`, unless the store has the job of `key`
or another fetch has reserved it. Run it atomically (`modifyGet` of the store's reference).
-/
public def reserve (self : BuildStore) (key : BuildKey) (promise : IO.Promise Unit) :
    Reservation key × BuildStore :=
  match self.jobs.get? key with
  | some job => (.stored job, self)
  | none =>
    match Std.DTreeMap.Const.get? self.reserved key with
    | some other => (.taken other, self)
    | none => (.made, {self with reserved := self.reserved.insert key promise})

/-- Stores `job` as the job of the reserved `key` and ends the reservation. -/
@[inline] public def finish (self : BuildStore) (key : BuildKey) (job : Job (BuildData key)) : BuildStore :=
  {jobs := self.jobs.insert key job, reserved := self.reserved.erase key}

/-- Ends the reservation of `key` without a job. -/
@[inline] public def release (self : BuildStore) (key : BuildKey) : BuildStore :=
  {self with reserved := self.reserved.erase key}

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
