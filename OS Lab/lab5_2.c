#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int args1, char* args2[]) {
	pid_t proc = fork();
	int child_state;
	if(proc==0) {
		for(int i=0; i<args1-1; i++) {
			for(int j=0; j<args1-i-1; j++) {
				if(strcmp(args2[j],args2[j+1])>0) {
					char* temp = args2[j];
					args2[j] = args2[j+1];
					args2[j+1] = temp;
				}
			}
		}
		//displaying the array
		printf("Child Process: \n");
	    printf("Sorted List: ");
		for(int i=0; i<args1; i++) {
			printf("%s ",args2[i]);
		}
	}
	else if(proc>0) {
		wait(&child_state);
		printf("Parent Process: \n");
		printf("Unsorted List: ");
		for(int i=0; i<args1; i++) {
			printf("%s ",args2[i]);
		}
	}
	else if(proc==-1) {
		printf("Fork Failed!");
	}
}