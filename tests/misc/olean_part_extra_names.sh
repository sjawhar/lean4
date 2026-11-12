# Without its IR parts, an importer reads a module-system module's compiler-generated names from the `.olean` part it
# imports. Each part lists the names of its own level, as in stock Lean, so with `.olean.private` the generated names of
# private definitions resolve to the module.
cd "$TMP_DIR"
export LEAN_PATH="$TMP_DIR"
printf 'module\ndef priv (n : Nat) (_h : Nat) : Nat := n + 2\npublic def usePriv (n : Nat) : Nat := priv n 0\n' > M.lean
run lean -o M.olean M.lean
rm M.ir.sig M.ir

# A file outside the module system imports everything at the private level.
cat > C.lean <<'EOF'
import M
import Lean
open Lean
#eval show CoreM Unit from do
  let env ← getEnv
  let n := (mkPrivateNameCore `M `priv).str "_redArg"
  IO.println s!"{n}: {(env.getModuleIdxFor? n).map (env.header.moduleNames[·]!)}"
EOF
capture lean -DElab.inServer=true C.lean
check_out_contains "_private.M.0.priv._redArg: (some M)"
