/* Crie um programa que contenha uma func ̧a ̃o que permita passar por paraˆmetro dois nu ́meros inteiros A e B. 
A func ̧a ̃o devera ́ calcular a soma entre estes dois nu ́meros e armazenaroresultadonavaria ́velA.Estafunc ̧a ̃ona ̃odevera ́possuir
retorno,masdevera ́ modificar o valor do primeiro para ̃metro. Imprima os valores de A e B na func ̧a ̃o principal. */

#include <stdio.h>

void somaValores(int *x, int y);

int main() {

    int a;
    int b;

    printf("\nInforme o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    somaValores(&a, b);

    printf("\nValores:\n");
    printf("A (soma dos valores): %d\n", a);
    printf("B: %d\n", b);

    return 0;
}

void somaValores(int *x, int y) {

    *x += y;

}