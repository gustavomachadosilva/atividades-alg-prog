/* Escreva um programa que lê uma string e faça remova seus espaços, concatenando todos os caracteres. */

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 100

int main() {

    int i, j;
    int tamanhoString;
    char string[MAX_CHAR];
    char stringSemEspaco[MAX_CHAR];

    printf("\nInforme a string: ");
    gets(string);
    printf("%s", string);

    tamanhoString = strlen(string);

    j=0;
    for (i=0; i<tamanhoString; i++) {
        if (string[i] != ' ') {
            stringSemEspaco[j] = string[i];
            j++;
        }
    }

    printf("\nString sem espacos: %s\n", stringSemEspaco);  

    return 0;
}