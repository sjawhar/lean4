/*
Copyright (c) 2024 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Leonardo de Moura, Sebastian Ullrich
*/
#include "runtime/interrupt.h"
#include "kernel/census.h"
#include "kernel/type_checker.h"
#include "kernel/kernel_exception.h"
#include "library/elab_environment.h"

namespace lean {
/* updateBaseAfterKernelAdd (env : Environment) (base : Kernel.Environment) (decl : Declaration) : Environment

   Updates an elab environment with a given kernel environment.

   NOTE: Ideally this language switching would not be necessary and we could do all this in Lean
   only but the old code generator still needs a C++ `elab_environment::add`
   that throws C++ exceptions. */
extern "C" obj_res lean_elab_environment_update_base_after_kernel_add(obj_arg env, obj_arg kenv, obj_arg decl);

elab_environment elab_environment::add(declaration const & d, bool check) const {
    environment kenv = to_kernel_env().add(d, check);
    return elab_environment(lean_elab_environment_update_base_after_kernel_add(this->to_obj_arg(), kenv.to_obj_arg(), d.to_obj_arg()));
}

/* lean-build-perf#15: this is the real elaborator's dispatch point (`Lean.Environment.addDeclCheck`),
   used by `Lean.Elab.AddDecl.addDeclCore`/`doAdd` for every `theorem`/`def` a normal compile adds --
   `kernel/environment.cpp`'s `lean_add_decl` (`Kernel.Environment.addDeclCore`) is a separate,
   lower-level entry point some metaprogram code calls directly, and instrumenting only that one
   missed the overwhelming majority of real kernel-checking work. Same `census_decl_scope` pattern,
   left uninstrumented on `lean_elab_add_decl_without_checking` below to match. */
extern "C" LEAN_EXPORT object * lean_elab_add_decl(object * env, size_t max_heartbeat, size_t max_rec_depth,
    object * decl, object * opt_cancel_tk) {
    scope_max_heartbeat s(max_heartbeat);
    scope_max_rec_depth s2(max_rec_depth);
    scope_cancel_tk s3(is_scalar(opt_cancel_tk) ? nullptr : cnstr_get(opt_cancel_tk, 0));
    declaration d(decl, true);
    census_decl_scope census_scope(census_enabled() ? decl_repr_name(d) : name());
    return catch_kernel_exceptions<elab_environment>([&]() {
            return elab_environment(env).add(d);
        });
}

extern "C" LEAN_EXPORT object * lean_elab_add_decl_without_checking(object * env, object * decl) {
    return catch_kernel_exceptions<elab_environment>([&]() {
            return elab_environment(env).add(declaration(decl, true), false);
        });
}

extern "C" obj_res lean_elab_environment_to_kernel_env(obj_arg);
environment elab_environment::to_kernel_env() const {
    return environment(lean_elab_environment_to_kernel_env(to_obj_arg()));
}

extern "C" LEAN_EXPORT lean_object * lean_kernel_is_def_eq(lean_object * obj_env, lean_object * lctx, lean_object * a, lean_object * b) {
    elab_environment env(obj_env);
    return catch_kernel_exceptions<object*>([&]() {
        return lean_box(type_checker(env.to_kernel_env(), local_ctx(lctx)).is_def_eq(expr(a), expr(b)));
    });
}

extern "C" LEAN_EXPORT lean_object * lean_kernel_whnf(lean_object * obj_env, lean_object * lctx, lean_object * a) {
    elab_environment env(obj_env);
    return catch_kernel_exceptions<object*>([&]() {
        return type_checker(env.to_kernel_env(), local_ctx(lctx)).whnf(expr(a)).steal();
    });
}

extern "C" LEAN_EXPORT lean_object * lean_kernel_check(lean_object * obj_env, lean_object * lctx, lean_object * a) {
    elab_environment env(obj_env);
    return catch_kernel_exceptions<object*>([&]() {
        return type_checker(env.to_kernel_env(), local_ctx(lctx)).check(expr(a)).steal();
    });
}

/* getBelieverTrustLevel (_ : Unit) : UInt32 */
extern "C" LEAN_EXPORT uint32 lean_internal_get_believer_trust_level(obj_arg) {
   return LEAN_BELIEVER_TRUST_LEVEL;
}
}
