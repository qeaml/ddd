#include "cmd.h"

int gArgc; char **gArgv;

void setArgv(int argc, char **argv) {
  gArgc = argc - 2;
  gArgv = &argv[2];
}

int getArgc(void) { return gArgc; }
char *arg(int idx) { return gArgv[idx]; }
