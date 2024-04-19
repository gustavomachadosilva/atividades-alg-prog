/* Faça um programa para ler uma sequência de 5 inteiros, apresentando ao final o maior e o menor valor lidos. */

#include <stdio.h>
#include <math.h>

#define SEQUENCIA 5

int main() {

    int val, menor, maior, i;

    menor = (int) INFINITY;
    maior = -1 * menor;

    for (i=0; i<SEQUENCIA; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &val);

        if (val > maior) {
            maior = val;
        }

        if (val < menor) {
            menor = val;
        }
    }

    printf("\nMenor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);

    return 0;
}