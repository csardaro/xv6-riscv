#include "kernel/types.h"
#include "user/user.h"

char *argv1[] = {"spin", "2", 0};
char *argv2[] = {"spin", "2", 0};
char *argv3[] = {"spin", "2", 0};

void launch(char **argv) {
  if (fork() == 0) {
    exec("spin", argv);
    exit(1); // should not reach here
  }
}

int main() {
  launch(argv1);
  pause(50);

  launch(argv2);
  pause(50);

  launch(argv3);
  wait(0);
  wait(0);
  wait(0);
  exit(0);
}
