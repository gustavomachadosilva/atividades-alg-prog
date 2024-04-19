/* Escreva um programa que lê um vetor V(20) e o escreve. Compacte, a seguir, este vetor, retirando dele todos 
os valores nulos ou negativos e escreva o vetor compactado. Compacte o vetor ainda mais, retirando agora os elementos em duplicata. 
Escreva o vetor final. */

#include <stdio.h>

#define TAM_VETOR 20
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, posicaoAtual, flagDuplicado;
    int vetorV[TAM_VETOR] = {1, 2, 2, 4, 5, 0, 7, 8, 9, -8, 11, 12, 13, -23, 15, 16, 16, 18, 15, 20};
    int vetorSemNulosENegativos[TAM_VETOR] = {};
    int vetorSemNulosENegativosEDuplicados[TAM_VETOR] = {};

    posicaoAtual = 0;

    printf("\nVetor:");
    for (i=0; i<TAM_VETOR; i++) {
        printf("  %d", vetorV[i]);
    }

    //REMOVENDO OS VALORES NULOS E NEGATIVOS
    for (i=0; i<TAM_VETOR; i++) {
        if (vetorV[i] > 0) {
            vetorSemNulosENegativos[posicaoAtual] = vetorV[i];
            posicaoAtual++;
        }
    }

    printf("\n\nVetor sem nulos e negativos:");
    for (i=0; i<TAM_VETOR; i++) {
        if (vetorSemNulosENegativos[i] != 0)
            printf("  %d", vetorSemNulosENegativos[i]);
    }

    //REMOVENDO OS VALORES DUPLICADOS
    posicaoAtual = 0;
    for (i=0; i<TAM_VETOR; i++) {
        flagDuplicado = FALSE;
        j = 0;

        while (j<posicaoAtual && flagDuplicado == FALSE) {
            if (vetorSemNulosENegativos[i] == vetorSemNulosENegativosEDuplicados[j]) {
                flagDuplicado = TRUE;
            }
            j++;
        }

        if (flagDuplicado == FALSE) {
            vetorSemNulosENegativosEDuplicados[posicaoAtual] = vetorSemNulosENegativos[i];
            posicaoAtual++;
        }
    }

    printf("\n\nVetor sem nulos, negativos e duplicados:");
    for (i=0; i<TAM_VETOR; i++) {
        if (vetorSemNulosENegativosEDuplicados[i] != 0)
            printf("  %d", vetorSemNulosENegativosEDuplicados[i]);
    }

    printf("\n");

    return 0;
}