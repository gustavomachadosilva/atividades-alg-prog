/* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o enderec ̧o de cada posic ̧a ̃o 
dessa matriz. */

#include <stdio.h>

#define MAX 3

int main() {

    int i, j;
    float array[MAX][MAX] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    float *ptrArray = &array[0][0];

    for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
            printf("(%d, %d) - %.1f - %ld\n", i+1, j+1, *ptrArray, (long) ptrArray);
            ptrArray++;
        }
    }

    return 0;
}