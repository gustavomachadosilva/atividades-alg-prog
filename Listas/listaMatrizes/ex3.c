/* Uma matriz esparsa é uma matriz que tem aproximadamente 2/3 de seus elementos iguais a zero. 
Fazer um programa que lê uma matriz esparsa me(10,10) e forma uma matriz condensada mc, de apenas três colunas, 
com os elementos não nulos de me, de forma que:
a) a primeira coluna contém os valores não nulos de me;
b) a segunda coluna contém a linha de me onde foi encontrado este valor; e 
c) a terceira coluna contém a coluna de me onde foi encontrado este valor. Imprimir as duas matrizes. */

#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10
#define MAX_ELEMENTOS_NAO_NULOS 33
#define MAX_COLUNAS_NAO_NULOS 3

int main() {

    int i, j;
    int linhaNaoNulo;
    int me[MAX_LINHAS][MAX_COLUNAS];
    int mc[MAX_ELEMENTOS_NAO_NULOS][MAX_COLUNAS_NAO_NULOS];

    linhaNaoNulo = 0;

    for (i=0; i<MAX_LINHAS; i++) {
        printf("\n");
        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &me[i][j]);

            if (me[i][j] != 0) {
                mc[linhaNaoNulo][0] = me[i][j];
                mc[linhaNaoNulo][1] = i+1;
                mc[linhaNaoNulo][2] = j+1;
                linhaNaoNulo++;
            }
        }
    }

    printf("\nMatriz original:\n");
    for (i=0; i<MAX_LINHAS; i++) {
        
        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("\t%d", me[i][j]);
        }
    }

    printf("\n\nMatriz de nao nulos:\n\n");
    printf("\tVALOR\tLINHA\tCOLUNA");
    
    for (i=0; i<MAX_ELEMENTOS_NAO_NULOS; i++) {
        
        printf("\n");

        for (j=0; j<MAX_COLUNAS_NAO_NULOS; j++) {
            printf("\t%d", mc[i][j]);
        }
    }

    printf("\n");

    return 0;
}