#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h> /* Add this line */

#define MAX_LINE 80 /* The maximum length command */

int main(void)
{
 char* args[MAX_LINE/2 + 1]; /* command line arguments */
 int should_run = 1; /* flag to determine when to exit program */
 char line[MAX_LINE]; /* Declare line at the top of the block */
 int i = 0; /* Declare i at the top of the block */
 pid_t pid; /* Declare pid at the top of the block */
 int status; /* Declare status at the top of the block */
 char* token; /* Declare token at the top of the block */

 while (should_run) {
    printf("> ");
    fflush(stdout);

    /* read user input */
    if (!fgets(line, sizeof(line), stdin)) {
        break;
    }

    /* remove trailing newline */
    line[strcspn(line, "\n")] = 0;

    /* parse input into args array */
    token = strtok(line, " ");
    while (token != NULL) {
        args[i] = token;
        i++;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;

    /* fork a child process */

    pid = fork();
    if (pid == 0) {
        /* child process */
        if (execvp(args[0], args) == -1) {
            perror("simple_shell");
        }
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        /* error forking */
        perror("simple_shell");
    } else {
        /* parent process */
        do {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
 }

 return EXIT_SUCCESS;
}
