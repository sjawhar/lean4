import Lean
/-! `ModuleUsage.stampSettled`, the rule for when a file's stamp stands for the bytes read: on ext4, XFS, Btrfs and
tmpfs with a nonzero nanosecond field and a known clock tick, a status-change time more than `max 50 ms (4 * tick)`
before the read began suffices; everything else (another file system type, a zero nanosecond field, a failed `statfs`,
an unknown tick) needs more than 2 s. -/
open Lean ModuleUsage

def ms (n : Int64) : Int64 := n * 1000000

def fine : List (String × UInt64) :=
  [("ext4", 0xEF53), ("xfs", 0x58465342), ("btrfs", 0x9123683E), ("tmpfs", 0x01021994)]

/-- A 4 ms tick, as at HZ=250. -/
def tick : Int64 := ms 4

#eval show IO Unit from do
  for (name, t) in fine do
    for nsec in [(0 : UInt64), 123456789] do
      let r := [49, 51, 1999, 2001].map fun a => stampSettled true t nsec tick (ms a)
      IO.println s!"{name} nsec={nsec}: 49ms {r[0]!} 51ms {r[1]!} 1999ms {r[2]!} 2001ms {r[3]!}"
  for (name, t) in [("nfs", (0x6969 : UInt64)), ("overlayfs", 0x794C7630), ("fuse", 0x65735546)] do
    IO.println s!"{name}: 51ms {stampSettled true t 123456789 tick (ms 51)} 2001ms {stampSettled true t 123456789 tick (ms 2001)}"
  IO.println s!"statfs failed, ext4 type: 51ms {stampSettled false 0xEF53 123456789 tick (ms 51)} 2001ms {stampSettled false 0xEF53 123456789 tick (ms 2001)}"
  IO.println s!"ext4, ctime in the future: {stampSettled true 0xEF53 123456789 tick (ms (-51))}"
  -- the bound is four ticks when that exceeds 50 ms: a 41.7 ms tick (HZ=24) gives 166.8 ms
  let hz24 : Int64 := 41666667
  IO.println s!"ext4, 41.7ms tick: 51ms {stampSettled true 0xEF53 123456789 hz24 (ms 51)} 166ms {stampSettled true 0xEF53 123456789 hz24 (ms 166)} 167ms {stampSettled true 0xEF53 123456789 hz24 (ms 167)}"
  IO.println s!"ext4, tick unknown: 51ms {stampSettled true 0xEF53 123456789 0 (ms 51)} 2001ms {stampSettled true 0xEF53 123456789 0 (ms 2001)}"
  IO.println s!"ext4, huge tick: 2001ms {stampSettled true 0xEF53 123456789 (ms 1000000000) (ms 2001)} 8001ms {stampSettled true 0xEF53 123456789 (ms 1000000000) (ms 8001)}"
