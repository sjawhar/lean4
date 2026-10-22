/-
Copyright (c) 2025 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.Config.Artifact
import Lake.Util.JsonObject

open Lean (Json ToJson FromJson)

namespace Lake

/-- The descriptions of the output artifacts of a module build. -/
public structure ModuleOutputDescrs where
  isModule : Bool
  olean : ArtifactDescr
  oleanServer? : Option ArtifactDescr := none
  oleanPrivate? : Option ArtifactDescr := none
  ilean : ArtifactDescr
  irSig? : Option ArtifactDescr := none
  ir? : Option ArtifactDescr := none
  c? : Option ArtifactDescr := none
  bc? : Option ArtifactDescr := none
  ltar? : Option ArtifactDescr := none
  /-- Usage-cutoff sidecars (`.usage`, `.resolved`, `.usekey`), when the build wrote them. -/
  usage? : Option ArtifactDescr := none
  resolved? : Option ArtifactDescr := none
  usekey? : Option ArtifactDescr := none
  /--
  Set when the outputs were not compiled for this input but kept: a kept-module checker accepted
  them for imports other than those they were compiled against. The input hash of the build that
  compiled them.
  -/
  keptFrom? : Option Hash := none

public def ModuleOutputDescrs.oleanParts (self : ModuleOutputDescrs) : Array ArtifactDescr := Id.run do
  let mut descrs := #[self.olean]
  if let some hash := self.oleanServer? then
    descrs := descrs.push hash
  if let some hash := self.oleanPrivate? then
    descrs := descrs.push hash
  return descrs

public protected def ModuleOutputDescrs.toJson (self : ModuleOutputDescrs) : Json := Id.run do
  let mut obj : JsonObject := {}
  obj := obj.insert "m" self.isModule
  obj := obj.insert "o" self.oleanParts
  obj := obj.insert "i" self.ilean
  if let some irSig := self.irSig? then
    obj := obj.insert "rs" irSig
  if let some ir := self.ir? then
    obj := obj.insert "r" ir
  if let some c := self.c? then
    obj := obj.insert "c" c
  if let some bc := self.bc? then
    obj := obj.insert "b" bc
  if let some ltar := self.ltar? then
    obj := obj.insert "l" ltar
  if let some usage := self.usage? then
    obj := obj.insert "u" usage
  if let some resolved := self.resolved? then
    obj := obj.insert "v" resolved
  if let some usekey := self.usekey? then
    obj := obj.insert "k" usekey
  if let some hash := self.keptFrom? then
    obj := obj.insert "kf" hash
  return obj

public instance : ToJson ModuleOutputDescrs := ⟨ModuleOutputDescrs.toJson⟩

public protected def ModuleOutputDescrs.fromJson? (val : Json) : Except String ModuleOutputDescrs := do
  let obj ← JsonObject.fromJson? val
  let oleanHashes : Array ArtifactDescr ← obj.get "o"
  let some olean := oleanHashes[0]?
    | throw "expected at least one 'o' (.olean) hash"
  return {
    isModule := (← obj.get? "m").getD (oleanHashes.size > 1)
    olean := olean
    oleanServer? := oleanHashes[1]?
    oleanPrivate? := oleanHashes[2]?
    ilean := ← obj.get "i"
    irSig? := ← obj.get? "rs"
    ir? := ← obj.get? "r"
    c? := ← obj.get? "c"
    bc? := ← obj.get? "b"
    ltar? := ← obj.get? "l"
    usage? := ← obj.get? "u"
    resolved? := ← obj.get? "v"
    usekey? := ← obj.get? "k"
    keptFrom? := ← obj.get? "kf"
  }

public instance : FromJson ModuleOutputDescrs := ⟨ModuleOutputDescrs.fromJson?⟩

/-- The output artifacts of a module build. -/
public structure ModuleOutputArtifacts where
  isModule : Bool
  olean : Artifact
  oleanServer? : Option Artifact := none
  oleanPrivate? : Option Artifact := none
  ilean : Artifact
  irSig? : Option Artifact := none
  ir? : Option Artifact := none
  c? : Option Artifact := none
  bc? : Option Artifact := none
  ltar? : Option Artifact := none
  /-- Usage-cutoff sidecars (`.usage`, `.resolved`, `.usekey`), when the build wrote them. -/
  usage? : Option Artifact := none
  resolved? : Option Artifact := none
  usekey? : Option Artifact := none
  /-- See `ModuleOutputDescrs.keptFrom?`. -/
  keptFrom? : Option Hash := none

/-- Content hashes of the artifacts. -/
public def ModuleOutputArtifacts.descrs (arts : ModuleOutputArtifacts) : ModuleOutputDescrs where
  isModule := arts.isModule
  olean := arts.olean.descr
  oleanServer? := arts.oleanServer?.map (·.descr)
  oleanPrivate? := arts.oleanPrivate?.map (·.descr)
  ilean := arts.ilean.descr
  irSig? := arts.irSig?.map (·.descr)
  ir? := arts.ir?.map (·.descr)
  c? := arts.c?.map (·.descr)
  bc? := arts.bc?.map (·.descr)
  ltar? := arts.ltar?.map (·.descr)
  usage? := arts.usage?.map (·.descr)
  resolved? := arts.resolved?.map (·.descr)
  usekey? := arts.usekey?.map (·.descr)
  keptFrom? := arts.keptFrom?
