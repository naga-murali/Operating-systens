/*Program to create a child process using fork*/

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>

int main(){
	int pid;
	pid=getpid();
	printf("current process pid is %d",pid);
	printf("forking a child process \n");
	pid=fork();
	if(pid==0)
	{
		printf("child process id: %d and its parent id: %d", getpid(),
		getppid());
	}
	else
	{
		printf("parent process id %d",getpid());
	}
	return 0;
}
