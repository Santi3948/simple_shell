#include "main.h"
int main(void)
{
	char *a = NULL;
        size_t len = 0;
	
	while (1)
	{
        	printf("$ ");
		getline(&a, &len, stdin);
		a[strlen(a) - 1] = '\0';
		sshell(a);
	        free(a);
	}
	return (0);	
}
