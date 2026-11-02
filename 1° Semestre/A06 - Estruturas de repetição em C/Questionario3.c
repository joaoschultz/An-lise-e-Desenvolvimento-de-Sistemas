//  Em uma eleição da CIPA na empresa “Carreta S.A” existem 2 candidatos. 
//  Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
//  - 1,2 = voto para os respectivos candidatos;
//  - 3 = voto nulo;
//  - 4 = voto em branco;
//  Elabore um algoritmo que leia o código do candidato e um voto. Calcule e escreva:
//  - total geral de votos
//  - total de votos para cada um dos candidatos;
//  - total de votos nulos;
//  - total de votos em branco;
//  - candidato vencedor;
//  O algoritmo deve perguntar se o usuário quer continuar digitando votos
#include <stdio.h>

int main()
{
    int voto;
    int candidato1 = 0, candidato2 = 0;
    int nulo = 0, branco = 0;
    int total = 0;
    char continuar;

    do
    {
        printf("Digite seu voto:\n");
        printf("1 - Candidato 1\n");
        printf("2 - Candidato 2\n");
        printf("3 - Nulo\n");
        printf("4 - Branco\n");
        scanf("%d", &voto);

        switch(voto)
        {
            case 1:
                candidato1++;
                total++;
                break;

            case 2:
                candidato2++;
                total++;
                break;

            case 3:
                nulo++;
                total++;
                break;

            case 4:
                branco++;
                total++;
                break;

            default:
                printf("Voto invalido!\n");
        }

        printf("Deseja continuar votando? (s/n): ");
        scanf(" %c", &continuar);

    } while(continuar == 's' || continuar == 'S');

    printf("\nRESULTADO FINAL\n");
    printf("Total geral de votos: %d\n", total);
    printf("Total de votos Candidato 1: %d\n", candidato1);
    printf("Total de votos Candidato 2: %d\n", candidato2);
    printf("Total de votos nulos: %d\n", nulo);
    printf("Total de votos em branco: %d\n", branco);

    if(candidato1 > candidato2)
        printf("Candidato vencedor: Candidato 1\n");
    else if(candidato2 > candidato1)
        printf("Candidato vencedor: Candidato 2\n");

    return 0;
}