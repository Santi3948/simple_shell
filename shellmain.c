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
	char *a;
	size_t len = 1024;
	ssize_t chars;

	while (1)
	{
		printf("$ ");
		a = malloc(len);
		if (!a)
			break;
		chars = getline(&a, &len, stdin);
		if (chars == -1)
			break;
		a[strlen(a) - 1] = '\0';
		sshell(a);
		free(a);
	}
	if (a)
		free(a);
	return (0);
}
