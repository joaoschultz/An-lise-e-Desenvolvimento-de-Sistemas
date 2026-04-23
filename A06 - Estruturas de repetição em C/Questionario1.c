//  Usando linguagem C, desenvolva um algoritmo usando “while” que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles

#include <stdio.h>
int main(){
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Usando WHILE
    printf("\nTABUADA DO %d (usando while)\n", num);
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}