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
/**
 * struct lol - single linked list of path
 * @a: value of path
 * @next: points to the next node
 */
typedef struct lol
{
	char *a;
	struct lol *next;
} lol;
char *_strstr(char *haystack, const char *needle);
char **split(char *a, int *i, char *del);
void _which(char *argv[], int argc);
int _fork(int argc, char *envp[]);
struct lol *linkedpath(char **b);
lol *add_node_end(lol **head, const char *str);
void print_list(const lol *h);
int sshell(char *av);
int delete_nodeint_at_index(lol **head, unsigned int index);
char *_getenv(const char *name);
char **printpath(char *path);
extern char **environ;
#endif
