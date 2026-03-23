//  soma de dois número
#include <stdio.h>

int main()
{
    int a, b, soma;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b); // O sinal de &, é aonde eu quero armazenar no endereco de memoria onde esta a variavel

    soma = a + b;
    printf("A soma é: %d", soma);
    return 0;
}

//  Calculo de um preco de um produto com desconto
#include <stdio.h>

int main()
{
    float preco, desconto, preco_final;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite a porcentagem do desconto");
    scanf("%f", &desconto);

    preco_final = preco - (preco * (desconto / 100));
    printf("O preco final do produto é: %.2f \n", preco_final);
    return 0;
}

