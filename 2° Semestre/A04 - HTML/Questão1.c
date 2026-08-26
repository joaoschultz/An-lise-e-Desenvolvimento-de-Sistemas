#include <stdio.h> 
void inverte(int *n1, int *n2) {
 int aux; // 1. Salva o valor da primeira variável 
aux = *n1; 
// 2. O valor da segunda variável vai para a primeira 
*n1 = *n2; 
// 3. O valor original da primeira (salvo em aux) vai para a segunda 
*n2 = aux; } 
void main(void) {
 int num1 = 10, num2 = 20; 
// Chamada da função passando os endereços 
inverte(&num1, &num2); 
 
// Saída esperada: num1: 20, num2: 10 

printf("num1: %d, num2: %d\n", num1, num2);  
}

