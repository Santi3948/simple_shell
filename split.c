#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char **split(char *a, int *i)
{
	char *token, **buffer;
	
	buffer = malloc(1024);
	token = strtok(a, " ");
	if (!buffer)
		exit(-1);
	while (token)
	{
		buffer[(*i)] = token;
		token = strtok(NULL, " ");
		(*i)++;
	}
	return (buffer);
}
