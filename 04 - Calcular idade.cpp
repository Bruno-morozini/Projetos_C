
/////Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual,
///calcule e mostre: 
//a)a idade atual dessa pessoa. 
//b)quantos anos ela terá em 2038.

#include<stdio.h>

int main()
{

int dataNasc, anoAtual, idadeAnoAtual, idadeano2038;

printf("Digite o Ano de Nascimento : ");
scanf("%d", &dataNasc);

printf("Digite o Ano Atual : ");
scanf("%d", &anoAtual);


idadeAnoAtual = anoAtual - dataNasc;
idadeano2038 = 2038 - dataNasc;


printf("\n Sua idade hoje é : %d", idadeAnoAtual);
printf("\n\n Sua idade em 2038 sera de  : %d", idadeano2038);



}
