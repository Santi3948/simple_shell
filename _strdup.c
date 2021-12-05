#include "main.h"
/**
  * _strdup - check the code
  * @str: str
  * Return: pointer to d.
  */
char *_strdup(char *str)
{
	unsigned int pos, len;
	char *dup;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != 0;)
		len++;

	dup = (char *)malloc((sizeof(char) * len + 1));

	if (dup == NULL)
		return (NULL);

	for (pos = 0; pos <= len; pos++)
	{
		dup[pos] = str[pos];
	}

	return (dup);
}
