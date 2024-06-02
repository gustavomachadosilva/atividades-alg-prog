/* Elabore uma func ̧a ̃o que receba duas strings como paraˆmetros e verifique se a segunda string ocorre dentro da primeira. 
Use aritme ́tica de ponteiros para acessar os caracteres das strings. */

#include <stdio.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

int verificaStringPresenteEmOutra(char *stringMaior, char *stringMenor);

int main() {

    char s1[MAX];
    char s2[MAX];
    int estaPresente;

    printf("Informe a string maior: ");
    gets(s1);
    printf("Informe a string menor: ");
    gets(s2);

    estaPresente = verificaStringPresenteEmOutra(s1, s2);

    if (estaPresente == TRUE) {
        printf("\nA string menor esta presente na maior.\n");
    }
    else {
        printf("\nA string menor NAO esta presente na maior.\n");
    }

    return 0;
}

int verificaStringPresenteEmOutra(char *stringMaior, char *stringMenor) {

    int estaPresente = FALSE;
    int contador;

    while (*stringMaior != '\0' && estaPresente == FALSE) {

        if (*stringMenor == *stringMaior) {

            estaPresente = TRUE;
            contador = 0;

            while (estaPresente == TRUE && *(stringMenor + contador) != '\0') {
                if (*(stringMenor + contador) != *(stringMaior + contador)) {
                    estaPresente = FALSE;
                }

                contador++;
            }

        } 

        stringMaior++;
    }

    return estaPresente;


}