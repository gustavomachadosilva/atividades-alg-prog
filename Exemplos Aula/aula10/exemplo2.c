/* Faça um programa leia do usuário 50 valores, calcule a média desses valores e, em seguida, imprima todos os valores 
que estão acima da média calculada. */

#include <stdio.h>

#define VALORES 50

int main() {

    int i, soma;
    int valor[VALORES];
    float media;

    soma = 0;

    for (i=0; i<VALORES; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor[i]);
        soma += valor[i];
    }

    media = (float) soma / VALORES;

    printf("\nValores acima da media:\n");

    for (i=0; i<VALORES; i++) {
        if (valor[i] > media) {
            printf("%d\n", valor[i]);
        }
    }


    return 0;
}