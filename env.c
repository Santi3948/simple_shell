#include "main.h"
int env_(char **env)
{
	int i = 0;
	while(env[i])
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	i = 0;
	while(environ[i])
        {
                write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
                write(STDOUT_FILENO, "\n", 1);
                i++;
        }
	return (1);
}
