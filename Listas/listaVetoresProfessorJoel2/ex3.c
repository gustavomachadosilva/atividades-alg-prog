/* Considere os dois exercícios anteriores, mas assumindo que o vetor está sempre ordenado antes. 
É possível melhorar o algoritmo de busca? Nestas condições, é possível desenvolver um programa que procure o valor n no vetor, 
sem ter que visitar todas as posições do vetor? (Pesquisa sobre o algoritmo de busca binária).
 */

#include <stdio.h>

#define MAX_VALORES 5
#define TRUE 1
#define FALSE 0

int main() {

    int i,valor, flagValorContidoNaLista, indiceValorContido;
    int menor, maior, meio;
    int valores[MAX_VALORES];

    printf("\n");

    for (i=0; i<MAX_VALORES; i++) {
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("\nDigite um valor para procurar na lista: ");
    scanf("%d", &valor);

    flagValorContidoNaLista = FALSE;
    menor = 0;
    maior = MAX_VALORES - 1;
    while ((menor <= maior) && flagValorContidoNaLista == FALSE) {
        meio = (maior + menor) / 2;

        if (valor == valores[meio]) {
            indiceValorContido = meio;
            flagValorContidoNaLista = TRUE;
        }
        else if (valor > valores[meio]) {
            menor = meio + 1;
        }
        else {
            maior = meio - 1;
        }

    }

    if (flagValorContidoNaLista == TRUE) {
        printf("\nO valor esta contido na lista na posicao %d!\n", indiceValorContido + 1);
    }
    else {
        printf("\nO valor nao esta contido na lista!\n");
    }

    return 0;
}