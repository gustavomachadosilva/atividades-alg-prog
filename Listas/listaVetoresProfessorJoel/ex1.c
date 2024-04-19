/* Seja um vetor inteiro de 9 elementos:
a) preencher por leitura o vetor (apenas valores positivos > 0);
b) imprimir os elementos do vetor em 1 linha, deixando 2 brancos separadores entre cada elemento; 
c) liberar a primeira posição do vetor deslocando todos os valores de uma posição (o último valor
será perdido nesse processo). Escrever o vetor;
d) somar o índice de cada elemento ao conteúdo do mesmo. Escrever o vetor; 
e) ler um valor e imprimir o número de ocorrências desse valor no vetor. */

#include <stdio.h>

#define NUM_ELEMENTOS 9

int main() {

    int i;
    int numeros[9];

    for (i=0; i<NUM_ELEMENTOS; i++) {
        printf("Informe o valor do %d° numero (> 0): ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nElementos do vetor:\n");

    for (i=0; i<NUM_ELEMENTOS; i++) {
        printf("  %d", numeros[i]);
    }

    printf("\n\nVetor deslocado:\n");

    for (i=NUM_ELEMENTOS-1; i>0; i--) {
        numeros[i] = numeros[i - 1];
    }

    numeros[0] = 0;

    for (i=0; i<NUM_ELEMENTOS; i++) {
        printf("  %d", numeros[i]);
    }

    printf("\n\nIndice somado ao vetor:\n");

    for (i=0; i<NUM_ELEMENTOS; i++) {
        numeros[i] += i;
        printf("  %d", numeros[i]);
    }

    return 0;
}