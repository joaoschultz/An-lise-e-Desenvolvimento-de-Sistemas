// Programa para verificar se um número é par ou ímpar

#include <stdio.h>

int main() {
    // Declaração da variável
    int num;
    // Solicita ao usuário um número inteiro
    printf("Digite um numero: ");
    scanf("%d", &num);
    // Verifica se o número é par ou ímpar
    // O operador % (módulo) retorna o resto da divisão
    if (num % 2 == 0) {
        // Se o resto da divisão por 2 for 0, o número é par
        printf("Numero par\n");
    } else {
        // Caso contrário, é ímpar
        printf("Numero impar\n");
    }
    return 0; // Indica que o programa terminou corretamente
}