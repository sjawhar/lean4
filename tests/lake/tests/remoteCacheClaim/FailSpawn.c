/* Makes the first spawn of the program named by `PROBE_FAIL_SPAWN` fail (every spawn of it, with
   `PROBE_FAIL_SPAWN_ALWAYS`), as a `fork` or `posix_spawn` that the system refuses (EAGAIN) does.
   Lean's `IO.Process.spawn` copies the program's name with `strdup` right before it spawns, on the
   same thread, so a `strdup` of that name marks the thread's next `fork`, `posix_spawn` or
   `posix_spawnp` to fail. (A runtime that spawns with `posix_spawnp` falls back to `fork` only
   where it cannot use it.) Every other spawn works.

   Build: cc -shared -fPIC -o fail-spawn.so FailSpawn.c -ldl */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <spawn.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

static __thread int fail_next_fork;
static int failed;

char *strdup(const char *s) {
  const char *target = getenv("PROBE_FAIL_SPAWN");
  if (target && (!failed || getenv("PROBE_FAIL_SPAWN_ALWAYS")) && strcmp(s, target) == 0)
    fail_next_fork = 1;
  return ((char *(*)(const char *))dlsym(RTLD_NEXT, "strdup"))(s);
}

/* Whether this spawn is the one to refuse; clears the mark. */
static int refuse_spawn(void) {
  if (!fail_next_fork)
    return 0;
  fail_next_fork = 0;
  failed = 1;
  return 1;
}

pid_t fork(void) {
  if (refuse_spawn()) {
    errno = EAGAIN;
    return -1;
  }
  return ((pid_t (*)(void))dlsym(RTLD_NEXT, "fork"))();
}

typedef int (*spawn_fn)(pid_t *, const char *, const posix_spawn_file_actions_t *,
                        const posix_spawnattr_t *, char *const[], char *const[]);

int posix_spawn(pid_t *pid, const char *path, const posix_spawn_file_actions_t *fa,
                const posix_spawnattr_t *attr, char *const argv[], char *const envp[]) {
  if (refuse_spawn())
    return EAGAIN;
  return ((spawn_fn)dlsym(RTLD_NEXT, "posix_spawn"))(pid, path, fa, attr, argv, envp);
}

int posix_spawnp(pid_t *pid, const char *file, const posix_spawn_file_actions_t *fa,
                 const posix_spawnattr_t *attr, char *const argv[], char *const envp[]) {
  if (refuse_spawn())
    return EAGAIN;
  return ((spawn_fn)dlsym(RTLD_NEXT, "posix_spawnp"))(pid, file, fa, attr, argv, envp);
}
