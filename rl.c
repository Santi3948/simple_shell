#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char *buffer;
	size_t len = 1024;

	buffer = malloc(1024);
	if (!buffer)
		return (-1);

	printf("$ ");
	getline(&buffer, &len, stdin);
	printf("%s", buffer);
	free(buffer);
	return (0);
}
