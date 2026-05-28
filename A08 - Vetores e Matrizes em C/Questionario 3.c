#include <stdio.h>
#include <string.h>

int main() {
    char palavras[7][50];
    int i;

    // Entrada das palavras
    printf("Digite 7 palavras:\n");

    for(i = 0; i < 7; i++) {
        printf("Palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
    }

    // Exibição em ordem inversa
    printf("\nPalavras em ordem inversa:\n");

    for(i = 6; i >= 0; i--) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}