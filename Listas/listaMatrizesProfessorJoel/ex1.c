/* Faça um programa que preenche uma matriz 4X4 com valores informados pelo usuário. Depois, o programa deve informar o maior 
elemento da matriz.
 */

#include <stdio.h>
#include <math.h>

#define MAX_LINHAS 4
#define MAX_COLUNAS 4

int main() {

    int i, j;
    int infinito, maiorElemento;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    infinito = INFINITY;
    maiorElemento = infinito * -1;

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
            }
        }
    }

    printf("\nMaior elemento: %d\n", maiorElemento);

    return 0;
}