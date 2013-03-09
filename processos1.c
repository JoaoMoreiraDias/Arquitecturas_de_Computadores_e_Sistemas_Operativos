#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
 
int main () { 
	pid_t p,a; 
	p = fork(); 
	a = fork();
	if (p<0 || a<0)
	{
		perror("Erro ao criar o processo: ");
		exit(-1);
	}	
	printf("pid = %d \t ppid = %d \n", getpid(), getppid()); 
	exit(0); 
}

