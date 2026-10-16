import Lean
/-! Per-command `.usage` v4 records written by `lean -o`: each command's declared and auxiliary constants, the
constants it used split into statement-only (`usesStmt`: theorems reached only value-opaquely) and full
(`usesFull`), its post-command `auxDeclNGen` index, and the matcher cache entries it created. Covers a `.proj`
use of a theorem (full), a non-declaration command (`#print axioms`), a `partial def` used by `native_decide`,
structure defaults instantiated by `{}` and by `extends` (including on an async proof thread), and unification
hints attempted whether or not they apply. -/
open Lean

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"

def src := "theorem a : True := trivial
def b : True ∧ True := ⟨a, a⟩
theorem h : True ∧ True := ⟨trivial, trivial⟩
theorem c : True := h.1
instance : Inhabited Bool := ⟨true⟩
#print axioms a
def m : Nat → Nat
  | 0 => 1
  | n + 1 => n
partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)
theorem t : f 1 = 2 := by native_decide
structure S where
  x : Nat := 1
def s : S := {}
structure T extends S where
  y : Nat := 2
theorem th : (({} : S).x) = 1 := by exact rfl
structure UHCarrier where
  α : Type
  op : α → α → α
def boolCarrier : UHCarrier := ⟨Bool, and⟩
def natCarrier : UHCarrier := ⟨Nat, Nat.add⟩
unif_hint uh1 (s : UHCarrier) where
  s =?= boolCarrier
  |-
  s.α =?= Bool
unif_hint uh2 (s : UHCarrier) where
  s =?= natCarrier
  |-
  s.α =?= Nat
def uhMul {s : UHCarrier} (a b : s.α) : s.α := s.op a b
def u (x : Nat) : Nat := uhMul x x
"

#eval IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "M.lean") src
  runLean dir #["-o", "M.olean", "M.lean"]
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / "M.usage"))
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array ModuleUsage.CommandRecord) "commands"
  let showNames (ns : Array Name) : String := toString (ns.qsort Name.lt).toList
  let mut prevIdx := 0
  let mut steps := #[]
  for r in cmds do
    let full : Array Name := r.usesFull.map fun (entry : Name × ModuleUsage.Digest × ModuleUsage.Digest) =>
      entry.1
    IO.println s!"{r.i} {if r.isDecl then "decl" else "other"} decls={showNames r.decls} aux={showNames r.aux} \
      stmt={showNames (r.usesStmt.map fun (entry : Name × ModuleUsage.Digest) => entry.1)} \
      full∋[a,h,f,S.x._default,uh1,uh2]={[`a, `h, `f, `S.x._default, `uh1, `uh2].filter full.contains} \
      matcher={showNames (r.caches.matcher.map fun (entry : ModuleUsage.Digest × Name) => entry.2)}"
    steps := steps.push (r.post.auxDeclNGen.idx - prevIdx)
    prevIdx := r.post.auxDeclNGen.idx
  IO.println s!"records={cmds.size} idx advances every command: {steps.all (· ≥ 1)}"
