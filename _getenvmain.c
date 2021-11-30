#include "main.h"
int main(void)
{
	char *path;

	path = _getenv("PATH");
	printf("%s\n", path);
	return (0);
}
