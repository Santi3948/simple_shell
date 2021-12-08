#include "main.h"
/**
 * exec - execute
 * @tokenized: token
 * @b: b
 * @TOK_PATH: tok path
 */
void exec(char **tokenized, char *b, char **TOK_PATH)
{
		int j = 0;
		struct stat buf, buf2;

		if (tokenized[0][0] && tokenized[0][0] == '/')
		{
			if (stat(tokenized[0], &buf) == 0)
				execve_fork(tokenized[0], tokenized, NULL);
		}
		else
		{
			b = buscopath(TOK_PATH[j], tokenized[0]);
			for (j = 0; stat(b, &buf2) == -1 && TOK_PATH[j + 1]; j++)
				b = buscopath(TOK_PATH[j], tokenized[0]);
			if (stat(b, &buf2) == 0)
			{
				tokenized[0] = b;
				execve_fork(tokenized[0], tokenized, NULL);
				return;
			}
			perror(tokenized[0]);
		}
}
