#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: always (0)
 */

int main(void)
{
		size_t n = 10;
		char *buf = malloc(sizeof(char) * n);


		printf("input your name: ");
		getline(&buf, &n, stdin);

		printf("your name is %s, buffer size is %zu\n", buf, n);
		free(buf);

		return (0);
}
