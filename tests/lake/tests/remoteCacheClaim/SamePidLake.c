#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* Every process that preloads this reports the same process ID, as two processes in two PID
   namespaces (e.g., in two containers that share a cache) can. Lean finds its own executable
   through `/proc/<getpid()>/exe`, so that link is read as `/proc/self/exe`, which names the real
   process. */
pid_t getpid(void) {
  return 4242;
}

ssize_t readlink(const char *path, char *buf, size_t size) {
  static ssize_t (*real)(const char *, char *, size_t);
  if (!real) real = (ssize_t (*)(const char *, char *, size_t))dlsym(RTLD_NEXT, "readlink");
  if (strcmp(path, "/proc/4242/exe") == 0) path = "/proc/self/exe";
  return real(path, buf, size);
}
