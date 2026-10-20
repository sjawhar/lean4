# LEAN_EXPORTING needs to be defined for .c files included in shared libraries
lean --c=FP.c -Dcompiler.postponeCompile=false FP.lean
leanc ${LEANC_OPTS-} -O3 -DNDEBUG -DLEAN_EXPORTING -shared -o FP.so FP.c
lean -Dlinter.all=false --plugin=FP.so -o P1.olean --usage=P1.usage P1.lean

capture_only Refusals.lean \
  lean --run Refusals.lean P1.olean
check_out_file
check_exit_is_success
