# The imported module, compiled by the `lean` under test so that its `.olean` has usage entries at any stage.
rm -rf moduleUsageUsed.lean.dir
mkdir moduleUsageUsed.lean.dir
printf 'def p : Nat := 1\n' > moduleUsageUsed.lean.dir/UsageProducer.lean
lean --root=moduleUsageUsed.lean.dir moduleUsageUsed.lean.dir/UsageProducer.lean \
  -o moduleUsageUsed.lean.dir/UsageProducer.olean --usage=moduleUsageUsed.lean.dir/UsageProducer.usage \
  || fail "failed to compile UsageProducer"
export LEAN_PATH="$PWD/moduleUsageUsed.lean.dir"
