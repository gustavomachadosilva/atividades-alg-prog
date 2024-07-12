/* Escreva um programa que lê uma string e faça remova seus espaços, concatenando todos os caracteres. */

#include <stdio.h>

#define MAX_CHAR 100

int main() {

    int posicaoString, posicaoNovaString;
    char string[MAX_CHAR];
    char novaString[MAX_CHAR];

    printf("\nInforme a string: ");
    gets(string);

    posicaoString = -1;
    posicaoNovaString = 0;
    do {

        posicaoString++;
        
        if (string[posicaoString] != ' ') {
            novaString[posicaoNovaString] = string[posicaoString];
            posicaoNovaString++;
        }

    } while (string[posicaoString] != '\0');

    printf("\nString sem espacos: %s\n", novaString);

    return 0;
}