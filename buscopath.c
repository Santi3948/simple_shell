#include "main.h"
/**
 * buscopath - concat. /a with path
 * @path: environment variable path
 * @a: token in 0 position
 * Return: concat
 */
char *buscopath(char *path, char *a)
{
	char *x = str_concat(str_concat(path, "/"), a);
	return (x);
}
