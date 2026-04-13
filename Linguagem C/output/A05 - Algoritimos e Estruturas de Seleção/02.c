// Programa para realizar operações básicas de cálculo (+, -, *, /)
// Com dois números fornecidos pelo usuário

#include <stdio.h>

int main() {

    // Declaração das variáveis
    float num1, num2, resultado;
    char operador;
    // Solicita o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    // Solicita o operador matemático
    // O espaço antes do %c evita problemas com ENTER pendente no buffer
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operador);
    // Solicita o segundo número
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    // Estrutura de decisão para verificar qual operação será realizada
    switch (operador) {
        case '+':
            // Soma
            resultado = num1 + num2;
            break;
        case '-':
            // Subtração
            resultado = num1 - num2;
            break;
        case '*':
            // Multiplicação
            resultado = num1 * num2;
            break;
        case '/':
            // Divisão (com verificação de divisão por zero)
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("ERRO: Nao e possivel dividir por zero\n");
                return 1; // Encerra o programa com erro
            }
            break;
        default:
            // Caso o operador seja inválido
            printf("Operador invalido\n");
            return 1;
    }
    // Exibe o resultado com duas casas decimais
    printf("\nO resultado e: %.2f\n", resultado);
    return 0; // Indica que o programa terminou corretamente
}