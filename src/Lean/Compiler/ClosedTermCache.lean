/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Environment

public section

namespace Lean

structure ClosedTermCache where
  map        : PHashMap Expr Name := {}
  constNames : NameSet := {}
  -- used for `replay?` only
  revExprs   : List Expr := []
  deriving Inhabited

builtin_initialize closedTermCacheExt : EnvExtension ClosedTermCache ← do
  let ext ← registerEnvExtension (pure {}) (asyncMode := .sync)
    (replay? := some fun oldState newState _ s =>
      let newExprs := newState.revExprs.take (newState.revExprs.length - oldState.revExprs.length)
      newExprs.foldl (init := s) fun s e =>
        let c := newState.map.find! e
        { s with map := s.map.insert e c, constNames := s.constNames.insert c, revExprs := e :: s.revExprs })
  registerCommandCacheExtension `Lean.closedTermCacheExt ext
    (fun before after =>
      let added := after.revExprs.take (after.revExprs.length - before.revExprs.length)
      added.reverse.toArray.map fun e => (e, after.map.find! e))
    (fun state (e, n) => {
      map := state.map.insert e n
      constNames := state.constNames.insert n
      revExprs := e :: state.revExprs
    })

def cacheClosedTermName (env : Environment) (e : Expr) (n : Name) : Environment :=
  closedTermCacheExt.modifyState env fun s =>
    { s with map := s.map.insert e n, constNames := s.constNames.insert n, revExprs := e :: s.revExprs }

def getClosedTermName? (env : Environment) (e : Expr) : Option Name :=
  (closedTermCacheExt.getState env).map.find? e

def isClosedTermName (env : Environment) (n : Name) : Bool :=
  (closedTermCacheExt.getState env).constNames.contains n

end Lean
