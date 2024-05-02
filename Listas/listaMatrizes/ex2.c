/* Preencher por leitura uma matriz m (10,10). Forma um vetor (arranjo de uma dimensão) com os elementos das linhas 
pares da matriz. Formar outro vetor com os elementos da diagonal principal somados com os elementos da mesma linha, 
contidos na diagonal secundária. Imprimir a matriz e os 2 vetores.
 */

#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

int main() {

    int i, j;
    int posicaoAtualLinhasPares, posicaoDiagonalPrincipal, posicaoDiagonalSecundaria;
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int elementosLinhasParesMatriz[(MAX_LINHAS / 2) * MAX_COLUNAS];
    int elementosDiagonais[MAX_LINHAS];
    

    for (i=0; i<MAX_LINHAS; i++) {
        printf("\n");
        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // ELEMENTOS LINHAS PARES
    posicaoAtualLinhasPares = 0;
    for (i=1; i<MAX_LINHAS; i+=2) {

        for (j=0; j<MAX_COLUNAS; j++) {
            elementosLinhasParesMatriz[posicaoAtualLinhasPares] = matriz[i][j];
            posicaoAtualLinhasPares++;
        }
    }

    // ELEMENTOS DIAGONAIS
    posicaoDiagonalPrincipal = 0;
    posicaoDiagonalSecundaria = MAX_COLUNAS-1;

    for (i=0; i<MAX_LINHAS; i++) {
        elementosDiagonais[i] = matriz[i][posicaoDiagonalPrincipal] + matriz[i][posicaoDiagonalSecundaria];
        posicaoDiagonalPrincipal++;
        posicaoDiagonalSecundaria--;
    }

    // PRINTANDO MATRIZ PRINCIPAL
    printf("\nMatriz principal:\n");
    for (i=0; i<MAX_LINHAS; i++) {
       
        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("\t%d", matriz[i][j]);
        }
    }

    // PRINTANDO VETOR LINHAS PARES
    printf("\n\nVetor linhas pares:\n");
    for (i=0; i<((MAX_LINHAS / 2) * MAX_COLUNAS); i++) {
        printf("  %d", elementosLinhasParesMatriz[i]);
    }

    // PRINTANDO VETOR ELEMENTOS DIAGONAIS
    printf("\n\nVetor elementos diagonais:\n");
    for (i=0; i<MAX_LINHAS; i++) {
        printf("  %d", elementosDiagonais[i]);
    }

    printf("\n");


    return 0;
}