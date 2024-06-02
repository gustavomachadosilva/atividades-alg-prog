/* Crie uma func ̧a ̃o que receba como paraˆmetro um array e o imprima. Na ̃o utilize  ́ındices para percorrer o array, 
apenas aritme ́tica de ponteiros. */

#include <stdio.h>

#define MAX 100

void imprimeFrase(char *ptrArray);

int main() {

    char frase[MAX];
    
    printf("\nDigite a sua frase: ");
    gets(frase);

    printf("\nFrase:\n");
    imprimeFrase(frase);

    return 0;
}

void imprimeFrase(char *ptrArray) {

    while (*ptrArray != '\0') {
        printf("%c", *ptrArray);
        ptrArray++;
    }

    printf("\n");

}