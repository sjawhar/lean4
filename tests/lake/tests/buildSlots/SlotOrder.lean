import Lake.Util.BuildSlots

open Lake

/-!
With one build slot (`LEAN_NUM_THREADS=1`), a holder keeps the slot while five waiters ask for it,
300 ms apart, at the priorities 0, 7, 3, 5 and 5; one second after the last one asked, the holder
gives the slot up. Prints the label of each waiter in the order in which it got the slot, one per
line.
-/

def waiters : Array (String × Task.Priority) :=
  #[("p0", 0), ("p7", 7), ("p3", 3), ("p5a", 5), ("p5b", 5)]

def main : IO Unit := do
  let got ← IO.mkRef (#[] : Array String)
  let holding ← IO.Promise.new
  let release ← IO.Promise.new
  let holder ← IO.asTask (prio := .dedicated) do
    withBuildSlot do
      holding.resolve ()
      discard <| IO.wait release.result?
  discard <| IO.wait holding.result?
  let mut tasks := #[]
  for (label, prio) in waiters do
    tasks := tasks.push (← IO.asTask (prio := .dedicated) do
      withBuildSlot (prio := prio) do
        got.modify (·.push label))
    IO.sleep 300
  IO.sleep 1000
  release.resolve ()
  for t in tasks do
    discard <| IO.wait t
  discard <| IO.wait holder
  for label in ← got.get do
    IO.println label
