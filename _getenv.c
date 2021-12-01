#include "main.h"
/**
 * _getenv - get the environ value
 * @name: name of the environ
 * Return: value of the environ
 */
char *_getenv(const char *name)
{
	int i = 0, x = 0;
	char **a, *s;

	while (environ[i] && _strstr(environ[i], name) == 0)
	{
		i++;
	}

	if (environ[i])
	{
		a = split(environ[i], &x, "=");
		s = a[1];
		free(a);
		return (s);
	}
	return ("ERROR: NAME NOT FOUND");
}
