//  Desenvolva um algoritmo que peça a idade de 15 pessoas, ao final mostre a média de idade destas pessoas e quantas delas podem votar.
#include <stdio.h>

int main()
{
    int idade;
    int soma = 0;
    int votar = 0;
    int i;
    float media;

    for(i = 1; i <= 15; i++)
    {
        printf("Digite a idade da %d pessoa: ", i);
        scanf("%d", &idade);

        soma = soma + idade;

        if(idade >= 16)
        {
            votar++;
        }
    }

    media = soma / 15.0;

    printf("\nMedia das idades: %.2f\n", media);
    printf("Quantidade de pessoas que podem votar: %d\n", votar);
}