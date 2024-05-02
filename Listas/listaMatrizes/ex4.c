/* Na Teoria de Sistemas define-se como elemento minimax de uma matriz o menor elemento da linha em que se encontra o 
maior elemento da matriz. Escreva um programa que preencha uma matriz m(15,15) por leitura e determina o seu elemento 
minimax. */

#include <stdio.h>
#include <math.h>

#define MAX_LINHAS 3
#define MAX_COLUNAS 3

int main() {

    int i, j;
    int infinito, maiorElemento, linhaMaiorElemento, elementoMinmax;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    infinito = INFINITY;
    maiorElemento = infinito * -1;
    linhaMaiorElemento = -1;

    for (i=0; i<MAX_LINHAS; i++) {
        
        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
                linhaMaiorElemento = i;
            }
        }
    }

    elementoMinmax = maiorElemento;
    for (i=0; i<MAX_COLUNAS; i++) {
        if (matriz[linhaMaiorElemento][i] < elementoMinmax) {
            elementoMinmax = matriz[linhaMaiorElemento][i];
        }
    }

    printf("\nO elemento minmax da matriz eh o %d\n", elementoMinmax);

    return 0;
}