#include <stdio.h>

int main() {
    int matriz[4][3];
    int subtrair;
    int i, j;

    printf("Digite os 12 valores da matriz 4x3:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o numero para subtrair: ");
    scanf("%d", &subtrair);

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            matriz[i][j] = matriz[i][j] - subtrair;
        }
    }

    printf("\nMatriz resultante:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}