///Exibir os números de 1 até 50 na tela.



#include <stdio.h>
 
int main(){
   
    int i = 1;                  // Declaração e inicialização
   
    while(i <= 50){             // Expressão lógica
        printf("%d ", i);       // Comando 1: escreve o número na tela
        i++;                    // Comando 2: Incrementação do i
    }
 
    getchar();
    return 0;
}
