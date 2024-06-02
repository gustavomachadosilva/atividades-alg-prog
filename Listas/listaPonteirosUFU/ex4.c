/* Fac ̧a um programa que leia 2 valores inteiros e chame uma func ̧a ̃o que receba estas 2 varia ́veis e troque o seu 
conteu ́do, ou seja, esta func ̧a ̃o e ́ chamada passando duas varia ́veis A e B por exemplo e, apo ́s a execuc ̧a ̃o da func ̧a ̃o, 
A contera ́ o valor de B e B tera ́ o valor de A. */

#include <stdio.h>

void trocaValores(int *x, int *y);

int main() {

    int a;
    int b;

    printf("\nInforme o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    trocaValores(&a, &b);

    printf("\nValores trocados:");
    printf("\nA: %d", a);
    printf("\nB: %d\n", b);

    return 0;
}

void trocaValores(int *x, int *y) {

    int aux;

    aux = *x;
    *x = *y;
    *y = aux;

}