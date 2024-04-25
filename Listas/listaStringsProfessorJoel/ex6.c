/* Faça um programa que lê duas strings s1 (de tamanho máximo 100) e s2 (de tamanho máximo 20), onde s1 representa 
um texto e s2 representa um fragmento de texto menor. O programa deve indicar se s2 aparece em s1. */

#include <stdio.h>

#define MAX_CARACTERES_TEXTO_MAIOR 101
#define MAX_CARACTERES_TEXTO_MENOR 21
#define TRUE 1
#define FALSE 0 

int main() {

    int i, j, k;
    int flagTextoMenorEstaPresente = FALSE;
    char s1[MAX_CARACTERES_TEXTO_MAIOR];
    char s2[MAX_CARACTERES_TEXTO_MENOR];

    printf("\nInforme o texto maior: ");
    gets(s1);
    printf("Informe o texto menor: ");
    gets(s2);

    i=0;
    while (s1[i] != '\0' && flagTextoMenorEstaPresente == FALSE) {
        
        j=0;

        if (s1[i] == s2[j]) {
            k=i;
            flagTextoMenorEstaPresente = TRUE;

            while (s2[j] != '\0' && flagTextoMenorEstaPresente == TRUE) {
                if (s1[k] != s2[j]) {
                    flagTextoMenorEstaPresente = FALSE;
                }
                else {
                    k++;
                    j++;
                }
            }
        }

        i++;
    }

    if (flagTextoMenorEstaPresente == TRUE) {
        printf("\nO texto menor esta presente no texto maior!\n");
    }
    else {
        printf("\nO texto menor nao esta presente no texto maior!\n");
    }

    return 0;
}