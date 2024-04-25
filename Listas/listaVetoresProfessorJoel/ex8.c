/* [Algoritmos Estruturados - Farrer] Fazer um programa que:
a) leia um conjunto de valores correspondentes a 80 notas dos alunos de uma turma (de 0 a 10);
b) calcule a freqüência absoluta e a freqüência relativa de cada nota;
c) imprima uma tabela contendo os valores das notas (de 0 a 10) e suas respectivas freqüências
absoluta e relativa. Observações:
- freqüência absoluta de uma nota é o número de vezes que ela aparece no conjunto de dados; 
- freqüência relativa é a freqüência absoluta dividida pelo número total de dados;
- utilizar como variável composta somente aquelas que forem necessárias. */

#include <stdio.h>

#define MAX_ALUNOS 10
#define MAX_NOTA 11

int main() {

    int i, nota;
    float frequenciaRelativa;
    int notas[MAX_NOTA] = {};

    printf("\nAnalisando notas dos alunos!\n");

    for (i=0; i<MAX_ALUNOS; i++) {
        printf("Informe a nota do %d° aluno (0 a 10): ", i+1);
        scanf("%d", &nota);

        notas[nota]++;
    }

    printf("\nFrequencias absolutas:\n");
    for (i=0; i<MAX_NOTA;i ++) {
        printf("Nota %d: %d\n", i+1, notas[i]);
    }

    printf("\nFrequencias relativas:\n");
    for (i=0; i<MAX_NOTA;i ++) {
        frequenciaRelativa = (float) notas[i]/MAX_ALUNOS;
        printf("Nota %d: %.2f\n", i+1, frequenciaRelativa);
    }

    return 0;
}