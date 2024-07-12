/* Faça um programa que identifica se um número inteiro qualquer é um número perfeito. 
Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número. O programa recebe um 
inteiro como entrada e fornece como saída uma mensagem dizendo se é perfeito ou não. Para identificar se é divisor 
use o resto da divisão: numero % divisor = = 0. */

#include <stdio.h>

int main() {

    int i;
    int numeroAnalisado, somatorioDivisor;

    somatorioDivisor = 0;

    printf("\nDigite o numero a ser analisado: ");
    scanf("%d", &numeroAnalisado);

    for (i=1; i<numeroAnalisado; i++) {

        if (numeroAnalisado % i == 0) {
            somatorioDivisor += i;
        }

    }

    if (somatorioDivisor == numeroAnalisado) {
        printf("\nO numero eh perfeito!\n");
    }
    else {
        printf("\nO numero NAO eh perfeito!\n");
    }

    return 0;
}