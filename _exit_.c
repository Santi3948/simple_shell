#include "main.h"
/**
 * _exit_ - exit the function
 * @a: int
 * Return: 0
 */
int _exit_(char *a)
{
	if (a)
		exit(atoi(a));
	exit(0);
	return (0);
}
