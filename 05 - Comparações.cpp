///Faça um algoritmo para ler dois números inteiros e informar se estes são iguais ou diferentes.

#include<stdio.h>

int main()
{

int numeroInteiro[2],resultado;

printf("Digite o Pirmeiro Numero Inteiro : ");
scanf("%d", &numeroInteiro[1]);

printf("Digite o Segundo Numero Inteiro : ");
scanf("%d", &numeroInteiro[2]);

resultado = numeroInteiro[1] - numeroInteiro[2];

if(resultado == 0)
  {
    printf("Os valore ****SAO***** iguais \n");
  } else {
     printf("Os valore ***NAO*** sao iguais \n"); 
  }
  
}

