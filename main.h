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
char *_strdup(char *str);
int execve_fork(const char *pathname, char *const argv[], char *const envp[]);
char *_getenv(char *name, char **env);
char **split(char *a, char *del);
int _strcmp(char *s1, char *s2);
char *_strstr(char *haystack, const char *needle);
char *str_concat(char *s1, char *s2);
int _exit_(void);
char *buscopath(char *path, char *a);
int env_(char **env);
void _free_(char **, char *, char *, char *, char **, char **);
void exec(char **, char *, char **);
#endif
