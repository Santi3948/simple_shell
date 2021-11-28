#include "main.h"
void wich(char *argv[], int argc)
{
	char cwd[1024];
	struct stat st;
	int i = 1;
 
	if (argc < 2)
    	{
        	printf("Usage: %s filename ...\n", argv[0]);
        	return (1);
    	}
	getcwd(cwd, sizeof(cwd));
	while (argv[i])
    	{
        	printf("%s:", argv[i]);
        	if (stat(argv[i], &st) == 0)
        	{
            		printf(" FOUND\n");
        	}
        	else
        	{
            		printf(" NOT FOUND\n");
        	}
        	i++;
    	}	

}
