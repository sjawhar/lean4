/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: LINUX-30 build-platform
-/
module

prelude
public import Lean.Data.Json
public import Lake.Util.JsonObject
import Lake.Util.String
import Init.Data.String.Legacy
import Init.Data.String.Search

/-! # The build service's digests and records

The data of the build service that traces and Lake cache entries keep, with its JSON form. The client
that talks to the service is `Lake.Util.RemoteExec`.
-/

open Lean

namespace Lake.RemoteExec

/-- A content digest: the SHA-256 of a blob and its byte size (wire form `"<64 hex>/<size>"`). -/
public structure Digest where
  hash : String
  size : Nat
  deriving BEq, Hashable, Inhabited, Repr

namespace Digest
public def toString (d : Digest) : String := s!"{d.hash}/{d.size}"
public instance : ToString Digest := ⟨Digest.toString⟩
public def ofString? (s : String) : Option Digest := do
  let [h, n] := s.splitOn "/" | none
  guard (h.utf8ByteSize == 64 && Lake.isHex h)
  return {hash := h, size := ← n.toNat?}
public instance : ToJson Digest := ⟨(toJson ·.toString)⟩
public instance : FromJson Digest := ⟨fun j => do
  let s ← j.getStr?
  match ofString? s with | some d => pure d | none => throw s!"malformed digest '{s}'"⟩
/-- The digest of the empty blob. -/
public def empty : Digest := ⟨"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", 0⟩
end Digest

/-- One output of a service record (`Record`). -/
public structure RecordOutput where
  digest : Digest
  executable : Bool := false
  deriving Inhabited, Repr

public instance : ToJson RecordOutput :=
  ⟨fun o => Json.mkObj [("digest", toJson o.digest), ("executable", o.executable)]⟩

public instance : FromJson RecordOutput := ⟨fun j => do
  let o ← JsonObject.fromJson? j
  return {digest := ← o.get "digest", executable := ← o.getD "executable" false}⟩

/--
The build service's record of a target's outputs, the `remote` field of its trace and of its Lake
cache entry: the action that made them and each output's digest and executable bit, by extension.
Lake writes it only for outputs that a service action made.
-/
public structure Record where
  action : String
  outputs : Std.TreeMap String RecordOutput
  deriving Inhabited

public instance : ToJson Record :=
  ⟨fun r => Json.mkObj [("action", r.action), ("outputs", toJson r.outputs)]⟩

public instance : FromJson Record := ⟨fun j => do
  let o ← JsonObject.fromJson? j
  return {action := ← o.get "action", outputs := ← o.get "outputs"}⟩

/-- The record of the action `action` with `outputs`, each output's name, digest and executable bit. -/
public def Record.ofOutputs (action : String) (outputs : Array (String × Digest × Bool)) : Record where
  action
  outputs := outputs.foldl (init := {}) fun outs (name, digest, executable) => outs.insert name {digest, executable}

/-- Whether the record's output `name` is executable (`false` when the record has no such output). -/
public def Record.executable (r : Record) (name : String) : Bool :=
  (r.outputs.get? name).any (·.executable)

end Lake.RemoteExec
