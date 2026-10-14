module
prelude
public import Lean.Util.SCC
public import Lean.Util.FoldConsts
public import Lean.Util.PtrSet
public import Lean.Compiler.ImplementedByAttr
public import Lean.Compiler.ExternAttr
public import Lean.Compiler.NoncomputableAttr
public import Lean.Elab.InfoTree.Types
import Lean.ExtraModUses
import Lean.Server.InfoUtils
public section
namespace Lean.ModuleUsage

def levelHash : Level → UInt64
  | .zero => 3
  | .succ l => mixHash 5 (levelHash l)
  | .max a b => mixHash 7 (mixHash (levelHash a) (levelHash b))
  | .imax a b => mixHash 11 (mixHash (levelHash a) (levelHash b))
  | .param n => mixHash 13 (hash n)
  | .mvar m => mixHash 17 (hash m.name)

/-- 64-bit structural hash, cached by pointer. Ignores `mdata`. With `binders`, binder names and infos count
(types: they steer elaboration downstream); without, it sees what the kernel sees. -/
unsafe def exprHashImpl (binders : Bool) (e : Expr) : UInt64 :=
  (go e).run' mkPtrMap
where
  binderHash (tag : UInt64) (n : Name) (bi : BinderInfo) : UInt64 :=
    if binders then mixHash tag (mixHash (hash n) (hash bi)) else tag
  go (e : Expr) : StateM (PtrMap Expr UInt64) UInt64 := do
    if let some h := (← get).find? e then return h
    let h ← match e with
      | .bvar i => pure (mixHash 19 (hash i))
      | .fvar f => pure (mixHash 23 (hash f.name))
      | .mvar m => pure (mixHash 29 (hash m.name))
      | .sort l => pure (mixHash 31 (levelHash l))
      | .const n ls => pure (ls.foldl (fun h l => mixHash h (levelHash l)) (mixHash 37 (hash n)))
      | .app f a => pure (mixHash 41 (mixHash (← go f) (← go a)))
      | .lam n t b bi => pure (mixHash (binderHash 43 n bi) (mixHash (← go t) (← go b)))
      | .forallE n t b bi => pure (mixHash (binderHash 47 n bi) (mixHash (← go t) (← go b)))
      | .letE n t v b nd =>
        pure (mixHash (binderHash 53 n .default) (mixHash (hash nd) (mixHash (← go t) (mixHash (← go v) (← go b)))))
      | .lit (.natVal n) => pure (mixHash 59 (hash (toString n)))
      | .lit (.strVal s) => pure (mixHash 61 (hash s))
      | .mdata _ b => go b
      | .proj s i b => pure (mixHash 67 (mixHash (hash s) (mixHash (hash i) (← go b))))
    modify (·.insert e h)
    return h

@[implemented_by exprHashImpl] opaque exprHash (binders : Bool) (e : Expr) : UInt64

def hintsHash : ReducibilityHints → UInt64
  | .opaque => 11 | .abbrev => 13 | .regular h => mixHash 17 h.toUInt64
def safetyHash : DefinitionSafety → UInt64
  | .safe => 19 | .unsafe => 23 | .partial => 29

/-- Everything of `c` except the meaning of the constants it refers to. -/
def localHash (env : Environment) (c : ConstantInfo) : UInt64 :=
  let base := mixHash (hash c.levelParams) (exprHash true c.type)
  let base := mixHash base (mixHash (hash (Compiler.getImplementedBy? env c.name))
    (mixHash (hash (isExtern env c.name)) (hash (isNoncomputable env c.name))))
  let v := exprHash false
  mixHash base <| match c with
  | .defnInfo d => mixHash (v d.value) (mixHash (hintsHash d.hints) (safetyHash d.safety))
  | .thmInfo t => mixHash 71 (v t.value)
  | .opaqueInfo o => mixHash (v o.value) (hash o.isUnsafe)
  | .axiomInfo a => mixHash 73 (hash a.isUnsafe)
  | .quotInfo _ => 79
  | .inductInfo i => hash (i.ctors, i.all, i.numParams, i.numIndices, i.numNested, i.isRec, i.isUnsafe, i.isReflexive)
  | .ctorInfo k => hash (k.induct, k.cidx, k.numParams, k.numFields, k.isUnsafe)
  | .recInfo r => r.rules.foldl (init := hash (r.all, r.numParams, r.numIndices, r.numMotives, r.numMinors, r.k,
      r.isUnsafe)) fun h rl => mixHash h (mixHash (hash (rl.ctor, rl.nfields)) (v rl.rhs))

