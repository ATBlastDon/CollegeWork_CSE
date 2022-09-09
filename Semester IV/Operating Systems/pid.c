#include <unistd.h>
#include <stdio.h>

int main()
{
	int pid;
	pid = fork();

	if (pid == 0)
	{
		printf("Parent Process ID: %d\n", getpid());
		printf("Child Process ID: %d\n", getppid());
	}
}