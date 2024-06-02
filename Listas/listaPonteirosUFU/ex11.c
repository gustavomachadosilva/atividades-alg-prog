/* Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o 
enderec ̧o das posic ̧o ̃es contendo valores pares. */

#include <stdio.h>

#define MAX 5

int main() {

    int i;
    int array[MAX];
    int *ptrArray = array;

    for (i=0; i<MAX; i++) {
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &array[i]);
    }

    for (i=0; i<MAX; i++) {
        if ((long) ptrArray % 2 == 0) {
            printf("%d - %ld\n", *ptrArray, (long) ptrArray);
        }
        ptrArray++;
    }

    return 0;
}