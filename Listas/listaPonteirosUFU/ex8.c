/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o enderec ̧o de cada posic ̧a ̃o desse 
array. */

#include <stdio.h>

#define MAX 10

int main() {

    int i;
    float array[MAX] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    float *pArray = array; // array == &array[0]

    printf("\nValor - Endereco:\n");
    for (i=0; i<MAX; i++) {
        printf("%.3f - %ld\n", *pArray, (long) pArray);
        pArray++;
    }

    return 0;
}