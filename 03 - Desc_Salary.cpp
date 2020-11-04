
/////Faça  um  algoritmo  que  receba  o  salário-base  de  um  funcionário,
///calcule  e mostre  o  salário  a  receber,
//sabendo-se  que  esse  funcionário  tem  gratificação  de 5% sobre o salário-base
// e paga imposto de 7% sobre o total. 


#include<stdio.h>

int main(){

float SalarioBase, SalarioRecebido,SalarioGratificacao, Desconto;

printf("Digite o salario base : ");
scanf("%f", &SalarioBase);

SalarioGratificacao = SalarioBase*1.05;
Desconto = SalarioGratificacao * 0.07;
SalarioRecebido = SalarioGratificacao - Desconto;


printf("Salario Recebido é : %f", SalarioRecebido);



}

