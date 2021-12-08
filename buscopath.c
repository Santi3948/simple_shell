#include "main.h"
/**
 * buscopath - concat. /a with path
 * @path: environment variable path
 * @a: token in 0 position
 * Return: concat
 */
char *buscopath(char *path, char *a)
{
	char *aux = calloc(1024, sizeof(char));
	
	if(path && a)
	{
	str_concat(aux, path);
	str_concat(aux, "/");
	str_concat(aux, a);
	}
	printf("%s\n", aux);
	return (aux);
}
