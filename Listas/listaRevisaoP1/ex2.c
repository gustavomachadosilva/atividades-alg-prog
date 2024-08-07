/* Faça um programa completo para o seguinte algoritmo :

1. Preencher matriz 6 x 4 com os seguintes valores inteiros: 
    0 - sempre que o índice da linha for igual ao da coluna; 
    1 - sempre que o índice da linha for menor que o da coluna; 
    2 - nos demais casos.

2. Copie para um vetor de 20 posições, os elementos não zero desta matriz. */

#include <stdio.h>

#define MAX_LINHAS 6
#define MAX_COLUNAS 4
#define MAX_POSICOES 20

int main() {

    int i, j, posicaoVetor;
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int vetor[MAX_POSICOES];

    posicaoVetor = 0;

    for (i=0; i<MAX_LINHAS; i++) {

        for (j=0; j<MAX_COLUNAS; j++) {

            if (i == j) {
                matriz[i][j] = 0;
            }
            else if (i < j) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 2;
            }
            
            if (matriz[i][j] != 0) {
            vetor[posicaoVetor] = matriz[i][j];
            posicaoVetor++;
            }

        }

    }

    printf("\nVetor:");
    for (i=0; i<MAX_POSICOES; i++) {
        printf("  %d", vetor[i]);
    }

    return 0;
}