#include <stdio.h>

#define PI 3.14159

float areaTriangulo(float b, float h);
float areaCirculo(float r){
    float area;
    area = PI * r * r;
    return area;
}

int main(){

    float raio, base, altura;

//  area do triangulo
    printf("Digite o raio do circulo: ");

    scanf("%f", &raio);
    printf("Area do circulo = %.2f\n", areaCirculo(raio)); 

//  area do triangulo
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura); 

    printf("Area do triangulo = %.2f\n", areaTriangulo(base,altura));
    
    return 0;
}

    float areaTriangulo(float b, float h){
        float area;
        area = (b * h) / 2;
        return 0;
    }