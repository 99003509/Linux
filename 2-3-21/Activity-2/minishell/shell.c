#include "shell.h"

#define BUFFER_LEN 1024

void Mini_Shell() {
  char lin[BUFFER_LEN]; 
  char *av[100];       
  char *path = "/bin/";  
  char progpath[30];    
  int ac;             

  while (1) {

    printf("SHELL "); // print shell 

    if (!fgets(line, BUFFER_LEN, stdin))
      break;

    size_t length = strlen(lin);

    if (lin[length - 1] == '\n')
      lin[length - 1] = '\0';

    if (strcmp(lin, "exit") == 0) { // check if exit
      break;
    }

    char *t; // split into separate strings
    t = strtok(line, " ");
    int i = 0;
    while (t != NULL) {
      argv[i] = t;
      t = strtok(NULL, " ");
      i++;
    }
    av[i] = NULL; // set last value to NULL for execvp

    ac = i; // get arg count
    for (i = 0; i < ac; i++) {
      printf("%s\n", av[i]); // print command/args
    }
    strcpy(progpath, path);    // copy /bin/ to file path
    strcat(progpath, av[0]); // add program to path

    for (i = 0; i < strlen(progpath); i++) { // delete newline
      if (progpath[i] == '\n') {
        progpath[i] = '\0';
      }
    }
    int pid = fork(); // fork child

    if (pid == 0) { // Child
      execvp(progpath, av);
      fprintf(stderr, "Child process could not do execvp\n");

    } else { // Parent
      wait(NULL);
      printf("Child exited\n");
    }
  }
}
