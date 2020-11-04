//////Uma  loja  fornece  10%  de  desconto  para  funcionários
/////e  5%  de  desconto  para clientes  vips.
///Faça  um  programa  que  calcule  o  valor  total  a  ser  pago  por  uma pessoa.
//O programa deverá ler o valor total da compra efetuada
//e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).

#include<stdio.h>

int main()
{

float compra, valorfinal;
int codigo;

printf("Digite o valor da compra : ");
scanf("%f", &compra);

printf("\n cliente comum (1) \n funcionário (2) \n vip (3) \n\nDigite o codigo do consumidor :  ");
scanf("%d", &codigo);


if(codigo == 2)
    {
 valorfinal = compra*0.9;
        printf("O valor final da sua compra é %f ",valorfinal);
    }        
else if (codigo == 3)
    { 
  valorfinal = compra*0.95;
        printf("O valor final da sua compra é %f ",valorfinal);
    }    
  else 
    {
     valorfinal = compra;
        printf("O valor final da sua compra é %f ",valorfinal);
    }
}    
    

