/* Fac ̧a um programa que leia dois valores inteiros e chame uma func ̧a ̃o que receba estes 2 valores de entrada 
e retorne o maior valor na primeira varia ́vel e o menor valor na segunda varia ́vel. Escreva o conteu ́do das 2 varia ́veis
na tela. */

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

    printf("\nA (maior valor): %d", a);
    printf("\nB (menor valor): %d\n", b);

    return 0;
}

void trocaValores(int *x, int *y) {

    if (*x >= *y) {
        return;
    }
    else {
        int aux;

        aux = *x;
        *x = *y;
        *y = aux;
    }
    

}