//////Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule
/////o  valor  a  ser  pago  por  aquele  lanche.  Considere  que  a  cada  execução
///somente será calculado um item. 

#include<stdio.h>

int main(){

int cod, quant;
float total;

printf("cachorro quente codigo 100 \n");
printf("bauru simples codigo 101 \n");
printf("bauru com ovo codigo 100 \n");
printf("hamburguer codigo 100 \n");
printf("cheeseburguer codigo 100 \n");
printf("refrigerente codigo 100 \n");


printf("\n\nDigite o codigo do lanche : ");
scanf("%d", &cod);

printf("Digite a quantidade de lanches : ");
scanf("%d", &quant);


if(cod == 100)
    {
       total = 1.2 * quant;
        printf("\ntotal dos lanche é de : %f ",total);
    }        
else if (cod == 101)
    { 
    total = 1.3 * quant;
         printf("\ntotal dos lanche é de : %f ",total);
    }  
    else if (cod == 102)
    { 
    total = 1.5 * quant;
         printf("\ntotal dos lanche é de : %f ",total);
    }
    else if (cod == 103)
    { 
    total = 1.2 * quant;
        printf("\ntotal dos lanche é de : %f ",total);
    }
    else if (cod == 104)
    { 
    total = 1.3 * quant;
        printf("\ntotal dos lanche é de : %f ",total);
    }
      else if (cod == 105)
    { 
    total = 1* quant;
         printf("\ntotal dos lanche é de : %f ",total);
    }
     else
    { 
        printf("\n DIGITE UM CODIGO VALIDO !! ");
    }
    
}
    


