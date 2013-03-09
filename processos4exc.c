#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	int f, estado;
	for (f=0;f<3; f++)
	{
		pid=fork();
		if(pid > 0)
		{
			wait(NULL);
			printf("Eu sou o pai\n");
		}
		else
		{
			printf("Filho: Eu sou o Filho\n");
			printf("Sou %d, filho de %d. \n", getpid(), getppid());
			sleep(1);
			exit(1);
		}
	}	
}
