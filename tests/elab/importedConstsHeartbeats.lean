import Lean

/-!
Heartbeats count the current thread's allocations, and a heartbeat limit is deterministic only if a
computation's heartbeats depend on that computation alone. The imported-constant views of an import
set are shared by all threads of a process: their lookup caches are filled, and their lazily merged
nodes computed, by whichever thread looks a name up first. So looking names up, or walking all
imported constants, must cost the same heartbeats whether or not it was done before.
-/

open Lean

def heartbeatsOf (x : IO Unit) : IO Nat := do
  let start ← IO.getNumHeartbeats
  x
  return (← IO.getNumHeartbeats) - start

def check (what : String) (first second : Nat) : IO Unit :=
  unless first == second do
    throw <| IO.userError s!"{what} cost {first} heartbeats the first time and {second} the second"

/-- Some constant names of every imported module, read from the module data, not from the views. -/
def someNames (env : Environment) : Array Name :=
  env.header.moduleData.foldl (init := #[]) fun ns d => ns ++ d.constNames.extract 0 20

def lookUp (env : Environment) (names : Array Name) : IO Unit := do
  for n in names do
    unless (env.find? n).isSome && (env.getModuleIdxFor? n).isSome do
      throw <| IO.userError s!"lookup of `{n}` failed"

def walk (env : Environment) : IO Unit := do
  unless env.constants.map₁.foldl (fun k _ _ => k + 1) 0 > 0 do
    throw <| IO.userError "no imported constants"

#guard_msgs in
#eval show IO Unit from do
  -- the interpreter's first calls of these functions allocate too: make them before measuring
  unsafe withImportModules #[{ module := `Init }] {} fun env => do
    lookUp env (someNames env)
    walk env
  -- each check imports anew, so that the views are untouched the first time
  unsafe withImportModules #[{ module := `Init }] {} fun env => do
    let names := someNames env
    check s!"looking up {names.size} names" (← heartbeatsOf (lookUp env names))
      (← heartbeatsOf (lookUp env names))
  unsafe withImportModules #[{ module := `Init }] {} fun env => do
    check "walking the imported constants" (← heartbeatsOf (walk env)) (← heartbeatsOf (walk env))
