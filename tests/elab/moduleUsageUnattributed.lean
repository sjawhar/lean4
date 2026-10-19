import Lean
/-! A command that uses a name no `.usage` digest stands for writes its module's `.usage` as `noskip` with no command
records; `lean -o` succeeds as it does without usage recording. Such a name names no constant: a declaration the
kernel rejected referred to it (an absent constant in a type or, through `addDecl`'s asynchronous check, in a value; a
`_nested` auxiliary; an IR-only name of an import), or a `mutual` block that failed before `addDecl` mentioned it. Or it
is a constant the elaborator holds and the kernel never received. The constants the kernel and `addDecl` create without
elaboration are attributed: a nested inductive's auxiliary recursors (`T.rec_1`), `.below_1`/`.brecOn_1`, `sizeOf_spec`
lemmas and `_unsafe_rec` definitions are uses with this module's digests, and in an environment the module discards
they stand for what their declaration used. -/
open Lean

/-- Compiles `dir/name.lean` with `lean -o` and describes the outcome and the `.usage` it wrote. -/
def compile (dir : System.FilePath) (name src : String) : IO (Option Json) := do
  IO.FS.writeFile (dir / s!"{name}.lean") src
  let out ← IO.Process.output { cmd := "lean", args := #["-o", s!"{name}.olean", s!"{name}.lean"], cwd := dir
                                env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    IO.println s!"{name}: lean -o failed ({out.exitCode}): {out.stderr.trimAscii}{out.stdout.trimAscii}"
    return none
  let j ← IO.ofExcept <| Json.parse (← IO.FS.readFile (dir / s!"{name}.usage"))
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array Json) "commands"
  let reason := (j.getObjValAs? String "noskipReason").toOption.getD "none"
  IO.println s!"{name}: noskip {← IO.ofExcept <| j.getObjValAs? Bool "noskip"}, {cmds.size} command records, \
    reason: {reason}"
  return some j

/-- The names a command record of `j` with index `i` uses, statement-only or full. -/
def usesOf (j : Json) (i : Nat) : IO (Array String) := do
  let cmds ← IO.ofExcept <| j.getObjValAs? (Array Json) "commands"
  let some r := cmds.find? (fun c => (c.getObjValAs? Nat "i").toOption == some i) |
    throw <| IO.userError s!"no record {i}"
  let name (e : Json) : IO String := do
    let n ← IO.ofExcept <| e.getArrVal? 0
    let cs ← IO.ofExcept n.getArr?
    return ".".intercalate (cs.map (fun c => match c with | .str s => s | c => c.compress)).toList
  let stmt ← IO.ofExcept <| r.getObjValAs? (Array Json) "usesStmt"
  let full ← IO.ofExcept <| r.getObjValAs? (Array Json) "usesFull"
  (stmt ++ full).mapM name

#eval IO.FS.withTempDir fun dir => do
  -- the kernel rejects a declaration that names an absent constant
  discard <| compile dir "Rejected" "import Lean
open Lean
#guard_msgs (drop error) in
#eval addDecl <| .axiomDecl { name := `ax, levelParams := [], type := .const `doesNotExist [], isUnsafe := false }
def after := 1
"
  -- a definition whose value names one: the elaborator holds `zz` at once, the kernel's asynchronous check rejects it
  discard <| compile dir "RejectedValue" "import Lean
open Lean Elab Command
#guard_msgs (drop error) in
run_cmd do
  liftTermElabM <| addDecl (.defnDecl { name := `zz, levelParams := [], type := mkConst ``Nat, value := mkConst `zzMissing, hints := .opaque, safety := .safe })
theorem after : True := trivial
"
  -- and one that names a `_nested` auxiliary type, which exists only inside the kernel's check of a nested inductive
  discard <| compile dir "NestedPrefix" "import Lean
open Lean
#guard_msgs (drop error) in
#eval addDecl <| .inductDecl [] 0 [
  { name := `KNAux, type := .sort .zero
    ctors := [{ name := `KNAux.mk
                type := .forallE `x (.app (.const `_nested.KNHost_1 [.zero]) (.const ``True [])) (.const `KNAux [])
                  .default }] }] false
"
  -- a `mutual` block rejected before `addDecl`, whose info trees mention the `let rec` it never added
  discard <| compile dir "MutualLetRec" "#guard_msgs (drop error) in
mutual
def y :=
  let rec z := 3
  z + 2
def y.z := 42
end
theorem after : True := trivial
"
  -- a constant the elaborator holds and the kernel never receives: `addConstAsync` committed without a kernel check
  discard <| compile dir "ElabOnly" "import Lean
open Lean
#eval show CoreM Unit from do
  let async ← (← getEnv).addConstAsync `ghost .axiom
  async.commitConst async.asyncEnv
    (some (.axiomInfo { name := `ghost, levelParams := [], type := mkConst ``True, isUnsafe := false }))
  async.commitCheckEnv async.asyncEnv
  setEnv async.mainEnv
#check ghost
"
  -- an import's IR-only name (`h._boxed`), which `getModuleIdxFor?` maps to that import
  discard <| compile dir "X" "def h (x : UInt8) : UInt8 := x + 1
structure Leaf where n : Nat
"
  discard <| compile dir "IRName" "import Lean
import X
open Lean
#guard_msgs (drop error) in
#eval addDecl <| .axiomDecl { name := `ax, levelParams := [], type := .const `h._boxed [], isUnsafe := false }
"
  -- created without elaboration inside an environment the command discards: attributed to their declarations, so
  -- the command's uses are the imported constants they stand for, none of the discarded constants
  if let some j ← compile dir "Discarded" "import Lean
import X
open Lean Elab Command
set_option hygiene false in
#eval show CommandElabM Unit from withoutModifyingEnv do
  elabCommand (← `(inductive Tree where | node : Leaf → List Tree → Tree))
  elabCommand (← `(def Tree.size : Tree → Nat | .node _ ts => 1 + (ts.attach.map fun ⟨t, _⟩ => t.size).sum))
  elabCommand (← `(partial def loop (n : Nat) : Nat := loop n))
  elabCommand (← `(structure S where x : Nat))
  elabCommand (← `(theorem t : sizeOf (S.mk 1) = 1 + 1 := by simp))
" then
    let uses : Array String ← usesOf j 1
    let fromX := (uses.filter fun (n : String) => n.startsWith "Leaf").qsort (· < ·)
    let discarded := uses.filter fun (n : String) => ["Tree", "loop", "S", "t"].contains (n.splitOn ".").head!
    IO.println s!"Discarded: uses from X {fromX}, uses of discarded constants {discarded}"
  -- the same constants kept: later commands use them with this module's digests
  let kept := #["Tree.rec_1", "Tree.below_1", "Tree.brecOn_1", "Tree.node.sizeOf_spec", "S.mk.sizeOf_spec",
    "loop._unsafe_rec"]
  if let some j ← compile dir "Kept" (String.join ([
      "inductive Tree where | node : List Tree → Tree\n",
      "partial def loop (n : Nat) : Nat := loop n\n",
      "structure S where x : Nat\n"] ++ kept.toList.map (s!"#check @{·}\n"))) then
    let own ← IO.ofExcept <| j.getObjValAs? (Array Json) "own"
    for n in kept, i in [3:3 + kept.size] do
      let ownHas := own.any fun e => ((e.getArrVal? 0).toOption.map Json.compress) ==
        some (Json.arr (n.splitOn "." |>.toArray.map Json.str)).compress
      IO.println s!"Kept: `{n}` is its own constant: {ownHas}, used by command {i}: {(← usesOf j i).contains n}"
