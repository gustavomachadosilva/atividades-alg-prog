#include <stdio.h>
#include <math.h>

#define MAX_ALUNOS 20

int main() {

    int quantidadeAlunos, i;
    float maiorNotaFinal, notaProva1, notaProva2, notaTrabalho;
    float somaNotas, media, somatorio, desvioPadrao;
    float notaFinal[MAX_ALUNOS];

    maiorNotaFinal = 0;
    somaNotas = 0;
    somatorio = 0;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantidadeAlunos);

    for (i=0; i<quantidadeAlunos; i++) {
        printf("\nDigite a nota da prova 1 do aluno %d: ", i+ 1);
        scanf("%f", &notaProva1);
        printf("Digite a nota da prova 2 do aluno %d: ", i+ 1);
        scanf("%f", &notaProva2);
        printf("Digite a nota do trabalho do aluno %d: ", i+ 1);
        scanf("%f", &notaTrabalho);

        notaFinal[i] = (0.4 * notaProva1) + (0.4 * notaProva2) + (0.2 * notaTrabalho);

        somaNotas += notaFinal[i];

        if (notaFinal[i] > maiorNotaFinal) {
            maiorNotaFinal = notaFinal[i];
        }
    }

    media = somaNotas / quantidadeAlunos;

    //CALCULANDO DESVIO PADRAO
    for (i=0; i<quantidadeAlunos; i++) {
        somatorio += pow((notaFinal[i] - media), 2);
    }

    desvioPadrao = sqrt(somatorio/quantidadeAlunos);

    //PRINTANDO RESULTADOS
    printf("\nA maior nota final da turma foi: %.1f\n", maiorNotaFinal);
    printf("A media das notas finais da turma foi: %.1f\n", media);
    printf("O desvio padrao das notas finais da turma foi: %.2f", desvioPadrao);


    return 0;
}
