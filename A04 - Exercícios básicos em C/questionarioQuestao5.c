//  Elabore um algoritmo que peça o salário bruto mensal de um funcionário, calcule e apresente os valores conforme modelo abaixo:
//  Salário Bruto: R$
//  (-) IR (15%) : R$
//  (-) INSS (11%) : R$
//  (-) Sindicato ( 3%) : R$
//  Salário Líquido: R$

#include <stdio.h>

int main() {
    float salarioBruto;
    float descontoIR;
    float descontoINSS;
    float descontoSindicato;
    float salarioLiquido;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salarioBruto);

    descontoIR = salarioBruto * 0.15;
    descontoINSS = salarioBruto * 0.11;
    descontoSindicato = salarioBruto * 0.03;

    salarioLiquido = salarioBruto - descontoIR - descontoINSS - descontoSindicato;

    printf("\nSalario Bruto: R$ %.2f\n", salarioBruto);
    printf("(-) IR (15%%): R$ %.2f\n", descontoIR);
    printf("(-) INSS (11%%): R$ %.2f\n", descontoINSS);
    printf("(-) Sindicato (3%%): R$ %.2f\n", descontoSindicato);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);
    return 0;
}