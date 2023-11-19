/*Program to create orphan process*/

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
int pid;
pid=getpid();
printf(“current process pid is %d", pid);
printf(“forking a child process \n");
pid=fork();
if(pid==0)
{
printf(“child process is sleeping");
sleep(10);
printf(“orphan child parent id: %d", getppid());
}
else
{
printf(“parent process completed");
}
return 0;
}
