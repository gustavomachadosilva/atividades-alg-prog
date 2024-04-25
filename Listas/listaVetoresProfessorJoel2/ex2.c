/* Faça um programa que lê e armazena 5 valores em um arranjo. Depois o programa deve ler um valor n. 
A seguir, o programa deve verificar se este valor está no arranjo. Se ele estiver, o programa deve informar a posição 
do vetor em que este valor se encontra. Se não estiver, o programa deve informar que o valor não se encontra no vetor. */

#include <stdio.h>

#define MAX_VALORES 5
#define TRUE 1
#define FALSE 0

int main() {

    int i,valor, flagValorContidoNaLista, indiceValorContido;
    int valores[MAX_VALORES];

    printf("\n");

    for (i=0; i<MAX_VALORES; i++) {
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("\nDigite um valor para procurar na lista: ");
    scanf("%d", &valor);

    i = 0;
    flagValorContidoNaLista = FALSE;
    while (i<MAX_VALORES && flagValorContidoNaLista == FALSE)
    {
        if (valor == valores[i]) {
            flagValorContidoNaLista = TRUE;
            indiceValorContido = i + 1;
        }

        i++;
    }

    if (flagValorContidoNaLista == TRUE) {
        printf("\nO valor esta contido na lista na posicao %d!\n", indiceValorContido);
    }
    else {
        printf("\nO valor nao esta contido na lista!\n");
    }

    return 0;
}