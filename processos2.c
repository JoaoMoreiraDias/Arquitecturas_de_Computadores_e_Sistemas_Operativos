#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t p,a;
	int num;
	p=fork();
	a=fork();
	if (p==0)
	{
		printf("Eu sou o primeiro filho e tenho pid %d\n", getpid());
		num=1;
	}
	else if(a==0)
		{
			printf("Eu sou o segundo filho e tenho pid %d\n", getpid());
			num=2;
		}
	if (p>0 || a>0)
	{
		printf("Eu sou o pai pid %d\n", getppid());
		printf("Valor do estado do primeiro filho: %d\n", num);
		printf("Valor do estado do segundo filho: %d\n", num);		
	}
}

