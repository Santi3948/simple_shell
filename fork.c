#include "main.h"
/**
 * execve_fork - function that makes a fork and execve
 * @pathname: name of the path
 * @argv: pointer to arguments
 * @envp: pointer to environment
 * Return: 0
 */
int execve_fork(const char *pathname, char *const argv[], char *const envp[])
{
	int a;

	pid_t MyPid;

	MyPid = fork();
	if (MyPid == -1)
		perror("Error");
	if (MyPid == 0)
	{
		if (execve(pathname, argv, envp) == -1)
		{
			perror(pathname);
			return (-1);
		}
	}
	else
		wait(&a);
	return(0);
}
