/* Faça um programa que lê uma matriz 4X4 de inteiros. A seguir, o programa deve verificar se existem elementos 
repetidos na matriz. Caso existam, o programa deve informar: “Existem elementos repetidos”. Caso contrário, 
ele deve informar: “Não existem elementos repetidos”. */

#include <stdio.h>

#define MAX_LINHAS 4
#define MAX_COLUNAS 4
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, y, z;
    int elementoRepetido = FALSE;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }

    }

    i=0;
    while (i<MAX_LINHAS && elementoRepetido == FALSE) {

        j=0;
        while (j<MAX_COLUNAS && elementoRepetido == FALSE) {

            y=0;
            while (y<MAX_LINHAS && elementoRepetido == FALSE) {

                z=0;
                while (z<MAX_COLUNAS && elementoRepetido == FALSE) {

                    if (matriz[i][j] == matriz[y][z] && i != y && j != z) {
                        elementoRepetido = TRUE;
                    }

                    z++;
                }

                y++;
            }

            j++;
        }

        i++;
    }

    if (elementoRepetido == TRUE) {
        printf("\nExistem elementos repetidos!\n");
    }
    else {
        printf("\nNao existem elementos repetidos!\n");
    }

    return 0;
}