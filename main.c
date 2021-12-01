#include "main.h"
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char *a = NULL, **x;
	size_t len = 0;
	int i = 0;

	printf("$ ");
	getline(&a, &len, stdin);
	a[strlen(a) - 1] = '\0';
	x = split(a, &i);
	free(a);
	free(x);
	return (0);
}
