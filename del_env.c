#include "main.h"
/**
 * _unsetenv - delete a variable form env
 * @name: name of the variable
 * Return: 0 or -1
 */
int _unsetenv(const char *name)
{
	int i = 0;

	while (environ[i] && _strstr(environ[i], name) == 0)
	{
 		i++;
 	}
	if (environ[i])
	{
		while(environ[i+1])
		{
		environ[i] = environ[i+1];
		i++;
		}
		environ[i] = NULL;
	}
	return (0);
}
int main(void)
{ 
          int i = 0;
          _unsetenv("PATH");
          while(environ[i])
          {
                  printf("%s\n", environ[i]);
                  i++;
          }
          return (0);
 }
