#include "main.h"
/**
 * last_character - return de lenght of a string including null
 * @s: a string
 * Return: int
 */
int last_character(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i])
	{
		count++;
		i++;
	}

	return (count);
}
/**
 * str_concat - check the code
 * @dest: s1
 * @src: s2
 * Return: pointer to d.
 */
char *str_concat(char *dest, char *src)
{
	int paste = last_character(dest);
	int copy = 0;

	for (copy = 0; src[copy] != '\0'; copy++)
	{
		dest[paste] = src[copy];
		paste++;
	}
	dest[paste] = 0;

	return (dest);
}
