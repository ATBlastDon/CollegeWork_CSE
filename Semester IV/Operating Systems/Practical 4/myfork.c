#include <stdio.h>
#include <unistd.h>

int main()

{

	int pid;

	pid = fork();
	if (pid == 0)

	{

		printf("\n After fork");

		printf("\n The new child process created by fork system call %d\n", getpid());
	}
	else

	{

		printf("\n Before fork");

		printf("\n The parent process id is :- %d", getppid());
		printf("\n parent executed successfully\n");
	}

	return 0;

}