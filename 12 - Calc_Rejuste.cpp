//////Uma  empresa  concederá  um  aumento  de  salário aos  seus  funcionários,
//variável de acordo com o cargo, conforme a tabela abaixo. Faça um algoritmo
//que leia o salário e o cargo de um funcionário (pelo código) e calcule o novo
//salário. Se o cargo  do  funcionário  não  estiver  na  tabela,  ele  deverá,
//então,  receber  40%  de aumento. Mostre o salário antigo, o novo salário e a diferença. 

#include<stdio.h>

int main()
{
int cod;
float salarioAtual,novoSalario,diferenca;

printf("GERENTE CODIGO 101 \n");
printf("ENGENHEIRO 102 \n");
printf("TECNICO 103 \n");


printf("\n\nDigite o codigo do Colaborador : ");
scanf("%d", &cod);

printf("\n\nDigite o salario atual do Colaborador : ");
scanf("%f", &salarioAtual);

if(cod == 101)
    {
        novoSalario = salarioAtual * 1.1;
        diferenca = novoSalario - salarioAtual;
        printf("\nSalario Atual : %f ",salarioAtual);
        printf("\nSalario Reajustado : %f ",novoSalario);
        printf("\nDiferença de : %f ",diferenca);
        
        
    }        
else if (cod == 102)
    { 
        novoSalario = salarioAtual * 1.2;
        diferenca = novoSalario - salarioAtual;
        printf("\nSalario Atual : %f ",salarioAtual);
        printf("\nSalario Reajustado : %f ",novoSalario);
        printf("\nDiferença de : %f ",diferenca);
    }  
    else if (cod == 103)
    { 
        novoSalario = salarioAtual * 1.3;
        diferenca = novoSalario - salarioAtual;
        printf("\nSalario Atual : %f ",salarioAtual);
        printf("\nSalario Reajustado : %f ",novoSalario);
        printf("\nDiferença de : %f ",diferenca);
    }
    else
    { 
        novoSalario = salarioAtual * 1.4;
        diferenca = novoSalario - salarioAtual;
        printf("\nSalario Atual : %f ",salarioAtual);
        printf("\nSalario Reajustado : %f ",novoSalario);
        printf("\nDiferença de : %f ",diferenca);
    }
    
}

