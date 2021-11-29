#include "main.h"
void _which(char *argv[], int argc)
{
	char cwd[1024];
	struct stat st;
	int i = 1;
 
	getcwd(cwd, sizeof(cwd));
	if (argc < 2)
    	{
        	printf("Usage: %s filename ...\n", cwd);
        	exit(-1);
    	}
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
