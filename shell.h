#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

#define MAX_USER_INPUT 100
#define MAX_ARGS 10

void display_user_prompt(void)
void launch_executable(char *user_input)

#endif /* SHELL_H */
