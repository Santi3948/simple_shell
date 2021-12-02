#include "main.h"
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char *path;

	path = _getenv("PATH");
	printf("%s\n", path);
	return (0);
}
