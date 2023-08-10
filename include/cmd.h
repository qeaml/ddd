#pragma once

/*
cmd.h
-----
Subcommands
*/

#include <stdio.h>
#define eprint(...) fprintf(stderr, __VA_ARGS__)

void setArgv(int argc, char **argv);
int getArgc(void);
char *arg(int idx);

int version(void);
int yn(void);
int choose(void);
int giberrish(void);
