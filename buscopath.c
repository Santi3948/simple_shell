#include "main.h"
/**
 * buscopath - concat. /a with path
 * @path: environment variable path
 * @a: token in 0 position
 * Return: concat
 */
char *buscopath(char *path, char *a)
{
	char *s = NULL;
	char *x = NULL;

	s = str_concat(path, "/");
	x = str_concat(s, a);

	free(s);
	return (x);
}
