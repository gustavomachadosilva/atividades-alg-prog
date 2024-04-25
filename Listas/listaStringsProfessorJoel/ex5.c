/* Faça um programa que lê uma string e um caractere e que informa
quantas vezes o caracter aparece na string. */

#include <stdio.h>

#define MAX_CARACTERES 20

int main() {

    int i, contador;
    char string[MAX_CARACTERES];
    char letra;

    contador = 0;

    printf("\nInforme a string: ");
    gets(string);
    printf("Informe a letra: ");
    scanf(" %c", &letra);

    for (i=0; i<MAX_CARACTERES; i++) {
        if (string[i] == letra) {
            contador++;
        }
    }

    printf("\nA letra %c aparece %d vezes na palavra %s\n", letra, contador, string);

    return 0;
}