//////Faça um programa que o usuário informe o salário recebido e o total gasto.
///Deverá ser exibido na tela “Gastos dentro do orçamento” caso o valor gasto não
///ultrapasse o valor do salário e “Orçamento estourado” se o valor gasto
//ultrapassar o valor do salário.


#include <stdio.h>

int main()
{
    float salario, gastos,resultado;

      printf("\nDigite o valor do salario:");
    scanf("%f",&salario);
    
    printf("\nDigite o gastos Bruto :");
    scanf("%f",&gastos);
    
    resultado = salario - gastos;

    if(resultado >= 0 )
    {
        printf("\nGastos Dentro do Orçamento !!  ");
    }
    else
    {
        printf("\nOrçamento Estourado!!  ");
    }
}

