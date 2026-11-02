import Lean

open Lean Lean.Language.Lean

/-!
Tests `Lean.Language.Lean.sameLengthLineShift?`, which decides whether an edit of the same byte length
moves text that keeps its bytes to another line or column, so that the language processor must not
reuse old elaboration results for it. Each case gives the old and the new text and the expected
answer.
-/

/-- `(name, old, new, shift)`: whether the edit from `old` to `new` must count as a shift. -/
def cases : List (String × String × String × Bool) := [
  ("typo fix", "theorem teh : True := trivial\n", "theorem the : True := trivial\n", false),
  ("swap on a line before a newline", "ab\ncd\n", "ba\ncd\n", false),
  ("equal byte inside the change, no shift", "x y z\n", "a y b\n", false),
  ("other byte length", "-- a\ngrind\n", "-- ab\ngrind\n", false),
  ("a line fewer", "  -- a\n  -- b\n  grind\n", "  -- a --- bb\n  grind\n", true),
  ("a column more after a moved newline", "foo\nbar\n", "fo\nobar\n", true),
  -- three same-length sub-edits: a line fewer above `grind`, a line more below it, and a typo fix
  -- after a common newline, so that the end of the change keeps its line and column, but `grind`
  -- keeps its byte offset and moves one line up
  ("a line fewer and a line more around a run, then a typo fix",
    "  -- a\n  -- b\n  grind\n  trivial\n  -- c --- dd\n  -- ab\n",
    "  -- a --- bb\n  grind\n  trivial\n  -- c\n  -- d\n  -- ba\n", true),
  -- the same code points before `grind`, but one UTF-16 unit fewer (`𝔸` is two units)
  ("fewer UTF-16 units", "  /- 𝔸a -/ grind\n", "  /- €é -/ grind\n", true),
  ("more UTF-16 units", "  /- €é -/ grind\n", "  /- 𝔸a -/ grind\n", true)]

def main : IO UInt32 := do
  let mut bad := 0
  for (name, old, new, shift) in cases do
    let got := (sameLengthLineShift? old new (old.firstDiffPos new)).isSome
    if got != shift then
      IO.println s!"{name}: expected shift = {shift}, got {got}"
      bad := bad + 1
  return if bad == 0 then 0 else 1
