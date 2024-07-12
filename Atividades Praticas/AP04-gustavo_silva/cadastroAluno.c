#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {


    int contador, frequencia, alunos, alunosConceitoA, alunosNotaDez;
    int flagCadastro = TRUE;
    float notaFinal, notasTurma, mediaFinal;
    char decisao;

    contador = 0;
    alunos = 0;
    notasTurma = 0;
    alunosConceitoA = 0;
    alunosNotaDez = 0;

    while (flagCadastro == TRUE) {

        contador++;

        do {
            printf("Digite a nota final e frequencia do aluno %d: ", contador);
            scanf("%f %d", &notaFinal, &frequencia);

        } while (notaFinal < 0 || notaFinal > 10 || frequencia < 0 || frequencia > 100);

        alunos++;
        notasTurma += notaFinal;

        if (notaFinal >= 9 && notaFinal <=10 && frequencia >= 75) {
            alunosConceitoA++;
        }

        if (notaFinal == 10) {
            alunosNotaDez++;
        }

        printf("Voce quer digitar a nota final e frequencia de outro aluno? ");
        scanf(" %c", &decisao);

        switch (decisao) {
            case 'S':
            case 's':
                break;
            case 'N':
            case 'n':
                flagCadastro = FALSE;
                break;
            default:
                printf("Comando nao reconhecido!\n");
                flagCadastro = FALSE;
        }
    }

    mediaFinal = notasTurma / alunos;

    printf("\nA media das notas finais da turma foi: %.2f\n", mediaFinal);
    printf("O nomero de alunos com conceito 'A' foi: %d\n", alunosConceitoA);

    if (alunosNotaDez > 0) {
        printf("Ao menos um aluno teve nota 10!\n");
    } else {
        printf("Nenhum aluno obteve nota 10!\n");
    }

    return 0;
}
