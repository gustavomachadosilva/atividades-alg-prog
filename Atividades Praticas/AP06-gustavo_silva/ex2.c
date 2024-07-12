#include <stdio.h>
#include <string.h>

#define MAX 25
#define TRUE 1
#define FALSE 0

int main() {

    int i, tamanhoPalavra;
    int flagEhPalindromo = TRUE;
    char palavra[MAX];

    printf("Digite uma string: ");
    gets(palavra);

    tamanhoPalavra = strlen(palavra);

    for (i=0; i<tamanhoPalavra; i++) {
        if (palavra[i] != palavra[(tamanhoPalavra -1) - i]) {
            flagEhPalindromo = FALSE;
        }
    }

    if (flagEhPalindromo == TRUE) {
        printf("A string '%s' eh um palindromo!\n", palavra);
    }
    else {
        printf("A string '%s' nao eh um palindromo!\n", palavra);
    }
    return 0;
}
