#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>

void main(){
	int pid;
	int x=0;

	pid= fork();
	if(pid == 0)
	for(;;)
		printf("Proceso hijo %d\n", x++);
	else{
		sleep(5);
		kill(pid, SIGKILL);
		printf("Mate a mi propio hijo ()\n");
	}
}
