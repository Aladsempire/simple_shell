This is one of most Alx most anticipated project,building a shell from scratch.
This project was completed by viktorh/adaora

0x16. C - Simple Shell

Write a beautiful code that passes the Betty checks

Write a UNIX command line interpreter.

Usage: simple_shell

Simple shell 0.1 +

Handle command lines with arguments

Simple shell 0.2 +

Handle the PATH
fork must not be called if the command doesn’t exist

Simple shell 0.3 +

Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit

Simple shell 0.4 +

Implement the env built-in, that prints the current environment

Simple shell 0.1 +

Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline

Simple shell 0.2 +

You are not allowed to use strtok

Simple shell 0.4 +

handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell

Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands

Simple shell 1.0 +

Implement the builtin command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY]
If no argument is given to cd the command must be interpreted like cd $HOME
You have to handle the command cd -
You have to update the environment variable PWD when you change directory

Simple shell 1.0 +

Handle the commands separator ;

Simple shell 1.0 +

Handle the && and || shell logical operators

Simple shell 1.0 +

Implement the alias builtin command
Usage: alias [name[='value'] ...]
alias: Prints a list of all aliases, one per line, in the form name='value'
alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value

Simple shell 1.0 +

Handle variables replacement
Handle the $? variable
Handle the $$ variable

Simple shell 1.0 +

Handle comments (#)

Simple shell 1.0 +

Usage: simple_shell [filename]
Your shell can take a file as a command line argument
The file contains all the commands that your shell should run before exiting
The file should contain one command per line
In this mode, the shell should not print a prompt and should not read from stdin