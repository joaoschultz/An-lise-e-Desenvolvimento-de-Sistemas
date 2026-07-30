#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma = 0;

    printf("Digite os 9 valores da matriz 3x3:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        soma = soma + matriz[i][i];
    }

    printf("\nA soma da diagonal principal e: %d\n", soma);

    return 0;
}