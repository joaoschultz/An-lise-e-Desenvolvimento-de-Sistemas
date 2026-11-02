//  Desenvolva um algoritmo que leia 3 valores inteiros e exiba-os em ordem decrescente

#include <stdio.h>

int main()
{
    int a, b, c, temp;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Ordem decrescente: %d %d %d\n", a, b, c);
    return 0;
}