/-- The constants `c`'s meaning depends on: those in its type and value, its inductive's block and constructors,
its recursor rules' right-hand sides, its `implemented_by` target. -/
def refs (env : Environment) (c : ConstantInfo) : Array Name :=
  let s : NameSet := c.getUsedConstantsAsSet
  let s : NameSet := match c with
    | .inductInfo i => i.all.foldl (·.insert ·) s
    | .ctorInfo k => s.insert k.induct
    | .recInfo r => r.rules.foldl (fun s rl => rl.rhs.getUsedConstants.foldl (·.insert ·) (s.insert rl.ctor)) s
    | _ => s
  let s := match Compiler.getImplementedBy? env c.name with | some t => s.insert t | none => s
  s.toArray.qsort Name.quickLt

def markerName : Name := `_moduleUsage

structure State where
  importedModuleEntries : Array (Array (Name × UInt64)) := #[]
instance : Inhabited State := ⟨{}⟩

/-- The digest of `c` if module `i` (the module defining `c`) wrote one. -/
def State.findAt? (s : State) (i : ModuleIdx) (c : Name) : Option UInt64 := do
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, 0) (fun a b => Name.quickLt a.1 b.1)

def State.find? (s : State) (env : Environment) (c : Name) : Option UInt64 := do
  s.findAt? (← env.getModuleIdxFor? c) c

def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- The current module's own constants, from the kernel environment, each with its `refs`. -/
def ownConsts (env : Environment) : Array (Name × ConstantInfo × Array Name) :=
  env.checked.get.constants.foldStage2 (fun cs n ci => cs.push (n, ci, refs env ci)) #[]

/-- Digests of the current module's constants: SCCs in dependency order; each SCC mixes its members' names and
local hashes with the name and digest of every constant outside it that they refer to. -/
def compute (env : Environment) (s : State) (consts := ownConsts env) : Array (Name × UInt64) := Id.run do
  let byName : Std.HashMap Name (ConstantInfo × Array Name) :=
    consts.foldl (fun m (n, ci, rs) => m.insert n (ci, rs)) {}
  let sccs := SCC.scc (consts.map (·.1)).toList fun n => byName[n]!.2.toList.filter byName.contains
  let mut out : Std.HashMap Name UInt64 := {}
  for scc in sccs do
    let members := NameSet.ofList scc
    let mut h : UInt64 := 83
    for m in scc.toArray.qsort Name.quickLt do
      let (ci, rs) := byName[m]!
      h := mixHash h (mixHash (hash m) (localHash env ci))
      for r in rs do
        unless members.contains r do
          h := mixHash h (mixHash (hash r) ((out[r]? <|> s.find? env r).getD (mixHash 97 (hash r))))
    for m in scc do out := out.insert m h
  return (consts.map fun (n, _) => (n, out[n]!)).qsort fun a b => Name.quickLt a.1 b.1

builtin_initialize ext : PersistentEnvExtension (Name × UInt64) (Name × UInt64) State ←
  registerPersistentEnvExtension {
    mkInitial := pure {}
    addImportedFn := fun es => pure { importedModuleEntries := es }
    addEntryFn := fun s _ => s
    -- Private level only: digests cover private constants and unexposed bodies, which must not change the
    -- exported `.olean` of a `module` file. Non-module files are written and read at the private level.
    exportEntriesFnEx := fun env s =>
      let es := (compute env s).push (markerName, 1) |>.qsort fun a b => Name.quickLt a.1 b.1
      { exported := #[], server := #[], «private» := es }
    asyncMode := .mainOnly
  }

def state (env : Environment) : State := ext.getState (asyncMode := .mainOnly) env

def importedDigest? (env : Environment) (c : Name) : Option UInt64 := (state env).find? env c

def localDigests (env : Environment) (consts := ownConsts env) : Array (Name × UInt64) :=
  compute env (state env) consts

/-- Per defining module, sorted: every imported constant that the current module's own constants refer to or
that is in `extra`, with its digest. Constants without a digest (from a module built without this extension) are
left out. -/
def moduleUsed (env : Environment) (extra : NameSet) (consts := ownConsts env) :
    Array (Name × Array (Name × UInt64)) :=
  let s := state env
  let used := consts.foldl (init := extra) fun u (_, _, rs) => rs.foldl (·.insert ·) u
  let byMod := used.foldl (init := (∅ : Std.HashMap Name (Array (Name × UInt64)))) fun m c => Id.run do
    let some i := env.getModuleIdxFor? c | return m
    let some d := s.findAt? i c | return m
    m.alter env.header.modules[i.toNat]!.module fun o => some ((o.getD #[]).push (c, d))
  byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
    |>.qsort fun a b => Name.quickLt a.1 b.1

def hex16 (v : UInt64) : String :=
  let s := String.ofList (Nat.toDigits 16 v.toNat); "".pushn '0' (16 - s.length) ++ s

/-- A name as the JSON array of its components, root first: each a string or a number. Unlike `toJson Name`
(`Name.toString`), this round-trips macro-scoped names and components containing `»`. -/
def nameToJson (n : Name) : Json :=
  .arr (go n #[])
where
  go : Name → Array Json → Array Json
    | .anonymous, acc => acc
    | .str p s, acc => (go p acc).push (.str s)
    | .num p k, acc => (go p acc).push (.num k)

unsafe structure WalkState where
  /-- Visited metavariable-free subterms: their constants do not depend on any assignment. -/
  closed : PtrSet Expr := mkPtrSet
  /-- Visited subterms with metavariables, valid for `mctx` only. -/
  opened : PtrSet Expr := mkPtrSet
  mctx : MetavarContext := {}
  used : NameSet

/-- Adds the constants of `e` with its metavariables instantiated by `s.mctx`, following assignments in place
of building the instantiated term. -/
unsafe def walkExpr (e : Expr) : StateM WalkState Unit := do
  let s ← get
  if e.hasMVar then
    if s.opened.contains e then return
    set { s with opened := s.opened.insert e }
  else
    if s.closed.contains e then return
    set { s with closed := s.closed.insert e }
  match e with
  | .forallE _ d b _ | .lam _ d b _ => walkExpr d; walkExpr b
  | .letE _ t v b _ => walkExpr t; walkExpr v; walkExpr b
  | .app f a => walkExpr f; walkExpr a
  | .mdata _ b => walkExpr b
  | .proj n _ b => modify (fun s => { s with used := s.used.insert n }); walkExpr b
  | .const c _ => modify fun s => { s with used := s.used.insert c }
  | .mvar m =>
    let mctx := (← get).mctx
    if let some v := mctx.getExprAssignmentCore? m then walkExpr v
    else if let some d := mctx.getDelayedMVarAssignmentCore? m then walkExpr (.mvar d.mvarIdPending)
  | _ => pure ()

unsafe def usedFromInfoTreesImpl (trees : Array Elab.InfoTree) (init : NameSet) : NameSet :=
  let walk : StateM WalkState Unit := trees.forM fun t => t.foldInfoM (init := ()) fun ctx i _ => match i with
    | .ofTermInfo ti => do
      unless ptrEq (← get).mctx ctx.mctx do
        modify fun s => { s with mctx := ctx.mctx, opened := mkPtrSet }
      walkExpr ti.expr
    | .ofFieldInfo fi => modify fun s => { s with used := s.used.insert fi.projName }
    | _ => pure ()
  (walk.run { used := init }).2.used

/-- `init` plus every constant in a `TermInfo.expr` of `trees`, metavariables instantiated with the node's
`ContextInfo.mctx`, and every `FieldInfo.projName`. Visited subterms are shared by all nodes, so a subterm that
many nested nodes carry is walked once. Assignments are followed rather than instantiated, so the result can
keep a constant that instantiation's beta reduction would drop: a superset, never less. -/
@[implemented_by usedFromInfoTreesImpl]
opaque usedFromInfoTrees (trees : Array Elab.InfoTree) (init : NameSet) : NameSet

/-- `extra` lists the extra module uses of the environment and of `extraModUsesByChecksRef` (those of commands
whose environment was discarded). With `incrLoaded` (the run reused commands from an `--incr-load` snapshot),
`noskip` is set: reused commands never call `addDecl` in this process, so `extra` may miss constants they used. -/
def writeUsage (env : Environment) (extra : NameSet) (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let consts := ownConsts env
  let own := localDigests env consts
  let noskip := incrLoaded || consts.any fun (_, _, rs) => rs.any (· matches ``Lean.reduceBool | ``Lean.reduceNat)
  let s := state env
  let allExtra := (getLocalExtraModUses env).foldl (·.insert ·) (← extraModUsesByChecksRef.get)
  let extraMods := allExtra.toArray.filter (fun u => (env.getModuleIdx? u.module).any s.hasEntries)
    |>.qsort fun a b => let k (u : ExtraModUse) := 2 * u.isExported.toNat + u.isMeta.toNat
      Name.quickLt a.module b.module || (a.module == b.module && k a < k b)
  let pair (n : Name) (d : UInt64) := Json.arr #[nameToJson n, hex16 d]
  let j := Json.mkObj [("version", 1), ("noskip", noskip),
    ("moduleDigest", hex16 (own.foldl (fun h (_, d) => mixHash h d) 7)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr ((moduleUsed env extra consts).map fun (m, cs) =>
      Json.arr #[nameToJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[nameToJson u.module, u.isMeta]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
