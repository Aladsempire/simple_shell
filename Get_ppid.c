#include <stdio.h>
#include <unistd.h>

int main() {
	// Get the process ID
	pid_t pid = getpid();

	// Get the parent process ID
	pid_t parent_pid = getppid();

	// Print the PIDs
	printf("Process ID: %d\n", pid);
	printf("Parent Process ID: %d\n", parent_pid);

	return 0;
}
