/* Leia uma matriz quadrada de ordem 10 e calcule a sua transposta. Imprima as duas matrizes. */

#include <stdio.h>

#define MAX_ORDEM 10

int main() {

    int i,j;
    int matriz[MAX_ORDEM][MAX_ORDEM];

    for (i=0; i<MAX_ORDEM; i++) {

        printf("\n");

        for (j=0; j<MAX_ORDEM; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }

    }

    printf("\n\nMatriz original:\n");
    for (i=0; i<MAX_ORDEM; i++) {

        printf("\n");

        for (j=0; j<MAX_ORDEM; j++) {
            printf("\t%d", matriz[i][j]);
        }

    }

    printf("\n\nMatriz transposta:\n");
    for (i=0; i<MAX_ORDEM; i++) {

        printf("\n");

        for (j=0; j<MAX_ORDEM; j++) {
            printf("\t%d", matriz[j][i]);
        }

    }

    printf("\n");
    
    return 0;
}