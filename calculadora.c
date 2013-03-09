#include <stdio.h>
int main()
{
	int primeiro;
	int segundo;
	char operacao[19], aaaa[10];
	float resultado;
	
	printf ("Qual o primeiro numero: ");
	scanf ("%d", &primeiro);
	
	printf ("Qual o segundo numero: ");
	scanf("%d", &segundo);
	
	gets(aaaa);
	printf ("Qual a operacao: ");
	gets(operacao);
	/*scanf ("%c", O&operacao);*/

	if (operacao[0]=='+')
	{
		resultado=primeiro+segundo;
		printf("O resultado da soma e %f.", resultado);
	}
	else
		if (operacao[0]=='-')
		{
			resultado=primeiro-segundo;
			printf("O resultado da subtracao e %f.", resultado);
		}
		else
			if (operacao[0]=='/')
			{
				resultado=primeiro/segundo;
				printf("O resultado da  e %f.", resultado);
			}
			else
				if (operacao[0]=='*')
				{
					resultado=primeiro*segundo;
					printf("O resultado da multiplicacao e %f.", resultado);
				}				
				else
				{
					printf("ERRO");
				}
	return (0);
}

