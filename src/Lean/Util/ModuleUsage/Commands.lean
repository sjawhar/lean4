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

/-- Where a top-level command is in its file. Two commands with equal spans have every source position inside them
alike (byte offsets, lines and columns, also in UTF-16), so their declaration ranges, messages, references and the
`SourceInfo` of their syntax are the same. -/
structure CommandSpan where
  /-- The byte offset of the command's first token. -/
  offset : Nat
  pos : Position
  /-- The end of the command's last token. -/
  endPos : Position
  /-- The digest of the source from the start of `pos`'s line to `endPos`. -/
  src : Digest
  deriving Inhabited, BEq

/-- The span of `stx`, a top-level command of the file `text` holds (its first token to its last, trailing whitespace
excluded). -/
def CommandSpan.of (text : FileMap) (stx : Syntax) : CommandSpan :=
  let b := (stx.getPos? (canonicalOnly := true)).getD 0
  let e := (stx.getTailPos? (canonicalOnly := true)).getD b
  let pos := text.toPosition b
  { offset := b.byteIdx, pos, endPos := text.toPosition e
    src := (({} : Enc).str (String.Pos.Raw.extract text.source (text.lineStart pos.line) e)).finish }

/-- Whether `p` is in the span. -/
def CommandSpan.contains (s : CommandSpan) (p : Position) : Bool :=
  let le (a b : Position) := a.line < b.line || (a.line == b.line && a.column ≤ b.column)
  le s.pos p && le p s.endPos

