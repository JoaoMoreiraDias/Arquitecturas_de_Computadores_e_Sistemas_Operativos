#include <stdio.h>

int main()
{
/*Declaracao de variaveis*/
int dias;
float anos; 
/*entrada de dados*/
printf ("Numero de dias: ");
scanf ("%d",&dias);
anos=dias/365;
printf ("\n\n%d dias equivalem a %f anos. \n", dias,anos);
return(0);
}
