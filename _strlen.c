#include "main.h"

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
int a = 0;
int cont = 0;
while (*(s + a) != 0)
{
cont++;
a++;
}
return (cont);
}
