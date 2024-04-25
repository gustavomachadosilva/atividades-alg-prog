/* Faça um programa que lê e armazena 5 valores em um arranjo. Depois o programa deve ler um valor n. 
A seguir, o programa deve verificar se este valor está no arranjo. Quando o valor é encontrado, deve-se exibir uma 
mensagem na tela. */

#include <stdio.h>

#define MAX_VALORES 5
#define TRUE 1
#define FALSE 0

int main() {

    int i,valor, flagValorContidoNaLista;
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
        }

        i++;
    }

    if (flagValorContidoNaLista == TRUE) {
        printf("\nO valor esta contido na lista!\n");
    }
    else {
        printf("\nO valor nao esta contido na lista!\n");
    }

    return 0;
}