instance : ToJson CommandSpan := ⟨fun s => Json.mkObj [("offset", s.offset),
  ("pos", .arr #[s.pos.line, s.pos.column]), ("end", .arr #[s.endPos.line, s.endPos.column]), ("src", toJson s.src)]⟩
instance : FromJson CommandSpan := ⟨fun j => do
  let position (k : String) : Except String Position := do
    let #[l, c] ← (← j.getObjVal? k).getArr? | throw s!"expected a position at {k}"
    return ⟨← fromJson? l, ← fromJson? c⟩
  return { offset := ← j.getObjValAs? Nat "offset", pos := ← position "pos", endPos := ← position "end"
           src := ← j.getObjValAs? Digest "src" }⟩

/-- An identifier of `CommandRefs` (`Lsp.RefIdent`): a constant's module and name, or a local variable of the module by
its number in the command, which stands for its id (the ids a build gives local variables are not stable). -/
inductive CommandRefIdent where
  | const (module name : String)
  | fvar (n : Nat)
  deriving Inhabited, BEq

instance : ToJson CommandRefIdent := ⟨fun | .const m n => .arr #[.str m, .str n] | .fvar n => toJson n⟩
instance : FromJson CommandRefIdent := ⟨fun j => do
  if let .ok n := j.getNat? then return .fvar n
  let #[m, n] ← j.getArr? | throw s!"expected a reference identifier, got {j.compress}"
  return .const (← fromJson? m) (← fromJson? n)⟩

/-- The `.ilean` references of a command's info trees, as `runFrontend` records them: a kept command has no info
tree, so a reuse run takes its references from its record. The local variables are numbered by first occurrence, in
`refs`, then in `aliases`. -/
structure CommandRefs where
  idents : Array CommandRefIdent
  /-- The parent declarations (`ContextInfo.parentDecl?`). -/
  parents : Array Name
  /-- The references in the order `Server.findReferences` finds them, four numbers each: the index of the identifier in
  `idents`; the byte offset of the start from the previous reference's start (from the file's start for the first);
  the length in bytes; and `4 * p + 2 * d + b`, where `p` is 0 for no parent declaration and 1 + its index in
  `parents` otherwise, `d` is 1 if the parent's declaration ranges were found (`Server.Reference.parentDeclInfo?`),
  and `b` is 1 for a binder. -/
  refs : Array Int
  /-- The local variables the command's `FVarAliasInfo` nodes connect, as the alias and its base, in visit order
  (`Server.fvarAliases`). -/
  aliases : Array (Nat × Nat)
  deriving Inhabited, BEq

instance : ToJson CommandRefs := ⟨fun r => Json.mkObj [
  ("idents", toJson r.idents), ("parents", .arr (r.parents.map nameToJson)), ("refs", toJson r.refs),
  ("aliases", toJson (r.aliases.foldl (fun a (x, b) => a.push x |>.push b) (#[] : Array Nat)))]⟩
instance : FromJson CommandRefs := ⟨fun j => do
  let aliases ← j.getObjValAs? (Array Nat) "aliases"
  unless aliases.size % 2 == 0 do throw "expected the aliases in pairs"
  return {
    idents := ← j.getObjValAs? (Array CommandRefIdent) "idents"
    parents := (← j.getObjValAs? (Array JName) "parents").map (·.name)
    refs := ← j.getObjValAs? (Array Int) "refs"
    aliases := (Array.range (aliases.size / 2)).map fun k => (aliases[2 * k]!, aliases[2 * k + 1]!) }⟩

/-- Checks that `r` encodes references of a file of `sourceSize` bytes as `CommandRefs` describes: the numbers come in
fours, each identifier and parent index is in range, and each reference lies in the file. -/
def CommandRefs.validate (r : CommandRefs) (sourceSize : Nat) : Except String Unit := do
  unless r.refs.size % 4 == 0 do throw "the references are not in fours"
  let mut prev : Int := 0
  for j in [0:r.refs.size / 4] do
    let (k, s, len, flags) := (r.refs[4 * j]!, r.refs[4 * j + 1]!, r.refs[4 * j + 2]!, r.refs[4 * j + 3]!)
    unless 0 ≤ k && k < r.idents.size do throw s!"reference {j} names no identifier ({k})"
    unless 0 ≤ flags && flags / 4 ≤ r.parents.size do throw s!"reference {j} has no parent {flags}"
    let b := prev + s
    prev := b
    unless 0 ≤ b && 0 ≤ len && b + len ≤ sourceSize do throw s!"reference {j} lies outside the file"

/-- One top-level command's record in `.usage` (`commands`). It lists the constants the command used and no name
resolution of its own, while a command can depend on the module the resolver picks for a name that occurs in none of
its terms (the reducibility of a constant a tactic unfolds): a command may be kept only in a build where every name
resolution the module recorded holds (`keepPermit`, the check Lake's `UsageSidecar.resolvedUnchanged` makes). -/
structure CommandRecord where
  i : Nat
  key : CommandKey
  /-- D-text: the command's syntax without source positions. -/
  text : Digest
  /-- Where the command was (`CommandSpan.of`). -/
  span : CommandSpan
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
  /-- The process values the command read (`takeValueReads`), sorted: `writeUsage` adds those of the run. -/
  values : Array String := #[]
  /-- The messages the command reported, in reporting order (`SerialMessage` as JSON); `none` if a build cannot show
  them again as the command would: a message whose text is made when it is printed (an expression, a goal, a trace)
  or that is positioned outside the command's span. Filled by `runFrontend`. -/
  messages? : Option (Array Json) := some #[]
  /-- How many entries the command added to the persistent lint log (`Linter.lintLogExt`), which lists each command's
  entries together. Filled by `runFrontend`. -/
  lints : Nat := 0
  /-- Whether the state of a stateful linter changed in the command (`Command.State.prevLinterStates`). -/
  linterState : Bool := false
  /-- What the command read of its file beyond its own source (`getFileName`: `fileName`; `getFileMap`: `source`), with
  the digest of the file name or of the whole source then. Filled by `runFrontend`. -/
  fileContext : Array (String × Digest) := #[]
  /-- The `.ilean` references of the command's info trees; `none` if the build that elaborated it wrote no `.ilean`.
  Filled by `runFrontend`. -/
  refs? : Option CommandRefs := none
  /-- Whether the command or a task it started read a value tied to this process or this moment
  (`commandReadNondeterministic`): its result may hold a value no other run can produce, so it is never kept. Reads of
  the heartbeat counter are not noted. Filled by `runFrontend`. -/
  nondeterministic : Bool := false
  deriving Inhabited, BEq

instance : ToJson CommandRecord := ⟨fun r => Json.mkObj [
  ("i", r.i), ("key", toJson r.key), ("text", toJson r.text), ("span", toJson r.span), ("ctx", toJson r.ctx),
  ("kind", if r.isDecl then "decl" else "other"), ("initialize", r.isInit),
  ("decls", .arr (r.decls.map nameToJson)), ("aux", .arr (r.aux.map nameToJson)),
  ("usesStmt", .arr (r.usesStmt.map fun (n, d) => .arr #[nameToJson n, toJson d])),
  ("usesFull", .arr (r.usesFull.map fun (n, d, a) => .arr #[nameToJson n, toJson d, toJson a])),
  ("extra", .arr (r.extra.map fun (m, isMeta) => .arr #[nameToJson m, isMeta])),
  ("post", toJson r.post), ("caches", toJson r.caches), ("values", toJson r.values),
  ("messages", toJson r.messages?), ("lints", r.lints), ("linterState", r.linterState),
  ("fileContext", toJson r.fileContext), ("refs", toJson r.refs?), ("nondeterministic", r.nondeterministic)]⟩

instance : FromJson CommandRecord := ⟨fun j => return {
  i := ← j.getObjValAs? Nat "i"
  key := ← j.getObjValAs? CommandKey "key"
  text := ← j.getObjValAs? Digest "text"
  span := ← j.getObjValAs? CommandSpan "span"
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
  caches := ← j.getObjValAs? CommandCachesRecord "caches"
  values := ← j.getObjValAs? (Array String) "values"
  messages? := ← j.getObjValAs? (Option (Array Json)) "messages"
  lints := ← j.getObjValAs? Nat "lints"
  linterState := ← j.getObjValAs? Bool "linterState"
  fileContext := ← j.getObjValAs? (Array (String × Digest)) "fileContext"
  refs? := ← j.getObjValAs? (Option CommandRefs) "refs"
  nondeterministic := ← j.getObjValAs? Bool "nondeterministic" }⟩

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
`quotCtxts` is the digest of `st.usedQuotCtxts`; `scopes` is `st.scopes` encoded, which a caller following the commands
of a module can reuse while the scope stack stays the same object. -/
def ctxDigest (st : Elab.Command.State) (quotCtxts : NameSetDigest) (entries : Digest)
    (scopes : Enc := scopesEnc {} st.scopes) : Digest :=
  let g := st.auxDeclNGen.toRecord
  scopes |>.nat st.nextMacroScope |>.nat st.maxRecDepth |>.name g.namePrefix |>.nat g.idx
    |>.nat g.parentIdxs.length |> g.parentIdxs.foldl Enc.nat
    |>.name st.ngen.namePrefix |>.nat st.ngen.idx
    |>.nat quotCtxts.size |>.u64 quotCtxts.hi |>.u64 quotCtxts.lo
    |>.digest entries |>.finish

/-- What the command contexts (`ctxDigest`) of a module's commands chain through, in command order: the payloads so far
(a hash chain, so that extending it costs the same at every command), the quotation contexts the last command started
with and their digest, and the encoded scopes of the last command, which the next one usually shares. -/
structure CtxChain where
  entries : Digest := ({} : Enc).finish
  quotSet : NameSet := {}
  quotDigest : NameSetDigest := {}
  lastScopes : Option (List Elab.Command.Scope × Enc) := none

/-- The context of the next command, which starts from `before`, and the chain at that command. -/
def CtxChain.ctx (c : CtxChain) (before : Elab.Command.State) : Digest × CtxChain :=
  let (quotAdded, quotRemoved) := NameSet.sharedDiff c.quotSet before.usedQuotCtxts
  let quotDigest := quotRemoved.foldl (·.erase ·) (quotAdded.foldl (·.insert ·) c.quotDigest)
  let scopes := match c.lastScopes with
    | some (s, e) => if SharedDiff.sameObject s before.scopes then e else scopesEnc {} before.scopes
    | none => scopesEnc {} before.scopes
  (ctxDigest before quotDigest c.entries scopes,
    { c with quotSet := before.usedQuotCtxts, quotDigest, lastScopes := some (before.scopes, scopes) })

/-- The chain past a command with the payload `payload` of digest `digest`, and the text digest `text` and context
`ctx`. -/
def CtxChain.push (c : CtxChain) (payload : CommandEntries) (digest text ctx : Digest) : CtxChain :=
  let entries := (({} : Enc).digest c.entries |>.digest digest).finish
  -- a change no entry expresses (an erasure) is determined by the command's text and context
  let entries := if payload.refusals.isEmpty then entries
    else (({} : Enc).digest entries |>.digest text |>.digest ctx).finish
  { c with entries }

structure CommandObservation where
  i : Nat
  stx : Syntax
  /-- Where the command is (`CommandSpan.of`). -/
  span : CommandSpan
  before : Elab.Command.State
  after : Elab.Command.State
  /-- `after.infoState` with its lazy parts substituted: the task whose trees the command's snapshot reports. -/
  info : Task Elab.InfoState
  deriving Nonempty

/-- The observed commands, newest first (a list, like the per-command logs of `Lean.Util.UsedByChecks`). Private, as
those logs; cleared at the start of a run (`startFrontendRun`). -/
private builtin_initialize commandObservationsRef : IO.Ref (List CommandObservation) ← mkAccountedRef []

builtin_initialize registerRunLog (commandObservationsRef.set [])

/-- Records the observation of command `i`, when usage recording is on. -/
def recordCommandObservation (i : Nat) (stx : Syntax) (span : CommandSpan) (before after : Elab.Command.State)
    (info : Task Elab.InfoState) : BaseIO Unit := do
  if (← usageRecordingEnabled) then
    commandObservationsRef.modify ({ i, stx, span, before, after, info } :: ·)

/-- The observed commands in observation order. -/
def commandObservations : BaseIO (Array CommandObservation) :=
  return (← commandObservationsRef.get).toArray.reverse

/-- A command a reuse run kept instead of elaborating it (`Lean.Elab.Reuse`): its record and payload in the previous
build, and the command states around the keep. -/
structure KeptCommand where
  i : Nat
  stx : Syntax
  span : CommandSpan
  before : Elab.Command.State
  after : Elab.Command.State
  record : CommandRecord
  payload : CommandEntries
  /-- The payload's digest (`objectsDigests`). -/
  digest : Digest
  deriving Nonempty

def isAuxName (env : Environment) (n : Name) : Bool :=
  let s := n.toString
  isAuxRecursor env n || Meta.isMatcherCore env n || isNoConfusion env n ||
    (Compiler.isUnsafeRecName? n).isSome || n.isInternalDetail ||
    s.contains "._auxLemma" || s.contains "._proof_" || s.contains "._eq_" ||
    s.endsWith "._sunfold" || s.endsWith "._native"

/-- One command's record as `commandRecords` computes it apart from the commands before it, or why there are none. -/
private inductive CommandPart where
  | record (r : CommandRecord)
  /-- the command used a name no digest stands for (`UseDigests.unattributed`) -/
  | unattributed (reason : String)
  /-- a constant of this module lacks a statement digest -/
  | broken (msg : String)

/-- What a command's record holds for one name it used. -/
inductive UseDigests where
  /-- a constant of an imported module that carries no usage digests (`importedConstDigests?`) -/
  | untracked
  | digests (full core attrs : Digest)
  /-- no digest stands for the name; `commandRecords` writes no records -/
  | unattributed (reason : String)

/-- What a command's record holds for `n`, a constant `Environment.getModuleIdxFor?` assigns to the import `m`, used by
command `i`. -/
def importedUseDigests (env : Environment) (fs : State) (m : ModuleIdx) (i : Nat) (n : Name) :
    Except String UseDigests := do
  return match ← importedConstDigests? env m n with
    -- the full digest a compile depends on: with each other kernel declarer's (`State.digestOf`); the environment can
    -- hold another declarer's copy, whose statement may differ in binder names and infos, so a statement-only use
    -- takes that digest too
    | .digests full core attrs =>
      let full := (fs.digestOf env n).getD full
      .digests full (if (env.getKernelDeclarersIfOther? n (some m)).isSome then full else core) attrs
    | .codeOnly => .unattributed s!"command {i} uses `{n}`, which `{env.header.modules[m.toNat]!.module}` \
        compiled code for without defining it"
    -- a toolchain module's copy is pinned by the Lean githash, another declarer's is not
    | .untracked => match fs.digestOf env n with
      | some d => .digests d d d
      | none => .untracked

/-- The constants the transient declaration `n` stands for: what it used (`transient`), each transient declaration
among those replaced in turn. -/
private partial def transientDeps (transient : Name → Option NameSet) (seen out : NameSet) : List Name → NameSet
  | [] => out
  | c :: cs =>
    if seen.contains c then transientDeps transient seen out cs
    else match transient c with
      | some ds => transientDeps transient (seen.insert c) out (ds.toList ++ cs)
      | none => transientDeps transient (seen.insert c) (out.insert c) cs

unsafe def linterStateChangedImpl (inits : Array Elab.Command.LinterState) (before after : Elab.Command.State) :
    Bool :=
  let states (s : Elab.Command.State) := s.prevLinterStates.elim inits Task.get
  let (b, a) := (states before, states after)
  b.size != a.size || (b.zip a).any fun (x, y) => !ptrEq x y

/-- Whether the state of a stateful linter changed from `before` to `after` (`Command.State.prevLinterStates`, whose
`none` stands for the initial states `inits`). A state the linter returned unchanged is the same object. -/
@[implemented_by linterStateChangedImpl]
opaque linterStateChanged (inits : Array Elab.Command.LinterState) (before after : Elab.Command.State) : Bool

/-- The per-command records of `observations` and `kept` (each in command order), or why there are none: a command
used a name no digest stands for, one that names no constant (a declaration the kernel or the elaborator rejected
referred to it; an IR-only name) or a constant of this module the kernel environment does not hold. None of the
module's commands may then be kept (`noreuse`). Besides what its constants' terms refer to, a command uses what their
compiled code mentions (the refs of their nodes in `nodes`, `ownNodes`, but their terms' own): an inlined definition,
an `implemented_by` target, another module's specialization; a compiler-only name among them has its node's digest.
What an elaborated command's code observed is that of its contexts (`commandContexts`): its own and those of the
realizations it used, whether it ran them or got their results from the cache; of a realization's declarations, only
those the environment lacks count (a realized constant the environment holds is among the constants of the command
that added it). A kept command's record is its previous record with its digests taken here, as an elaborated command's
are: it used what it used then, for no keep happens otherwise. What a record holds of its command alone is computed in
`lanes` tasks (`CommandEntries.parallelMap`). Throws if a kept command's context (`ctxDigest`) is not its record's: the
commands before it then differ from those it was kept after. -/
def commandRecords (env : Environment) (observations : Array CommandObservation) (own : Array (Name × Digest))
    (stmt : Array (Name × Digest × Digest)) (payloads : Array (CommandEntries × Digest)) (lanes : Nat := 4)
    (kept : Array KeptCommand := #[]) (nodes : Array Node := #[]) : IO (Except String (Array CommandRecord)) := do
  let declEntries ← declsByContext
  let linterInits ← Elab.Command.initialLinterStates
  let ctxsByIdx : Std.HashMap Nat (Array UInt32) ←
    observations.foldlM (init := {}) fun m o => return m.insert o.i (← commandContexts o.i)
  let fullLocal : Std.HashMap Name Digest := own.foldl (fun m (n, d) => m.insert n d) {}
  let stmtLocal : Std.HashMap Name (Digest × Digest) :=
    stmt.foldl (fun m (n, d, a) => m.insert n (d, a)) {}
  let nodeRefs : Std.HashMap Name (Array Name) := nodes.foldl (fun m n => m.insert n.name n.refs) {}
  let fs := state env
  -- A declaration this module elaborated in an environment it then discarded (`example`, `#eval`, or a
  -- realization first requested inside one) has no digest; a use of it stands for the uses of what it used. A command
  -- uses its own such declaration under a name another command may declare too (every `#eval` declares `_eval`), so
  -- its own come first.
  let addTransient (m : Std.HashMap Name NameSet) (ns : Array Name) (used : NameSet) :=
    ns.foldl (init := m) fun m n =>
      if env.contains n then m else m.insert n (used.foldl (·.insert ·) (m.getD n {}))
  let transient : Std.HashMap Name NameSet :=
    declEntries.foldl (init := {}) fun m (_, ns, used) => addTransient m ns used
  -- per context, the declarations it submitted; a realization's count for its commands only where the environment
  -- lacks one of them
  let declsByCtx : Std.HashMap UInt32 (Array (Array Name × NameSet)) := declEntries.foldl (init := {})
    fun m (c, ns, used) =>
      if isRealizationContext c && ns.all env.contains then m else m.insert c ((m.getD c #[]).push (ns, used))
  let declsOf (i : Nat) : Array (Array Name × NameSet) :=
    (ctxsByIdx.getD i #[commandContext i]).flatMap (declsByCtx.getD · #[])
  let transientByCmd : Std.HashMap Nat (Std.HashMap Name NameSet) := ctxsByIdx.fold (init := {}) fun m i _ =>
    m.insert i ((declsOf i).foldl (fun t (ns, used) => addTransient t ns used) {})
  let digestsOf (i : Nat) (n : Name) : Except String UseDigests := do
    if !env.contains n then
      return .unattributed s!"command {i} uses `{n}`, which names no constant of this module or its imports"
    -- a constant this module added is its own, even where an import compiled code under its name
    if let some full := fullLocal[n]? then
      if let some (core, attrs) := stmtLocal[n]? then
        return .digests full core attrs
      -- an imported constant whose code this module compiled again (`Lean.Compiler.compile`)
      if (env.getModuleIdxFor? n).isSome then
        return .unattributed s!"command {i} uses `{n}`, which this module compiled code for without defining it"
      throw s!"usage: command {i} uses `{n}`, a constant of this module without a statement digest"
    if let some m := env.getModuleIdxFor? n then
      return ← importedUseDigests env fs m i n
    return .unattributed s!"command {i} uses `{n}`, a constant of this module the kernel environment does not hold"
  -- the uses `used` of command `i` with their digests, those in `full` with their full digests; a compiler-only node of
  -- `compiled` with its node's digest, none for one of a module without digests
  let usesOf (i : Nat) (used : Array Name) (full compiled : NameSet) :
      Except CommandPart (Array (Name × Digest) × Array (Name × Digest × Digest)) := do
    let mut fullUses := #[]
    let mut stmtUses := #[]
    for n in used do
      if compiled.contains n && !env.contains n then
        if let some d := fullLocal[n]? <|> fs.digestOf env n then fullUses := fullUses.push (n, d, default)
        continue
      match digestsOf i n with
      | .error msg => throw (.broken msg)
      | .ok .untracked => pure ()
      | .ok (.unattributed reason) => throw (.unattributed reason)
      | .ok (.digests d core attrs) =>
        if full.contains n then fullUses := fullUses.push (n, d, attrs)
        else stmtUses := stmtUses.push (n, core)
    return (stmtUses.qsort fun a b => Name.quickLt a.1 b.1, fullUses.qsort fun a b => Name.quickLt a.1 b.1)
  let payloadByIdx : Std.HashMap Nat (CommandEntries × Digest) :=
    payloads.foldl (fun m p => m.insert p.1.idx p) {}
  -- per-command lookups, so that each command's record costs what the command added
  let usedByIdx : Std.HashMap Nat (Array NameSet) :=
    ctxsByIdx.fold (init := {}) fun m i _ => m.insert i ((declsOf i).map (·.2))
  let explicitByIdx : Std.HashMap Nat (Array Name) ←
    ctxsByIdx.foldM (init := {}) fun m i ctxs => return m.insert i (← usedByContexts ctxs).toArray
  let extrasByIdx : Std.HashMap Nat (Array (Name × Bool × Bool)) ←
    ctxsByIdx.foldM (init := {}) fun m i ctxs => return m.insert i (← extraModUsesOf ctxs)
  -- what a command's record holds of its states alone: the constants it added (with whether each is auxiliary), its
  -- counters and its cache entries; its uses are left empty
  let statesPart (i : Nat) (stx : Syntax) (span : CommandSpan) (before after : Elab.Command.State) :
      NameSet × Array Name × Array Bool × CommandRecord := Id.run do
    let b := before.env.checked.get
    let a := after.env.checked.get
    let added : NameSet := match b.constants.sharedDiff? a.constants with
      | some (changed, _) => changed.foldl (init := {}) fun (s : NameSet) (n, _) =>
        if b.constants.contains n then s else s.insert n
      | none => a.constants.foldStage2 (fun (s : NameSet) n _ =>
        if b.constants.contains n then s else s.insert n) {}
    let addedNames := added.toArray.qsort Name.quickLt
    let isAux := addedNames.map (isAuxName env)
    let decls := (addedNames.zip isAux).filterMap fun (n, a) => if a then none else some n
    let aux := (addedNames.zip isAux).filterMap fun (n, a) => if a then some n else none
    let matcher := Meta.Match.matcherCacheDelta before.env after.env
    let matcher := matcher.map fun (value, compile, isPrivate, n) =>
      (matcherKeyDigest value compile isPrivate, n)
    let matcher := matcher.qsort fun a b => Name.quickLt a.2 b.2
    let auxLemma := Meta.auxLemmaCacheDelta before.env after.env
    let auxLemma := auxLemma.map fun (type, isPrivate, defeq, n, ls) =>
      (auxLemmaKeyDigest type isPrivate defeq, n, ls)
    let auxLemma := auxLemma.qsort fun a b => Name.quickLt a.2.1 b.2.1
    let eqnsInv := Meta.eqnsCacheDelta before.env after.env
      |>.qsort fun a b => Name.quickLt a.1 b.1
    let sparseCasesOn := Meta.sparseCasesOnCacheDelta before.env after.env
    let sparseCasesOn := sparseCasesOn.map fun (indName, ctors, isPrivate, n) =>
      (sparseCasesOnKeyDigest indName ctors isPrivate, n)
    let sparseCasesOn := sparseCasesOn.qsort fun a b => Name.quickLt a.2 b.2
    let structRes := structureResolutionCacheDelta before.env after.env
      |>.qsort fun a b => Name.quickLt a.1 b.1
    return (added, addedNames, isAux, {
      i, key := .names decls, text := textDigest stx, span, ctx := default
      isDecl := !decls.isEmpty
      isInit := stx.getKind == ``Lean.Parser.Command.«initialize»
      decls, aux, usesStmt := #[], usesFull := #[], extra := #[]
      post := CommandPost.ofStates before after
      caches := { matcher, auxLemma, eqnsInv, sparseCasesOn, structRes }
      linterState := linterStateChanged linterInits before after
    })
  -- each command's record but for what chains through the commands before it (a non-declaration's `key`, `ctx`)
  let part (obs : CommandObservation) : CommandPart := Id.run do
    let (added, addedNames, isAux, r) := statesPart obs.i obs.stx obs.span obs.before obs.after
    let mut refsSet : NameSet := {}
    let mut full : NameSet := {}
    let mut compiled : NameSet := {}
    for n in addedNames, a in isAux do
      if let some ci := env.find? n then
        let rs := refs env ci
        refsSet := rs.foldl (·.insert ·) refsSet
        -- code compiled from `ci` calls an opaque's implementation (`implemented_by`, `extern`), which its full digest
        -- covers and its statement does not
        let codeOf := ci matches .defnInfo _ | .opaqueInfo _
        let stmtOnlyRefs : NameSet := rs.foldl (init := {}) fun s r =>
          match env.find? r with
          | some ri =>
            if isStmtOnly ri && !env.contains (Compiler.mkUnsafeRecName r) && !(codeOf && ri matches .opaqueInfo _)
            then s.insert r else s
          | none => s
        let valueUsed := ValueSensitive.unsafelyUsedValues env stmtOnlyRefs ci
        let auxDefn := a && ci matches .defnInfo _
        for r in rs do
          if (env.find? r).isSome && (!stmtOnlyRefs.contains r || valueUsed.contains r || auxDefn) then
            full := full.insert r
        -- what its compiled code mentions besides its terms' constants
        for r in nodeRefs.getD n #[] do
          unless rs.contains r || added.contains r do
            compiled := compiled.insert r
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
    let ownTransient := transientByCmd.getD obs.i {}
    let transientOf (n : Name) : Option NameSet := ownTransient[n]? <|> transient[n]?
    let mut usedAll : NameSet := {}
    for n in refsSet.foldl (·.insert ·) full do
      if (transientOf n).isSome then
        for d in transientDeps transientOf {} {} [n] do
          usedAll := usedAll.insert d
          full := full.insert d
      else
        usedAll := usedAll.insert n
    let used := added.foldl (fun s n => s.erase n) usedAll
    let (usesStmt, usesFull) ← match usesOf obs.i used.toArray full compiled with
      | .ok uses => pure uses
      | .error p => return p
    let extra := ((extrasByIdx.getD obs.i #[]).filterMap fun (m, _, isMeta) =>
      if (env.getModuleIdx? m).any fs.hasEntries then some (m, isMeta)
      else none).qsort fun a b => Name.quickLt a.1 b.1 ||
        (a.1 == b.1 && a.2.toNat < b.2.toNat)
    return .record { r with usesStmt, usesFull, extra }
  let keptPart (k : KeptCommand) : CommandPart := Id.run do
    let (_, _, _, r) := statesPart k.i k.stx k.span k.before k.after
    let full : NameSet := k.record.usesFull.foldl (·.insert ·.1) {}
    -- a full use that names no constant was a compiler-only node, as `noreuse` follows from any other
    let compiled : NameSet := k.record.usesFull.foldl (init := {}) fun s (n, _) => if env.contains n then s else s.insert n
    let used := k.record.usesStmt.map (·.1) ++ k.record.usesFull.map (·.1)
    let (usesStmt, usesFull) ← match usesOf k.i used full compiled with
      | .ok uses => pure uses
      | .error p => return p
    -- the command did not run here: what it read and did beyond its payload is its previous run's
    return .record { r with
      usesStmt, usesFull, extra := k.record.extra, values := k.record.values, linterState := k.record.linterState
      fileContext := k.record.fileContext, refs? := k.record.refs?, nondeterministic := k.record.nondeterministic }
  let parts ← CommandEntries.parallelMap observations (lanes := lanes) fun obs =>
    pure (obs.i, obs.stx, obs.before, (none : Option Digest), part obs)
  let parts := (parts ++ kept.map fun k => (k.i, k.stx, k.before, some k.record.ctx, keptPart k)).qsort (·.1 < ·.1)
  let mut occurrences : Std.HashMap (Name × Digest) Nat := {}
  let mut chain : CtxChain := {}
  let mut out := #[]
  for (i, stx, before, keptCtx?, p) in parts do
    let r ← match p with
      | .record r => pure r
      | .unattributed reason => return .error reason
      | .broken msg => throw (IO.userError msg)
    let key ← if r.isDecl then pure r.key else
      let kind := stx.getKind
      let occ := occurrences[(kind, r.text)]?.getD 0
      occurrences := occurrences.insert (kind, r.text) (occ + 1)
      pure (.kind kind r.text occ)
    let (ctx, chain') := chain.ctx before
    chain := chain'
    if let some keptCtx := keptCtx? then
      unless keptCtx == ctx do
        throw <| IO.userError s!"reuse: command {i} was kept in a context its record does not have: the commands \
          before it differ from those it was kept after"
    out := out.push { r with key, ctx }
    if let some (payload, digest) := payloadByIdx[i]? then
      chain := chain.push payload digest r.text ctx
  return .ok out

end Lean.ModuleUsage
