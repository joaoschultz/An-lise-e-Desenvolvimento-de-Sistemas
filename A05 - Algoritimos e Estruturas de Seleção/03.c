// Programa para calcular o novo salário com base no salário atual
// Regras de aumento:
// - Até R$1500,00 → aumento de 15%
// - De R$1500,01 até R$3000,00 → aumento de 10%
// - Acima de R$3000,00 → aumento de 5%

#include <stdio.h>

int main() {
    // Declaração das variáveis
    float salario, novoSalario;
    // Solicita ao usuário o salário atual
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    // Verifica em qual faixa salarial o valor se encaixa
    if (salario <= 1500) {
        // Aplica aumento de 15%
        novoSalario = salario * 1.15;
    } else if (salario <= 3000) {
        // Aplica aumento de 10%
        novoSalario = salario * 1.10;
    } else {
        // Aplica aumento de 5%
        novoSalario = salario * 1.05;
    }
    // Exibe o novo salário com duas casas decimais
    printf("Novo salario: R$ %.2f\n", novoSalario);
    return 0; // Indica que o programa terminou corretamente
}