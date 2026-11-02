//  desenvolva um algoritmo que calcule a média dos alunos de uma turma. Primeiro, solicite ao usuário o número de alunos. 
//  Depois, utilize um loop “while”, ou “for” (à sua escolha), para passar por todos os alunos e pedir ao usuário 3 notas para cada aluno. 
//  Calcule a média dessas 3 notas e mostre na tela. 
//  Ao final, calcule a média total da turma (= soma das médias dos alunos / número de alunos).

#include <stdio.h>

int main()
{
    int alunos, i;
    float n1, n2, n3;
    float media;
    float somaMedias = 0;
    float mediaTurma;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    for(i = 1; i <= alunos; i++)
    {
        printf("\nAluno %d\n", i);
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("Media do aluno: %.2f\n", media);
        somaMedias = somaMedias + media;
    }
    mediaTurma = somaMedias / alunos;
    printf("\nMedia geral da turma: %.2f", mediaTurma);
    return 0;
}