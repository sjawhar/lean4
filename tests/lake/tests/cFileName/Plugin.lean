/-! A module of a precompiled library: Lake compiles its C file to an object file and links it into
the library's shared library, which every module that imports it loads. -/

def Plugin.answer : Nat := 42
