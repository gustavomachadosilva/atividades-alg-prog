/* Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritme ́tica de ponteiros, 
leia esse array do teclado e imprima o dobro de cada valor lido. */

#include <stdio.h>

#define MAX 5

int main() {

    int i;
    int array[MAX] = {1, 2, 3, 4, 5};
    int *ptrArray = array;

    for (i=0; i<MAX; i++) {
        printf("2*%d = %d\n", *ptrArray, *ptrArray *= 2);
        ptrArray++;
    }

    return 0;
}