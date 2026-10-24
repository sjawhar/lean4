/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.ScopedEnvExtension
public import Lean.Meta.Basic
import Lean.Util.ModuleUsage.Basic
import all Lean.Environment  -- for the per-view writes and counters, branches, realizations and their contexts

public section
namespace Lean

/-- The change of one view of an environment's extension states from one point to a later one: per persistent
extension the entries its state delta gives (`PersistentEnvExtension.stateDelta?`), per scoped extension the stack
operations it logged (`ScopedEnvExtension.stackDelta`, each erased; the main-branch view only: a scoped stack's change
in the checked view is not expressed, and refuses the command), per command cache the entries it added in this view.
A command's change, an asynchronous branch's, a realization's and a realization context's all use it. -/
structure ViewStates where
  entries : Array (Name × Array EnvExtensionEntry) := #[]
  scopedOps : Array (Name × Array EnvExtensionEntry) := #[]
  caches : Array (Name × Array EnvExtensionEntry) := #[]
  deriving Nonempty

/-- What an environment's validation counters and the persistent tier of its type class resolution cache became since
an earlier environment of its branch: the counters (`Environment.trackedGen` and the generations of the tracked
extensions in the main-branch view, `constGen`, `recordingConstGen`) as they are after, the entries logged in
`declChangeLog`, the constants' generations added (`constAddedGens`), and the change of the stored tier
(`Environment.storedSynthCache?`). A tier entry is valid where these counters say so, so a keep sets them as the full
run left them (`applyCounters`): a command elaborated after a kept one then finds the tier and validates its entries as
in the full run. -/
structure CountersDelta where
  trackedGen : Nat := 0
  extGens : Array Nat := #[]
  constGen : Nat := 0
  recordingConstGen : Nat := 0
  /-- The entries `declChangeLog` gained, newest first (`DeclChangeLog.entries` without the earlier environment's). -/
  declChangesAdded : List Name := []
  constAddedGens : Array (Name × Nat) := #[]
  /-- The stored tier's generation after, `none` for no tier. -/
  synthTierGen? : Option Nat := none
  /-- The stored tier's bindings added or changed. -/
  synthTierSet : Array (Meta.SynthInstanceCacheKey × List Meta.SynthInstanceCacheEntry) := #[]
  /-- The stored tier's keys removed. -/
  synthTierErased : Array Meta.SynthInstanceCacheKey := #[]
  deriving Inhabited

/-- What a command added on its main branch, or an asynchronous constant's branch added, in order: everything a keep
re-adds (`readdCommandConstants`). -/
inductive AddedConst where
  /-- A constant without states of its own: re-added by `addDeclCore` where it was added (with its inductive or mutual
  block, or found there already). -/
  | plain (name : Name)
  /-- Added from an asynchronous branch (`addConstAsync`): its branch's states relative to the main-branch view of the
  command's before-environment, and what that branch added, in order (itself among them as `plain` where its branch
  added it; absent when the kernel environment held it already, as for an inductive's auxiliary recursors). -/
  | async (name : Name) (exportedKind? : Option ConstantKind) (states : ViewStates) (nested : Array AddedConst)
  /-- The constants `realize` added itself in one `realizeConst forConst key` call, in order, with the realization's
  states relative to the main-branch view of the realization context's environment, and the realizations
  (`(forConst, key)`) whose cached results it merged while it ran, in order (`Environment.realizationMerges`). -/
  | realization (forConst key : Name) (consts : Array Name) (states : ViewStates) (merges : Array (Name × Name))
  /-- A realization an earlier command made (the before-environment's kernel holds its constants), which this branch
  merged from the realization cache: merged again, so that the branch's constant map holds its constants as the full
  run's does. The merge's extension writes are in the enclosing states. -/
  | merged (forConst key : Name) (consts : Array Name)
  /-- The realization context of `forConst` the command registered (`enableRealizationsForConst`), with the options it
  was registered with, its environment's states in both views relative to the command's before-environment, and its
  counters and persistent tier (`CountersDelta`). -/
  | context (forConst : Name) (opts : Options) (main checked : ViewStates) (counters : CountersDelta)
  deriving Inhabited

/-- Why a command's payload is not replayed: a keep elaborates the command again instead. `at?` is the asynchronous
constant, realized constant or realization context whose record the change is in (`none`: the command's own views). -/
inductive Refusal where
  /-- A change to an extension's state that no entry expresses: an unaccounted write, a `stateOnly` delta, a scoped
  stack written other than by its operations. -/
  | inexpressible (ext : Name) (at? : Option Name := none)
  /-- A change to an extension whose state payloads do not carry (`PersistentEnvExtension.PerCommand.notCarried`). -/
  | notCarried (ext : Name) (at? : Option Name := none)
  /-- Entries for a persistent extension without `ofOLeanEntry?`, which cannot replay them. -/
  | unreplayable (ext : Name) (at? : Option Name := none)
  /-- A write to the non-persistent extension `ext` (its registration's name, `EnvExtension.name`), which is no command
  cache. -/
  | unrecorded (ext : Name) (at? : Option Name := none)
  /-- A kernel constant checking the elaborator's would not give: added unchecked (`unchecked`,
  `Kernel.Environment.divergentAdds`), or the constants the kernel gained not those the elaborator gained (`unchecked`
  false, `kernelMatchesElaborator`: rejected by the kernel, never committed to it, or committed to it alone). -/
  | divergentKernelAdd (unchecked : Bool)
  /-- An attribute whose handlers may run code outside core Lean (`foreignAttributesByCommandRef`). -/
  | foreignAttribute (attr : Name)
  /-- A realization whose constants the before-environment holds only part of. -/
  | partlyHeldRealization (const : Name)
  /-- A constant marked as realized outside any realization record. -/
  | realizedWithoutRealization (const : Name)
  /-- A realization that ran in a context the payload cannot provide (one registered inside another branch). -/
  | foreignRealizationContext (const : Name)
  /-- A constant map whose new cells do not end in the map it extends. -/
  | unrelatedConstMap (at? : Option Name := none)
  /-- A change to the command state's field `field`, which payloads do not carry. -/
  | commandState (field : Name)
  /-- Entries recorded for `part` (an extension, a scoped stack or a command cache) that hold a value a payload cannot
  hold (`ModuleUsage.objectsDigests`: a closure, an external object, an unresolved promise, a reference); the payload
  leaves them out. -/
  | uncompactable (part : Name) (at? : Option Name := none)
  /-- An effect on state outside the command that the runtime noted (`RecordedEffects.byCommand`): a write to a
  reference it did not create, the resolution of a promise or the cancellation of a task it did not create, the use of
  a mutable native object it did not create, or a use of process-wide state (files outside the toolchain's, child
  processes but the toolchain's SAT solver run on files the command created, the network, the standard streams, the
  process's settings), which no payload carries. Reads of the environment, the working directory and the executable's
  path are no effects: the module records their values (`takeValueReads`), which a keep requires unchanged
  (`ModuleUsage.keepPermit`). -/
  | effect (what : String)
  deriving Inhabited, BEq

namespace Refusal

/-- The extension the refusal names, if any. -/
def ext? : Refusal → Option Name
  | inexpressible ext _ | notCarried ext _ | unreplayable ext _ | unrecorded ext _ | uncompactable ext _ => some ext
  | _ => none

private def inRecord : Option Name → String
  | some c => s!" in the record of {c}"
  | none => ""

protected def toString : Refusal → String
  | inexpressible ext at? => s!"a change to {ext} that no entry expresses{inRecord at?}"
  | notCarried ext at? => s!"a change to {ext}, whose state payloads do not carry{inRecord at?}"
  | unreplayable ext at? => s!"entries for {ext}, which has no `ofOLeanEntry?` to replay them{inRecord at?}"
  | unrecorded ext at? => s!"a write to {ext}, neither persistent nor a command cache{inRecord at?}"
  | divergentKernelAdd true => "a declaration the kernel added without checking it"
  | divergentKernelAdd false => "a declaration whose kernel constant is not what checking the elaborator's would give"
  | foreignAttribute attr => s!"the attribute {attr}, whose handlers may run code outside core Lean"
  | partlyHeldRealization c => s!"the realization of {c}, part of which an earlier command added"
  | realizedWithoutRealization c => s!"{c}, marked as realized outside a realization"
  | foreignRealizationContext c => s!"the realization of {c}, in a context the payload cannot provide"
  | unrelatedConstMap at? => s!"a constant map that does not extend the one before it{inRecord at?}"
  | commandState field => s!"a change to the command state's {field}"
  | uncompactable part at? => s!"entries for {part} that a payload cannot hold (a closure, a reference){inRecord at?}"
  | effect what => s!"an effect outside the command: it {what}"

instance : ToString Refusal := ⟨Refusal.toString⟩

/-- `rs` with each refusal of `new` it lacks appended, in order. -/
def addNew (rs new : Array Refusal) : Array Refusal :=
  new.foldl (fun rs r => if rs.contains r then rs else rs.push r) rs

end Refusal

/-- The payload of one top-level command: everything a keep needs to make the environment the command left. -/
structure CommandEntries where
  idx : Nat
  /-- The change of the main-branch view across the command. -/
  main : ViewStates
  /-- The change of the checked view across the command. -/
  checked : ViewStates
  /-- What the command added on its main branch and the realization contexts it registered, in order
  (`readdCommandConstants`). -/
  added : Array AddedConst := #[]
  /-- The counters and persistent tier across the command (`CountersDelta`). -/
  counters : CountersDelta := {}
  /-- Why the payload is not replayed: empty for a payload a keep replays. -/
  refusals : Array Refusal := #[]
  deriving Nonempty

/-- The form a module's command payloads take in its `.olean` (`commandEntriesExt` exports one, `CommandEntries.pack`):
all of them written in one pass into a byte string of unsigned LEB128 numbers (tags, counts, counters, the indices of
extension names) and arrays of the objects those refer to. The `.olean` holds a few objects for them instead of each
payload's tree of small ones, and refers to the objects the payloads share with the rest of the module (names, entries)
instead of repeating them. A part whose entries are the same array as an earlier part of its payload's (a realization
context's states mostly are its command's after-states, whose delta the recorder computes once) is written as a
reference to it, which unpacks to the same array again. `PackedPayloads.unpack` reads them back. -/
structure PackedPayloads where
  bytes : ByteArray := .empty
  /-- The distinct names of the extensions, scoped stacks and command caches parts are recorded for, indexed from
  `bytes`. -/
  parts : Array Name := #[]
  /-- The other names, in order: added constants, realizations, declaration-log entries, constant generations. -/
  names : Array Name := #[]
  entries : Array EnvExtensionEntry := #[]
  options : Array Options := #[]
  refusals : Array Refusal := #[]
  synthSet : Array (Meta.SynthInstanceCacheKey × List Meta.SynthInstanceCacheEntry) := #[]
  synthErased : Array Meta.SynthInstanceCacheKey := #[]
  deriving Inhabited

namespace PackedPayloads

private def kindToNat : ConstantKind → Nat
  | .defn => 0 | .thm => 1 | .axiom => 2 | .opaque => 3 | .quot => 4 | .induct => 5 | .ctor => 6 | .recursor => 7

private def kindOfNat? : Nat → Option ConstantKind
  | 0 => some .defn | 1 => some .thm | 2 => some .axiom | 3 => some .opaque | 4 => some .quot | 5 => some .induct
  | 6 => some .ctor | 7 => some .recursor | _ => none

/-- `b` followed by `n` in unsigned LEB128. -/
private partial def pushNat (b : ByteArray) (n : Nat) : ByteArray :=
  if n < 128 then b.push n.toUInt8 else pushNat (b.push (n % 128 + 128).toUInt8) (n / 128)

/-- The packing so far, its arrays at top level so that each push updates an unshared array in place. -/
private structure Writer where
  bytes : ByteArray := .emptyWithCapacity 4096
  parts : Array Name := #[]
  partIdx : Std.HashMap Name Nat := {}
  names : Array Name := #[]
  entries : Array EnvExtensionEntry := #[]
  options : Array Options := #[]
  refusals : Array Refusal := #[]
  synthSet : Array (Meta.SynthInstanceCacheKey × List Meta.SynthInstanceCacheEntry) := #[]
  synthErased : Array Meta.SynthInstanceCacheKey := #[]
  /-- The last `CountersDelta.extGens` written: a counters record with equal generations writes only a marker. -/
  lastExtGens : Array Nat := #[]
  /-- The parts of the payload being written so far, in order, which a later part with the same entries refers to. -/
  cmdParts : Array (Name × Array EnvExtensionEntry) := #[]

private abbrev W := StateM Writer

/-- Whether `a` and `b` are the same array object. Not equal elements: a payload read back from an `.olean` shares the
objects its compaction merged, so comparing elements would pack it in another form than the run that recorded it. -/
private unsafe def sameEntriesImpl (a b : Array EnvExtensionEntry) : Bool :=
  ptrAddrUnsafe a == ptrAddrUnsafe b

@[implemented_by sameEntriesImpl]
private opaque sameEntries (a b : Array EnvExtensionEntry) : Bool

@[inline] private def nat (n : Nat) : W Unit :=
  modify fun w => { w with bytes := pushNat w.bytes n }

@[inline] private def name (n : Name) : W Unit :=
  modify fun w => { w with names := w.names.push n }

private def nameArray (ns : Array Name) : W Unit := do
  nat ns.size
  modify fun w => { w with names := w.names ++ ns }

private def part (n : Name) : W Unit := do
  let w ← get
  match w.partIdx[n]? with
  | some i => nat i
  | none =>
    let i := w.parts.size
    set { w with parts := w.parts.push n, partIdx := w.partIdx.insert n i }
    nat i

/-- Each part: its extension's index, then `0` and the position of an earlier part of the payload with the same entries,
or the number of its entries plus one and the entries. -/
private def partArray (ps : Array (Name × Array EnvExtensionEntry)) : W Unit := do
  nat ps.size
  for (n, es) in ps do
    part n
    let earlier := (← get).cmdParts.findIdx? fun (n', es') => n' == n && sameEntries es es'
    match earlier with
    | some j => nat 0; nat j
    | none =>
      nat (es.size + 1)
      modify fun w => { w with entries := w.entries ++ es }
    modify fun w => { w with cmdParts := w.cmdParts.push (n, es) }

private def views (st : ViewStates) : W Unit := do
  partArray st.entries
  partArray st.scopedOps
  partArray st.caches

private def counters (c : CountersDelta) : W Unit := do
  nat c.trackedGen
  if c.extGens == (← get).lastExtGens then
    nat 0
  else
    nat (c.extGens.size + 1)
    for g in c.extGens do nat g
    modify fun w => { w with lastExtGens := c.extGens }
  nat c.constGen
  nat c.recordingConstGen
  nat c.declChangesAdded.length
  for n in c.declChangesAdded do name n
  nat c.constAddedGens.size
  for (n, g) in c.constAddedGens do
    name n
    nat g
  nat (c.synthTierGen?.map (· + 1) |>.getD 0)
  nat c.synthTierSet.size
  modify fun w => { w with synthSet := w.synthSet ++ c.synthTierSet }
  nat c.synthTierErased.size
  modify fun w => { w with synthErased := w.synthErased ++ c.synthTierErased }

private partial def added : AddedConst → W Unit
  | .plain n => do nat 0; name n
  | .async n k? states nested => do
    nat 1; name n
    nat (k?.map (kindToNat · + 1) |>.getD 0)
    views states
    nat nested.size
    for a in nested do added a
  | .realization forConst key consts states merges => do
    nat 2; name forConst; name key; nameArray consts; views states
    nat merges.size
    for (f, k) in merges do name f; name k
  | .merged forConst key consts => do
    nat 3; name forConst; name key; nameArray consts
  | .context forConst opts main checked c => do
    nat 4; name forConst
    modify fun w => { w with options := w.options.push opts }
    views main; views checked; counters c

private def entry (ce : CommandEntries) : W Unit := do
  modify fun w => { w with cmdParts := #[] }
  nat ce.idx
  views ce.main
  views ce.checked
  nat ce.added.size
  for a in ce.added do added a
  counters ce.counters
  nat ce.refusals.size
  modify fun w => { w with refusals := w.refusals ++ ce.refusals }

end PackedPayloads

/-- `ces` as a module's `.olean` stores them (`PackedPayloads`). -/
def CommandEntries.pack (ces : Array CommandEntries) : PackedPayloads :=
  let w := ((do PackedPayloads.nat ces.size; for ce in ces do PackedPayloads.entry ce) : PackedPayloads.W Unit).run {}
    |>.2
  { bytes := w.bytes, parts := w.parts, names := w.names, entries := w.entries, options := w.options,
    refusals := w.refusals, synthSet := w.synthSet, synthErased := w.synthErased }

namespace PackedPayloads

/-- How far `unpack` has read each part of the packing. -/
private structure Reader where
  pos : Nat := 0
  names : Nat := 0
  entries : Nat := 0
  options : Nat := 0
  refusals : Nat := 0
  synthSet : Nat := 0
  synthErased : Nat := 0
  lastExtGens : Array Nat := #[]
  /-- The parts of the payload being read so far (`partArray`), with their extensions. -/
  cmdParts : Array (Name × Array EnvExtensionEntry) := #[]
  /-- The indices into `PackedPayloads.parts` read so far. -/
  partsRead : Std.HashSet Nat := {}

private abbrev R := ReaderT PackedPayloads (StateT Reader (Except String))

/-- A number the writer wrote (`pushNat`), of at most ten bytes (below `2 ^ 70`): the writer writes counts, indices
and generation counters, all far below that. -/
private def readNat : R Nat := do
  let b := (← read).bytes
  let rec go (pos acc shift : Nat) : Except String (Nat × Nat) :=
    if h : pos < b.size then
      let byte := b[pos]
      let acc := acc + (byte.toNat % 128) * 2 ^ shift
      if byte < 128 then .ok (acc, pos + 1)
      else if shift ≥ 63 then .error "a number of the packed payloads is too long"
      else go (pos + 1) acc (shift + 7)
    else .error "the packed payloads end inside a number"
  termination_by b.size - pos
  let (n, pos) ← go (← getThe Reader).pos 0 0
  modifyThe Reader ({ · with pos })
  return n

/-- A count of elements that each take at least one byte, so no more than the bytes left: a malformed packing is
rejected before anything is allocated for it. -/
private def readByteCount : R Nat := do
  let n ← readNat
  unless n ≤ (← read).bytes.size - (← getThe Reader).pos do
    throw "a count of the packed payloads exceeds the bytes left"
  return n

/-- `xs[i:i+n]`, or an error naming `what` if `xs` is shorter. -/
private def slice {α : Type} (xs : Array α) (i n : Nat) (what : String) : Except String (Array α) :=
  if i + n ≤ xs.size then .ok (xs.extract i (i + n)) else .error s!"the packed payloads hold too few {what}"

private def readName : R Name := do
  let r ← getThe Reader
  let some n := (← read).names[r.names]? | throw "the packed payloads hold too few names"
  set { r with names := r.names + 1 }
  return n

private def readNames : R (Array Name) := do
  let n ← readNat
  let r ← getThe Reader
  let ns ← slice (← read).names r.names n "names"
  set { r with names := r.names + n }
  return ns

private def readParts : R (Array (Name × Array EnvExtensionEntry)) := do
  let n ← readByteCount
  let mut out := Array.emptyWithCapacity n
  for _ in [0:n] do
    let i ← readNat
    let some ext := (← read).parts[i]? | throw "a part index of the packed payloads is out of range"
    modifyThe Reader fun r => { r with partsRead := r.partsRead.insert i }
    let es ← match ← readNat with
      | 0 => do
        let some (ext', es) := (← getThe Reader).cmdParts[← readNat]? |
          throw "a part of the packed payloads refers to a part after it"
        unless ext' == ext do throw "a part of the packed payloads refers to a part of another extension"
        pure es
      | k + 1 => do
        let r ← getThe Reader
        let es ← slice (← read).entries r.entries k "entries"
        set { r with entries := r.entries + k }
        pure es
    modifyThe Reader fun r => { r with cmdParts := r.cmdParts.push (ext, es) }
    out := out.push (ext, es)
  return out

private def readViews : R ViewStates := do
  return { entries := ← readParts, scopedOps := ← readParts, caches := ← readParts }

private def readCounters : R CountersDelta := do
  let trackedGen ← readNat
  let extGens ← match ← readNat with
    | 0 => pure (← getThe Reader).lastExtGens
    | k + 1 => do
      unless k ≤ (← read).bytes.size - (← getThe Reader).pos do
        throw "a count of the packed payloads exceeds the bytes left"
      let mut gs := Array.emptyWithCapacity k
      for _ in [0:k] do gs := gs.push (← readNat)
      modifyThe Reader ({ · with lastExtGens := gs })
      pure gs
  let constGen ← readNat
  let recordingConstGen ← readNat
  let declChangesAdded := (← readNames).toList
  let n ← readByteCount
  let mut constAddedGens := Array.emptyWithCapacity n
  for _ in [0:n] do constAddedGens := constAddedGens.push (← readName, ← readNat)
  let synthTierGen? := match ← readNat with | 0 => none | g + 1 => some g
  let k ← readNat
  let r ← getThe Reader
  let synthTierSet ← slice (← read).synthSet r.synthSet k "synthesis cache bindings"
  set { r with synthSet := r.synthSet + k }
  let k ← readNat
  let r ← getThe Reader
  let synthTierErased ← slice (← read).synthErased r.synthErased k "synthesis cache keys"
  set { r with synthErased := r.synthErased + k }
  return { trackedGen, extGens, constGen, recordingConstGen, declChangesAdded, constAddedGens, synthTierGen?,
           synthTierSet, synthTierErased }

/-- How deep asynchronous constants' records may nest in a packing `unpack` accepts, so that a malformed packing cannot
exhaust the stack; a deeper one is rejected, and its module's commands are elaborated again. -/
private def maxAddedDepth : Nat := 256

private partial def readAdded (depth : Nat := 0) : R AddedConst := do
  match ← readNat with
  | 0 => return .plain (← readName)
  | 1 =>
    let n ← readName
    let k? ← match ← readNat with
      | 0 => pure none
      | k + 1 => match kindOfNat? k with
        | some k => pure (some k)
        | none => throw "a constant kind of the packed payloads is out of range"
    let states ← readViews
    let m ← readByteCount
    if m > 0 && depth ≥ maxAddedDepth then throw "the packed payloads nest records too deeply"
    let mut nested := #[]
    for _ in [0:m] do nested := nested.push (← readAdded (depth + 1))
    return .async n k? states nested
  | 2 =>
    let forConst ← readName
    let key ← readName
    let consts ← readNames
    let states ← readViews
    let m ← readNat
    unless 2 * m ≤ (← read).names.size - (← getThe Reader).names do
      throw "the packed payloads hold too few names"
    let mut merges := Array.emptyWithCapacity m
    for _ in [0:m] do merges := merges.push (← readName, ← readName)
    return .realization forConst key consts states merges
  | 3 => return .merged (← readName) (← readName) (← readNames)
  | 4 =>
    let forConst ← readName
    let r ← getThe Reader
    let some opts := (← read).options[r.options]? | throw "the packed payloads hold too few options"
    set { r with options := r.options + 1 }
    return .context forConst opts (← readViews) (← readViews) (← readCounters)
  | _ => throw "an added-constant tag of the packed payloads is out of range"

private def readEntry : R CommandEntries := do
  modifyThe Reader ({ · with cmdParts := #[] })
  let idx ← readNat
  let main ← readViews
  let checked ← readViews
  let n ← readByteCount
  let mut added := Array.emptyWithCapacity n
  for _ in [0:n] do added := added.push (← readAdded)
  let counters ← readCounters
  let k ← readNat
  let r ← getThe Reader
  let refusals ← slice (← read).refusals r.refusals k "refusals"
  set { r with refusals := r.refusals + k }
  return { idx, main, checked, added, counters, refusals }

/-- The payloads `p` holds (`CommandEntries.pack`), or why `p` is not a packing of payloads: it ends early, a count, an
index or a tag is out of range, a part refers to a later part or to another extension's, a part name is repeated, or
something is left over. -/
def unpack (p : PackedPayloads) : Except String (Array CommandEntries) := do
  let act : R (Array CommandEntries) := do
    let n ← readByteCount
    let mut out := Array.emptyWithCapacity n
    for _ in [0:n] do out := out.push (← readEntry)
    let r ← getThe Reader
    unless r.pos == p.bytes.size && r.names == p.names.size && r.entries == p.entries.size &&
        r.options == p.options.size && r.refusals == p.refusals.size && r.synthSet == p.synthSet.size &&
        r.synthErased == p.synthErased.size && r.partsRead.size == p.parts.size do
      throw "the packed payloads hold more than their payloads"
    unless (p.parts.foldl (·.insert ·) ({} : Std.HashSet Name)).size == p.parts.size do
      throw "the packed payloads name a part twice"
    return out
  return (← (act.run p).run {}).1

end PackedPayloads

builtin_initialize commandEntriesExt :
    PersistentEnvExtension PackedPayloads CommandEntries (Array CommandEntries) ←
  registerPersistentEnvExtension {
    mkInitial := pure #[]
    addImportedFn := fun _ => pure #[]
    addEntryFn := Array.push
    exportEntriesFnEx := fun _ entries =>
      { exported := #[], server := #[], «private» := if entries.isEmpty then #[] else #[CommandEntries.pack entries] }
    asyncMode := .mainOnly
    perCommand := .recorder
  }

private unsafe def ofModuleDataImpl? (md : ModuleData) : Except String (Array CommandEntries) :=
  match md.entries.find? (·.1 == commandEntriesExt.name) with
  | none => .ok #[]
  | some (_, #[p]) => (unsafeCast p : PackedPayloads).unpack
  | some (_, es) => .error s!"the `.olean` holds {es.size} packings of command payloads"

/-- The command payloads a module's `.olean` data holds (`PackedPayloads.unpack`), or why they cannot be read. -/
@[implemented_by ofModuleDataImpl?]
opaque CommandEntries.ofModuleData? (md : ModuleData) : Except String (Array CommandEntries)

/-- The command payloads a module's `.olean` data holds; none if they cannot be read (`ofModuleData?`). -/
def CommandEntries.ofModuleData (md : ModuleData) : Array CommandEntries :=
  (ofModuleData? md).toOption.getD #[]

private abbrev ErasedPersistentEnvExtension :=
  PersistentEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

private abbrev ErasedScopedEnvExtension :=
  ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState

/-- The registered persistent and scoped extensions and command caches, in registration order and by name, and the
extension indices they cover. -/
private structure Registries where
  persistent : Array ErasedPersistentEnvExtension
  caches : Array CommandCacheExtension
  persistentByName : Std.HashMap Name ErasedPersistentEnvExtension
  scopedByName : Std.HashMap Name ErasedScopedEnvExtension
  cacheByName : Std.HashMap Name CommandCacheExtension
  /-- The indices of the persistent extensions and command caches; every other extension has no payload. -/
  recordedIdxs : Std.HashSet Nat
  /-- Every extension's name, by index. -/
  names : Array Name

private def Registries.get : IO Registries := do
  let persistent ← persistentEnvExtensionsRef.get
  let caches ← commandCacheExtensionsRef.get
  return {
    persistent, caches
    persistentByName := persistent.foldl (fun m e => m.insert e.name e) {}
    scopedByName := (← scopedEnvExtensionsRef.get).foldl (fun m e => m.insert e.ext.name e) {}
    cacheByName := caches.foldl (fun m e => m.insert e.name e) {}
    recordedIdxs := caches.foldl (·.insert ·.ext.idx) (persistent.foldl (·.insert ·.toEnvExtension.idx) {})
    names := (← EnvExtension.envExtensionsRef.get).map (·.name) }

/-- What the change of `ext`'s state from `s₀` to `s₁` is: nothing when they are the same object, else the extension's
`stateDelta?`, `stateOnly` without one. -/
private def stateChange (ext : ErasedPersistentEnvExtension) (s₀ s₁ : EnvExtensionState) :
    StateDelta EnvExtensionEntry :=
  if SharedDiff.sameObject s₀ s₁ then .entries #[]
  else (ext.stateDelta?.map (· s₀ s₁)).getD .stateOnly

private unsafe def stateInImpl (ext : ErasedPersistentEnvExtension) (kenv : Kernel.Environment) :
    EnvExtensionState :=
  (ext.toEnvExtension.getStateImpl kenv.extensions).state

/-- `ext`'s state in a kernel environment's extensions. -/
@[implemented_by stateInImpl]
private opaque stateIn (ext : ErasedPersistentEnvExtension) (kenv : Kernel.Environment) : EnvExtensionState

private unsafe def cacheStateInImpl (ext : CommandCacheExtension) (kenv : Kernel.Environment) :
    EnvExtensionState :=
  ext.ext.getStateImpl kenv.extensions

/-- A command cache's state in a kernel environment's extensions. -/
@[implemented_by cacheStateInImpl]
private opaque cacheStateIn (ext : CommandCacheExtension) (kenv : Kernel.Environment) : EnvExtensionState

private unsafe def stackDeltaImpl (s₀ s₁ : EnvExtensionState) : Option (Array EnvExtensionEntry) :=
  (ScopedEnvExtension.stackDelta (α := EnvExtensionEntry) (β := EnvExtensionEntry) (σ := EnvExtensionState)
    (unsafeCast s₀) (unsafeCast s₁)).map (·.map unsafeCast)

/-- `ScopedEnvExtension.stackDelta` on two erased stacks, each operation erased. -/
@[implemented_by stackDeltaImpl]
private opaque stackDelta (s₀ s₁ : EnvExtensionState) : Option (Array EnvExtensionEntry)

private unsafe def opOfEntryImpl (e : EnvExtensionEntry) : ScopedEnvExtension.Op EnvExtensionEntry := unsafeCast e

@[implemented_by opOfEntryImpl]
private opaque opOfEntry (e : EnvExtensionEntry) : ScopedEnvExtension.Op EnvExtensionEntry

private unsafe def addrOfImpl {α : Type} (a : α) : USize := ptrAddrUnsafe a

/-- `a`'s address: a key for an object that stays alive while it is used. -/
@[implemented_by addrOfImpl]
private opaque addrOf {α : Type} (a : α) : USize

/-- What `viewStatesMemo` computed between two states (their addresses): an extension's entries (kind 0, keyed by its
index), its scoped stack's operations (1, the same) or a cache's entries (2, keyed by its position in
`Registries.caches`: several caches can read one extension), `none` for a change no entry expresses. One command's
recording keeps it, while every state it is keyed by stays alive: a realization context's states mostly are its
command's. -/
private abbrev DeltaMemo := Std.HashMap (Nat × Nat × USize × USize) (Option (Array EnvExtensionEntry))

/-- The change of `view` from `k₀` to `k₁`, two kernel environments of that view (`ViewStates`), and why it is not
replayable, each refusal naming `at?`: a change no entry expresses (an unaccounted write, a `stateOnly` delta, a scoped
stack written other than by its operations), a change to an extension payloads do not carry, entries an extension
cannot replay, and a write to an extension that is neither persistent nor a command cache. Extensions registered after
the environments were created (by initializers an `#eval` ran) have no state in them and are skipped. -/
private def viewStatesMemo (regs : Registries) (view : EnvExtension.View) (k₀ k₁ : Kernel.Environment)
    (at? : Option Name) (memo : DeltaMemo) : ViewStates × Array Refusal × DeltaMemo := Id.run do
  let mut memo := memo
  let n := min k₀.extensions.size k₁.extensions.size
  let sameWrites := SharedDiff.sameObject k₀.unaccountedWrites k₁.unaccountedWrites
  -- per extension index below `n`, whether its state slot or its unaccounted-write count differs: an extension where
  -- neither does records nothing below, and for most commands nearly every extension is such
  let mut changed : Array Bool := .emptyWithCapacity n
  for idx in [:n] do
    let sameSlot := match k₀.extensions[idx]?, k₁.extensions[idx]? with
      | some s₀, some s₁ => SharedDiff.sameObject s₀ s₁
      | _, _ => true
    changed := changed.push <|
      !sameSlot || (!sameWrites && k₀.unaccountedWrites.findD idx 0 != k₁.unaccountedWrites.findD idx 0)
  let mut st : ViewStates := {}
  let mut refused := #[]
  for ext in regs.persistent do
    if ext.perCommand == .recorder then continue
    let idx := ext.toEnvExtension.idx
    unless changed[idx]?.getD false do continue
    let s₀ := stateIn ext k₀
    let s₁ := stateIn ext k₁
    if ext.perCommand == .notCarried then
      unless SharedDiff.sameObject s₀ s₁ do refused := refused.push (.notCarried ext.name at?)
      continue
    let isScoped := regs.scopedByName.contains ext.name
    if k₀.unaccountedWrites.findD idx 0 != k₁.unaccountedWrites.findD idx 0 then
      refused := refused.push (.inexpressible ext.name at?)
    else if isScoped && view == .main then
      let key := (idx, 1, addrOf s₀, addrOf s₁)
      let ops? := match memo[key]? with
        | some r => r
        | none => stackDelta s₀ s₁
      memo := memo.insert key ops?
      match ops? with
      | some ops => unless ops.isEmpty do st := { st with scopedOps := st.scopedOps.push (ext.name, ops) }
      | none => refused := refused.push (.inexpressible ext.name at?)
    else
      let key := (idx, 0, addrOf s₀, addrOf s₁)
      let es? := match memo[key]? with
        | some r => r
        | none => match stateChange ext s₀ s₁ with
          | .entries es => some es
          | .stateOnly => none
      memo := memo.insert key es?
      match es? with
      | some es =>
        unless es.isEmpty do
          if isScoped || ext.ofOLeanEntry?.isSome then st := { st with entries := st.entries.push (ext.name, es) }
          else refused := refused.push (.unreplayable ext.name at?)
      | none => refused := refused.push (.inexpressible ext.name at?)
  for cache in regs.caches, ci in [:regs.caches.size] do
    unless changed[cache.ext.idx]?.getD false do continue
    let c₀ := cacheStateIn cache k₀
    let c₁ := cacheStateIn cache k₁
    let key := (ci, 2, addrOf c₀, addrOf c₁)
    let es := match memo[key]? with
      | some (some es) => es
      | _ => cache.stateDelta c₀ c₁
    memo := memo.insert key (some es)
    unless es.isEmpty do st := { st with caches := st.caches.push (cache.name, es) }
  for idx in [:n] do
    unless changed[idx]?.getD false do continue
    if regs.recordedIdxs.contains idx then continue
    refused := refused.push (.unrecorded (regs.names[idx]?.getD .anonymous) at?)
  return (st, refused, memo)

/-- `viewStatesMemo` without a memo. -/
private def viewStates (regs : Registries) (view : EnvExtension.View) (k₀ k₁ : Kernel.Environment)
    (at? : Option Name := none) : ViewStates × Array Refusal :=
  let (st, r, _) := viewStatesMemo regs view k₀ k₁ at? {}
  (st, r)

/-- The cells of `l` in front of its tail `stop` (by cell identity), oldest first, each with the list after it. -/
private unsafe def cellsSinceImpl (l stop : List AsyncConst) : Option (List (AsyncConst × List AsyncConst)) :=
  go l []
where
  go (l : List AsyncConst) (acc : List (AsyncConst × List AsyncConst)) :
      Option (List (AsyncConst × List AsyncConst)) :=
    if ptrAddrUnsafe l == ptrAddrUnsafe stop then some acc
    else match l with
      | [] => none
      | c :: rest => go rest ((c, rest) :: acc)

@[implemented_by cellsSinceImpl]
private opaque cellsSince (l stop : List AsyncConst) : Option (List (AsyncConst × List AsyncConst))

private unsafe def contextEnvImpl (ctx : RealizationContext) : Environment := unsafeCast ctx.env

@[implemented_by contextEnvImpl]
private opaque contextEnv (ctx : RealizationContext) : Environment

private unsafe def contextStartedFromImpl (env : Environment) (forConst : Name) (base : Kernel.Environment) : Bool :=
  (env.realizationContext? forConst).any fun ctx => ptrAddrUnsafe (contextEnv ctx).base.private == ptrAddrUnsafe base

/-- Whether the realization context `forConst` resolves to in `env` (`Environment.realizationContext?`: the import
context, or a local one an earlier command or this command registered on the main branch) has `base` as its
environment's main-branch view: a realization that started from `base` ran in that context, which a keep provides. -/
@[implemented_by contextStartedFromImpl]
private opaque contextStartedFrom (env : Environment) (forConst : Name) (base : Kernel.Environment) : Bool

/-- What the recorder collects while walking a command's additions. -/
private structure Walk where
  /-- The command's after-environment, whose realization contexts realizations must have run in. -/
  after : Environment
  /-- The main-branch view of the command's before-environment, which branch states are relative to. -/
  before : Kernel.Environment
  /-- The checked view of the command's before-environment. -/
  beforeKernel : Kernel.Environment

/--
`cells`, the constants one constant map gained (oldest first, each with the list after it, which is the map an
asynchronous constant's branch forked from), as `AddedConst`s in order, each with the index of its cell: an `async`
record with its branch's own additions (`cellsSince` its map and the tail after it) for a constant with states of its
own; one record per realization, with all the constants `realize` added itself, at the position of the last of them (a
realization requested inside another one merged its constants into the outer one's before the outer one's own, so its
record comes first; the outer record's `merges`, which `attachMerges` fills, lists it); `plain` for the rest; `self?`
(inside its own branch) as `plain`. A realization whose constants the before-environment already holds was made by an
earlier command and merged here from the cache: it is a `merged` record. Also why the records cannot be replayed.
-/
private partial def addedConsts (regs : Registries) (w : Walk) (cells : List (AsyncConst × List AsyncConst))
    (exportedKind : AsyncConst → Option ConstantKind) (self? : Option Name := none) :
    Array (Nat × AddedConst) × Array Refusal := Id.run do
  -- per realization key, the index of its last constant
  let mut last : Std.HashMap (Name × Name) Nat := {}
  for h : k in [:cells.length] do
    if let some info := cells[k].1.realization? then
      last := last.insert (info.forConst, info.constName) k
  let mut out : Array (Nat × AddedConst) := #[]
  let mut refused := #[]
  -- per realization key, its constants so far and how many of them the before-environment holds
  let mut realized : Std.HashMap (Name × Name) (Array Name × Nat) := {}
  for (k, (c, tail)) in (List.range cells.length).zip cells do
    let name := c.constInfo.name
    if self? == some name then
      out := out.push (k, .plain name)
      continue
    match c.realization?, c.kenv? with
    | some info, some kenv =>
      let key := (info.forConst, info.constName)
      let (names, held) := realized.getD key (#[], 0)
      let names := names.push name
      let held := held + if (w.beforeKernel.find? name).isSome then 1 else 0
      realized := realized.insert key (names, held)
      unless last[key]? == some k do continue
      if held == names.size then
        out := out.push (k, .merged info.forConst info.constName names)
      else if held > 0 then
        refused := refused.push (.partlyHeldRealization name)
      else if !contextStartedFrom w.after info.forConst info.base then
        refused := refused.push (.foreignRealizationContext name)
      else
        let (states, r) := viewStates regs .main info.base kenv.get (at? := name)
        refused := refused ++ r
        out := out.push (k, .realization info.forConst info.constName names states #[])
    | none, some kenv =>
      if c.isRealized then
        refused := refused.push (.realizedWithoutRealization name)
      else
        let (states, r) := viewStates regs .main w.before kenv.get (at? := name)
        refused := refused ++ r
        match cellsSince c.aconsts.get.revList tail with
        | some own =>
          let (nested, r') := addedConsts regs w own (fun c => some c.constInfo.kind) (self? := some name)
          refused := refused ++ r'
          out := out.push (k, .async name (exportedKind c) states (nested.map (·.2)))
        | none => refused := refused.push (.unrelatedConstMap name)
    | _, none => out := out.push (k, .plain name)
  return (out, refused)

/-- The change of `before`'s counters and persistent tier to `after`'s (`CountersDelta`), `none` if `after`'s
declaration log does not extend `before`'s or `after` lacks a constant generation `before` has. -/
private def countersDelta (before after : Environment) : Option CountersDelta := do
  let (constAddedGens, removed) := PersistentHashMap.sharedDiff before.constAddedGens after.constAddedGens
  unless removed.isEmpty do none
  let declChangesAdded ← List.newPrefix? after.declChangeLog.entries before.declChangeLog.entries
  let (synthTierGen?, synthTierSet, synthTierErased) := match after.storedSynthCache? with
    | none => (none, #[], #[])
    | some (gen, entries) =>
      let (set, erased) := PersistentHashMap.sharedDiff ((before.storedSynthCache?.map (·.2)).getD {}) entries
      (some gen, set, erased)
  return { trackedGen := after.trackedGen, extGens := after.base.private.extGens, constGen := after.constGen,
           recordingConstGen := after.recordingConstGen, declChangesAdded, constAddedGens,
           synthTierGen?, synthTierSet, synthTierErased }

/-- Whether `countersDelta` reads the same of `e₁` as of `e₂`: the same counters, and the same constant generations,
declaration log and stored tier objects. -/
private def sameCounters (e₁ e₂ : Environment) : Bool :=
  e₁.trackedGen == e₂.trackedGen && e₁.constGen == e₂.constGen && e₁.recordingConstGen == e₂.recordingConstGen &&
    e₁.base.private.extGens == e₂.base.private.extGens &&
    SharedDiff.sameObject e₁.constAddedGens e₂.constAddedGens &&
    SharedDiff.sameObject e₁.declChangeLog e₂.declChangeLog &&
    SharedDiff.sameObject e₁.storedSynthCache? e₂.storedSynthCache?

/-- `env`, an environment whose counters and tier were what `c` started from, with them as `c` leaves them. -/
private def applyCounters (env : Environment) (c : CountersDelta) : Environment :=
  let env := { env with
    base.private.trackedGen := c.trackedGen
    base.private.extGens := c.extGens
    constGen := c.constGen
    recordingConstGen := c.recordingConstGen
    declChangeLog := c.declChangesAdded.foldr (fun d log => log.push d) env.declChangeLog
    constAddedGens := c.constAddedGens.foldl (fun m (n, g) => m.insert n g) env.constAddedGens }
  env.setStoredSynthCache <| c.synthTierGen?.map fun gen =>
    let entries := (env.storedSynthCache?.map (·.2)).getD {}
    (gen, c.synthTierErased.foldl (·.erase ·) (c.synthTierSet.foldl (fun m (k, v) => m.insert k v) entries))

/-- The realization contexts the command registered on the main branch, in registration order, each as a `context`
record with its position among the command's main-branch constants (how many of them its environment held). -/
private def addedContexts (regs : Registries) (before after : Environment) (memo : DeltaMemo)
    (afterCounters? : Option CountersDelta) : Array (Nat × AddedConst) × Array Refusal := Id.run do
  let n₀ := before.asyncConstsMap.private.size
  let mut ctxs : Array (Nat × Nat × AddedConst) := #[]
  let mut refused := #[]
  let mut memo := memo
  for (c, ctx) in (NameMap.sharedDiff before.localRealizationCtxMap after.localRealizationCtxMap).1 do
    let ctxEnv := contextEnv ctx
    let (main, r₁, memo') := viewStatesMemo regs .main before.base.private ctxEnv.base.private (some c) memo
    let (checked, r₂, memo') := viewStatesMemo regs .checked before.checked.get ctxEnv.checked.get (some c) memo'
    memo := memo'
    refused := refused ++ r₁ ++ r₂
    let counters? := if sameCounters after ctxEnv then afterCounters? else countersDelta before ctxEnv
    if counters?.isNone then refused := refused.push (.inexpressible `Lean.Environment.declChangeLog c)
    ctxs := ctxs.push (ctxEnv.asyncConstsMap.private.size - n₀, ctxEnv.localRealizationCtxMap.size,
      .context c ctx.opts main checked (counters?.getD {}))
  -- a context's environment holds the contexts registered before it: their count orders them
  let sorted := ctxs.qsort fun (p₁, o₁, _) (p₂, o₂, _) => p₁ < p₂ || (p₁ == p₂ && o₁ < o₂)
  return (sorted.map fun (p, _, a) => (p, a), refused)

/-- `recs` (each with its cell index) and `ctxs` (each with the number of cells its environment held), both in order,
merged: a context before the first record whose cell its environment did not hold. -/
private def mergeAtPositions (recs ctxs : Array (Nat × AddedConst)) : Array AddedConst := Id.run do
  let mut out := #[]
  let mut j := 0
  for (k, r) in recs do
    while h : j < ctxs.size do
      unless ctxs[j].1 ≤ k do break
      out := out.push ctxs[j].2
      j := j + 1
    out := out.push r
  return out ++ (ctxs.extract j).map (·.2)

/-- `a` with each `realization` record's `merges` read from the result its context caches in `after`
(`Environment.realizationMerges`), in nested records too. -/
private partial def attachMerges (after : Environment) : AddedConst → BaseIO AddedConst
  | .realization forConst key consts states _ =>
    return .realization forConst key consts states (← after.realizationMerges forConst key)
  | .async n exportedKind? states nested => return .async n exportedKind? states (← nested.mapM (attachMerges after))
  | a => return a

/-- Whether `kenv` holds the constant `info` describes as `info` does (kind, level parameters, type and value). -/
private def kernelHolds (kenv : Kernel.Environment) (info : ConstantInfo) : Bool :=
  match kenv.find? info.name with
  | none => false
  | some k => SharedDiff.sameObject k info || (ConstantKind.ofConstantInfo k == .ofConstantInfo info &&
      k.levelParams == info.levelParams && k.type.equal info.type &&
      match k.value? (allowOpaque := true), info.value? (allowOpaque := true) with
      | some v, some w => v.equal w
      | none, none => true
      | _, _ => false)

/-- The constants `cells` (the cells one constant map gained, each with the map after it) give the elaborator, with
each asynchronous branch's own additions (`cellsSince` its map and the tail after it). -/
private partial def elaboratorConsts (cells : List (AsyncConst × List AsyncConst)) : Array ConstantInfo := Id.run do
  let mut out := #[]
  for (c, tail) in cells do
    out := out.push c.constInfo.toConstantInfo
    if c.kenv?.isSome && c.realization?.isNone then
      if let some own := cellsSince c.aconsts.get.revList tail then
        out := out ++ elaboratorConsts (own.filter (·.1.constInfo.name != c.constInfo.name))
  return out

/-- Whether the kernel environment gained, from `before` to `after`, exactly the constants of `elabConsts` (what the
elaborator gained, `elaboratorConsts`) that it did not hold before, each as the elaborator has it (`kernelHolds`), and
lost none (`SMap.sharedDiff?`); a kernel constant map whose imported part changed does not match. -/
private def kernelMatchesElaborator (before after : Kernel.Environment) (elabConsts : Array ConstantInfo) : Bool :=
  match before.constants.sharedDiff? after.constants with
  | none => false
  | some (gained, lost) =>
    let (_, new) := elabConsts.foldl (init := ((∅ : NameSet), 0)) fun (seen, n) info =>
      if (before.find? info.name).isSome || seen.contains info.name then (seen, n) else (seen.insert info.name, n + 1)
    lost.isEmpty && elabConsts.all (kernelHolds after) && new == gained.size

/-- One command's payload (`recordCommandDelta`) with the registries `regs`. -/
private def recordCommandDeltaWith (regs : Registries) (before after : Environment) (idx : Nat) :
    BaseIO CommandEntries := do
  -- the command's views first: its realization contexts' states mostly are its after-states, whose deltas the memo
  -- then holds
  let (main, r₁, memo) := viewStatesMemo regs .main before.base.private after.base.private none {}
  let (checked, r₂, memo) := viewStatesMemo regs .checked before.checked.get after.checked.get none memo
  let counters? := countersDelta before after
  let mut refusals := r₁ ++ r₂
  if before.checked.get.divergentAdds != after.checked.get.divergentAdds then
    refusals := refusals.push (.divergentKernelAdd (unchecked := true))
  let w : Walk := { after, before := before.base.private, beforeKernel := before.checked.get }
  let exportedKind (c : AsyncConst) := (after.asyncConstsMap.public.find? c.constInfo.name).map (·.constInfo.kind)
  let mut added := #[]
  match cellsSince after.asyncConstsMap.private.revList before.asyncConstsMap.private.revList with
  | none => refusals := refusals.push (.unrelatedConstMap none)
  | some cells =>
    unless kernelMatchesElaborator before.checked.get after.checked.get (elaboratorConsts cells) do
      refusals := refusals.push (.divergentKernelAdd (unchecked := false))
    let (ctxs, rc) := addedContexts regs before after memo counters?
    let (recs, r) := addedConsts regs w cells exportedKind
    added ← (mergeAtPositions recs ctxs).mapM (attachMerges after)
    refusals := refusals ++ rc ++ r
  if counters?.isNone then refusals := refusals.push (.inexpressible `Lean.Environment.declChangeLog)
  return { idx, main, checked, added, counters := counters?.getD {}, refusals := Refusal.addNew #[] refusals }

/-- One command's payload: the change of each view (`viewStates`); what the command added on its main branch, with
each asynchronous constant's branch additions and states, each realization's constants, states and the realizations
it merged, each realization merged from the cache, and each realization context it registered with its options and
states, in order (`CommandEntries.added`); and why it cannot be replayed (`CommandEntries.refusals`), including a
kernel constant checking the elaborator's would not give (`Refusal.divergentKernelAdd`; a realization adds its
constants unchecked in its own environment and is checked where it is merged, so only the command's own count of
unchecked additions). Takes time proportional to what the command changed, apart from the per-extension state reads.
-/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO CommandEntries := do
  recordCommandDeltaWith (← Registries.get) before after idx

/-- `f` of each of up to `lanes` contiguous blocks of `xs`, each in its own task, concatenated in order; `f` gives as many
results as its block has elements. The first error in that order is rethrown. For the recorder's per-command work at
the end of a module: it reads the finished commands' states only, so the commands' records do not depend on each
other. Few lanes: the commands' states are shared objects, whose reference counts every lane updates, so that many
lanes spend more time contending for them than they save. Each task inherits the calling thread's task context, so
that none of its effects is noted against a command. With one lane, `f` runs on the calling thread. -/
def CommandEntries.parallelBlocks {α β : Type} (xs : Array α) (f : Array α → IO (Array β)) (lanes : Nat := 4) :
    IO (Array β) := do
  if lanes ≤ 1 || xs.size ≤ 1 then return ← f xs
  let size := (xs.size + lanes - 1) / lanes
  let mut tasks := #[]
  for k in [0:lanes] do
    let part := xs.extract (k * size) ((k + 1) * size)
    unless part.isEmpty do tasks := tasks.push (← IO.asTask (f part))
  let mut out := Array.emptyWithCapacity xs.size
  for t in tasks do
    out := out ++ (← IO.ofExcept (← IO.wait t))
  return out

/-- `f` of each element of `xs`, in order, in `lanes` tasks (`CommandEntries.parallelBlocks`). -/
def CommandEntries.parallelMap {α β : Type} (xs : Array α) (f : α → IO β) (lanes : Nat := 4) : IO (Array β) :=
  CommandEntries.parallelBlocks xs (·.mapM f) lanes

/-- `recordCommandDelta`, with the extension registries read once, now: for recording many commands. -/
def commandDeltaRecorder : IO (Environment → Environment → Nat → BaseIO CommandEntries) :=
  return recordCommandDeltaWith (← Registries.get)

/-- Whether a payload can hold `a`: its contents have a digest (`ModuleUsage.objectsDigests`), so it holds no closure,
external object, unresolved promise or reference. -/
private def compacts (a : α) : Bool :=
  (ModuleUsage.objectsDigests #[a])[0]?.join.isSome

/-- `parts` without those that do not compact, each refused (`Refusal.uncompactable`, in the record of `at?`). -/
private def compactingParts (parts : Array (Name × Array EnvExtensionEntry)) (at? : Option Name) :
    IO (Array (Name × Array EnvExtensionEntry) × Array Refusal) := do
  let mut kept := #[]
  let mut refused := #[]
  for (part, es) in parts do
    if compacts es then kept := kept.push (part, es)
    else refused := refused.push (.uncompactable part at?)
  return (kept, refused)

/-- `st` without its parts that do not compact (`compactingParts`). -/
private def compactingStates (st : ViewStates) (at? : Option Name) : IO (ViewStates × Array Refusal) := do
  let (entries, r₁) ← compactingParts st.entries at?
  let (scopedOps, r₂) ← compactingParts st.scopedOps at?
  let (caches, r₃) ← compactingParts st.caches at?
  return ({ entries, scopedOps, caches }, r₁ ++ r₂ ++ r₃)

/-- `a` with every state part that does not compact left out (`compactingStates`), in nested records too. -/
private partial def compactingRecord : AddedConst → IO (AddedConst × Array Refusal)
  | .async n k states nested => do
    let (states, r) ← compactingStates states (some n)
    let mut rs := r
    let mut nested' := #[]
    for a in nested do
      let (a, r') ← compactingRecord a
      nested' := nested'.push a
      rs := rs ++ r'
    return (.async n k states nested', rs)
  | .realization forConst key consts states merges => do
    let (states, r) ← compactingStates states (some key)
    return (.realization forConst key consts states merges, r)
  | .context forConst opts main checked counters => do
    let (main, r₁) ← compactingStates main (some forConst)
    let (checked, r₂) ← compactingStates checked (some forConst)
    return (.context forConst opts main checked counters, r₁ ++ r₂)
  | a => return (a, #[])

/-- `ce`, a payload that does not compact whole, as an `.olean` stores it: every recorded part that holds a value a
payload cannot hold (`compacts`) is left out and refused (`Refusal.uncompactable`). -/
def CommandEntries.withoutUncompactable (ce : CommandEntries) : IO CommandEntries := do
  let (main, r₁) ← compactingStates ce.main none
  let (checked, r₂) ← compactingStates ce.checked none
  let mut refused := ce.refusals ++ r₁ ++ r₂
  let mut added := #[]
  for a in ce.added do
    let (a, r) ← compactingRecord a
    added := added.push a
    refused := refused ++ r
  return { ce with main, checked, added, refusals := Refusal.addNew #[] refused }

/-- Replaces the current module's command payload with `entries` before writing its `.olean`. -/
def setCommandEntries (env : Environment) (entries : Array CommandEntries) : Environment :=
  commandEntriesExt.modifyState env fun _ => entries

/-- Why none of the module's commands may be kept: a declaration command (`isDecl` of its index) has a refusal. A
non-declaration command with one is elaborated again rather than replayed, so it does not prevent reuse. -/
def commandEntriesNoreuseReason? (entries : Array CommandEntries) (isDecl : Nat → Bool) : Option String :=
  entries.findSome? fun ce =>
    if isDecl ce.idx then ce.refusals[0]?.map (s!"declaration command {ce.idx}: {·}") else none

private def isIR (n : Name) : Bool := n == `Lean.IR.declMapExt
private def isLCNF (n : Name) : Bool := (`Lean.Compiler.LCNF).isPrefixOf n

/-- Replays `entries`, recorded for the persistent extension `name` in `view`, into that view of `env`. -/
private def replayViewEntries (regs : Registries) (env : Environment) (view : EnvExtension.View) (name : Name)
    (entries : Array EnvExtensionEntry) (opts : Options) : IO Environment := do
  let mut env := env
  let some ext := regs.persistentByName[name]? |
    throw <| IO.userError s!"unknown environment extension {name}"
  let some ofOLeanEntry := ext.ofOLeanEntry? |
    throw <| IO.userError s!"unreplayable extension {name}"
  for entry in entries do
    let b ← ofOLeanEntry (ext.toEnvExtension.getStateIn env view).state entry |>.run { env, opts }
    env := ext.addEntryIn env view b
  return env

/-- Replays changes recorded per view (`ViewStates`) into those views of `env`: persistent extensions' entries with the
IR declarations first, then the LCNF extensions, then the rest (later conversions may read the compiled code), then
scoped stacks, then command caches. Every keep path (a command, a branch, a realization, a context) uses it. -/
private def replayStates (regs : Registries) (env : Environment) (parts : Array (EnvExtension.View × ViewStates))
    (opts : Options) : IO Environment := do
  let entries := parts.flatMap fun (view, st) => st.entries.map fun (n, es) => (view, n, es)
  let order := entries.filter (isIR ·.2.1) ++ entries.filter (isLCNF ·.2.1) ++
    entries.filter fun e => !isIR e.2.1 && !isLCNF e.2.1
  let mut env := env
  for (view, name, es) in order do
    env ← replayViewEntries regs env view name es opts
  for (view, st) in parts do
    for (name, ops) in st.scopedOps do
      let some ext := regs.scopedByName[name]? |
        throw <| IO.userError s!"unknown scoped environment extension {name}"
      env ← ext.replayOpsIn env view (ops.map opOfEntry) |>.run { env, opts }
    for (name, es) in st.caches do
      let some cache := regs.cacheByName[name]? |
        throw <| IO.userError s!"unknown command cache extension {name}"
      env := cache.replayIn env view es
  return env

/-- Evidence that a module's command payloads may be kept into one environment: the module's `.olean` and `.usage`
belong together, and every check on the module's import closure that Lake makes before it skips the module holds in
that environment (`ModuleUsage.keepPermit`, its only maker). The permit holds the payloads it was checked for, and a keep
takes only those, into an environment with that module as its main module and the imports it was checked against (the
same imported module data, compared by identity). A command's records list the constants it used, but no name
resolution of its own, and a command can depend on the module the resolver picks for a name that occurs in none of its
terms (the reducibility of a constant its tactic unfolds, a compiled name); so a command is kept only where all of the
module's recorded resolutions hold. -/
structure KeepPermit where
  private mk ::
  /-- The module the payloads are of. -/
  module : Name
  /-- The module's `.olean` data, read by `ModuleUsage.keepPermit`. -/
  data : ModuleData
  /-- The module's command payloads (`CommandEntries.ofModuleData? data`), the only ones a keep with the permit takes. -/
  payloads : Array CommandEntries
  /-- The imported module data of the environment the permit was checked in (`EnvironmentHeader.moduleData`). -/
  private imports : Array ModuleData

/-- Throws unless `permit` holds the payload `ce` and was checked in an environment with `env`'s main module and imports.
-/
private def KeepPermit.check (permit : KeepPermit) (env : Environment) (ce : CommandEntries) : IO Unit := do
  unless SharedDiff.sameObject permit.imports env.header.moduleData do
    throw <| IO.userError "reuse: the keep permit was checked in an environment with other imports"
  unless env.mainModule == permit.module do
    throw <| IO.userError s!"reuse: the keep permit is for {permit.module}, not {env.mainModule}"
  unless permit.payloads.any (SharedDiff.sameObject · ce) do
    throw <| IO.userError s!"reuse: command {ce.idx}'s payload is not one the keep permit holds"

/-- Plan §1.4 step 3: replays a command payload's change of both views into `env`, the environment after
`readdCommandConstants`, and sets its counters and persistent tier as the command left them (`applyCounters`). Throws on
a payload with refusals, or one `permit` does not hold for `env` (`KeepPermit`). -/
def replayCommandEntries (permit : KeepPermit) (env : Environment) (ce : CommandEntries) (opts : Options) :
    IO Environment := do
  permit.check env ce
  unless ce.refusals.isEmpty do
    throw <| IO.userError s!"command {ce.idx} is not replayable ({ce.refusals}); it must be elaborated again"
  let env ← replayStates (← Registries.get) env #[(.checked, ce.checked), (.main, ce.main)] opts
  return applyCounters env ce.counters

/-- The kernel's limits while a keep re-checks constants (`Environment.addDeclCore`); `0` is unlimited. -/
structure ReaddLimits where
  maxHeartbeats : USize := 0
  maxRecDepth : USize := 0

/-- The declaration that adds `info`: a non-safe definition with its whole mutual block (`mutualDefnDecl`, which adds
every member before checking any body), an inductive type with the other types of its block and their constructors
(the kernel adds the recursors). Constructors and recursors have none: their inductive's declaration adds them. -/
private def declOf (infos : NameMap ConstantInfo) (info : ConstantInfo) : Except String Declaration := do
  let get (n : Name) : Except String ConstantInfo :=
    match infos.find? n with
    | some info => pure info
    | none => throw s!"{n}, in the block of {info.name}, is not among the command's constants"
  match info with
  | .thmInfo v => pure (.thmDecl v)
  | .axiomInfo v => pure (.axiomDecl v)
  | .opaqueInfo v => pure (.opaqueDecl v)
  | .defnInfo v =>
    if v.safety == .safe then pure (.defnDecl v)
    else .mutualDefnDecl <$> v.all.mapM fun n => do
      let .defnInfo v ← get n | throw s!"{n}, in the block of {info.name}, is not a definition"
      pure v
  | .inductInfo v => do
    let types ← v.all.mapM fun n => do
      let .inductInfo t ← get n | throw s!"{n}, in the block of {info.name}, is not an inductive type"
      let ctors ← t.ctors.mapM fun c => do
        let .ctorInfo ctor ← get c | throw s!"{c} is not a constructor"
        pure { name := ctor.name, type := ctor.type : Constructor }
      pure { name := t.name, type := t.type, ctors : InductiveType }
    pure (.inductDecl v.levelParams v.numParams types v.isUnsafe)
  | .quotInfo _ => pure .quotDecl
  | .ctorInfo _ | .recInfo _ => throw s!"{info.name} is added by its inductive type's declaration"

/-- Adds `decl` with the kernel's check, putting the kernel's message in the error. -/
private def addDeclChecked (env : Environment) (decl : Declaration) (limits : ReaddLimits) : IO Environment := do
  match env.addDeclCore limits.maxHeartbeats limits.maxRecDepth decl none with
  | .ok env => return env
  | .error ex =>
    throw <| IO.userError s!"reuse: kernel rejected kept declaration {decl.getTopLevelNames}: \
      {← (ex.toMessageData {}).toString}"

private def infoOf (infos : NameMap ConstantInfo) (n : Name) : IO ConstantInfo := do
  let some info := infos.find? n |
    throw <| IO.userError s!"reuse: the kept command's constant {n} is not among its constants"
  return info

/-- Re-adds a `plain` constant where its record lists it: by `addDeclCore`, unless an earlier record's block added it
already (an inductive's constructors and recursors, a mutual block's other members). -/
private def readdPlain (infos : NameMap ConstantInfo) (limits : ReaddLimits) (env : Environment) (n : Name) :
    IO Environment := do
  if env.containsOnBranch n then return env
  addDeclChecked env (← IO.ofExcept (declOf infos (← infoOf infos n))) limits

/-- Merges into `env` the cached result of the realization `key` for `forConst` (`Environment.readdRealizeConst`); a
realization not cached and a merge the kernel rejects are errors. The caller first waits for the kernel environment of
the command's environment (`readdCommandConstants`). -/
private def mergeCachedRealization (env : Environment) (forConst key : Name) (replayExts : Bool) :
    IO Environment := do
  let (env, ex) ← env.readdRealizeConst forConst key (replayExts := replayExts) fun _ _ =>
    throw <| IO.userError s!"reuse: the realization {key} for {forConst} that the command merged is not cached"
  if let some ex := ex.get then
    throw <| IO.userError s!"reuse: kernel rejected the realization {key} for {forConst}: \
      {← (ex.toMessageData {}).toString}"
  return env

/-- Re-adds `a` to `env` as the full run added it, each part in recorded order:
- `plain`: `readdPlain`;
- `async`: `addConstAsync`, then in its branch what the branch added, the constant itself where the record lists it
  (and otherwise the kernel environment must hold it already), the recorded states replayed into the branch's
  main-branch view, `commitConst` and `commitCheckEnv`;
- `realization`: `Environment.readdRealizeConst` in the context `env` holds for `forConst`, whose `build` first merges
  the cached results of the realizations it merged (`merges`, cached by their own records, an earlier command's keep
  or an earlier command's elaboration; a missing one is an error), as the full run's realization did, then adds its
  constants without a check (the
  merge's kernel check checks them) and replays the states (when the context's cache already holds the key, `build`
  does not run and the cached result is merged);
- `merged`: the same, with the context's cache holding the key (an earlier command's keep or elaboration put it
  there): the cached result is merged (`mergeCachedRealization`), and `env` must then hold the constants the record
  lists;
- `context`: the context rebuilt from its record (`env` with the recorded states replayed into both views, so that it
  holds the constants and contexts re-added before it) and registered with its options.
-/
private partial def readdAdded (regs : Registries) (infos : NameMap ConstantInfo) (opts : Options)
    (limits : ReaddLimits) (env : Environment) : AddedConst → IO Environment
  | .plain n => readdPlain infos limits env n
  | .async n exportedKind? states nested => do
    let info ← infoOf infos n
    let res ← env.addConstAsync n (.ofConstantInfo info) (exportedKind? := exportedKind?)
    let mut branch := res.asyncEnv
    for a in nested do
      if (match a with | .plain m => m == n | _ => false) then
        branch ← addDeclChecked branch (← IO.ofExcept (declOf infos info)) limits
      else
        branch ← readdAdded regs infos opts limits branch a
    unless (branch.toKernelEnv.find? n).isSome do
      throw <| IO.userError s!"reuse: {n} is neither added in its branch nor held by the kernel environment"
    branch ← replayStates regs branch #[(.main, states)] opts
    res.commitConst branch (info? := some info)
    res.commitCheckEnv branch
    return res.mainEnv
  | .realization forConst key consts states merges => do
    unless env.areRealizationsEnabledForConst forConst do
      throw <| IO.userError s!"reuse: no realization context for {forConst}, which {key}'s realization ran in"
    unless merges.isEmpty do discard <| IO.wait env.checked
    let infos' ← consts.mapM (infoOf infos)
    let (env, ex) ← env.readdRealizeConst forConst key fun realizeEnv realizeOpts => do
      let mut realizeEnv := realizeEnv
      for (forConst', key') in merges do
        realizeEnv ← mergeCachedRealization realizeEnv forConst' key' (replayExts := true)
      for info in infos' do
        match realizeEnv.addDeclCore 0 0 (← IO.ofExcept (declOf infos info)) none (doCheck := false) with
        | .ok e => realizeEnv := e
        | .error ex => throw <| IO.userError s!"adding {info.name}: {← (ex.toMessageData {}).toString}"
      replayStates regs realizeEnv #[(.main, states)] realizeOpts
    if let some ex := ex.get then
      throw <| IO.userError s!"reuse: kernel rejected the realization {key} for {forConst}: \
        {← (ex.toMessageData {}).toString}"
    return env
  | .merged forConst key consts => do
    discard <| IO.wait env.checked
    let env ← mergeCachedRealization env forConst key (replayExts := false)
    if let some n := consts.find? (!env.containsOnBranch ·) then
      throw <| IO.userError s!"reuse: merging the realization {key} for {forConst} did not add {n}"
    return env
  | .context forConst ctxOpts main checked counters => do
    let ctxEnv ← replayStates regs env #[(.checked, checked), (.main, main)] ctxOpts
    env.registerRealizationContext forConst (applyCounters ctxEnv counters) ctxOpts

/--
Plan §1.4 step 1 for a kept command: re-adds what the command added (`CommandEntries.added`) to `env`, its
before-environment, in recorded order (`readdAdded`): its constants as the full run added them, synchronously,
asynchronously with their branches, or through their realizations, and each realization context it registered,
rebuilt from its record at its position. `infos` are the command's constants (its declarations, auxiliaries and
realized constants, from the previous `.olean`). The kernel checks every constant with `limits` (realized constants
with none, as in a full run), and a rejection is a hard error carrying the kernel's message; so is a constant of
`infos` the records do not re-add, and a payload `permit` does not hold for `env` (`KeepPermit`). Run
`replayCommandEntries` (step 3) after.

A `merged` record, and a `realization` record's `merges`, look up realizations that are cached already. An earlier
command elaborated instead of kept may make them in its asynchronous branches, after this keep starts: each such lookup
first waits for the kernel environment of the environment it is made in (`IO.wait env.checked`), to which those
branches commit only after their realizations are cached.
-/
def readdCommandConstants (permit : KeepPermit) (env : Environment) (ce : CommandEntries)
    (infos : NameMap ConstantInfo) (opts : Options) (limits : ReaddLimits := {}) : IO Environment := do
  permit.check env ce
  let regs ← Registries.get
  let env ← ce.added.foldlM (readdAdded regs infos opts limits) env
  let kenv := env.toKernelEnv
  for (n, _) in infos do
    unless (kenv.find? n).isSome do
      throw <| IO.userError s!"reuse: the kept command's constant {n} is not re-added by its records"
  return env

namespace CommandEntries.Testing

/-- Test support: `target` with the state of every persistent extension and command cache in both views taken from
`source`, each written as an unaccounted write, for replaying a command's payload onto its after-environment rolled
back to its before-states and comparing the result with the full run. -/
def rollbackTo (source target : Environment) : IO Environment := do
  let regs ← Registries.get
  let mut target := target
  for ext in regs.persistent do
    let e := ext.toEnvExtension
    for view in [EnvExtension.View.checked, .main] do
      let s := e.getStateIn source view
      target := e.writeView target view .unaccounted fun _ => s
  for cache in regs.caches do
    for view in [EnvExtension.View.checked, .main] do
      let s := cache.ext.getStateIn source view
      target := cache.ext.writeView target view .unaccounted fun _ => s
  return target

/-- Test support: plan §1.4 steps 1 and 3 for one command (`readdCommandConstants`, `replayCommandEntries`). -/
def keep (permit : KeepPermit) (env : Environment) (ce : CommandEntries) (infos : NameMap ConstantInfo)
    (opts : Options) (limits : ReaddLimits := {}) : IO Environment := do
  replayCommandEntries permit (← readdCommandConstants permit env ce infos opts limits) ce opts

/-- Test support: `env` with fresh realization caches (the import context's and every local one's), as a new process
would start: a keep onto it re-adds every realization instead of finding the full run's results. -/
def freshRealizationCaches (env : Environment) : BaseIO Environment := do
  let importRealizationCtx? ← env.importRealizationCtx?.mapM fun ctx => return { ctx with
    realizeMapRef := ← mkAccountedRef {} }
  let mut localRealizationCtxMap : NameMap RealizationContext := {}
  for (c, ctx) in env.localRealizationCtxMap do
    localRealizationCtxMap := localRealizationCtxMap.insert c { ctx with realizeMapRef := ← mkAccountedRef {} }
  return { env with importRealizationCtx?, localRealizationCtxMap }

/-- Test support: `permit` holding `f` of its payloads, so that a test can keep payloads it changed. -/
def substitutePayloads (permit : KeepPermit) (f : Array CommandEntries → Array CommandEntries) : KeepPermit :=
  { permit with payloads := f permit.payloads }

/-- Test support: `ext.view` for each extension `keep` accepts among `ce`'s entries in both views and its scoped stack
operations (main view). -/
def shownEntries (ce : CommandEntries) (keep : Name → Bool) : Array String :=
  let named (view : String) (es : Array (Name × Array EnvExtensionEntry)) :=
    es.filterMap fun (n, _) => if keep n then some s!"{n}.{view}" else none
  named "checked" ce.checked.entries ++ named "main" ce.main.entries ++ named "main" ce.main.scopedOps

end CommandEntries.Testing

end Lean
