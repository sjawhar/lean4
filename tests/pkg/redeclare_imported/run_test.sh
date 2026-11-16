# `Redecl.Twice` declares, with kernel checking skipped, a mutual block of unsafe definitions that
# contains `foo`, a name its import `Redecl.Base` declares. The kernel's name check runs only with
# kernel checking, so its compile must still reject the name; else an importer sees two `foo`s.
rm -rf .lake
lake build Redecl.Base Redecl.Fresh
capture_fail lake build Redecl.Twice
check_out_contains "(kernel) constant has already been declared 'foo'"
