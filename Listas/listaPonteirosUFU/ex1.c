/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in- teiro, real, e char. 
Associe as varia ́veis aos ponteiros (use &). Modifique os valores de cada varia ́vel usando os ponteiros. Imprima os 
valores das varia ́veis antes e apo ́s a modificac ̧a ̃o. */

#include <stdio.h>

void printaVariaveis(int num, float pi, char nome);

int main() {

    int numero = 5;
    float pi = 3.14;
    char inicial = 'G';

    int *pointNum = &numero;
    float *pointPi = &pi;
    char *pointNome = &inicial;

    printf("\nVariaveis antes da troca:\n");
    printaVariaveis(numero, pi, inicial);

    *pointNum = 10;
    *pointPi = 3.1415;
    *pointNome = 'E';

    printf("\nVariaveis depois da troca:\n");
    printaVariaveis(numero, pi, inicial);

    return 0;
}

void printaVariaveis(int num, float pi, char inicial) {

    printf("%d - %f - %c\n", num, pi, inicial);

}