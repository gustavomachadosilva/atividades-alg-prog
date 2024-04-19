/* Ler do teclado o número de alunos de uma turma (assumir <= 60 e validar), ler a nota e o código de cada aluno, 
e informar os códigos e as notas dos alunos com nota menor do que a média. */

#include <stdio.h>

#define MAX_ALUNOS 60

int main() {

    int numAlunos, i;
    float media, somaNotas;
    int codigos[MAX_ALUNOS];
    float notas[MAX_ALUNOS];

    somaNotas = 0;

    do {

        printf("Informe o numero de alunos (max 60): ");
        scanf("%d", &numAlunos);

    } while (numAlunos < 1 || numAlunos > 60);

    for (i=0; i<numAlunos; i++) {
        printf("\nInforme o codigo do %d° aluno: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Informe a nota do %d° aluno: ", i + 1);
        scanf("%f", &notas[i]);

        somaNotas += notas[i];
    }

    printf("\nAlunos que ficaram abaixo da media:\n\n");

    media = (float) somaNotas / numAlunos;

    for (i=0; i<numAlunos; i++) {
        if (notas[i] < media) {
            printf("Aluno: %d - nota: %.1f\n", codigos[i], notas[i]);
        }
    }

    return 0;
}