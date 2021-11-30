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
typedef struct lol
{
	char *a;
	struct lol *next;
}lol;
char *_strstr(char *haystack, const char *needle);
char **split(char *a, int *i, char *del);
void _which(char *argv[], int argc);
int _fork(int argc, char *envp[]);
struct lol *linkedpath(char **b);
lol *add_node_end(lol **head, const char *str);
int sshell(char *av);
char *_getenv(const char *name);
char **printpath(char *path);
extern char **environ;
#endif
