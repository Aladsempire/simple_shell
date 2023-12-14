#include <stdio.h>
#include <unistd.h>

/**
 * main - fork that creates a process
 *
 * Return: Always 0.
 */
int main(void)

{
	pid_t my_pid;
	pid_t pid;

	printf("this forks immediately\n");
	pid = fork();
	if (pid == -1)
	{
	perror("Error:");
	return (1);
	}
	printf(" fork\n");
	my_pid = getpid();
	printf("thr pid is %u\n", my_pid);
	return (0);
}
