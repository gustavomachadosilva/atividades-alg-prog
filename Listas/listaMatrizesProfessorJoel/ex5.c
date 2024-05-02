/* Faça um programa que verifica se um dado número está armazenado em uma matriz. 
Se o número procurado estiver na matriz, exiba a linha e a coluna em que ele está armazenado (se ele estiver 
armazenado em mais de uma célula, indique qualquer uma). Se ele não estiver, informe “Número não encontrado”. 
O programa deve ler um número inteiro N, que deve ser procurado, e uma matriz 4X4 de números inteiros, 
na qual o número deve ser procurado. */

#include <stdio.h>

#define MAX_LINHAS 4
#define MAX_COLUNAS 4
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, numProcurado, linhaNumProcurado, colunaNumProcurado;
    int numEncontrado = FALSE;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }

    }

    printf("\nInforme o numero a ser procurado: ");
    scanf("%d", &numProcurado);

    i=0;
    while (i<MAX_LINHAS && numEncontrado == FALSE) {

        j=0;
        while (j<MAX_COLUNAS && numEncontrado == FALSE) {

            if (matriz[i][j] == numProcurado) {
                numEncontrado = TRUE;
                linhaNumProcurado = i;
                colunaNumProcurado = j;
            }

            j++;

        }

        i++;

    }

    if (numEncontrado == TRUE) {
        printf("\nO numero esta na linha %d e coluna %d!\n", linhaNumProcurado+1, colunaNumProcurado+1);
    }
    else {
        printf("\nNumero nao encontrado!\n");
    }
    

    return 0;
}