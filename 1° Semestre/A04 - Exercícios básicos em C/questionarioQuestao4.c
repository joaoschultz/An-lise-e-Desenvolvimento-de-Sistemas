//  Questão 4
//  Construa um algoritmo que peça as 4 notas bimestrais e mostre a média
//  Primeira tentativa
#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float media;
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
   
    printf("Digite a segunda: ");
    scanf("%f", &num2);
   
    printf("Digite a terceira: ");
    scanf("%f", &num3);

    printf("Digite a quarta: ");
    scanf("%f", &num4);

    media = ("%.4f", num1 + num2 + num3 + num4 / 4);

    printf("\nMédia das 4 notas bimestrais:\n");
    //printf(media);
}

// Correção 
int main() {
    float num1, num2, num3, num4;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);

    printf("Digite a segunda nota: ");
    scanf("%f", &num2);

    printf("Digite a terceira nota: ");
    scanf("%f", &num3);

    printf("Digite a quarta nota: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("\nMedia das 4 notas bimestrais: %.2f\n", media);

    return 0;
}