# An `.olean` whose header version string lacks the format tag, as every Lean version without per-module constant
# prefix trees writes it, is refused with an error instead of being read with the wrong `ModuleData` layout.
cd "$TMP_DIR"
export LEAN_PATH="$TMP_DIR"
printf 'prelude\ninductive T where\n  | a\n' > A.lean
printf 'prelude\nimport A\n' > B.lean
run lean -o A.olean A.lean
run lean B.lean

# Overwrite the 33-byte version string at offset 7 with an untagged one.
{ printf '4.36.0'; head -c 27 /dev/zero; } | dd of=A.olean bs=1 seek=7 count=33 conv=notrunc status=none
capture_exit 1 lean B.lean
check_out_contains "failed to read file '$TMP_DIR/A.olean', it was written by Lean 4.36.0 without per-module constant prefix trees"
