#include "cmd.h"
#include "gen.h"
#include <stdlib.h>

int giberrish(void) {
  int argc = getArgc();

  unsigned len = 5;
  if(argc > 0) {
    char *end;
    len = strtoul(arg(0), &end, 0);
  }

  if(len == 0 || len > 80) {
    eprint("word length must be between 0 and 80 (inclusive)\n");
    return 1;
  }

  char buf[len+1];
  for(unsigned i = 0; i < len; i++) {
    buf[i] = genChar('a', 'z');
  }
  buf[len] = '\0';

  printf("%s\n", buf);
  return 0;
}
