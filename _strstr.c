#include "main.h"

/**
 * _strstr -  function that gets the length of a prefix substring
 * @haystack: initial segment of
 * @needle: only of bytes from
 * Return: Returns the number of bytes in
 */
char *_strstr(char *haystack, const char *needle)
{
int i = 0, j = 0, l = 0;


	for (i = 0; needle[i]; i++)
		l++;
	if (l == 0)
		return (haystack);

	for (i = 0; haystack[i]; )
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;

			else
				break;
			}

		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
