#include "main.h"
#include "main.h"
/**
 * _strcmp - compares ASCII numeric value of two strings.
 * @s1: first string
 * @s2: second string
 * Return: ASCII numeric difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int pos, result;

	for (pos = 0; s1[pos] != 0; pos++)
	{
		if (s1[pos] == s2[pos])
			result = 0;
		else
		{
			result = s1[pos] - s2[pos];
			break;
		}
	}
	return (result);
}
