import Plugin

/-! Imports a module of the precompiled library `Plugin`, so its input hash includes the trace of
that library's shared library. -/

theorem User.answer : Plugin.answer = 42 := rfl
