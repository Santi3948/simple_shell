#include "main.h"
/**
 * main - main
 * @ac: number of arguments
 * @av: pointer to arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 1;

	(void)ac;
	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
