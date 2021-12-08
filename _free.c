#include "main.h"
/**
 * _free_ - function that free
 * @a: string
 * @b: string
 * @c: string
 * @d: string
 * @e: string
 * @f: string
 */
void _free_(char **a, char *b, char *c, char *d, char **e, char **f)
{
	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	free(f);
}
