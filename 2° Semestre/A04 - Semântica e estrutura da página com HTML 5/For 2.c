#include <stdio.h>      
#include <stdlib.h>     

int main() {            

    int vec[5];         // Declara um vetor de 5 posições

    // Laço de repetição para preencher o vetor
    for (int index = 0; index < 5; index++) {
        // Exibe uma mensagem solicitando um valor para a posição atual
        printf("Digite um valor para a posição %d do vetor: ", index);
        // Lê o valor digitado e armazena na posição correspondente do vetor
        scanf("%d", &vec[index]);
    }
    // Laço de repetição para percorrer o vetor do final para o início
    for (int index = 4; index >= 0; index--) {
        // Exibe a posição do vetor e o valor armazenado nela
        printf("O valor digitado para a posição %d do vetor foi: %d\n",
               index, vec[index]);
    }
    return 0;          
}