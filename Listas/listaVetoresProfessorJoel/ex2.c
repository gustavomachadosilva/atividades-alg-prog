/* Fazer um programa que leia dois vetores unidimensionais A e B, de dimensão 8, e realize a troca dos elementos destes vetores; 
ou seja, após a execução do programa o vetor B deverá conter os valores fornecidos para o vetor A, e vice-versa. */

#include <stdio.h>

#define DIMENSAO_VETOR 8

int main() {

    int i;
    int vetorA[DIMENSAO_VETOR];
    int vetorB[DIMENSAO_VETOR];
    int vetorAuxiliar[DIMENSAO_VETOR];

    printf("\nPreenchendo o vetor A:\n");

    for (i=0; i<DIMENSAO_VETOR; i++) {
        printf("Informe o valor do %d° elemento: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

     printf("\nPreenchendo o vetor B:\n");

    for (i=0; i<DIMENSAO_VETOR; i++) {
        printf("Informe o valor do %d° elemento: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (i=0; i<DIMENSAO_VETOR; i++) {
        vetorAuxiliar[i] = vetorA[i];
    }

    for (i=0; i<DIMENSAO_VETOR; i++) {
        vetorA[i] = vetorB[i];
    }

    for (i=0; i<DIMENSAO_VETOR; i++) {
        vetorB[i] = vetorAuxiliar[i];
    }

    printf("\nNovo vetor A:\n");

    for (i=0; i<DIMENSAO_VETOR; i++) {
        printf("  %d", vetorA[i]);
    }

    printf("\n\nNovo vetor B:\n");

    for (i=0; i<DIMENSAO_VETOR; i++) {
        printf("  %d", vetorB[i]);
    }

    printf("\n");

    return 0;
}