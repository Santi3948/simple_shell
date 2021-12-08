#include "main.h"
#ifndef INTERACTIVE_MODE
#define INTERACTIVE_MODE 1
#ifndef NON_INTERACTIVE_MODE
#define NON_INTERACTIVE_MODE 0
/**
 * main - main of simple_shell
 * @ac: number of arguments
 * @av: pointer to string of arguments
 * @env: environ variables
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
	ssize_t chars;
	size_t len = 1024;
	int mode = INTERACTIVE_MODE, j = 0;
	char *PATH_ = NULL, **PATH_TOK = NULL, **TOK_PATH = NULL;
	char **tokenized, *b = NULL, *dup = NULL, *copy = NULL;

	*a = calloc(len, sizeof(char));
	(void)ac;
	(void)av;
	while (1)
	{
		PATH_ = _getenv("PATH=", env), PATH_TOK = split(PATH_, "=");
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
		a[_strlen(a) - 1] = '\0', a = realloc(a, 1 + strlen(a) * sizeof(char));
		tokenized = split(a, " ");
		if (tokenized[0] && !_strcmp(tokenized[0], "exit"))
		{
			if (tokenized[1])
				copy = tokenized[1];
			_free_(tokenized, b, PATH_, a, TOK_PATH, PATH_TOK), free(dup);
			b = NULL, a = NULL, TOK_PATH = NULL, PATH_TOK = NULL, tokenized = NULL;
			if (copy)
				_exit_(atoi(copy));
			_exit_(0);
		}
		if (tokenized[0] && !_strcmp(tokenized[0], "env") && !tokenized[1])
			env_(env);
		exec(tokenized, b, TOK_PATH, dup);
		_free_(tokenized, b, PATH_, a, TOK_PATH, PATH_TOK), free(dup);
		tokenized = NULL, b = NULL, a = NULL, TOK_PATH = NULL, PATH_TOK = NULL;
		if (mode == NON_INTERACTIVE_MODE)
			break;
	}
	return (0);
}
#endif
#endif
