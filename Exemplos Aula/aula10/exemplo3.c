/* Faça um programa que crie um vetor com cinco números inteiros preenchidos pelo programador da declaração. 
Em seguida, altere todos os números dos índices pares (incluindo o zero) para que seu valor seja multiplicado por dois. */

#include <stdio.h>

#define TAMANHO_VETOR 5

int main() {

    int i;
    int numeros[TAMANHO_VETOR] = {8, 31, 14, 12, 6};

    for (i=0; i<TAMANHO_VETOR; i++) {
        if (i % 2 == 0) {
            numeros[i] *= 2;
        }
        printf("%d\n", numeros[i]);
    }

    return 0;
}