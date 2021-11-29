#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char **split(char *a, int *i, char ***buffer)
{
	char *token;
	

	token = strtok(a, " ");
	if (!buffer)
		exit(-1);
	while (token)
	{
		*buffer[(*i)] = token;
		token = strtok(NULL, " ");
		(*i)++;
	}
	free(token);
	return (*buffer);
}
