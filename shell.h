#ifndef SHELL_H
#define SHELL_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/stat.h>

/*---PROTOTYPES---*/
/* main.c */
void shell_interactive(void);
void shell_no_interactive(void);

/* wait call system*/
pid_t wait(int *wstatus);
pid_t waitpid(pid_t pid, int *wstatus, int options);

/*sys stat*/
int main(int ac, char **av)

/*main*/
int main(int ac, char **av, char **env)

/*sys fork*/
pid_t fork(void);

/*gets pid*/
pid_t getpid(void);
pid_t getppid(void);

/* getline*/
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/* execve run */
int execve(const char *pathname, char *const argv[],
char *const envp[]);

/*mai environ*/
/* print env*/
int main(int ac, char **av, char **env)

/* get enviroment */
char *getenv(const char *name);
char *secure_getenv(const char *name);

/*

#endif
