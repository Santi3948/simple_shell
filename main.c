#include "main.h"
int main(void)
{
	char *a = NULL, **buffer = NULL;
	size_t len = 0;
	int i = 0;

	buffer = malloc(1024);
	printf("$ ");
	getline(&a, &len, stdin);
	a[strlen(a) - 1] = '\0';
	split(a, &i, &buffer);
	free(buffer);
	free(a);
	return (0);
}
