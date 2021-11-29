#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
char **split(char *a, int *i);
void _which(char *argv[], int argc);
int _fork(int argc, char *envp[]);
int sshell(char *av);
char *_getenv(const char *name);
#endif
