#include <stdio.h> 
int main() { 
	char palavras[7][15]; // vetor de 7 palavras, cada palavra pode ter até 14 caracteres
	printf("Digite 7 palavras:\n"); 
	for (int i = 0; i < 7; i++) { 
    	scanf("%s", palavras[i]); // lê uma palavra (sem espaços) 
	} 
 
	printf("\nPalavras na ordem inversa:\n"); 
	for (int i = 6; i >= 0; i--) { 
    	printf("%s\n", palavras[i]); 
	}  
	return 0; 
}