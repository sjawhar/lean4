/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.Util.ModuleUsage
public import Lean.Elab.Command
public import Lean.Util.CommandEntries
import Lean.Util.ValueSensitive
import Lean.ExtraModUses
import Lean.Compiler.Old
import Lean.Meta.Match.Match
import Lean.Meta.Tactic.AuxLemma
import Lean.Meta.Eqns
import Lean.Meta.Constructions.SparseCasesOn
import Lean.Structure

public section

/-!
The per-command records of a module's `.usage` (`commands`): for each top-level command, the key that matches it to
a command of another build, the digests of its text and of the context it was elaborated in, the constants it used
with their digests, the counters it leaves (`CommandPost`), and the cache entries it added.
-/

namespace Lean.ModuleUsage

/-- How a command of the previous build is matched to one of this build: a declaration command by the sorted
top-level names it declared, any other command by its kind, text digest and occurrence index among commands with
that kind and text. -/
inductive CommandKey where
  | names (ns : Array Name)
  | kind (kind : Name) (text : Digest) (occ : Nat)
  deriving Inhabited, BEq, Hashable

instance : ToJson CommandKey where
  toJson
    | .names ns => .arr #["N", .arr (ns.map nameToJson)]
    | .kind k t o => .arr #["K", nameToJson k, toJson t, o]
instance : FromJson CommandKey where
  fromJson? j := do
    match ← j.getArr? with
    | #["N", ns] => return .names ((← fromJson? (α := Array JName) ns).map (·.name))
    | #["K", k, t, o] => return .kind (← nameOfJson? k) (← fromJson? t) (← fromJson? o)
    | _ => throw s!"expected a command key, got {j.compress}"

/-- The `DeclNameGenerator` state after a command. -/
structure DeclNGenRecord where
  namePrefix : Name
  idx : Nat
  parentIdxs : List Nat
  deriving Inhabited, BEq

instance : ToJson DeclNGenRecord := ⟨fun r => Json.mkObj [("prefix", nameToJson r.namePrefix), ("idx", r.idx),
  ("parentIdxs", toJson r.parentIdxs)]⟩
instance : FromJson DeclNGenRecord := ⟨fun j => return {
  namePrefix := ← nameOfJson? (← j.getObjVal? "prefix")
  idx := ← j.getObjValAs? Nat "idx"
  parentIdxs := ← j.getObjValAs? (List Nat) "parentIdxs" }⟩

/-- A `NameGenerator` state, as a record with `BEq`. -/
structure NGenRecord where
  namePrefix : Name
  idx : Nat
  deriving Inhabited, BEq

def NGenRecord.ofNameGenerator (g : NameGenerator) : NGenRecord := { namePrefix := g.namePrefix, idx := g.idx }

def NGenRecord.toNameGenerator (r : NGenRecord) : NameGenerator := { namePrefix := r.namePrefix, idx := r.idx }

instance : ToJson NGenRecord := ⟨fun r => Json.mkObj [("prefix", nameToJson r.namePrefix), ("idx", r.idx)]⟩
instance : FromJson NGenRecord := ⟨fun j => return {
  namePrefix := ← nameOfJson? (← j.getObjVal? "prefix")
  idx := ← j.getObjValAs? Nat "idx" }⟩

