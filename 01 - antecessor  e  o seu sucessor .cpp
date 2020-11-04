
/////Fazer  um  algoritmo  que  leia  um  número  inteiro  e  escreva  o  seu  antecessor  e  o seu sucessor. 

#include<stdio.h>

main(){

 int numeroInteiro[2], antecessor,sucessor;

printf("Digite o primeiro valor: ");
scanf("%d", &numeroInteiro[1]);

antecessor = numeroInteiro[1] - 1;
sucessor = numeroInteiro[1] + 1;

printf("o numero antecessor eh: %d", antecessor);
printf("\n\n\\ o numero sucessor eh: %d", sucessor);


}
