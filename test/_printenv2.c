#include "main.h"
/**
 * main - main
 * @ac: number of arguments
 * @av: pointer to string of arguments
 * @env: environments variables
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	printf("%p\n", &env);
	printf("%p\n", &environ);
	return (0);
}
