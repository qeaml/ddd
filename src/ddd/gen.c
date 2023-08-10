#include "gen.h"
#include <stdlib.h>
#include <time.h>

void reseedGen(void) {
  struct timespec ts;
  timespec_get(&ts, TIME_UTC);
  srand(ts.tv_nsec * ts.tv_sec);
}

bool genBool(void) {
  return rand() & 1;
}

char genChar(char min, char max) {
  return min + (rand() % (max - min));
}

unsigned genUint(unsigned min, unsigned max) {
  return min + (rand() % (max - min));
}

int genInt(int min, int max) {
  return min + ((rand() - RAND_MAX/2) % (max - min));
}

float genFloat(void) {
  return (float)rand() / RAND_MAX;
}
