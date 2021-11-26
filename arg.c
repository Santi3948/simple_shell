#include "main.h"
/**
 *
 *
 *
 */
int main(int ac, char **av)
{	
	int i = 1;

	(void)ac;
	while(av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
