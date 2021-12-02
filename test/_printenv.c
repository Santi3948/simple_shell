#include "main.h"
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
