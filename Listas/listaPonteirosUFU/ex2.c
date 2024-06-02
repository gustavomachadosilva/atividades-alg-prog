/* Escreva um programa que contenha duas varia ́veis inteiras. Compare seus enderec ̧os e exiba o maior endereco. */

#include <stdio.h>

int main() {

    int num1 = 10;
    int num2 = 5;

    int *pNum1 = &num1;
    int *pNum2 = &num2;

    if (pNum1 > pNum2) {
        printf("%ld", (long) pNum1);
    }
    else {
        printf("%ld", (long) pNum2);
    }

    return 0;
}