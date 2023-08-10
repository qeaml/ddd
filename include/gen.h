#pragma once

/*
gen.h
-----
Random generators
*/

#include <stdbool.h>

void reseedGen(void);

bool genBool(void);
char genChar(char min, char max);
unsigned genUint(unsigned min, unsigned max);
int genInt(int max, int min);
float genFloat(void);
