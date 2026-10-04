#include "kernel/types.h"
#include "user/user.h"

int main() {
  int t = getticks();
  printf("Ticks since boot: %d\n", t);
  printf("Approx. seconds: %d\n", t / 100);
  exit(0);
}
