/////Leia nome, salário e categoria de um funcionário,
///se a categoria for igual a “m” de mensalista, conceder 10% de aumento,
///se for igual a “h” de horista, conceder 20% de aumento,
///se não for “m” nem “h”, exibir a mensagem categoria inválidA

#include<stdio.h>

int main()
{

char nome;
float salarioAtual, novoSalario;
int cod;

printf("MENSALISTA CODIGO M \n");
printf("HORISTA CODIGO H \n");

printf("\n\nDigite o NOME do Colaborador : ");
scanf("%c", &nome);

printf("\n\nDigite o salario atual do Colaborador : ");
scanf("%f", &salarioAtual);

printf("\n\nDigite o CODIGO do Colaborador : ");
scanf("%d", &cod);


if(cod == 'M')
    {
        novoSalario = salarioAtual * 1.1;
        
               printf("\nSalario Reajustado : %f ",novoSalario);
       
    }        
else if (cod == 'H')
    { 
        novoSalario = salarioAtual * 1.2;
        
               printf("\nSalario Reajustado : %f ",novoSalario);
       
    }  
      else
    { 
        printf("\ncategoria invalida ");
    }
    
}

