#include "main.h"
int env(char **env)
{
	int i = 0;
	while(env[i])
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (1);
}
