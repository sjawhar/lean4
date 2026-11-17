/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Util.Store
public import Lake.Util.DPHashMap
public import Lake.Build.Job.Basic
import Init.Data.Array.QSort

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

/-- The type of the Lake build store. Persistent, because the build's threads share it. -/
public abbrev BuildStore := DPHashMap BuildKey (Job <| BuildData ·)

@[inline] public def BuildStore.empty : BuildStore := DPHashMap.empty

namespace BuildStore

/-- The entries of the store, ordered by `BuildKey.quickCmp`. -/
public def toArray (self : BuildStore) : Array ((k : BuildKey) × Job (BuildData k)) :=
  DPHashMap.foldl (fun es k v => es.push ⟨k, v⟩) #[] self |>.qsort (·.1.quickCmp ·.1 == .lt)

/-- Folds `f` over the entries of the store in the order of `BuildKey.quickCmp`. -/
@[inline] public def foldl (f : σ → (k : BuildKey) → Job (BuildData k) → σ) (init : σ)
    (self : BuildStore) : σ :=
  self.toArray.foldl (fun s e => f s e.1 e.2) init

/-- Iterates over the entries of the store in the order of `BuildKey.quickCmp`. -/
public instance [Monad m] : ForIn m BuildStore ((k : BuildKey) × Job (BuildData k)) where
  forIn self init f := ForIn.forIn self.toArray init f

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
  for ⟨k, v⟩ in self do
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
  for ⟨k, v⟩ in self do
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
  for ⟨k, v⟩ in self do
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
  for ⟨k, v⟩ in self do
    if let some job := getTargetFacetJob? facet k v then
      res := res.push job
  return res

set_option linter.deprecated false in
/-- Derive an array of built external shared libraries from the store. -/
@[deprecated "Deprecated without replacement." (since := "2025-11-13")]
public def collectSharedExternLibs
  (self : BuildStore) [FamilyOut FacetOut `externLib.shared α]
: Array (Job α) := self.collectTargetFacetArray `externLib.shared
