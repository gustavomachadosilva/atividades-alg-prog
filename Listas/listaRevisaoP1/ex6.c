/*  Fazer um programa que leia dois vetores unidimensionais A e B, de dimensão 8, e realize a troca dos elementos 
destes vetores; ou seja, após a execução do programa o vetor B deverá conter os valores fornecidos para o vetor A, 
e vice-versa. */

#include <stdio.h>

#define MAX_ELEMENTOS 8

int main() {
    
    int i;
    int vetorA[MAX_ELEMENTOS];
    int vetorB[MAX_ELEMENTOS];
    int vetorAuxiliar[MAX_ELEMENTOS];

    printf("\nInforme os elementos do vetor A:\n");
    for (i=0; i<MAX_ELEMENTOS; i++) {
        printf("Posicao %d: ", i+1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nInforme os elementos do vetor B:\n");
    for (i=0; i<MAX_ELEMENTOS; i++) {
        printf("Posicao %d: ", i+1);
        scanf("%d", &vetorB[i]);
    }

    for (i=0; i<MAX_ELEMENTOS; i++) {
        vetorAuxiliar[i] = vetorA[i];
        vetorA[i] = vetorB[i];
        vetorB[i] = vetorAuxiliar[i];
    }

    printf("\nVetores trocados:\n\n");

    printf("Vetor A:");
    for (i=0; i<MAX_ELEMENTOS; i++) {
        printf("  %d", vetorA[i]);
    }

    printf("\nVetor B:");
    for (i=0; i<MAX_ELEMENTOS; i++) {
        printf("  %d", vetorB[i]);
    }

    printf("\n");

    return 0;
}