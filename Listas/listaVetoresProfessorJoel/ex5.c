/* [Ciência dos Computadores - Tremblay-Bunt] Dado um vetor A de N números reais, obter a maior diferença entre 
dois elementos consecutivos deste vetor.
 */

#include <stdio.h>
#include <math.h>

#define TAM_VETOR 5

int main() {

    int i, diferenca, infinito, maiorDiferenca, primeiroElemento, segundoElemento;
    int vetorNumerosReais[TAM_VETOR] = {11, 37, 78, 90, 40};

    infinito = INFINITY;
    maiorDiferenca = -1 * infinito;

    printf("\nVetor:");
    for (i=0; i<TAM_VETOR; i++) {
        printf("  %d", vetorNumerosReais[i]);
    }

    for (i=0; i<(TAM_VETOR-1); i++) {
        
        diferenca = vetorNumerosReais[i] - vetorNumerosReais[i+1];

        if (diferenca < 0) {
            diferenca *= -1;
        }

        if (diferenca > maiorDiferenca) {
            maiorDiferenca = diferenca;
            primeiroElemento = i + 1;
            segundoElemento = i + 2;
        }
    }

    printf("\n\nA maior diferenca esta entre o %d° e o %d° elementos: %d\n", primeiroElemento, segundoElemento, maiorDiferenca);

    return 0;
}