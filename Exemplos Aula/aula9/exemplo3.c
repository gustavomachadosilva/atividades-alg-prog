/* A raiz de 2 pode ser aproximada através do algoritmo de Newton-Raphson. 
Partindo de uma aproximação inicial x0, podem ser encontradas aproximações sucessivas através da equação de recorrência ao lado.
Escreva um programa que tenha como entrada o número de iterações (niter) e a aproximação inicial (número positivo) 
xinic (x0), e forneça como saída a aproximação para a raiz de 2 com esse número de iterações. */

#include <stdio.h>

int main() {

    int iteracoes, i;
    float xInicial, xNovo;

    printf("\nPrograma para aproximar a raiz de 2.\n");
    printf("\nInforme o numero de iteracoes: ");
    scanf("%d", &iteracoes);
    printf("Informe o valor inicial: ");
    scanf("%f", &xInicial);

    for (i=0; i<iteracoes; i++) {
        xNovo = xInicial - (((xInicial * xInicial) - 2) / (2 * xInicial));
        xInicial = xNovo;
    }

    printf("\nRaiz de 2 eh aproximadamente %f\n", xNovo);

    return 0;
}