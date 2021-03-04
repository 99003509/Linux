#include "execlp.h"

void compile()
{
    pid_t pid=fork();
    int a;
    if (pid==0)
    { /* child process */
    	a=execlp("gcc","gcc","hello.c","-o", "hello.out",NULL);
        exit(127); /* only if execlp fails */
    }
    else
    { /* pid!=0; parent process */
    	waitpid(pid,0,0); /* wait for child to exit */
    	printf("Parent Process\n");
    }
}
