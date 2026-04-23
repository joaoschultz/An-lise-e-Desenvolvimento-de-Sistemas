// Construir um algoritmo que solicite um número e mostre 
// a tabuada desse número usando as 3 estruturas de repetição: for, while e do-while

// for -> usado quando sabemos a quantidade de repetições (controle fixo)
// while -> usado quando não sabemos exatamente quantas repetições (verifica no início)
// do-while -> executa pelo menos uma vez, pois verifica a condição no final

#include <stdio.h> 

int main() {
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    // Usando FOR
    printf("\nTABUADA DO %d (usando for)\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    // Usando WHILE
    printf("\nTABUADA DO %d (usando while)\n", num);
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    // Usando DO-WHILE
    printf("\nTABUADA DO %d (usando do-while)\n", num);
    i = 1;
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);
return 0;
}