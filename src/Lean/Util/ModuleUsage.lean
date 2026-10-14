module
prelude
public import Lean.Util.SCC
public import Lean.Util.FoldConsts
public import Lean.Util.PtrSet
public import Lean.Compiler.ImplementedByAttr
public import Lean.Compiler.ExternAttr
import Lean.ExtraModUses
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
      | .app f a => return mixHash 41 (mixHash (← go f) (← go a))
      | .lam n t b bi => return mixHash (binderHash 43 n bi) (mixHash (← go t) (← go b))
      | .forallE n t b bi => return mixHash (binderHash 47 n bi) (mixHash (← go t) (← go b))
      | .letE n t v b nd =>
        return mixHash (binderHash 53 n .default) (mixHash (hash nd) (mixHash (← go t) (mixHash (← go v) (← go b))))
      | .lit (.natVal n) => pure (mixHash 59 (hash (toString n)))
      | .lit (.strVal s) => pure (mixHash 61 (hash s))
      | .mdata _ b => go b
      | .proj s i b => return mixHash 67 (mixHash (hash s) (mixHash (hash i) (← go b)))
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
  let base := mixHash base (mixHash (hash (Compiler.getImplementedBy? env c.name)) (hash (isExtern env c.name)))
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

def State.find? (s : State) (env : Environment) (c : Name) : Option UInt64 := do
  let i ← env.getModuleIdxFor? c
  let es ← s.importedModuleEntries[i.toNat]?
  (·.2) <$> es.binSearch (c, 0) (fun a b => Name.quickLt a.1 b.1)

def State.hasEntries (s : State) (i : ModuleIdx) : Bool :=
  !(s.importedModuleEntries[i.toNat]?.getD #[]).isEmpty

/-- Digests of the current module's constants: SCCs in dependency order; each SCC mixes its members' names and
local hashes with the name and digest of every constant outside it that they refer to. -/
def compute (env : Environment) (s : State) : Array (Name × UInt64) := Id.run do
  let consts := env.checked.get.constants.foldStage2 (fun cs n ci => cs.push (n, ci, refs env ci)) #[]
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

def localDigests (env : Environment) : Array (Name × UInt64) := compute env (state env)

/-- Per defining module, sorted: every imported constant that the current module's own constants refer to or
that is in `extra`, with its digest. Constants without a digest (from a module built without this extension) are
left out. -/
def moduleUsed (env : Environment) (extra : NameSet) : Array (Name × Array (Name × UInt64)) :=
  let privEnv := env.setExporting false
  let own := env.checked.get.constants.foldStage2 (fun ns n _ => ns.push n) #[]
  let used := own.foldl (init := extra) fun s n =>
    ((privEnv.find? n).map (refs env) |>.getD #[]).foldl (·.insert ·) s
  let byMod := used.foldl (init := (∅ : Std.HashMap Name (Array (Name × UInt64)))) fun m c =>
    match env.getModuleIdxFor? c, importedDigest? env c with
    | some i, some d => match env.header.modules[i.toNat]? with
      | some mi => m.alter mi.module fun o => some ((o.getD #[]).push (c, d))
      | none => m
    | _, _ => m
  byMod.toArray.map (fun (k, v) => (k, v.qsort fun a b => Name.quickLt a.1 b.1))
    |>.qsort fun a b => Name.quickLt a.1 b.1

def hex16 (v : UInt64) : String :=
  let s := String.ofList (Nat.toDigits 16 v.toNat); "".pushn '0' (16 - s.length) ++ s

/-- With `incrLoaded` (the run reused commands from an `--incr-load` snapshot), `noskip` is set: reused commands
never call `addDecl` in this process, so `extra` may miss constants they used. -/
def writeUsage (env : Environment) (extra : NameSet) (incrLoaded : Bool) (path : System.FilePath) : IO Unit := do
  let own := localDigests env
  let privEnv := env.setExporting false
  let noskip := incrLoaded || own.any fun (n, _) => ((privEnv.find? n).map (refs env) |>.getD #[]).any
    (· matches ``Lean.reduceBool | ``Lean.reduceNat)
  let s := state env
  let extraMods := (getLocalExtraModUses env).filter fun u =>
    (env.getModuleIdx? u.module).any s.hasEntries
  let pair (n : Name) (d : UInt64) := Json.arr #[toJson n, hex16 d]
  let j := Json.mkObj [("version", 1), ("noskip", noskip),
    ("moduleDigest", hex16 (own.foldl (fun h (_, d) => mixHash h d) 7)),
    ("own", Json.arr (own.map fun (n, d) => pair n d)),
    ("used", Json.arr ((moduleUsed env extra).map fun (m, cs) =>
      Json.arr #[toJson m, Json.arr (cs.map fun (n, d) => pair n d)])),
    ("extra", Json.arr (extraMods.map fun u => Json.arr #[toJson u.module, u.isMeta]))]
  IO.FS.writeFile path j.compress

end Lean.ModuleUsage
