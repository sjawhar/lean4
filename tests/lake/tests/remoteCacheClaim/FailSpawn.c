/* Makes the first spawn of the program named by `PROBE_FAIL_SPAWN` fail, as a `fork` that the
   system refuses (EAGAIN) does. Lean's `IO.Process.spawn` copies the program's name with `strdup`
   right before it forks, on the same thread, so a `strdup` of that name marks the next `fork` of
   the thread to fail. Every other spawn and every later spawn of that program works.

   Build: cc -shared -fPIC -o fail-spawn.so FailSpawn.c -ldl */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

static __thread int fail_next_fork;
static int failed;

char *strdup(const char *s) {
  const char *target = getenv("PROBE_FAIL_SPAWN");
  if (target && !failed && strcmp(s, target) == 0) fail_next_fork = 1;
  return ((char *(*)(const char *))dlsym(RTLD_NEXT, "strdup"))(s);
}

pid_t fork(void) {
  if (fail_next_fork) {
    fail_next_fork = 0;
    failed = 1;
    errno = EAGAIN;
    return -1;
  }
  return ((pid_t (*)(void))dlsym(RTLD_NEXT, "fork"))();
}
