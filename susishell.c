#include "main.h"
int sshell(char *av)
{
	pid_t mypid;
	int p;
	char *arr[2]; 
	
	arr[0] = av;
	arr[1] = NULL;

	mypid = fork();
	if (mypid == 0)
	{
		execve(arr[0], arr, NULL);
	}
	if (mypid == -1)
		perror("Error");
	else
		wait(&p);
	return (0);
}
