#include "main.h"
/**
 * _getenv - get the environ value
 * @name: name of the environ
 * @env: environment variables
 * Return: value of the environ
 */
char *_getenv(char *name, char **env)
{
	int i = 0;
	char *dup;

	while (env[i] && _strstr(env[i], name) == 0)
	{
		i++;
	}

	if (env[i])
	{
		dup = _strdup(env[i]);
		return (dup);
	}
	return ("ERROR: NAME NOT FOUND");
}
