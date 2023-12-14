#include <stdio.h>
#include <unistd.h>

/**
 * main - Gets the process identity
 *
 * Return: Always 0.
 */

int main(void)
{
	/* the main comd*/
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n", my_pid);
    return (0);
}
