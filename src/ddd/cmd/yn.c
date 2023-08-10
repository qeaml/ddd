#include "cmd.h"
#include "gen.h"

int yn(void) {
  int argc = getArgc();

  char *yes = "Yes",
       *no  = "No";
  if(argc > 0) {
    if(argc < 2) {
      eprint("provide a value for 'yes' and for 'no'\n");
      return 1;
    }

    yes = arg(0);
    no = arg(1);
  }

  printf("%s\n", genBool() ? yes : no);
  return 0;
}
