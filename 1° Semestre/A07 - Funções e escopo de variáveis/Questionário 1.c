#include <stdio.h>
   
float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

float potencia(float base, float expoente){
    return pow(base, expoente);
}

float raizQuadrada(float num){
    return sqrt(num);
}

int main(){

    int opcao;
    float num1, num2, resultado;

    do{

        printf("\nCALCULADORA\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potencia\n");
        printf("6. Raiz quadrada\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:

                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = soma(num1, num2);
                printf("Resultado = %.2f\n", resultado);
                break;

            case 2:

                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = subtracao(num1, num2);
                printf("Resultado = %.2f\n", resultado);
                break;

            case 3:

                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = multiplicacao(num1, num2);
                printf("Resultado = %.2f\n", resultado);
                break;

            case 4:

                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);

                if(num2 != 0){
                    resultado = divisao(num1, num2);
                    printf("Resultado = %.2f\n", resultado);

                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            case 5:

                printf("Digite a base: ");
                scanf("%f", &num1);
                printf("Digite o expoente: ");
                scanf("%f", &num2);
                resultado = potencia(num1, num2);
                printf("Resultado = %.2f\n", resultado);
                break;

            case 6:

                printf("Digite um numero: ");
                scanf("%f", &num1);
                if(num1 >= 0){
                    resultado = raizQuadrada(num1);
                    printf("Resultado = %.2f\n", resultado);

                } else {
                    printf("Erro: numero negativo!\n");

                }
                break;

            case 7:
                printf("Encerrado\n");
                break;
                default:
                printf("Opcao invalida\n");
        }

    } while(opcao != 7);
    return 0;
}