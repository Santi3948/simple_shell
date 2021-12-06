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
	int x = 0, j = 0;
	struct stat buf;
	char *b = NULL;
	ssize_t chars;
	size_t len = 1024;
	char *a = malloc(len);
	char **tokenized = malloc(1024 * sizeof(char *));
	int i = 0;
	int mode = INTERACTIVE_MODE;
	char *PATH_ = _getenv("PATH", env);
	char **PATH_TOK = malloc(1024 * sizeof(char *));
	char **TOK_PATH;
	(void)ac;
	(void)av;
 	
	printf("%s\n", PATH_);
	PATH_TOK = split(PATH_, &x, "=");
	while(PATH_TOK[j])
	{
		printf("%s\n", PATH_TOK[j]);
		j++;
	}
	x = 0;
	TOK_PATH = split(PATH_TOK[1], &x, ":");
	j = 0;	
	while(TOK_PATH[j])
	{
		printf("%s\n", TOK_PATH[j]);
		j++;
	}	

	while(1)
	{
		a = malloc(len);
		tokenized = malloc(1024);
		b = malloc(1024);
		if(!isatty(STDIN_FILENO))
		{
			mode = NON_INTERACTIVE_MODE;
		}
		if (mode == INTERACTIVE_MODE)
		{
			write(STDOUT_FILENO,"$ ", 2);
		}
		chars = getline(&a, &len, stdin);
		if (chars == 1)
			continue;
		if (chars == -1)
                {
                        	free(a);
                        	a = NULL;
                        	break;
                }
		a[_strlen(a) - 1] = '\0';
		i = 0;
		tokenized = split(a, &i, " ");


		if (tokenized[0] && _strcmp(tokenized[0], "exit"))
		{
			free(tokenized);
			tokenized = NULL;
			free(a);
			a = NULL;
			free(b);
			b = NULL;
			free(PATH_);
			PATH_ = NULL;
			free(TOK_PATH);
			TOK_PATH = NULL;
			free(PATH_TOK);
			_exit_();
		}
		printf("macaco\n");
		if (tokenized[0])
		printf("%s\n", tokenized[0]);
		printf("mae mia\n");
		if (tokenized[0] && _strcmp(tokenized[0], "env"))
			env_(env);
		printf("ananana\n");
		if (tokenized[0][0] && tokenized[0][0] == '/')
		{
			printf("doooooou\n");
			if (stat(tokenized[0], &buf) == 0)
			{
				execve_fork(tokenized[0], tokenized, NULL);
			}
		}
		else
		{
			printf("tukson\n");
			j = 0;
			while(TOK_PATH[j])
			{
				printf("%s\n", TOK_PATH[j]);
				j++;
			}
			printf("hola\n");
			j = 0;
			b = buscopath(TOK_PATH[j], tokenized[0]);
			while (stat(b, &buf) == -1 && TOK_PATH[j + 1])
                        {
				j++;
				b = buscopath(TOK_PATH[j], tokenized[0]);
                        }
			if (stat(b, &buf) == 0)
			{
				tokenized[0] = b;
				execve_fork(tokenized[0], tokenized, NULL);
				continue;
			}
		}
		j = 0;
		i = 0;
		free(a);
		a = NULL;
		free(tokenized);
		tokenized = NULL;
		free(b);
		b = NULL;
		if(mode == NON_INTERACTIVE_MODE)
			break;
		
	}
	return (0);
}
#endif
#endif
