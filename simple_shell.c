#include "main.h"
/**
 * main - main of susishell
 * @ac: number of arguments
 * @av: pointer to string of arguments
 * @env: environ variables
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
	char *a = NULL;
	ssize_t chars;
	size_t len = 0;
	(void)ac;
	(void)av;
	(void)env;

	while (1)
	{
		write(STDOUT_FILENO,"$ ", 2);
		chars = getline(&a, &len, stdin);
		if (chars == -1)
		{
			free(a);
			a = NULL;
			break;
		}
		a[_strlen(a) - 1] = '\0';
		free(a);
		a = NULL;
	}
	free(a);
	return (0);
}
