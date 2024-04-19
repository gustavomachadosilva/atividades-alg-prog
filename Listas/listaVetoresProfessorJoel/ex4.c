/* Faça um programa que lê os conteúdos de dois vetores X(10) e Y(10) e os escreve. Crie, a seguir, 
um vetor U que seja a união de X com Y, e um vetor I que seja a sua intersecção. Escreva os conteúdos destes dois vetores. */

#include <stdio.h>

#define TAM_VETOR 10
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, k, posicaoAtual;
    int flagX;
    int flagY;
    int flagInterseccao, flagDuplicado;
    int vetorX[10] = {12, 23, 14, 67, 5, 74, 29, 8, 9, 58};
    int vetorY[10] = {15, 22, 97, 14, 58, 6, 73, 72, 29, 10};
    int vetorU[TAM_VETOR * 2] = {};
    int vetorI[TAM_VETOR] = {};

    posicaoAtual = 0;

    printf("\nImprimindo os vetores:\n");

    printf("Vetor X:");
    for (i=0; i<TAM_VETOR; i++) {
        printf("  %d", vetorX[i]);
    }

    printf("\nVetor Y:");
    for (i=0; i<TAM_VETOR; i++) {
        printf("  %d", vetorY[i]);
    }

    //DIMENSIONANDO O VETOR U
    for (i=0; i<TAM_VETOR; i++) {
        flagX = FALSE;
        flagY = FALSE;

        for (j=0; j<(TAM_VETOR * 2); j++) {
            if (vetorX[i] == vetorU[j]) {
                flagX = TRUE;
            }
        }

        if (flagX == FALSE) {
            vetorU[posicaoAtual] = vetorX[i];
            posicaoAtual++;
        }

        for (j=0; j<(TAM_VETOR * 2); j++) {
            if (vetorY[i] == vetorU[j]) {
                flagY = TRUE;
            }
        }

        if (flagY == FALSE) {
            vetorU[posicaoAtual] = vetorY[i];
            posicaoAtual++;
        }

    }

    printf("\n\nVetor Uniao:\n");
    for (i=0; i<(TAM_VETOR * 2); i++) {

        if (vetorU[i] != 0)
            printf("  %d", vetorU[i]);
            
    }

    //DIMENSIONANDO VETOR INTERSECCAO
    posicaoAtual = 0;
    for (i=0; i<TAM_VETOR; i++) {
        flagInterseccao = FALSE;
        flagDuplicado = FALSE;

        for (j=0; j<TAM_VETOR; j++) {
            if (vetorX[i] == vetorY[j]) {
                flagInterseccao = TRUE;
            }
        }

        if (flagInterseccao == TRUE) {
            for (k=0; k<TAM_VETOR; k++) {
                if (vetorX[i] == vetorI[k]) {
                    flagDuplicado = TRUE;
                }
            }
        }

        if (flagDuplicado == FALSE && flagInterseccao == TRUE) {
            vetorI[posicaoAtual] = vetorX[i];
            posicaoAtual++;
        }
    }

    printf("\n\nVetor Interseccao:\n");
    for (i=0; i<TAM_VETOR; i++) {

        if (vetorI[i] != 0)
            printf("  %d", vetorI[i]);

    }

    printf("\n");


    return 0;
}