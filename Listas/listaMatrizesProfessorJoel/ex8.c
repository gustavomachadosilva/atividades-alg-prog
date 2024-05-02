/* Criar um algoritmo que leia os elementos de uma matriz 5 x 5 de números inteiros e escreva somente os 
elementos acima da diagonal principal, incluindo os elementos da diagonal principal.
 */

#include <stdio.h>

#define MAX_LINHAS 5
#define MAX_COLUNAS 5

int main() {

    int i, j, k, z;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }

    }

    printf("\nElementos acima da diagonal principal:\n");

    k=0;
    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (z=0; z<k; z++) {
            printf("\t");
        }

        for (j=0+k; j<MAX_COLUNAS; j++) {
            printf("\t%d", matriz[i][j]);
        }

        k++;
    }

    printf("\n");

    return 0;
}