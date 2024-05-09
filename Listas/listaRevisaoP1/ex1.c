/* Faça um programa que identifica se um número inteiro qualquer é um número perfeito. Número perfeito é aquele cuja 
soma de seus divisores, exceto ele próprio, é igual ao número. O programa recebe um inteiro como entrada e fornece 
como saída uma mensagem dizendo se é perfeito ou não. Para identificar se é divisor use o resto da divisão: 
numero % divisor = = 0.
Ex.: 6 = 1 + 2 + 3 28 = 1 + 2 + 4 + 7 + 14. */

#include <stdio.h>

int main() {

    int i;
    int numero, somaDivisores;

    somaDivisores = 0;

    printf("\nDigite o numero a ser verificado: ");
    scanf("%d", &numero);

    for (i=1; i<numero; i++) {

        if (numero % i == 0) {
            somaDivisores += i;
        }

    }

    if (somaDivisores == numero) {
        printf("\nO numero eh perfeito!\n");
    }
    else {
        printf("\nO numero NAO eh perfeito!\n");
    }

    return 0;
}