/* Faça um programa que lê 5 valores e os armazena em um vetor de 5 posições. 
O programa deve armazenar os valores deste vetor em um segundo vetor, mas na ordem inversa. Exiba na tela o vetor resultante.
*/

#include <stdio.h>

#define MAX_VALORES 5

int main() {

    int i;
    int valores[MAX_VALORES];
    int valoresInversa[MAX_VALORES];

    printf("\n");

    for (i=0; i<MAX_VALORES; i++) {
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &valores[i]);

        valoresInversa[(MAX_VALORES-1)-i] = valores[i];
    }

    printf("\nVetor original:\n");
    for (i=0; i<MAX_VALORES; i++) {
        printf("  %d", valores[i]);
    }

    printf("\nVetor inverso:\n");
    for (i=0; i<MAX_VALORES; i++) {
        printf("  %d", valoresInversa[i]);
    }

    printf("\n");

    return 0;
}