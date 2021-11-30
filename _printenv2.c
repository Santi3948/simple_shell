#include "main.h"
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	printf("%p\n", &env);
	printf("%p\n", &environ);
	return (0);
}
