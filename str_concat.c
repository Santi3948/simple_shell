#include "main.h"
/**
 * str_concat - check the code
 * @s1: s1
 * @s2: s2
 * Return: pointer to d.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n = 0, h = 0, g;
	char *d;

	if (s1 == NULL && s2 == NULL)
	{
	d = malloc(0);
	return (d);
	}
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i]; i++)
	n = n + 1;
	for (j = 0; s2[j]; j++)
	h = h + 1;
	d = malloc(sizeof(char) * (n + h) + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	for (g = 0; g <= n - 1 ; g++)
	d[g] = s1[g];
	for (g = n; g <= n + h - 1; g++)
	d[g] = s2[g - n];
	return (d);
}