/-- The `Command.State` counters a kept command must restore (`commandStateFields`, `.replayed`). -/
structure CommandPost where
  auxDeclNGen : DeclNGenRecord
  /-- The quotation contexts the command added to `usedQuotCtxts`, sorted. -/
  quotCtxts : Array Name
  /-- `maxRecDepth` after the command: `set_option maxRecDepth n in` leaves it set (`elabSetOption` caches it in
  the state, and the `in` macro's `end` restores only the scope). -/
  maxRecDepth : Nat
  /-- The fresh-identifier generator after the command. Its identifiers reach the environment: a command elaborator
  can name a declaration with `mkFreshId`, and proof-mode tactics store generated names in theorem values. -/
  ngen : NGenRecord
  /-- The fresh-identifier generator before the command, which the command's `ctx` digests (`ctxDigest`). -/
  ngenBefore : NGenRecord
  deriving Inhabited, BEq

/-- What a command leaves in the `commandStateFields` it replays, for its record's `post`. -/
def CommandPost.ofStates (before after : Elab.Command.State) : CommandPost :=
  let g := after.auxDeclNGen.toRecord
  { auxDeclNGen := { namePrefix := g.namePrefix, idx := g.idx, parentIdxs := g.parentIdxs }
    quotCtxts := (NameSet.sharedDiff before.usedQuotCtxts after.usedQuotCtxts).1 |>.qsort Name.quickLt
    maxRecDepth := after.maxRecDepth
    ngen := .ofNameGenerator after.ngen
    ngenBefore := .ofNameGenerator before.ngen }

/-- The generator a kept command leaves: exactly `post.ngen`. `current`, the generator the command is kept from, must
be `post.ngenBefore`: the command's `ctx` digests the generator before it, so a kept command always starts from the
recorded one, and any other `current` is an error naming both. -/
def CommandPost.restoreNgen (post : CommandPost) (current : NameGenerator) : Except String NameGenerator := do
  let b := post.ngenBefore
  unless NGenRecord.ofNameGenerator current == b do
    throw s!"the name generator before the kept command is (prefix {current.namePrefix}, idx {current.idx}), \
      not the one recorded before it (prefix {b.namePrefix}, idx {b.idx})"
  return post.ngen.toNameGenerator

instance : ToJson CommandPost := ⟨fun p => Json.mkObj [("auxDeclNGen", toJson p.auxDeclNGen),
  ("quotCtxts", .arr (p.quotCtxts.map nameToJson)),
  ("maxRecDepth", p.maxRecDepth), ("ngen", toJson p.ngen), ("ngenBefore", toJson p.ngenBefore)]⟩
instance : FromJson CommandPost := ⟨fun j => return {
  auxDeclNGen := ← j.getObjValAs? DeclNGenRecord "auxDeclNGen"
  quotCtxts := (← j.getObjValAs? (Array JName) "quotCtxts").map (·.name)
  maxRecDepth := ← j.getObjValAs? Nat "maxRecDepth"
  ngen := ← j.getObjValAs? NGenRecord "ngen"
  ngenBefore := ← j.getObjValAs? NGenRecord "ngenBefore" }⟩

/-- A summary of the non-persistent cache entries a command added. Keys that hold `Expr`s are digests here; the
`.olean` payload carries the objects. -/
structure CommandCachesRecord where
  matcher : Array (Digest × Name) := #[]
  auxLemma : Array (Digest × Name × List Name) := #[]
  eqnsInv : Array (Name × Name) := #[]
  sparseCasesOn : Array (Digest × Name) := #[]
  structRes : Array (Name × Array Name) := #[]
  deriving Inhabited, BEq

/-- A flat JSON triple `[a, b, c]`, as the writers below emit (`Prod`'s codec nests: `[a, [b, c]]`). -/
def tripleOfJson? [FromJson α] [FromJson β] [FromJson γ] (j : Json) : Except String (α × β × γ) := do
  let #[a, b, c] ← j.getArr? | throw s!"expected a triple, got {j.compress}"
  return (← fromJson? a, ← fromJson? b, ← fromJson? c)

def triplesOfJson? [FromJson α] [FromJson β] [FromJson γ] (j : Json) (k : String) :
    Except String (Array (α × β × γ)) := do
  (← j.getObjValAs? (Array Json) k).mapM tripleOfJson?

instance : ToJson CommandCachesRecord := ⟨fun c => Json.mkObj [
  ("matcher", .arr (c.matcher.map fun (d, n) => .arr #[toJson d, nameToJson n])),
  ("auxLemma", .arr (c.auxLemma.map fun (d, n, ls) =>
    .arr #[toJson d, nameToJson n, .arr (ls.toArray.map nameToJson)])),
  ("eqnsInv", .arr (c.eqnsInv.map fun (a, b) => .arr #[nameToJson a, nameToJson b])),
  ("sparseCasesOn", .arr (c.sparseCasesOn.map fun (d, n) => .arr #[toJson d, nameToJson n])),
  ("structRes", .arr (c.structRes.map fun (s, o) => .arr #[nameToJson s, .arr (o.map nameToJson)]))]⟩
instance : FromJson CommandCachesRecord := ⟨fun j => return {
  matcher := (← j.getObjValAs? (Array (Digest × JName)) "matcher").map fun (d, n) => (d, n.name)
  auxLemma := (← triplesOfJson? (α := Digest) (β := JName) (γ := Array JName) j "auxLemma").map
    fun (d, n, ls) => (d, n.name, (ls.map (·.name)).toList)
  eqnsInv := (← j.getObjValAs? (Array (JName × JName)) "eqnsInv").map fun (a, b) => (a.name, b.name)
  sparseCasesOn := (← j.getObjValAs? (Array (Digest × JName)) "sparseCasesOn").map fun (d, n) => (d, n.name)
  structRes := (← j.getObjValAs? (Array (JName × Array JName)) "structRes").map
    fun (s, o) => (s.name, o.map (·.name)) }⟩

/-- One top-level command's record in `.usage` (`commands`). -/
structure CommandRecord where
  i : Nat
  key : CommandKey
  /-- D-text: the command's syntax without source positions. -/
  text : Digest
  /-- D-ctx: the scope stack, the counters and this module's entries before the command. -/
  ctx : Digest
  /-- Whether the command added a constant to the environment. -/
  isDecl : Bool
  /-- Whether the command is an `initialize`/`builtin_initialize` (JSON `initialize`). -/
  isInit : Bool
  decls : Array Name
  aux : Array Name
  /-- Theorems, opaques and axioms the command's constants use only through value-opaque edges, with their
  statement digest. -/
  usesStmt : Array (Name × Digest)
  /-- Every other constant the command used, with its full digest and attrs digest. -/
  usesFull : Array (Name × Digest × Digest)
  extra : Array (Name × Bool)
  post : CommandPost
  caches : CommandCachesRecord
  deriving Inhabited, BEq

instance : ToJson CommandRecord := ⟨fun r => Json.mkObj [
  ("i", r.i), ("key", toJson r.key), ("text", toJson r.text), ("ctx", toJson r.ctx),
  ("kind", if r.isDecl then "decl" else "other"), ("initialize", r.isInit),
  ("decls", .arr (r.decls.map nameToJson)), ("aux", .arr (r.aux.map nameToJson)),
  ("usesStmt", .arr (r.usesStmt.map fun (n, d) => .arr #[nameToJson n, toJson d])),
  ("usesFull", .arr (r.usesFull.map fun (n, d, a) => .arr #[nameToJson n, toJson d, toJson a])),
  ("extra", .arr (r.extra.map fun (m, isMeta) => .arr #[nameToJson m, isMeta])),
  ("post", toJson r.post), ("caches", toJson r.caches)]⟩

instance : FromJson CommandRecord := ⟨fun j => return {
  i := ← j.getObjValAs? Nat "i"
  key := ← j.getObjValAs? CommandKey "key"
  text := ← j.getObjValAs? Digest "text"
  ctx := ← j.getObjValAs? Digest "ctx"
  isDecl := ← do match ← j.getObjValAs? String "kind" with
    | "decl" => pure true | "other" => pure false
    | k => throw s!"expected a command kind, got {k}"
  isInit := ← j.getObjValAs? Bool "initialize"
  decls := (← j.getObjValAs? (Array JName) "decls").map (·.name)
  aux := (← j.getObjValAs? (Array JName) "aux").map (·.name)
  usesStmt := (← j.getObjValAs? (Array (JName × Digest)) "usesStmt").map fun (n, d) => (n.name, d)
  usesFull := (← triplesOfJson? (α := JName) (β := Digest) (γ := Digest) j "usesFull").map
    fun (n, d, a) => (n.name, d, a)
  extra := (← j.getObjValAs? (Array (JName × Bool)) "extra").map fun (m, b) => (m.name, b)
  post := ← j.getObjValAs? CommandPost "post"
  caches := ← j.getObjValAs? CommandCachesRecord "caches" }⟩

private def matcherKeyDigest (value : Expr) (compile isPrivate : Bool) : Digest :=
  (({} : Enc).digest (exprDigest .namesInfos .eqv value) |>.bool compile |>.bool isPrivate).finish

private def auxLemmaKeyDigest (type : Expr) (isPrivate defeq : Bool) : Digest :=
  (({} : Enc).digest (exprDigest .namesInfos .eqv type) |>.bool isPrivate |>.bool defeq).finish

private def sparseCasesOnKeyDigest (indName : Name) (ctors : Array Name) (isPrivate : Bool) : Digest :=
  (({} : Enc).name indName |>.names ctors.toList |>.bool isPrivate).finish

/-- D-text: syntax structure and values, excluding source positions. -/
def textDigest (stx : Syntax) : Digest :=
  (syntaxEnc {} stx.unsetTrailing).finish

def dataValueEnc (e : Enc) : DataValue → Enc
  | .ofString v => e.u8 0 |>.str v
  | .ofBool v => e.u8 1 |>.bool v
  | .ofName v => e.u8 2 |>.name v
  | .ofNat v => e.u8 3 |>.nat v
  | .ofInt v => e.u8 4 |>.str (toString v)
  | .ofSyntax v => e.u8 5 |> (syntaxEnc · v)

def openDeclEnc (e : Enc) : OpenDecl → Enc
  | .simple ns except => e.u8 0 |>.name ns |>.names except
  | .explicit id decl => e.u8 1 |>.name id |>.name decl

/-- An order-independent digest of a set of names: their count and the lane-wise sums of their digests, updated
name by name, so that following a set across commands costs what each command added. -/
structure NameSetDigest where
  size : Nat := 0
  hi : UInt64 := 0
  lo : UInt64 := 0
  deriving Inhabited

namespace NameSetDigest

private def nameDigest (n : Name) : Digest := (({} : Enc).name n).finish

def insert (d : NameSetDigest) (n : Name) : NameSetDigest :=
  let x := nameDigest n
  { size := d.size + 1, hi := d.hi + x.hi, lo := d.lo + x.lo }

def erase (d : NameSetDigest) (n : Name) : NameSetDigest :=
  let x := nameDigest n
  { size := d.size - 1, hi := d.hi - x.hi, lo := d.lo - x.lo }

end NameSetDigest

/-- Encodes the command scopes: every field of each `Elab.Command.Scope` (`scopeFields`). -/
def scopesEnc (e : Enc) (scopes : List Elab.Command.Scope) : Enc := Id.run do
  let mut e := e.nat scopes.length
  for scope in scopes do
    e := e.str scope.header
    let mut opts := #[]
    for p in scope.opts do opts := opts.push p
    opts := opts.qsort fun a b => Name.quickLt a.1 b.1
    e := e.nat opts.size
    for (n, v) in opts do e := dataValueEnc (e.name n) v
    e := scope.openDecls.foldl openDeclEnc (e.name scope.currNamespace |>.nat scope.openDecls.length)
    e := e.names scope.levelNames
    e := scope.varDecls.foldl (fun e s => syntaxEnc e s) (e.nat scope.varDecls.size)
    e := scope.varUIds.foldl Enc.name (e.nat scope.varUIds.size)
    e := e.names scope.includedVars |>.names scope.omittedVars
      |>.bool scope.isNoncomputable |>.bool scope.isPublic |>.bool scope.isMeta
    e := scope.attrs.foldl (fun e s => syntaxEnc e s.raw) (e.nat scope.attrs.length)
  return e

/-- The fields of `Elab.Command.Scope` that `scopesEnc` encodes: all of them. -/
def scopeFields : Array Name := #[`header, `opts, `currNamespace, `openDecls, `levelNames, `varDecls, `varUIds,
  `includedVars, `omittedVars, `isNoncomputable, `isPublic, `isMeta, `attrs]

/-- The command-context portion available before payload recording is folded in by the reuse frontend.
`quotCtxts` is the digest of `st.usedQuotCtxts`. -/
def ctxDigest (st : Elab.Command.State) (quotCtxts : NameSetDigest) (entries : Digest) : Digest :=
  let g := st.auxDeclNGen.toRecord
  scopesEnc {} st.scopes |>.nat st.nextMacroScope |>.nat st.maxRecDepth |>.name g.namePrefix |>.nat g.idx
    |>.nat g.parentIdxs.length |> g.parentIdxs.foldl Enc.nat
    |>.name st.ngen.namePrefix |>.nat st.ngen.idx
    |>.nat quotCtxts.size |>.u64 quotCtxts.hi |>.u64 quotCtxts.lo
    |>.digest entries |>.finish

structure CommandObservation where
  i : Nat
  stx : Syntax
  before : Elab.Command.State
  after : Elab.Command.State
  /-- `after.infoState` with its lazy parts substituted: the task whose trees the command's snapshot reports. -/
  info : Task Elab.InfoState
  deriving Nonempty

/-- The observed commands, newest first (a list, like the per-command logs of `Lean.Util.UsedByChecks`). Private, as
those logs; cleared at the start of a run (`startFrontendRun`). -/
private builtin_initialize commandObservationsRef : IO.Ref (List CommandObservation) ← IO.mkRef []

builtin_initialize registerRunLog (commandObservationsRef.set [])

/-- Records the observation of command `i`, when usage recording is on. -/
def recordCommandObservation (i : Nat) (stx : Syntax) (before after : Elab.Command.State)
    (info : Task Elab.InfoState) : BaseIO Unit := do
  if (← usageRecordingEnabled) then
    commandObservationsRef.modify ({ i, stx, before, after, info } :: ·)

/-- The observed commands in observation order. -/
def commandObservations : BaseIO (Array CommandObservation) :=
  return (← commandObservationsRef.get).toArray.reverse

def isAuxName (env : Environment) (n : Name) : Bool :=
  let s := n.toString
  isAuxRecursor env n || Meta.isMatcherCore env n || isNoConfusion env n ||
    (Compiler.isUnsafeRecName? n).isSome || n.isInternalDetail ||
    s.contains "._auxLemma" || s.contains "._proof_" || s.contains "._eq_" ||
    s.endsWith "._sunfold" || s.endsWith "._native"

/-- What a command's record holds for one name it used. -/
private inductive UseDigests where
  /-- a constant of an imported module that carries no usage digests (`importedConstDigests?`) -/
  | untracked
  | digests (full core attrs : Digest)
  /-- no digest stands for the name; `commandRecords` writes no records -/
  | unattributed (reason : String)

/-- The constants the transient declaration `n` stands for: what it used, each transient declaration among
those replaced in turn. -/
private partial def transientDeps (transient : Std.HashMap Name NameSet) (seen out : NameSet) :
    List Name → NameSet
  | [] => out
  | c :: cs =>
    if seen.contains c then transientDeps transient seen out cs
    else match transient[c]? with
      | some ds => transientDeps transient (seen.insert c) out (ds.toList ++ cs)
      | none => transientDeps transient (seen.insert c) (out.insert c) cs

/-- The per-command records of `observations` (in command order), or why there are none: a command used a name no
digest stands for, one that names no constant (a declaration the kernel or the elaborator rejected referred to it; an
IR-only name) or a constant of this module the kernel environment does not hold. The module is then `noskip`. -/
def commandRecords (env : Environment) (observations : Array CommandObservation) (own : Array (Name × Digest))
    (stmt : Array (Name × Digest × Digest)) (payloads : Array (CommandEntries × Digest)) :
    IO (Except String (Array CommandRecord)) := do
  let declEntries := (← declsByCommand).toArray.reverse
  let explicitUses := (← usedByCommand).toArray.reverse
  let extras ← extraModUsesByCommand
  let fullLocal : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let stmtLocal : Std.HashMap Name (Digest × Digest) :=
    stmt.foldl (fun m (n, d, a) => m.insert n (d, a)) {}
  let fs := state env
  -- A declaration this module elaborated in an environment it then discarded (`example`, `#eval`, or a
  -- realization first requested inside one) has no digest; a use of it stands for the uses of what it used.
  let transient : Std.HashMap Name NameSet := declEntries.foldl (init := {}) fun m (_, ns, used) =>
    ns.foldl (init := m) fun m n =>
      if env.contains n then m else m.insert n (used.foldl (·.insert ·) (m.getD n {}))
  let digestsOf (i : Nat) (n : Name) : Except String UseDigests := do
    if !env.contains n then
      return .unattributed s!"command {i} uses `{n}`, which names no constant of this module or its imports"
    -- a constant this module added is its own, even where an import compiled code under its name
    if let some full := fullLocal[n]? then
      let some (core, attrs) := stmtLocal[n]? |
        throw s!"usage: command {i} uses `{n}`, a constant of this module without a statement digest"
      return .digests full core attrs
    if let some m := env.getModuleIdxFor? n then
      return match ← importedConstDigests? env m n with
        | .digests full core attrs => .digests full core attrs
        | .codeOnly => .unattributed s!"command {i} uses `{n}`, which `{env.header.modules[m.toNat]!.module}` \
            compiled code for without defining it"
        | .untracked => .untracked
    return .unattributed s!"command {i} uses `{n}`, a constant of this module the kernel environment does not hold"
  let mut occurrences : Std.HashMap (Name × Digest) Nat := {}
  let payloadByIdx : Std.HashMap Nat (CommandEntries × Digest) :=
    payloads.foldl (fun m p => m.insert p.1.idx p) {}
  -- per-command lookups, so that each command's record costs what the command added
  let usedByIdx : Std.HashMap Nat (Array NameSet) := declEntries.foldl (init := {})
    fun m (i, _, used) => m.alter i fun us => some ((us.getD #[]).push used)
  let explicitByIdx : Std.HashMap Nat (Array Name) := explicitUses.foldl (init := {})
    fun m (i, n) => m.alter i fun ns => some ((ns.getD #[]).push n)
  let extrasByIdx : Std.HashMap Nat (Array ExtraModUse) := extras.toArray.foldl (init := {})
    fun m (i, u) => m.alter i fun us => some ((us.getD #[]).push u)
  -- a hash chain over the payloads so far: extending it costs the same at every command
  let mut entries : Digest := ({} : Enc).finish
  let mut quotSet : NameSet := {}
  let mut quotDigest : NameSetDigest := {}
  let mut out := #[]
  for obs in observations do
    let (quotAdded, quotRemoved) := NameSet.sharedDiff quotSet obs.before.usedQuotCtxts
    quotDigest := quotRemoved.foldl (·.erase ·) (quotAdded.foldl (·.insert ·) quotDigest)
    quotSet := obs.before.usedQuotCtxts
    let before := obs.before.env.checked.get
    let after := obs.after.env.checked.get
    let added : NameSet := match before.constants.sharedDiff? after.constants with
      | some (changed, _) => changed.foldl (init := {}) fun (s : NameSet) (n, _) =>
        if before.constants.contains n then s else s.insert n
      | none => after.constants.foldStage2 (fun (s : NameSet) n _ =>
        if before.constants.contains n then s else s.insert n) {}
    let addedNames := added.toArray.qsort Name.quickLt
    let decls := addedNames.filter (!isAuxName env ·)
    let aux := addedNames.filter (isAuxName env)
    let mut refsSet : NameSet := {}
    let mut full : NameSet := {}
    for n in addedNames do
      if let some ci := env.find? n then
        let rs := refs env ci
        refsSet := rs.foldl (·.insert ·) refsSet
        let stmtOnlyRefs : NameSet := rs.foldl (init := {}) fun s r =>
          match env.find? r with
          | some ri => if isStmtOnly ri && !env.contains (Compiler.mkUnsafeRecName r) then s.insert r else s
          | none => s
        let valueUsed := ValueSensitive.unsafelyUsedValues env stmtOnlyRefs ci
        let auxDefn := isAuxName env n && ci matches .defnInfo _
        for r in rs do
          if (env.find? r).isSome && (!stmtOnlyRefs.contains r || valueUsed.contains r || auxDefn) then
            full := full.insert r
    for used in usedByIdx.getD obs.i #[] do
      refsSet := used.foldl (·.insert ·) refsSet
    for n in explicitByIdx.getD obs.i #[] do
      full := full.insert n
    let infoSt := obs.info.get
    let infoUsed := usedFromInfoTrees infoSt.trees.toArray {}
    for n in infoUsed do
      unless refsSet.contains n do full := full.insert n
    for n in refsSet do
      if let some ci := env.find? n then
        if !isStmtOnly ci then full := full.insert n
    -- a transient declaration's uses count as full: it may have been evaluated
    let mut usedAll : NameSet := {}
    for n in refsSet.foldl (·.insert ·) full do
      if transient.contains n then
        for d in transientDeps transient {} {} [n] do
          usedAll := usedAll.insert d
          full := full.insert d
      else
        usedAll := usedAll.insert n
    let used := added.foldl (fun s n => s.erase n) usedAll
    let mut fullUses := #[]
    let mut stmtUses := #[]
    for n in used do
      match ← IO.ofExcept (digestsOf obs.i n) with
      | .untracked => pure ()
      | .unattributed reason => return .error reason
      | .digests d core attrs =>
        if full.contains n then fullUses := fullUses.push (n, d, attrs)
        else stmtUses := stmtUses.push (n, core)
    let usesFull := fullUses.qsort fun a b => Name.quickLt a.1 b.1
    let usesStmt := stmtUses.qsort fun a b => Name.quickLt a.1 b.1
    let text := textDigest obs.stx
    let kind := obs.stx.getKind
    let key ← if !decls.isEmpty then
      pure (.names decls)
    else
      let occ := occurrences[(kind, text)]?.getD 0
      occurrences := occurrences.insert (kind, text) (occ + 1)
      pure (.kind kind text occ)
    let extra := ((extrasByIdx.getD obs.i #[]).filterMap fun u =>
      if (env.getModuleIdx? u.module).any fs.hasEntries then some (u.module, u.isMeta)
      else none).qsort fun a b => Name.quickLt a.1 b.1 ||
        (a.1 == b.1 && a.2.toNat < b.2.toNat)
    let matcher := Meta.Match.matcherCacheDelta obs.before.env obs.after.env
    let matcher := matcher.map fun (value, compile, isPrivate, n) =>
      (matcherKeyDigest value compile isPrivate, n)
    let matcher := matcher.qsort fun a b => Name.quickLt a.2 b.2
    let auxLemma := Meta.auxLemmaCacheDelta obs.before.env obs.after.env
    let auxLemma := auxLemma.map fun (type, isPrivate, defeq, n, ls) =>
      (auxLemmaKeyDigest type isPrivate defeq, n, ls)
    let auxLemma := auxLemma.qsort fun a b => Name.quickLt a.2.1 b.2.1
    let eqnsInv := Meta.eqnsCacheDelta obs.before.env obs.after.env
      |>.qsort fun a b => Name.quickLt a.1 b.1
    let sparseCasesOn := Meta.sparseCasesOnCacheDelta obs.before.env obs.after.env
    let sparseCasesOn := sparseCasesOn.map fun (indName, ctors, isPrivate, n) =>
      (sparseCasesOnKeyDigest indName ctors isPrivate, n)
    let sparseCasesOn := sparseCasesOn.qsort fun a b => Name.quickLt a.2 b.2
    let structRes := structureResolutionCacheDelta obs.before.env obs.after.env
      |>.qsort fun a b => Name.quickLt a.1 b.1
    let ctx := ctxDigest obs.before quotDigest entries
    out := out.push {
      i := obs.i, key, text, ctx
      isDecl := !decls.isEmpty
      isInit := kind == ``Lean.Parser.Command.«initialize»
      decls, aux, usesStmt, usesFull, extra
      post := CommandPost.ofStates obs.before obs.after
      caches := { matcher, auxLemma, eqnsInv, sparseCasesOn, structRes }
    }
    if let some (payload, digest) := payloadByIdx[obs.i]? then
      entries := (({} : Enc).digest entries |>.digest digest).finish
      -- a change no entry expresses (an erasure) is determined by the command's text and context
      unless payload.refusals.isEmpty do
        entries := (({} : Enc).digest entries |>.digest text |>.digest ctx).finish
  return .ok out

end Lean.ModuleUsage
