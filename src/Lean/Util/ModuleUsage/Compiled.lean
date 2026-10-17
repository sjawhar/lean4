/-
Copyright (c) 2026 Theorem Labs. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module
prelude
public import Lean.Util.ModuleUsage.Basic
public import Lean.Compiler.LCNF.PhaseExt
public import Lean.Compiler.IR.CompilerM
import Lean.Util.FoldConsts
public import Lean.Compiler.LCNF.SpecInfo
public import Lean.Compiler.LCNF.ElimDeadBranches
import Lean.Compiler.ImplementedByAttr
import Lean.Compiler.ExportAttr
import Lean.Compiler.NoncomputableAttr
public import Lean.Compiler.InlineAttrs
import Lean.Compiler.NeverExtractAttr
import Lean.Compiler.InitAttr
import Lean.Compiler.Specialize
import Lean.Compiler.MetaAttr
public import Lean.ReducibilityAttrs
public import Lean.Meta.Instances
import Lean.Class
import Lean.Meta.Match.MatchPatternAttr
public section

/-!
The compiled interface of a declaration name: everything an importer's compiler or interpreter reads about it,
in an injective encoding, and the declaration names it mentions. Structures are destructured positionally and
inductives matched exhaustively, so a field or constructor added upstream fails to compile here instead of
escaping the digest.
-/

namespace Lean.ModuleUsage
open Compiler

/-- An encoding in progress, with the types of the current LCNF declaration (digested together, by one
digester, when the declaration ends) and the declaration names seen so far. -/
structure CEnc where
  e : Enc
  tys : Array Expr := #[]
  ms : NameSet := {}

instance : Inhabited CEnc := ⟨{ e := {} }⟩

namespace CEnc
@[inline] def u8 (s : CEnc) (v : UInt8) : CEnc := { s with e := s.e.u8 v }
@[inline] def u64 (s : CEnc) (v : UInt64) : CEnc := { s with e := s.e.u64 v }
@[inline] def bool (s : CEnc) (v : Bool) : CEnc := { s with e := s.e.bool v }
@[inline] def nat (s : CEnc) (v : Nat) : CEnc := { s with e := s.e.nat v }
@[inline] def str (s : CEnc) (v : String) : CEnc := { s with e := s.e.str v }
@[inline] def name (s : CEnc) (n : Name) : CEnc := { s with e := s.e.name n }
@[inline] def names (s : CEnc) (ns : List Name) : CEnc := { s with e := s.e.names ns }
@[inline] def nats (s : CEnc) (ns : Array Nat) : CEnc := { s with e := s.e.nats ns }
/-- A declaration name the encoded data refers to. -/
@[inline] def decl (s : CEnc) (n : Name) : CEnc := { s with e := s.e.name n, ms := s.ms.insert n }
@[inline] def fvar (s : CEnc) (f : FVarId) : CEnc := s.name f.name
@[inline] def ty (s : CEnc) (t : Expr) : CEnc := { s with tys := s.tys.push t }
def opt {α : Type} (s : CEnc) (o : Option α) (f : CEnc → α → CEnc) : CEnc :=
  match o with
  | none => s.u8 0
  | some a => f (s.u8 1) a
