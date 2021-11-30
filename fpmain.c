#include "main.h"
int main(void)
{
	char *a, **c;
        size_t len = 1024;
	int i = 0;
	
	a = malloc(len);
        printf("$ ");
        getline(&a, &len, stdin);
        a[strlen(a) - 1] = '\0';
        c = split(a, &i, " ");
	_which(c, (i + 1));
	free(a);
        return (0);	
}
