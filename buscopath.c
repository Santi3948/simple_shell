#include "main.h"
char *buscopath(char *path, char *a)
{
	char *s = str_concat(path, "/");
	char *x = str_concat(s, a);
	free(s);
	return(x);
}