/-- Ends a run of types: their single digest (binder infos kept, names dropped: the compiler reads infos, and
names never reach generated code), and their constants as mentions. -/
def flushTys (s : CEnc) : CEnc :=
  if s.tys.isEmpty then s.u8 0 else
  let ms := s.tys.foldl (init := s.ms) fun ms t => t.foldConsts ms fun c ms => ms.insert c
  { e := s.e.u8 1 |>.digest (exprsDigest .infos s.tys), tys := #[], ms }
end CEnc

partial def levelEnc (e : Enc) : Level → Enc
  | .zero => e.u8 0
  | .succ l => levelEnc (e.u8 1) l
  | .max a b => levelEnc (levelEnc (e.u8 2) a) b
  | .imax a b => levelEnc (levelEnc (e.u8 3) a) b
  | .param n => e.u8 4 |>.name n
  | .mvar m => e.u8 5 |>.name m.name

def inlineEnc (e : Enc) : InlineAttributeKind → Enc
  | .inline => e.u8 0 | .noinline => e.u8 1 | .macroInline => e.u8 2 | .inlineIfReduce => e.u8 3
  | .alwaysInline => e.u8 4

/-! LCNF -/

namespace LCNFEnc
open LCNF

def lit (s : CEnc) : LitValue → CEnc
  | .nat v => s.u8 0 |>.nat v
  | .str v => s.u8 1 |>.str v
  | .uint8 v => s.u8 2 |>.u64 v.toUInt64
  | .uint16 v => s.u8 3 |>.u64 v.toUInt64
  | .uint32 v => s.u8 4 |>.u64 v.toUInt64
  | .uint64 v => s.u8 5 |>.u64 v
  | .usize v => s.u8 6 |>.u64 v

def arg (s : CEnc) : Arg pu → CEnc
  | .erased => s.u8 0
  | .fvar f => s.u8 1 |>.fvar f
  | .type t _ => s.u8 2 |>.ty t

def args (s : CEnc) (as : Array (Arg pu)) : CEnc := as.foldl arg (s.nat as.size)

def ctorInfo (s : CEnc) (i : CtorInfo) : CEnc :=
  let ⟨name, cidx, size, usize, ssize⟩ := i
  s.decl name |>.nat cidx |>.nat size |>.nat usize |>.nat ssize

def levels (s : CEnc) (us : List Level) : CEnc :=
  { s with e := us.foldl levelEnc (s.e.nat us.length) }

def letValue (s : CEnc) : LetValue pu → CEnc
  | .lit v => lit (s.u8 0) v
  | .erased => s.u8 1
  | .proj t i x _ => s.u8 2 |>.decl t |>.nat i |>.fvar x
  | .const n us as _ => args (levels (s.u8 3 |>.decl n) us) as
  | .fvar f as => args (s.u8 4 |>.fvar f) as
  | .ctor i as _ => args (ctorInfo (s.u8 5) i) as
  | .oproj i x _ => s.u8 6 |>.nat i |>.fvar x
  | .uproj i x _ => s.u8 7 |>.nat i |>.fvar x
  | .sproj n o x _ => s.u8 8 |>.nat n |>.nat o |>.fvar x
  | .fap f as _ => args (s.u8 9 |>.decl f) as
  | .pap f as _ => args (s.u8 10 |>.decl f) as
  | .reset n x _ => s.u8 11 |>.nat n |>.fvar x
  | .reuse x i u as _ => args (ctorInfo (s.u8 12 |>.fvar x) i |>.bool u) as
  | .box t x _ => s.u8 13 |>.ty t |>.fvar x
  | .unbox x _ => s.u8 14 |>.fvar x
  | .isShared x _ => s.u8 15 |>.fvar x

/-- Binder names are kept: they become the names of the generated C code's variables. -/
def param (s : CEnc) (p : Param pu) : CEnc :=
  let ⟨fvarId, binderName, type, borrow⟩ := p
  s.fvar fvarId |>.name binderName |>.ty type |>.bool borrow

def params (s : CEnc) (ps : Array (Param pu)) : CEnc := ps.foldl param (s.nat ps.size)

mutual
partial def code (s : CEnc) : Code pu → CEnc
  | .let d k =>
    let ⟨fvarId, binderName, type, value⟩ := d
    code (letValue (s.u8 0 |>.fvar fvarId |>.name binderName |>.ty type) value) k
  | .fun d k _ => code (funDecl (s.u8 1) d) k
  | .jp d k => code (funDecl (s.u8 2) d) k
  | .jmp f as => args (s.u8 3 |>.fvar f) as
  | .cases c => casesE (s.u8 4) c
  | .return f => s.u8 5 |>.fvar f
  | .unreach t => s.u8 6 |>.ty t
  | .oset x i y k _ => code (arg (s.u8 7 |>.fvar x |>.nat i) y) k
  | .uset x i y k _ => code (s.u8 8 |>.fvar x |>.nat i |>.fvar y) k
  | .sset x i o y t k _ => code (s.u8 9 |>.fvar x |>.nat i |>.nat o |>.fvar y |>.ty t) k
  | .setTag x c k _ => code (s.u8 10 |>.fvar x |>.nat c) k
  | .inc x n c p k _ => code (s.u8 11 |>.fvar x |>.nat n |>.bool c |>.bool p) k
  | .dec x n c p o k _ => code ((s.u8 12 |>.fvar x |>.nat n |>.bool c |>.bool p).opt o CEnc.nat) k
  | .del x k _ => code (s.u8 13 |>.fvar x) k

partial def funDecl (s : CEnc) : FunDecl pu → CEnc
  | .mk fvarId binderName ps type value =>
    code (params (s.fvar fvarId |>.name binderName) ps |>.ty type) value

partial def casesE (s : CEnc) : Cases pu → CEnc
  | .mk typeName resultType discr alts =>
    alts.foldl alt (s.decl typeName |>.ty resultType |>.fvar discr |>.nat alts.size)

partial def alt (s : CEnc) : Alt pu → CEnc
  | .alt c ps k _ => code (params (s.u8 0 |>.decl c) ps) k
  | .ctorAlt i k _ => code (ctorInfo (s.u8 1) i) k
  | .default k => code (s.u8 2) k
end

/-- A declaration's own name is left out of its encoding: it is the key the caller encodes. -/
def signature (s : CEnc) (sig : Signature pu) : CEnc :=
  let ⟨_, levelParams, type, ps, safe⟩ := sig
  (params (s.names levelParams |>.ty type) ps |>.bool safe).flushTys

/-- A declaration's own name is left out of its encoding: it is the key the caller encodes. -/
def decl (s : CEnc) (d : Decl pu) : CEnc :=
  let ⟨sig, value, recursive, inlineAttr?⟩ := d
  let ⟨_, levelParams, type, ps, safe⟩ := sig
  let s := params (s.names levelParams |>.ty type) ps |>.bool safe
  let s := match value with
    | .code c => code (s.u8 0) c
    | .extern d => let s := s.u8 1; { s with e := externEnc s.e d }
  (s.bool recursive).opt inlineAttr? (fun s k => { s with e := inlineEnc s.e k }) |>.flushTys

end LCNFEnc

/-! IR -/

namespace IREnc
open IR

partial def irType (s : CEnc) : IRType → CEnc
  | .float => s.u8 0 | .uint8 => s.u8 1 | .uint16 => s.u8 2 | .uint32 => s.u8 3 | .uint64 => s.u8 4
  | .usize => s.u8 5 | .erased => s.u8 6 | .object => s.u8 7 | .tobject => s.u8 8 | .float32 => s.u8 9
  | .struct n? ts => ts.foldl irType ((s.u8 10).opt n? CEnc.decl |>.nat ts.size)
  | .union n ts => ts.foldl irType (s.u8 11 |>.decl n |>.nat ts.size)
  | .tagged => s.u8 12 | .void => s.u8 13

def var (s : CEnc) (x : VarId) : CEnc := s.nat x.idx
def jp (s : CEnc) (j : JoinPointId) : CEnc := s.nat j.idx

def arg (s : CEnc) : Arg → CEnc
  | .var x => var (s.u8 0) x
  | .erased => s.u8 1

def args (s : CEnc) (ys : Array Arg) : CEnc := ys.foldl arg (s.nat ys.size)

def ctorInfo (s : CEnc) (i : CtorInfo) : CEnc :=
  let ⟨name, cidx, size, usize, ssize⟩ := i
  s.decl name |>.nat cidx |>.nat size |>.nat usize |>.nat ssize

def expr (s : CEnc) : IR.Expr → CEnc
  | .ctor i ys => args (ctorInfo (s.u8 0) i) ys
  | .reset n x => var (s.u8 1 |>.nat n) x
  | .reuse x i u ys => args (ctorInfo (var (s.u8 2) x) i |>.bool u) ys
  | .proj i x => var (s.u8 3 |>.nat i) x
  | .uproj i x => var (s.u8 4 |>.nat i) x
  | .sproj n o x => var (s.u8 5 |>.nat n |>.nat o) x
  | .fap c ys => args (s.u8 6 |>.decl c) ys
  | .pap c ys => args (s.u8 7 |>.decl c) ys
  | .ap x ys => args (var (s.u8 8) x) ys
  | .box ty x => var (irType (s.u8 9) ty) x
  | .unbox x => var (s.u8 10) x
  | .lit (.num v) => s.u8 11 |>.nat v
  | .lit (.str v) => s.u8 12 |>.str v
  | .isShared x => var (s.u8 13) x

def param (s : CEnc) (p : Param) : CEnc :=
  let ⟨x, borrow, ty⟩ := p
  irType (var s x |>.bool borrow) ty

def params (s : CEnc) (xs : Array Param) : CEnc := xs.foldl param (s.nat xs.size)

mutual
partial def body (s : CEnc) : FnBody → CEnc
  | .vdecl x ty e b => body (expr (irType (var (s.u8 0) x) ty) e) b
  | .jdecl j xs v b => body (body (params (jp (s.u8 1) j) xs) v) b
  | .set x i y b => body (arg (var (s.u8 2) x |>.nat i) y) b
  | .setTag x c b => body (var (s.u8 3) x |>.nat c) b
  | .uset x i y b => body (var (var (s.u8 4) x |>.nat i) y) b
  | .sset x i o y ty b => body (irType (var (var (s.u8 5) x |>.nat i |>.nat o) y) ty) b
  | .inc x n c p b => body (var (s.u8 6) x |>.nat n |>.bool c |>.bool p) b
  | .dec x n c p b => body (var (s.u8 7) x |>.nat n |>.bool c |>.bool p) b
  | .del x b => body (var (s.u8 8) x) b
  | .case tid x xType cs => cs.foldl alt (irType (var (s.u8 9 |>.decl tid) x) xType |>.nat cs.size)
  | .ret x => arg (s.u8 10) x
  | .jmp j ys => args (jp (s.u8 11) j) ys
  | .unreachable => s.u8 12

partial def alt (s : CEnc) : Alt → CEnc
  | .ctor info b => body (ctorInfo (s.u8 0) info) b
  | .default b => body (s.u8 1) b
end

/-- A declaration's own name is left out of its encoding: it is the key the caller encodes. -/
def decl (s : CEnc) : Decl → CEnc
  | .fdecl _ xs ty b info =>
    let ⟨sorryDep?, maxJp, maxVar⟩ := info
    let s := irType (params (s.u8 0) xs) ty
    (body s b).opt sorryDep? CEnc.decl |>.nat maxJp |>.nat maxVar
  | .extern _ xs ty ext =>
    let s := irType (params (s.u8 1) xs) ty
    { s with e := externEnc s.e ext }

end IREnc

/-! Specialization info, dead-branch summaries, attributes -/

def specParamInfoEnc (s : CEnc) : LCNF.SpecParamInfo → CEnc
  | .fixedInst weak => s.u8 0 |>.bool weak
  | .fixedHO => s.u8 1
  | .fixedNeutral => s.u8 2
  | .user => s.u8 3
  | .other => s.u8 4

def specEntryEnc (s : CEnc) (e : LCNF.SpecEntry) : CEnc :=
  let ⟨declName, paramsInfo, alreadySpecialized⟩ := e
  paramsInfo.foldl specParamInfoEnc (s.name declName |>.nat paramsInfo.size) |>.bool alreadySpecialized

partial def summaryEnc (s : CEnc) : LCNF.UnreachableBranches.Value → CEnc
  | .bot => s.u8 0
  | .top => s.u8 1
  | .ctor i vs => vs.foldl summaryEnc (s.u8 2 |>.decl i |>.nat vs.size)
  | .choice vs => vs.foldl summaryEnc (s.u8 3 |>.nat vs.length)

def reducibilityEnc (e : Enc) : ReducibilityStatus → Enc
  | .reducible => e.u8 0 | .semireducible => e.u8 1 | .irreducible => e.u8 2
  | .implicitReducible => e.u8 3 | .instanceReducible => e.u8 4

def attrKindEnc (e : Enc) : AttributeKind → Enc
  | .global => e.u8 0 | .local => e.u8 1 | .scoped => e.u8 2

def scopedEnc {α : Type} (f : Enc → α → Enc) (e : Enc) : ScopedEnvExtension.Entry α → Enc
  | .global a => f (e.u8 0) a
  | .scoped ns a => f (e.u8 1 |>.name ns) a

def instanceEntryEnc (e : Enc) (a : Meta.InstanceEntry) : Enc :=
  e.opt a.globalName? Enc.name |>.nat a.priority |> (attrKindEnc · a.attrKind)

/-- The current module's data that `compiledEnc` reads besides the per-name extension states. -/
structure LocalCompiled where
  /-- IR declarations, by name. -/
  ir : Std.HashMap Name (Array IR.Decl) := {}
  /-- The instance entries the module exports (global and scoped, oldest first), by declaration. -/
  insts : NameMap (Array (ScopedEnvExtension.Entry Meta.InstanceEntry)) := {}

def LocalCompiled.ofEnv (env : Environment) : LocalCompiled :=
  -- `getDecls` lists the module's IR declarations newest first; every entry is kept, in that order.
  { ir := (IR.getDecls env).foldl (init := {}) fun m d => m.alter d.name fun o => some ((o.getD #[]).push d)
    insts := (Meta.instanceExtension.ext.getState env).newEntries.foldr (init := {}) fun e m =>
      match e with
      | .global a | .scoped _ a => match a.globalName? with
        | some n => m.alter n fun o => some ((o.getD #[]).push e)
        | none => m }

/-- The attributes of `x` that its users' compiled code depends on, as importers read them: how they call it
(`implemented_by`, `@[extern]`, `@[export]`, `noncomputable`, the init function of a global), whether and how
they inline, unfold or specialize it (inline kind, `@[never_extract]`, `@[match_pattern]`, which whnf reads when
unfolding at matchers, reducibility, instance entries, `@[specialize]` arguments), and, for a type, how arguments
of that type are specialized (class status with out-params, `@[nospecialize]`, `@[weak_specialize]`), plus its
meta mark. Instance and reducibility attributes can be local, scoped or erased, so the module's end state can
differ from what importers see: those are read from what the module exports, the instance entries the module
exports for `x` and `x`'s entry in the reducibility core extension (local and scoped reducibility live in
`reducibilityExtraExt`, whose exported entries `tableDigest` covers). The other attributes reject every kind but
global, cannot be erased, and are set only in the declaration's module. (`@[tagged_return]` changes only the
declaration's own impure signature and IR, which `compiledEnc` covers.) -/
def attrsEnc (env : Environment) (lc : LocalCompiled) (x : Name) (s : CEnc) : CEnc :=
  let insts := lc.insts.getD x #[]
  let red := (reducibilityCoreExt.getState (asyncDecl := x) env).find? x |>.getD .semireducible
  let s := s.opt (getImplementedBy? env x) CEnc.decl
    |>.opt (getExternAttrData? env x) (fun s d => { s with e := externEnc s.e d })
    |>.bool (isNoncomputable env x)
    |>.opt (getExportNameFor? env x) CEnc.name
    |>.opt (getInitFnNameFor? env x) CEnc.decl
    |>.opt (getInlineAttribute? env x) (fun s k => { s with e := inlineEnc s.e k })
    |>.bool (hasNeverExtractAttribute env x)
    |>.bool (hasMatchPatternAttribute env x)
  let s := { s with e := insts.foldl (scopedEnc instanceEntryEnc) (reducibilityEnc s.e red |>.nat insts.size) }
  s.opt (getSpecializationArgs? env x) CEnc.nats
    |>.opt (getOutParamPositions? env x) CEnc.nats
    |>.bool (hasNospecializeAttribute env x)
    |>.bool (hasWeakSpecializeAttribute env x)
    |>.bool (isMarkedMeta env x)

/-- The names of the current module with compiled entries. -/
def compiledNames (env : Environment) (lc : LocalCompiled) : NameSet :=
  let s : NameSet := lc.ir.fold (fun s n _ => s.insert n) {}
  let s := (LCNF.baseExt.getState env).foldl (fun s n _ => s.insert n) s
  let s := (LCNF.monoExt.getState env).foldl (fun s n _ => s.insert n) s
  let s := (LCNF.impureSigExt.getState env).foldl (fun s n _ => s.insert n) s
  let s := (LCNF.specExtension.getState env).specInfo.foldl (fun s n _ => s.insert n) s
  (LCNF.UnreachableBranches.functionSummariesExt.getState env).foldl (fun s n _ => s.insert n) s

/-- The compiled interface of the current module's name `x`: its attributes, and its LCNF base and mono
declarations, impure signature, IR declarations, specialization info and dead-branch summary. -/
def compiledEnc (env : Environment) (lc : LocalCompiled) (x : Name) (s : CEnc) : CEnc :=
  let s := attrsEnc env lc x s
  let s := s.opt ((LCNF.baseExt.getState env).find? x) LCNFEnc.decl
  let s := s.opt ((LCNF.monoExt.getState env).find? x) LCNFEnc.decl
  let s := s.opt ((LCNF.impureSigExt.getState env).find? x) LCNFEnc.signature
  let ds := lc.ir.getD x #[]
  let s := ds.foldl IREnc.decl (s.nat ds.size)
  let s := s.opt ((LCNF.specExtension.getState env).specInfo.find? x) specEntryEnc
  s.opt ((LCNF.UnreachableBranches.functionSummariesExt.getState env).find? x) summaryEnc

end Lean.ModuleUsage
