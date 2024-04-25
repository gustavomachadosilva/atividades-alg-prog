/* Um texto é composto de palavras de 10 ou menos caracteres. Escreva um programa que lê um texto de até 100 palavras 
e depois as imprime em ordem alfabética. */

#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES_TEXTO 1001
#define MAX_CARACTERES_PALAVRA 11
#define MAX_PALAVRAS 20
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, tamanhoTexto, posicaoPalavra, posicaoLetra, indiceMenorPalavra;
    int flagSalvandoPalavra = FALSE;
    char texto[MAX_CARACTERES_TEXTO];
    char palavras[MAX_PALAVRAS][MAX_CARACTERES_PALAVRA] = {};
    char menorPalavra[MAX_CARACTERES_PALAVRA];

    printf("\nInforme o texto: ");
    gets(texto);

    tamanhoTexto = strlen(texto);

    posicaoPalavra = 0;
    posicaoLetra = 0;
    for (i=0; i<=tamanhoTexto; i++) {

        if (texto[i] == ' ' || texto[i] == ',' || texto[i] == '.') {
            posicaoLetra = 0;

            if (flagSalvandoPalavra == TRUE) {
                posicaoPalavra++;
                flagSalvandoPalavra = FALSE;
            }
        }
        else {
            palavras[posicaoPalavra][posicaoLetra] = texto[i];
            posicaoLetra++;
            flagSalvandoPalavra = TRUE;
        }

    }

    for (i=0; i<=posicaoPalavra; i++) {
        for (j=i; j<=posicaoPalavra; j++) {

            indiceMenorPalavra = i;

            if (strcmp(palavras[i], palavras[j]) > 0) {
                indiceMenorPalavra = j;
            }

            if (indiceMenorPalavra != i) {
                strcpy(menorPalavra, palavras[j]);
                strcpy(palavras[j], palavras[i]);
                strcpy(palavras[i], menorPalavra);
            }
        }
    }

    for (i=0; i<=posicaoPalavra; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}