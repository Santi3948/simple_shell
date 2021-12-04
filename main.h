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
extern char**environ;
int _strlen(char *s);
char *_getenv(const char *name);
char **split(char *a, int *i, char *del);
int _strcmp(char *s1, char *s2);
char *_strstr(char *haystack, const char *needle);
int _exit_(void);
#endif
