#include "main.h"
/**
 * exec - execute
 * @tokenized: token
 * @b: b
 * @TOK_PATH: tok path
 * @dup: pointer to dup
 */
void exec(char **tokenized, char *b, char **TOK_PATH, char *dup)
{
		int j = 0;
		struct stat buf = {0}, buf2 = {0};

		j = 0, b = NULL;
		if (tokenized[0] && _strstr(tokenized[0], "/"))
		{
			if (stat(tokenized[0], &buf) == 0)
				execve_fork(tokenized[0], tokenized, NULL);
		}
		else
		{
			if (TOK_PATH[j] && tokenized[0])
			{
			dup = _strdup(TOK_PATH[j]);
			b = buscopath(dup, tokenized[0]);
			while (stat(b, &buf2) == -1 && TOK_PATH[j + 1])
			{
				free(dup), free(b), b = NULL, dup = NULL;
				j++;
				dup = _strdup(TOK_PATH[j]);
				b = buscopath(dup, tokenized[0]);
			}
			if (stat(b, &buf2) == 0)
			{
				tokenized[0] = b;
				execve_fork(tokenized[0], tokenized, NULL);
				free(dup);
				free(b);
				return;
			}
			}
			perror(tokenized[0]);
		}
		free(b);
		free(dup);
}
