
/////Ler  uma  medida  em  polegadas  e  imprimir  a  equivalente  em  
////centímetros, sabendo que 2.54 cm equivale a 1 polegada. 
#include<stdio.h>

int main(){

float polegada, centimetro;

printf("Digite a Quantidade de Polegadas : ");
scanf("%f", &polegada);

centimetro = polegada*2.54;

printf("As Polegadas Digitadas Transformadas em Centimetro são : %f", centimetro);



}
