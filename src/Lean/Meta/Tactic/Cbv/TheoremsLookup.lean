/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Różowski
-/

module

prelude
public import Lean.Meta.Sym.Simp.Theorems
import Lean.Meta.Match.MatchEqsExt
import Lean.Meta.Eqns


/-!
# Cached Theorem Lookup

Per-function cache of `Sym.Simp.Theorem` objects for equation theorems, unfold
equations, and match equations. Avoids repeated `mkTheoremFromDecl` calls (which
involve pattern extraction and discrimination tree insertion).
-/

namespace Lean.Meta.Sym.Simp

def Theorems.insertMany (thms : Theorems) (toInsert : Array Theorem) : Theorems :=
  Array.foldl Theorems.insert thms toInsert

end Lean.Meta.Sym.Simp

namespace Lean.Meta.Tactic.Cbv
open Lean.Meta.Sym.Simp

public structure CbvTheoremsLookupState where
  eqnTheorems : PHashMap Name Theorems := {}
  unfoldTheorems : PHashMap Name Theorem := {}
  matchTheorems : PHashMap Name Theorems := {}
  deriving Inhabited

private inductive CbvTheoremsCacheEntry where
  | eqn (name : Name) (theorems : Theorems)
  | unfold (name : Name) (thm : Theorem)
  | match (name : Name) (theorems : Theorems)

builtin_initialize cbvTheoremsLookup : EnvExtension CbvTheoremsLookupState ← do
  let ext ← registerEnvExtension (pure {}) (asyncMode := .local)
  registerCommandCacheExtension `Lean.Meta.Tactic.Cbv.cbvTheoremsLookup ext
    (fun before after => Id.run do
      let mut entries : Array CbvTheoremsCacheEntry := #[]
      for (n, v) in after.eqnTheorems do
        unless before.eqnTheorems.contains n do entries := entries.push (.eqn n v)
      for (n, v) in after.unfoldTheorems do
        unless before.unfoldTheorems.contains n do entries := entries.push (.unfold n v)
      for (n, v) in after.matchTheorems do
        unless before.matchTheorems.contains n do entries := entries.push (.match n v)
      return entries)
    (fun state entry => match entry with
      | CbvTheoremsCacheEntry.eqn n v =>
        { state with eqnTheorems := state.eqnTheorems.insert n v }
      | CbvTheoremsCacheEntry.unfold n v =>
        { state with unfoldTheorems := state.unfoldTheorems.insert n v }
      | CbvTheoremsCacheEntry.match n v =>
        { state with matchTheorems := state.matchTheorems.insert n v })

public def getEqnTheorems (fnName : Name) : MetaM Theorems := do
  let env ← getEnv
  let cache := cbvTheoremsLookup.getState env
  if let some thms := cache.eqnTheorems.find? fnName then
    return thms
  else
    -- Compute theorems from equation names
    let some eqnNames ← getEqnsFor? fnName | return {}
    let thms := Theorems.insertMany {} <| ← eqnNames.mapM mkTheoremFromDecl
    -- Store in cache
    modifyEnv fun env =>
      cbvTheoremsLookup.modifyState env fun cache =>
        { cache with eqnTheorems := cache.eqnTheorems.insert fnName thms }
    return thms

public def getUnfoldTheorem (fnName : Name) : MetaM (Option Theorem) := do
  let env ← getEnv
  let cache := cbvTheoremsLookup.getState env
  if let some thm := cache.unfoldTheorems.find? fnName then
    return some thm
  else
    let some unfoldEqn ← getUnfoldEqnFor? fnName (nonRec := true) | return none
    let thm ← mkTheoremFromDecl unfoldEqn

    modifyEnv fun env =>
      cbvTheoremsLookup.modifyState env fun cache =>
        { cache with unfoldTheorems := cache.unfoldTheorems.insert fnName thm }
    return some thm

public def getMatchTheorems (matcherName : Name) : MetaM Theorems := do
  let env ← getEnv
  let cache := cbvTheoremsLookup.getState env
  if let some thms := cache.matchTheorems.find? matcherName then
    return thms
  else
    let eqns ← Match.getEquationsFor matcherName
    let thms := Theorems.insertMany {} <| ← eqns.eqnNames.mapM mkTheoremFromDecl

    modifyEnv fun env =>
      cbvTheoremsLookup.modifyState env fun cache =>
        { cache with matchTheorems := cache.matchTheorems.insert matcherName thms }
    return thms

end Lean.Meta.Tactic.Cbv
