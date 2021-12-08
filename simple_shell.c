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
	struct stat buf, buf2;
	ssize_t chars;
	size_t len = 1024;
	int mode = INTERACTIVE_MODE, j = 0;
	char *PATH_, **PATH_TOK, **TOK_PATH, *a, **tokenized, *b = NULL;
	a = malloc(len);
	(void)ac;
	(void)av;

	while (1)
	{
		j = 0;
		PATH_ = _getenv("PATH", env);
		PATH_TOK = split(PATH_, "=");
		TOK_PATH = split(PATH_TOK[1], ":");
		if (!isatty(STDIN_FILENO))
			mode = NON_INTERACTIVE_MODE;
		if (mode == INTERACTIVE_MODE)
			write(STDOUT_FILENO, "$ ", 2);
		chars = getline(&a, &len, stdin);
		if (chars == 1)
			continue;
		if (chars == -1)
                        	break;
		a[_strlen(a) - 1] = '\0';
		tokenized = split(a, " ");
		if (tokenized[0] && !_strcmp(tokenized[0], "exit"))
		{
			_free_(tokenized, b, PATH_, a, TOK_PATH, PATH_TOK);
			tokenized = NULL;
			b = NULL;
			a = NULL;
			TOK_PATH = NULL;
			PATH_TOK = NULL;
			_exit_();
		}
		if (tokenized[0] && !_strcmp(tokenized[0], "env"))
			env_(env);
		if (tokenized[0][0] && tokenized[0][0] == '/')
		{
			if (stat(tokenized[0], &buf) == 0)
			{
				execve_fork(tokenized[0], tokenized, NULL);
			}
		}
		else
		{
			b = buscopath(TOK_PATH[j], tokenized[0]);
			while (stat(b, &buf2) == -1 && TOK_PATH[j + 1])
                        {
				j++;
				b = buscopath(TOK_PATH[j], tokenized[0]);
                        }
			if (stat(b, &buf2) == 0)
			{
				tokenized[0] = b;
				execve_fork(tokenized[0], tokenized, NULL);
				continue;
			}
			perror(tokenized[0]);
		}
		_free_(tokenized, b, PATH_, a, TOK_PATH, PATH_TOK);
		tokenized = NULL;
		b = NULL;
		a = NULL;
		TOK_PATH = NULL;
		PATH_TOK = NULL;
		if(mode == NON_INTERACTIVE_MODE)
			break;
	}
	return (0);
}
#endif
#endif
