/*Program to create a zombie process*/

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
	pid_t a;
	a=fork();
	if(a>0){
		sleep(20);
		printf(“PID of Parent %d", getpid());
	}
	else{
		printf(”PID of CHILD %d", getpid());
		exit(0);
	}
}
