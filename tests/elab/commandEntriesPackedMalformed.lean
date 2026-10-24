import Lean
/-! `PackedPayloads.unpack` rejects a packing `CommandEntries.pack` cannot write with an error, before it allocates
anything for it: a count larger than the bytes left, a number longer than ten bytes, a part referring to a part of
another extension, a part name the table holds twice, and a part table entry no part uses. -/
open Lean

def outcome (p : PackedPayloads) : String :=
  match p.unpack with
  | .ok ps => s!"ok, {ps.size} payloads"
  | .error e => e

/-- One payload whose `main` view has two entry parts, the first written out (no entries) for the part at
`PackedPayloads.parts` index 0, the second for index `j` as a reference to the first, and nothing else. -/
def twoParts (j : UInt8) (literal : Bool) : ByteArray :=
  ⟨#[1, 0, 2, 0, 1, j] ++ (if literal then #[1] else #[0, 0]) ++
    #[0, 0, 0, 0, 0, 0,  -- the other views, no added constants
      0, 1, 0, 0, 0, 0, 0, 0, 0,  -- counters
      0]⟩  -- refusals

/--
info: a count of the packed payloads exceeds the bytes left
a number of the packed payloads is too long
the packed payloads hold more than their payloads
ok, 0 payloads
ok, 1 payloads
a part of the packed payloads refers to a part of another extension
the packed payloads name a part twice
-/
#guard_msgs in
#eval do
  IO.println (outcome { bytes := ⟨#[128, 128, 128, 128, 128, 128, 128, 128, 64]⟩ })
  IO.println (outcome { bytes := ⟨#[255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 1]⟩ })
  IO.println (outcome { bytes := ⟨#[0]⟩, parts := #[`unused] })
  IO.println (outcome { bytes := ⟨#[0]⟩ })
  IO.println (outcome { bytes := twoParts 0 false, parts := #[`A] })
  IO.println (outcome { bytes := twoParts 1 false, parts := #[`A, `B] })
  IO.println (outcome { bytes := twoParts 1 true, parts := #[`A, `A] })
