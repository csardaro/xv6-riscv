#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  int ticks_start = getticks();
  int duration = argc > 1 ? atoi(argv[1]) : 1;

  while (getticks() - ticks_start < duration * 100)
    ; // Spin

  int ticks_end = getticks();
  printf("spin (pid %d): start at %d and ran for %d ticks\n", getpid(), ticks_start, ticks_end - ticks_start);

  exit(0);
}
