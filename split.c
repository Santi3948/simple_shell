#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char **split(char *a)
{
	char **buffer, *token;
	int i = 0; 

	token = strtok(a, " ");
	buffer = malloc(1024);
	if (!buffer)
		exit (-1);
	while (token)
	{
		buffer[i] = token;
		token = strtok(NULL, " ");
		printf("%s\n", buffer[i]);
		i++;
	}

	return (buffer);
}
