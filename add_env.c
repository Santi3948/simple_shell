#include "main.h"
/**
 * _setenv - change or add env
 * @name: name of the variable
 * @value: of the env 
 * @overwirte: 
 * Return:
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	int i = 0;
	char *strcon = str_concat(str_concat(name, "="), value);

	while (environ[i] && _strstr(environ[i], name) == 0)
	{
 		i++;
	}
	if (!environ[i])
	{
		environ[i] = strcon;
		environ[i+1] = NULL;
		return (0);	
	}
	if (overwrite != 0)
	{
		environ[i] = strcon;
		return (0);
	}
	return (-1);
}
/**
 * str_concat - check the code
 * @s1: s1
 * @s2: s2
 * Return: pointer to d.
 */
char *str_concat(const char *s1, const char *s2)
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
int main(void)
{
	int i = 0, x = 0;
	_setenv("PATH", "PAPAFRITA", 1);
	while(environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
          _setenv("PATH", "TUKSON", 1);
          while(environ[x])
          {
                  printf("%s\n", environ[x]);
                  x++;
          }
	return (0);
}
