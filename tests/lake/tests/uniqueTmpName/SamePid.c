#include <sys/types.h>

/* Every process that preloads this reports the same process ID, as two processes in two PID
   namespaces (e.g., in two containers that share a directory) can. */
pid_t getpid(void) {
  return 4242;
}
