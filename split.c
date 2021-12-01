#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * split - function that split an argument
 * @a: string of argument
 * @i: int
 * @del: delimitador
 * Return: the split string
 */
char **split(char *a, int *i, char *del)
{
	char *token, **buffer;

	buffer = malloc(1024);
	token = strtok(a, del);
	if (!buffer)
		exit(-1);
	while (token)
	{
		buffer[(*i)] = token;
		token = strtok(NULL, del);
		(*i)++;
	}
	return (buffer);
}
