#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - this defnitely  forks & wait example
 *
 * Return: will always return 0.
 */
int main(void)
{
	pid_t pid;

	/*the child process*/
	pid = fork();

	/*if the fork fails us*/
	if (pid == -1)
{
	perror("error\n");
	return (1);
}
	/*in the child process*/
	if (pid == 0)
{
	printf("Behold the child process\n");
}
	/*in parents process*/
	else
{	sleep(5);
	printf("This is our parent process\n");
}
	return (0);
}
