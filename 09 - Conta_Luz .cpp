//////Faça o algoritmo que leia o valor de uma conta de luz (CL) e, caso o valor seja
////maior que R$ 150,00, apresente a mensagem: “Você está gastando muito”. Caso
///contrário exiba a mensagem: “Seu gasto foi normal”.


#include <stdio.h>

int main()
{
    float conta, resultado;

      printf("\nDigite o valor da conta:");
    scanf("%f",&conta);
    
    resultado = conta - 150;

    if(resultado > 0 )
    {
        printf("\nVoce Esta Gastando Muito !!  ");
    }
    else
    {
        printf("\nSeu Gasto Esta normal !!  ");
    }
}

