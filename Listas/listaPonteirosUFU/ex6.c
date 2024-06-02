/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac ̧a uma func ̧a ̃o queretorneasomadodobrodos
doisnu ́meroslidos.Afunc ̧a ̃odevera ́armazenarodobro de A na pro ́pria varia ́vel A e o dobro de B na pro ́pria varia ́vel B.
 */

#include <stdio.h>

void dobraValores(int *x, int *y);

int main() {

    int a;
    int b;

    printf("\nInforme o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    dobraValores(&a, &b);

    printf("\nValores dobrados:");
    printf("\nA: %d", a);
    printf("\nB: %d\n", b);

    printf("\nSoma: %d\n", a + b);

    return 0;
}

void dobraValores(int *x, int *y) {

    *x *= 2;
    *y *= 2;

}