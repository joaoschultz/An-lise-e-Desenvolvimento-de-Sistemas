//  Construa um algoritmo que receba 2 números faça as 4 operações básicas da matemática com eles e mostre o resultado de cada operação.
#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
   
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
   
    printf("\nResultado das operacoes:\n");
    printf("Soma = %.2f\n", num1 + num2);
    printf("Subtracao = %.2f\n", num1 - num2);
    printf("Multiplicacao = %.2f\n", num1 * num2);
   
    if(num2 != 0) {
        printf("Divisao = %.2f\n", num1 / num2);
    } else {
        printf("Divisao = nao e possivel dividir por zero.\n");
    }
    return 0;
}