/* Faça um programa que lê um conjunto de 50 valores os coloca em 2 vetores conforme forem pares ou ímpares. 
Imprima o vetor com os elementos pares e em seguida aquele com os elementos ímpares. Cuide para imprimir somente 
os elementos válidos destes vetores. */

#include <stdio.h>

#define TAM_VETOR 50

int main() {

    int i, valor, posicaoAtualPar, posicaoAtualImpar;
    int vetorPar[TAM_VETOR];
    int vetorImpar[TAM_VETOR];

    posicaoAtualImpar = 0;
    posicaoAtualPar = 0;

    printf("\nSeparando numeros pares e impares:\n\n");

    for (i=0; i<TAM_VETOR; i++) {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 0) {
            if (valor % 2 == 0) {
                vetorPar[posicaoAtualPar] = valor;
                posicaoAtualPar++;
            }
            else {
                vetorImpar[posicaoAtualImpar] = valor;
                posicaoAtualImpar++;
            }
        }
    }

    printf("\nVetor par:");
    for (i=0; i<posicaoAtualPar; i++) {
        printf("  %d", vetorPar[i]);
    }

    printf("\n\nVetor impar:");
    for (i=0; i<posicaoAtualImpar; i++) {
        printf("  %d", vetorImpar[i]);
    }

    printf("\n");

    return 0;
}