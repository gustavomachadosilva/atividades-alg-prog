/* Fac ̧a um programa que leia treˆs valores inteiros e chame uma func ̧a ̃o que receba estes 3 valores de entrada e 
retorne eles ordenados, ou seja, o menor valor na primeira varia ́vel, o segundo menor valor na varia ́vel do meio, e o 
maior valor na u ́ltima varia ́vel. A func ̧a ̃o deve retornar o valor 1 se os treˆs valores forem iguais e 0 se existirem 
valores diferentes. Exibir os valores ordenados na tela. */

#include <stdio.h>

void trocaValorDeTresNumeros(int *num1, int *num2, int *num3);

int main() {

    int num1, num2, num3;

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    trocaValorDeTresNumeros(&num1, &num2, &num3);

    printf("\nMaior valor: %d\n", num1);
    printf("Valor medio: %d\n", num2);
    printf("Menor valor: %d\n", num3);

    return 0;
}

void trocaValorDeTresNumeros(int *num1, int *num2, int *num3) {

    int aux;

    while (*num1 < *num2 || *num2 < *num3) {

        if (*num1 < *num2) {
            aux = *num1;
            *num1 = *num2;
            *num2 = aux;
        }

        if (*num2 < *num3) {
            aux = *num2;
            *num2 = *num3;
            *num3 = aux;
        }

    }

}