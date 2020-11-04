//////A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
////estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
////bruto. Fazer um algoritmo que permita entrar com o salário bruto e o valor da
///prestação e informar se o empréstimo pode ou não ser concedido.

#include <stdio.h>

int main()
{
    float salario, emprestimo,resultado;

      printf("\nDigite o valor do emprestimo:");
    scanf("%f",&emprestimo);
    
    printf("\nDigite o salario Bruto :");
    scanf("%f",&salario);
    
    resultado = salario*0.3;

    if(emprestimo >= resultado)
    {
        printf("Valor Superior ao permitido !! \n Valor Maximo Liberado de  %f \n",resultado);
    }
    else
    {
        printf("Emprestimo Concedido Com Sucesso no valor de %f \n",emprestimo);
    }
}

