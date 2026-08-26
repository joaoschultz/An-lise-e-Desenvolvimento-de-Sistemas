#include <stdio.h> 
void main (void) { // Simulação da leitura dos dados, considerando um vetor de tamanho 4: {10, 5, 71, 3} int tamanho = 4; int vetor[] = {10, 5, 71, 3};  
int maior = 0; 
int menor = 0; 
int vetor[] = {10, 5, 71, 3};
int tamanho = 4; 
// 1. Inicializa menor e maior com o primeiro elemento do vetor. 
menor = vetor[0]; 
maior = vetor[0];
 
// 2. Percorre o vetor a partir do segundo elemento (índice 1). 
for (int i = 1; i < tamanho; i++) { 
	if (vetor[i] > maior) { 
    	maior = vetor[i]; 
	} 
	if (vetor[i] < menor) { 
    	menor = vetor[i]; 
	} 
} 
 
// Saída esperada: Maior valor: 71, Menor valor: 3 
printf("O maior elemento do vetor é: %d\n", maior); 
printf("O menor elemento do vetor é: %d\n", menor); 
  
} 