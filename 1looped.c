#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT 100

/* Display a prompt and wait for the user to type a command */
void display_prompt(void)
{
	printf("#cisfun$ ");
	fflush(stdout);
}

/* Execute the command */
void execute_command(char *command)
{
	pid_t process_id;

	process_id = fork();

	if (process_id < 0)
	{
		perror("Process creation failed");
		exit(EXIT_FAILURE);
	}
	else if (process_id == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("Command execution failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		int process_status;

		waitpid(process_id, &process_status, 0);

		if (WIFEXITED(process_status) && WEXITSTATUS(process_status) != 0)
		{
			fprintf(stderr, "%s: Process exited with status %d\n", command, WEXITSTATUS(process_status));
		}
	}
}

/* Main function */
int main(void)
{
	char command[MAX_INPUT];

	while (1)
	{
		display_prompt();

		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			printf("\n");
			break;
		}

		command[strcspn(command, "\n")] = '\0';

		if (strcmp(command, "exit") == 0)
		{
			break;
		}

		execute_command(command);
	}

	return (0);
}
