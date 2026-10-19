# cmake -DLEANTAR=<leantar> -DWORK=<scratch dir> -P probe.cmake
# Fails unless LEANTAR reproduces probe.olean (written from probe.lean, next to this script) byte for byte through an
# `.ltar` round trip. leantar releases up to at least v0.1.21 unpack every ByteArray of an `.olean` with element size
# 0, and probe.olean, like every `.olean` holding constant prefix trees, contains ByteArrays.
set(DIR ${CMAKE_CURRENT_LIST_DIR})
file(REMOVE_RECURSE ${WORK})
file(MAKE_DIRECTORY ${WORK}/out)
execute_process(
  COMMAND ${LEANTAR} ${WORK}/probe.ltar probe.trace probe.olean
  WORKING_DIRECTORY ${DIR}
  RESULT_VARIABLE pack
  OUTPUT_QUIET
  ERROR_QUIET
)
execute_process(
  COMMAND ${LEANTAR} -C ${WORK}/out -x ${WORK}/probe.ltar
  RESULT_VARIABLE unpack
  OUTPUT_QUIET
  ERROR_QUIET
)
file(SHA256 ${DIR}/probe.olean want)
set(got "")
if(EXISTS ${WORK}/out/probe.olean)
  file(SHA256 ${WORK}/out/probe.olean got)
endif()
if(NOT (pack EQUAL 0 AND unpack EQUAL 0 AND got STREQUAL want))
  message(
    FATAL_ERROR
    "leantar ${LEANTAR} does not reproduce ${DIR}/probe.olean through an .ltar round trip (pack exit ${pack}, unpack exit ${unpack}); it would corrupt .olean files holding ByteArrays. Use a leantar built with ${DIR}/leangz-sarray-elem-size.patch, or leave LEANTAR unset to build one."
  )
endif()
