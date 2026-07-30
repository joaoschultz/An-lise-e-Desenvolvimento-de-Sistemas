//  Usando linguagem C, desenvolva um algoritmo usando “while” que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles
#include <stdio.h>
int main() {
    int num1, num2, i;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        i = num1 + 1;

        while (i < num2) {
            printf("%d\n", i);
            i++;
        }
    } else {
        i = num2 + 1;

        while (i < num1) {
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}