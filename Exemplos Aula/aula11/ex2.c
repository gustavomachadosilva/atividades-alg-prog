/* Faça um programa que implemente e teste uma versão própria das funções strcmp e strcpy no programa principal. 
Ou seja, o programa deve informar se as strings são iguais ou diferentes e copiar o conteúdo de uma string para a outra. 
Assuma que ambas as strings de teste possuem o mesmo tamanho. */

#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 50
#define TRUE 1
#define FALSE 0

int main() {

    int i, tamString1, tamString2;
    int flagIguais = TRUE;
    char string1[MAX_CARACTERES];
    char string2[MAX_CARACTERES];

    printf("\nInforme a primeira string: ");
    gets(string1);
    printf("Informe  a segunda string: ");
    gets(string2);

    tamString1 = strlen(string1);
    tamString2 = strlen(string2);

    //strcmp
    if (tamString1 != tamString2) {
        flagIguais = FALSE;
    }
    else {
        for (i=0; i<tamString1; i++) {
            if (string1[i] != string2[i]) {
                flagIguais = FALSE;
            }
        }
    }

    //strcpy
    for (i=0; i<MAX_CARACTERES; i++) {
        string2[i] = string1[i];
    }

    if (flagIguais == TRUE) {
        printf("\nAs strings são iguais!\n");
    } 
    else {
        printf("\nAs strings não são iguais!\n");
    }

    printf("A nova string2 eh: %s\n", string2);

    return 0;
}