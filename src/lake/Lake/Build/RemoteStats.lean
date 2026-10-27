/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: LINUX-30 build-platform
-/
module

prelude
public import Lean.Data.Json

/-! # Build-service statistics

Counts and state for the end-of-build line that `lake build` prints in service mode
(`lake: remote: …`, contract C5.1). Kept out of the build code so that `Lake.Build.Context`
can hold a mutable reference to it without importing build definitions.
-/

namespace Lake

/-- The state of the build service for a build's end-of-build line (contract C5.1). -/
public inductive RemoteState
  /-- No command used the service (a command other than `lake build` that sent no request). -/
  | idle
  /-- The service answered and is in use. -/
  | ok
  /-- The service did not answer. -/
  | unreachable
  /-- Service mode is off or was disabled, with a reason. -/
  | off (reason : String)
  deriving Inhabited, Repr

/-- The state word of the end-of-build line. -/
public def RemoteState.toString : RemoteState → String
  | .idle => "idle"
  | .ok => "ok"
  | .unreachable => "unreachable"
  | .off reason => s!"off: {reason}"

public instance : ToString RemoteState := ⟨RemoteState.toString⟩

/--
Counts for a build's end-of-build line: Lean module results, and separately C-object and
plugin-link results ("other actions"). A result is `cached` (served by the service), `manifest`
(a subset of cached, found through the manifest), `executed` (the service ran the action for this
build, a compile that failed there included; an action run again counts once per run), or `local`
(compiled on this machine in the fallback).
-/
public structure RemoteStats where
  state : RemoteState := .idle
  cached : Nat := 0
  manifest : Nat := 0
  executed : Nat := 0
  localBuilt : Nat := 0
  otherCached : Nat := 0
  otherExecuted : Nat := 0
  otherLocal : Nat := 0
  deriving Inhabited

namespace RemoteStats

/-- Records one Lean module result. -/
public def addLean (self : RemoteStats) (cached : Bool) (fromManifest := false) : RemoteStats :=
  if cached then
    {self with cached := self.cached + 1, manifest := self.manifest + (if fromManifest then 1 else 0)}
  else
    {self with executed := self.executed + 1}

/-- Records one locally compiled Lean module (the fallback). -/
public def addLeanLocal (self : RemoteStats) : RemoteStats :=
  {self with localBuilt := self.localBuilt + 1}

/-- The end-of-build line (contract C5.1), without a trailing newline. -/
public def line (self : RemoteStats) : String :=
  s!"lake: remote: {self.state}; {self.cached} cached ({self.manifest} from manifest), \
    {self.executed} executed, {self.localBuilt} local; other actions: {self.otherCached} cached, \
    {self.otherExecuted} executed, {self.otherLocal} local"

end RemoteStats
end Lake
