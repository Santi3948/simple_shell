#include "main.h"
#ifndef INTERACTIVE_MODE
#define INTERACTIVE_MODE 1
#ifndef NON_INTERACTIVE_MODE
#define NON_INTERACTIVE_MODE 0
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
	char **tokenized;
	ssize_t chars;
	size_t len = 0;
	int i = 0;
	int mode = INTERACTIVE_MODE;
	(void)ac;
	(void)av;
	(void)env;

	while (1)
	{
		if(!isatty(STDIN_FILENO))
		{
			mode = NON_INTERACTIVE_MODE;
		}
		if (mode == INTERACTIVE_MODE)
		{
			write(STDOUT_FILENO,"$ ", 2);
		}
		chars = getline(&a, &len, stdin);
		if (chars == -1)
                {
                        	free(a);
                        	a = NULL;
                        	break;
                }
		tokenized = split(a, &i, " ");
		a[_strlen(a) - 1] = '\0';
		if (tokenized[0] && _strcmp(tokenized[0], "exit"))
		{
			free(a);
			a = NULL;
			free(tokenized);
			_exit_();
			break;
		}
		i = 0;
		free(a);
		a = NULL;
		free(tokenized);
		if(mode = NON_INTERACTIVE_MODE)
			break;
	}
	return (0);
}
#endif
#endif
