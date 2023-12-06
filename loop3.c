#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_USER_INPUT 100
#define MAX_ARGS 10

void display_user_prompt() {
    printf(":) ");
    fflush(stdout);
}

void launch_executable(char *user_input) {
    char *args[MAX_ARGS];
    int arg_count = 0;

 /* Tokenize the inpu */
    char *token = strtok(user_input, " ");
    
    pid_t process_id;  /* Move the declaration here */
    
    while (token != NULL && arg_count < MAX_ARGS - 1) {
        args[arg_count++] = token;
        token = strtok(NULL, " ");
    }
    args[arg_count] = NULL;

    process_id = fork();

    if (process_id < 0) {
        perror("Error creating process");
        exit(EXIT_FAILURE);
    } else if (process_id == 0) {
        execvp(args[0], args);
        perror("Execution failed");
        exit(EXIT_FAILURE);
    } else {
        int status;
        waitpid(process_id, &status, 0);

        if (WIFEXITED(status) && WEXITSTATUS(status) != 0) {
            fprintf(stderr, "%s: Process exited with status %d\n", args[0], WEXITSTATUS(status));
        }
    }
}


int main() {
    char user_input[MAX_USER_INPUT];

    while (1) {
        display_user_prompt();

        if (fgets(user_input, sizeof(user_input), stdin) == NULL) {
            printf("\n");
            break;
        }

        user_input[strcspn(user_input, "\n")] = '\0';

        if (strcmp(user_input, "exit") == 0) {
            break;
        }

        launch_executable(user_input);
    }

    return 0;
}

