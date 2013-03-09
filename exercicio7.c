#include <stdio.h> 
int main () { 
     int Count; 
     char ch; 
     printf(" Escrever uma letra - <X para sair> ");
     for (Count=1;;Count++) { 
         if (Count%5==0)
{
 scanf("%c", &ch); 
          if (ch == 'X') break; 
          printf("\nLetra: %c \n",ch); 
          scanf("%c", &ch); 
     }} 
     return(0); 
} 
