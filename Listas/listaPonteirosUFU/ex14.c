/* Crie uma func ̧a ̃o que receba dois paraˆmetros: um array e um valor do mesmo tipo do array. A func ̧a ̃o devera ́ 
preencher os elementos de array com esse valor. Na ̃o utilize  ́ındices para percorrer o array, apenas aritme ́tica de 
ponteiros. */

#include <stdio.h>

#define MAX 4

void trocaValoresArray(int *ptrArray, int valor);

int main() {

    int i;
    int array[MAX];
    int valor;

    for (i=0; i<MAX; i++) {
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nInforme o valor a ser alterado: ");
    scanf("%d", &valor);

    trocaValoresArray(array, valor);

    printf("\nNovo array:\n");
    for (i=0; i<MAX; i++) {
        printf("  %d", array[i]);
    }

    printf("\n");

}

void trocaValoresArray(int *ptrArray, int valor) {

    int i;

    for (i=0; i<MAX; i++) {
        *(ptrArray + i) = valor;
    }

}