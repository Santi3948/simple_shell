#include "main.h"
int main(void)
{
	char *a = NULL, **c;
        size_t len = 0;
	int i = 0;
	

        printf("$ ");
        getline(&a, &len, stdin);
        a[strlen(a) - 1] = '\0';
        c = split(a, &i);
	_which(c, (i + 1));
        free(a);
        return (0);	
}
