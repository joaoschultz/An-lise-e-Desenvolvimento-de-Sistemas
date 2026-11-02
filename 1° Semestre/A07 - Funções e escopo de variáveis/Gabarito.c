#include <stdio.h> 
#include <math.h> 
 // função para cada operação 
// Soma 
float soma(float a, float b) { 
	return a + b; 
} 
// Subtração 
float subtracao(float a, float b) { 
	return a - b; 
}  
// Multiplicação 
float multiplicacao(float a, float b) { 
	return a * b; 
}  
// Divisão 
float divisao(float a, float b) { 
	if (b == 0) { 
    	printf("Erro: divisao por zero!\n"); 
    	return 0; 
	} 
	return a / b; 
} 
// Potência 
float potencia(float base, float exp) { 
	return pow(base, exp); 
} 
// Raiz quadrada 
float raiz(float x) { 
	if (x < 0) { 
    	printf("Erro: nao existe raiz real de numero negativo!\n"); 
    	return 0; 
	} 
	return sqrt(x); 
} 
// =============================== 
  
int main() { 
	int opcao; 
	float n1, n2, resultado; 
	do { 
    	printf("\n===== CALCULADORA=====\n"); 
    	printf("1 - Soma\n"); 
    	printf("2 - Subtracao\n"); 
    	printf("3 - Multiplicacao\n"); 
    	printf("4 - Divisao\n"); 
    	printf("5 - Potencia\n"); 
    	printf("6 - Raiz quadrada\n"); 
    	printf("0 - Sair\n"); 
    	printf("Escolha uma opcao: "); 
    	scanf("%d", &opcao); 
  
    	switch (opcao) { 
        	case 1: 
            	printf("Digite dois valores: "); 
            	scanf("%f %f", &n1, &n2); 
            	resultado = soma(n1, n2); 
            	printf("Resultado: %.2f\n", resultado); 
            	break; 
        	case 2: 
            	printf("Digite dois valores: "); 
            	scanf("%f %f", &n1, &n2); 
            	resultado = subtracao(n1, n2); 
            	printf("Resultado: %.2f\n", resultado); 
            	break; 
        	case 3: 
            	printf("Digite dois valores: "); 
            	scanf("%f %f", &n1, &n2); 
            	resultado = multiplicacao(n1, n2); 
            	printf("Resultado: %.2f\n", resultado); 
            	break; 
        	case 4: 
            	printf("Digite dois valores: "); 
            	scanf("%f %f", &n1, &n2); 
            	resultado = divisao(n1, n2); 
            	if (n2 != 0) 
                	printf("Resultado: %.2f\n", resultado); 
            	break; 
        	case 5: 
            	printf("Digite a base e o expoente: "); 
            	scanf("%f %f", &n1, &n2); 
            	resultado = potencia(n1, n2); 
            	printf("Resultado: %.2f\n", resultado); 
            	break; 
        	case 6: 
            	printf("Digite um valor: "); 
            	scanf("%f", &n1); 
            	resultado = raiz(n1); 
            	if (n1 >= 0) 
                	printf("Resultado: %.2f\n", resultado); 
            	break; 
        	case 7: 
            	printf("Encerrando a calculadora...\n"); 
            	break; 
        	default: 
            	printf("Opcao invalida!\n"); 
    	} 
	} while (opcao != 0); 
	return 0; 
} 