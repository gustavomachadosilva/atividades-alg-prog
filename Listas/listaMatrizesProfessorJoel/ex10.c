/* Faça um programa que lê 3 vetores de 4 posições: v1,v2,v3. O programa deve criar uma matriz 3X4, de tal modo que 
os elementos da linha 1 da matriz sejam os elementos do vetor v1, os elementos da linha 2 sejam os elementos do vetor 
v2 e os elementos da linha 3 da matriz sejam os elementos do vetor 3. Imprima a matriz resultante. */

#include <stdio.h>

#define NUM_VETORES 3
#define MAX_POSICOES 4

int main() {

    int i, j;
    int v1[MAX_POSICOES];
    int v2[MAX_POSICOES];
    int v3[MAX_POSICOES];
    int matriz[NUM_VETORES][MAX_POSICOES];

    for (i=0; i<MAX_POSICOES; i++) {

        printf("\n");

        printf("Informe o elemento %d do primeiro vetor: ", i+1);
        scanf("%d", &v1[i]);

        printf("Informe o elemento %d do segundo vetor: ", i+1);
        scanf("%d", &v2[i]);

        printf("Informe o elemento %d do terceiro vetor: ", i+1);
        scanf("%d", &v3[i]);

        matriz[0][i] = v1[i];
        matriz[1][i] = v2[i];
        matriz[2][i] = v3[i];
    }

    printf("\nMatriz resultante:\n");
    for (i=0; i<NUM_VETORES; i++) {

        printf("\n");

        for (j=0; j<MAX_POSICOES; j++) {
            printf("\t%d", matriz[i][j]);
        }

    }

    printf("\n");

    return 0;
}