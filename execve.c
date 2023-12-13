#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_COMMAND_LENGTH 256
/**
 * main - Entry point
 *
 * Description: This is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char command[MAX_COMMAND_LENGTH];
	char *args[] = {NULL, NULL};

	while (1)
	{
		printf("#perfectshell$ ");
		fgets(command, MAX_COMMAND_LENGTH, stdin);

		/* Remove the newline character at the end of the command */
		command[strcspn(command, "\n")] = 0;

		args[0] = command;

		/* Execute the command */
		if (execve(command, args, NULL) == -1)
		{
			perror("./shell");
		}
	}
	return (0);
}
