#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Build slots and the module-times record together. A job that reads the shared remote cache gives
# its worker up while it waits (`Lake.ReadBroker.send`), so after many reads miss, more modules wait
# to compile than there are build slots. A freed slot then goes to the waiting module with the
# longest remaining path (its compile job's priority from `.lake/module-times.tsv`), as the task
# pool would have chosen; and the compile time that the record keeps does not count the wait for a
# slot. The mock remote cache and its helpers are in `../remoteCache/lib.sh`.

source ../remoteCache/lib.sh

# The library `Prio`: a chain C0 <- C1 <- C2 and ten modules L1..L10 that import nothing. Each compile
# takes a second, and appends `+ <name> <ns>` to `$LAKE_TEST_ORDER_LOG` when it starts and
# `- <name> <ns>` when it ends, with times from `IO.monoNanosNow`, a clock that all processes share.
mkdir -p Prio
prio_mod() {
  local name=$1 dep=${2:-}
  {
    [ -z "$dep" ] || echo "import Prio.$dep"
    cat << EOF
#eval show IO Unit from do
  if let some log ← IO.getEnv "LAKE_TEST_ORDER_LOG" then
    let t0 ← IO.monoNanosNow
    IO.FS.withFile log .append fun h => h.putStrLn s!"+ $name {t0}"
    IO.sleep 1000
    let t1 ← IO.monoNanosNow
    IO.FS.withFile log .append fun h => h.putStrLn s!"- $name {t1}"
def x$name := 0
EOF
  } > "Prio/$name.lean"
}
prio_mod C0
prio_mod C1 C0
prio_mod C2 C1
LS=$(seq 1 10)
for i in $LS; do prio_mod "L$i"; done
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Prio"
roots = ["Prio.C0", "Prio.C1", "Prio.C2", $(for i in $LS; do printf '"Prio.L%s", ' "$i"; done | sed 's/, $//')]
EOF

ORDER="$WORK_DIR/order-log"
REC=.lake/module-times.tsv

case_slot_priority() {
  # A record with fixed numbers (priorities are bands of log2 seconds of the remaining path): the
  # chain at 128 s, 64 s and 32 s (priorities 7, 6 and 5), the ten others at 1 s (priority 0). With
  # one slot and every mapping missing behind a remote that answers each read after 2 s, all eleven
  # modules that import nothing read at once and then wait for the slot. C0 compiles first or
  # second; when C0 is done, C1 reads for 2 s while the L modules take turns, and then C1 is next,
  # before the L modules that have waited since the start, and so is C2 after it. In arrival order
  # C1 and C2 would compile after all ten. Each compile time in the record is the compile's own,
  # not the wait for its slot. The last L module to compile waits for its slot about as long as the
  # twelve compiles before it, so a time that counted the wait comes out near the span from the
  # first compile's start to the last one's end (thirteen compiles); each recorded time must stay
  # below half that span. A correct time, about a thirteenth of the span, reaches half only if one
  # compile takes about as long as all the others together, and a load that slows the compiles
  # lengthens the span with them.
  fresh
  mkdir -p .lake
  # The record's rows are sorted by module name, byte by byte, or Lake ignores the record
  printf 'lake-module-times 3\n' > $REC
  {
    printf '1000\t128000\tPrio.C0\t\n1000\t64000\tPrio.C1\t\n1000\t32000\tPrio.C2\t\n'
    for i in $LS; do printf '1000\t1000\tPrio.L%s\t\n' "$i"; done
  } | LC_ALL=C sort -t "$(printf '\t')" -k3,3 >> $REC
  : > "$ORDER"
  LEAN_NUM_THREADS=1 LAKE_TEST_ORDER_LOG="$ORDER" LAKE_REMOTE_CACHE=slow \
    test_out 'Built Prio' build Prio
  test_cmd cp produced.out prio-build.out
  # The build read the record (a record it cannot read only warns, and every priority is 0)
  test_cmd_eq 0 count 'module-times.tsv' prio-build.out
  cat "$ORDER"
  test_cmd_eq 13 count '^+ ' "$ORDER"
  "$PYTHON" -c '
import sys
log = [line.split() for line in open(sys.argv[1])]
starts = [(name, int(ns)) for sign, name, ns in log if sign == "+"]
ends = [int(ns) for sign, name, ns in log if sign == "-"]
order = [name for name, ns in starts]
last_l = max(i for i, m in enumerate(order) if m.startswith("L"))
print("order:", order)
assert order.index("C0") <= 1, order
assert order.index("C1") < last_l, order
assert order.index("C2") < last_l, order
rows = {}
with open(sys.argv[2]) as f:
    assert next(f) == "lake-module-times 3\n"
    for line in f:
        ms, rem, name, imports = line.rstrip("\n").split("\t")
        rows[name] = int(ms)
times = {n: rows[n] for n in rows if n.startswith("Prio.")}
print("recorded ms:", times)
assert len(times) == 13, times
assert len(ends) == 13, log
span = max(ends) - min(ns for name, ns in starts)
assert span > 0, log
ratio = max(times.values()) * 10**6 / span
print("span of the compiles, first start to last end: %d ms" % (span // 10**6))
print("largest recorded time / span: %.3f" % ratio)
assert ratio < 0.5, (ratio, span, times)
' "$ORDER" "$REC"
}

run_cases case_slot_priority
