#include "main.h"
/**
 * printpath - function that prints the path
 * @path: environ variable path
 * Return: value of path
 */
char **printpath(char *path)
{
	int i = 0, x = 0;
	char **a;

	a = split(path, &x, ":");
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	return (a);
}
