#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
 int ret= fork();
 switch(ret)
    {
 case 0: 
 printf("1.");
 printf("hi from child\n");
 printf("process id =%d\n", getpid());
 sleep(1);
 break;
 
 case -1:
 perror("fork");
 exit(1);
 break;
 
 default:
 printf("2.");
 printf("hi from parent process \n");
 printf("process id = %d \nparent process=%d\n", getpid(),getppid());

    }
 //printf("hello world \n ret = %d \n", ret );
 
}