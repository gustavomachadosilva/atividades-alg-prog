/* Façaumprogramaquerecebeumtextodeaté40caracteresegera,emumvetor,a distribuição de freqüência de comprimento de palavras. 
Considere que no texto podem aparecer palavras de até 10 caracteres. As palavras podem estar separadas por espaços em 
branco ou pelos caracteres vírgula e ponto. O final do texto é sinalizado pelo caracter #. */

#include <stdio.h>

#define MAX_CARACTERES_TEXTO 41
#define MAX_CARACTERES_PALAVRA 10

int main() {

    int i, contador;
    char texto[MAX_CARACTERES_TEXTO];
    int quantidadePalavras[MAX_CARACTERES_PALAVRA] = {};

    i = 0;
    contador = 0;

    printf("\nInforme o texto: ");
    gets(texto);

    while (texto[i] != '\0') {
        if (texto[i] == ' ' || texto[i] == ',' || texto[i] == '.' || texto[i] == '#') {
            quantidadePalavras[contador - 1]++;
            contador = 0;
        }
        else {
            contador++;
        }

        i++;
    }

    printf("\nFrequencia de comprimento de palavras:\n");
    for (i=0; i<MAX_CARACTERES_PALAVRA; i++) {
        printf("%d letras: %d\n", i+1, quantidadePalavras[i]);
    }

    return 0;
}