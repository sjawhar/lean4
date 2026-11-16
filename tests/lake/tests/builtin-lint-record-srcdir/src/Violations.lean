import Linters

-- Env linter (`linter.dummyMarker`, default-on): recorded via
-- `findDeclarationRanges?` and the file Lake compiles for the module.
def firstDummyMarker : Nat := 1

-- Text linter (`linter.unusedVariables`, default-on): recorded from the
-- position stored with its `lintLogExt` entry.
def unusedVarHere : Nat :=
  let unusedLocal := 5
  3

-- Env linter again, after the text linter's declaration, so that a recording
-- pass with stale line numbers puts one of the exceptions on the wrong line.
def secondDummyMarker : Nat := 2
