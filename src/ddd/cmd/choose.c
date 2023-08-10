#include "cmd.h"
#include "gen.h"

int choose(void) {
  int argc = getArgc();
  if(argc < 3) {
    eprint("provde at least 3 options\n");
    return 1;
  }

  printf("%s\n", arg(genUint(0, argc)));
  return 0;
}
