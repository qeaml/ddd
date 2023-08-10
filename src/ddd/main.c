#include "gen.h"
#include "cmd.h"
#include <string.h>

#define streq(a, b) (!strcmp((a), (b)))

int main(int argc, char **argv) {
  if(argc < 2) {
    fprintf(stderr,
      "usage: %s <subcommand>\n"
      "where <subcommand> can be:\n"
      "  yn - yes or no\n"
      "  choose - one of multiple options\n"
      "  giberrish - randomly generated word\n"
      "  version, ver - version information\n",
      argv[0]);
    return 1;
  }

  reseedGen();
  setArgv(argc, argv);
  if(streq(argv[1], "version") || streq(argv[1], "ver"))
    return version();
  if(streq(argv[1], "yn"))
    return yn();
  if(streq(argv[1], "choose"))
    return choose();
  if(streq(argv[1], "giberrish"))
    return giberrish();

  fprintf(stderr,"'%s' is not a valid subcommand\n", argv[1]);
  return 1;
}
