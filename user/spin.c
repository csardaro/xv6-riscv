#include "kernel/types.h"
#include "user/user.h"

int main() {
  volatile int i = 0;
  while (i <= 10000000) i++; // a very long loop
  exit(0);
}
