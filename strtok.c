#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void split(char **a)
{
	char *buffer = NULL, *token;
	int i = 0; 
	size_t len = 0;

	getline(&buffer, &len, stdin);
	token = strtok(buffer, " ");
	while (token)
	{
		a[i] = token;
		token = strtok(NULL, " ");
		printf("%s\n", a[i]);
		i++;
	}
	free(buffer);
}
