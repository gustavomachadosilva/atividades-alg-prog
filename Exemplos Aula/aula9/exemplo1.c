/* Faça um programa que apresenta para o usuário toda a tabuada de 1 a 9. */

#include <stdio.h>

#define INICIO_TABUADA 1
#define FINAL_TABUADA 9

int main() {

    int i, j, multiplicacao;

    for (i=INICIO_TABUADA; i<=FINAL_TABUADA; i++) {
        printf("\nTabuada do %d:\n", i);
        for (j=INICIO_TABUADA; j<=FINAL_TABUADA; j++) {
            multiplicacao = i * j;
            printf("%d x %d = %d\n", i, j, multiplicacao);
        }
    }

    return 0;
}