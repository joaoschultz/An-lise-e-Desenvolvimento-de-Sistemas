//  Construa um algoritmo que solicite nome e o valor de um produto e dê um desconto de acordo com a faixa de preço do produto
//  Até R$ 500,00 – 8%
//  Entre 500 e 800 – 9%
//  Acima de R$ 800,00 – 12%
// Ao final, mostre o nome do produto, valor final e valor inicial do produto com o desconto aplicado.

#include <stdio.h>

int main() {
    float valor, valorProduto;
    char nome[50];

    // Entrada de dados
    printf("Digite o nome do produto: ");
    scanf("%s", nome);

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    // Cálculo do desconto
    if (valor <= 500) {
        valorProduto = valor - (valor * 0.08);
    } else {
        valorProduto = valor;
    }

    // Saída
    printf("Produto: %s\n", nome);
    printf("Valor final: %.2f\n", valorProduto);

    return 0;
}