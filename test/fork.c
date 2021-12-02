#include "main.h"
/**
 * main - main
 * @argc: number of arguments
 * @envp: pointer to env
 * Return: 0
 */
int main(int argc, char *envp[])
{
	int i, a;
	pid_t MyPid;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	(void)argc;
	(void)envp;

	for (i = 0; i < 5; i++)
	{
		MyPid = fork();
		if (MyPid == -1)
			perror("Error");
		if (MyPid == 0)
		{
			execve("/bin/ls", argv, NULL);
		}
		else
			wait(&a);
	}
	return (0);
}
