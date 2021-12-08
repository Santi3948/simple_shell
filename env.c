#include "main.h"
/**
 * env_ - print environment variables
 * @env: environment variable
 * Return: 1
 */
int env_(char **env)
{
	int i = 0;

	while (env[i])
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (1);
}
