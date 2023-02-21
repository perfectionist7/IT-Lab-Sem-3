#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
	pid_t check;
	check = fork();
	if(check==0) {
		printf("This is the child process\n");
		printf("The process ID of the child is %d \n",getpid());
	}
	else if(check>0){
		printf("This is the parent process\n");
		printf("The process ID of the parent is %d \n",getpid());
	}
	else if(check==-1){
		printf("Fork Failed!");
	}

}
