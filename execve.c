#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 256

int main(void)
{
  char command[MAX_COMMAND_LENGTH];
  char *args[] = {NULL, NULL};

  while (1)
  {
      printf("#cisfun$ ");
      if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
      {
	      printf("\n");
	      break;
      }

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
