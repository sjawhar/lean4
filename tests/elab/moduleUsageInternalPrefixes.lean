import Lean

/-!
`ModuleUsage.internalPrefixes`, which counts a name's internal prefixes in one walk, and `addInternalPrefixes` give
what the loop that tests `Name.isInternal` on each prefix gives: on names with internal components at several depths,
numeric and empty components, and on every constant name of `Lean`.
-/

open Lean

/-- Each `getPrefix` while the name is internal. -/
def loopPrefixes (n : Name) : Array Name := Id.run do
  let mut out := #[]
  let mut c := n
  while c.isInternal do
    c := c.getPrefix
    out := out.push c
  return out

def loopAdd (ps : NameHashSet) (x : Name) : NameHashSet := Id.run do
  let mut ps : Std.HashSet Name := ps
  for p in loopPrefixes x do
    let (had, ps') := ps.containsThenInsert p
    ps := ps'
    if had then break
  return ps

def handMade : List Name := [.anonymous, `a, `a.b, `_a, `a._b, `_a.b, `a._b.c._d.e, `_a._b._c, Name.mkNum `a._b 7,
  Name.mkNum `_x 3, Name.mkNum (Name.mkNum .anonymous 1) 2, .num .anonymous 4, (`_x).str "", (`a).str "",
  ((`a).str "" |>.str "_b" |>.num 4 |>.str "c")]

#guard handMade.all fun x => ModuleUsage.internalPrefixes x == loopPrefixes x
#guard ModuleUsage.internalPrefixes `a._b.c._d.e == #[`a._b.c._d, `a._b.c, `a._b, `a]
#guard ModuleUsage.internalPrefixes (Name.mkNum `a._b 7) == #[`a._b, `a]
#guard ModuleUsage.internalPrefixes `a.b.c == #[]

#eval show CoreM Unit from do
  let names := handMade ++ (← getEnv).constants.toList.map (·.1)
  for x in names do
    unless ModuleUsage.internalPrefixes x == loopPrefixes x do
      throwError "internalPrefixes differs on {x}"
  let (a, b) := names.foldl (init := (({} : NameHashSet), ({} : NameHashSet))) fun (a, b) x =>
    (ModuleUsage.addInternalPrefixes a x, loopAdd b x)
  unless a.size == b.size && (a : Std.HashSet Name).fold (fun ok x => ok && b.contains x) true do
    throwError "addInternalPrefixes differs"
  if a.size < 1000 then throwError "only {a.size} internal prefixes"
