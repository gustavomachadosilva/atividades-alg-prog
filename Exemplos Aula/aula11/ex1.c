/* Faça um programa que peça para o usuário digitar uma palavra e em seguida imprima-a de trás para frente */

#include <stdio.h>
#include <string.h>

#define MAX_LETRAS 100

int main() {

    int numLetras, i;
    char palavra[MAX_LETRAS];

    printf("\nInforme uma palavra: ");
    gets(palavra);

    printf("\nPalavra digitada: %s", palavra);

    numLetras = strlen(palavra);

    printf("\nPalavra ao contrario: ");
    for (i=numLetras - 1; i>=0; i--) {
        printf("%c", palavra[i]);
    }

    printf("\n");

    return 0;
}