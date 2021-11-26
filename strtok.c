#include <stdio.h>
#include <stdlib.h>
void split(char *a)
{
	char *buffer = NULL, *token;
	int i = 0, len = 0;

	getline(&buffer, &len, stdin);
	token = strtok(buffer, " ")
	while (token != NULL)
	{
		
	}
}
