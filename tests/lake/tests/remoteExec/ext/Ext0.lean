/-! A module that declares a function of its package's external library. -/

/-- The external library's `ext_val`, which is 1. -/
@[extern "ext_val"] opaque extVal : Unit → UInt32
