/* Faça um programa que lê duas strings de tamanho máximo 20 e que informa se as strings são palíndromas ou não. 
Duas strings são palíndromas, caso possam ser lidas de frente para trás e de trás para frente, resultando na mesma palavra. */

#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 21
#define TRUE 1
#define FALSE 0

int main() {

    int i, tamanhoPrimeiraPalavra, tamanhoSegundaPalavra;
    int flagEhPalindromo = FALSE;
    char primeiraPalavra[MAX_CARACTERES];
    char segundaPalavra[MAX_CARACTERES];

    printf("\nInforme a primeira palavra: ");
    gets(primeiraPalavra);
    printf("Informe a segunda palavra: ");
    gets(segundaPalavra);

    tamanhoPrimeiraPalavra = strlen(primeiraPalavra);
    tamanhoSegundaPalavra = strlen(segundaPalavra);

    if (tamanhoPrimeiraPalavra == tamanhoSegundaPalavra) {

        flagEhPalindromo = TRUE;

        i=0;
        while (i<tamanhoPrimeiraPalavra && flagEhPalindromo == TRUE) {
            if (primeiraPalavra[i] != segundaPalavra[(tamanhoSegundaPalavra - 1) - i]) {
                flagEhPalindromo = FALSE;
            }

            i++;
        }

    }

    if (flagEhPalindromo == TRUE) {
        printf("\nAs palavras sao palindromas!\n");
    }
    else {
        printf("\nAs palavras nao sao palindromas!\n");
    }

    return 0;
}