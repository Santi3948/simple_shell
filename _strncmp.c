#include "main.h"

/**
*_strncmp - Compares strings up to a certain number of bytes
*@s1: String 1
*@s2: String 2
*@i: Top number of bytes to be compare
*Return: 0 or byte difference
*/

int _strncmp(char *s1, char *s2, size_t i)
{
	size_t n = 0, op = 0;

	while (op == 0)
	{
		if ((!s1[n] && !s1[n]) || n == i)
			break;
		op = s1[n] - s2[n];
		n++;
	}
	return (op);
}
