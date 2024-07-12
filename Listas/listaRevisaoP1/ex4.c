/* Fazer um programa em C para armazenar em dois arranjos unidimensionais, os maiores valores de cada coluna e os menores 
valores de cada linha de uma matriz lida do teclado. O tamanho máximo da matriz é 10x10. O programa deve seguir os seguintes 
passos:

a) Ler dois inteiros nl e nc, 2 >= nl, nc <= 10, correspondentes ao número de linhas e de colunas da matriz;
b) Ler uma matriz de elementos reais com nl linhas e nc colunas;
c) Preencher um vetor maior com os maiores elementos de cada coluna da matriz; 
d) Preencher um vetor menor, com os menores elementos de cada linha da matriz.

Abaixo, exemplo de execução (você não precisa imprimir a matriz lida):
 */

#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10
#define MIN_LINHAS 2
#define MIN_COLUNAS 1

int main() {

    int i, j;
    int numeroLinhas, numeroColunas;
    float matriz[MAX_LINHAS][MAX_COLUNAS] = {};
    float maioresElementosColunas[MAX_COLUNAS] = {};
    float menoresElementosLinhas[MAX_LINHAS] = {};

    do {

        printf("\nInforme o numero de linhas da matriz: ");
        scanf("%d", &numeroLinhas);
        printf("Informe o numero de colunas da matriz: ");
        scanf("%d", &numeroColunas);

    } while (numeroLinhas < MIN_LINHAS || numeroColunas < MIN_COLUNAS || numeroLinhas > MAX_LINHAS || numeroColunas > MAX_COLUNAS);

    printf("\nPreenchendo matriz:\n");
    for (i=0; i<numeroLinhas; i++) {
        for (j=0; j<numeroColunas; j++) {
            printf("Informe o elemento da posicao (%d,%d): ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz Lida:");
    for (i=0; i<numeroLinhas; i++) {
        
        printf("\n");

        for (j=0; j<numeroColunas; j++) {
            printf("  %.2f", matriz[i][j]);
        }

    }

    //MENORES ELEMENTOS LINHAS
    for (i=0; i<numeroLinhas; i++) {

        menoresElementosLinhas[i] = matriz[i][0];

        for (j=1; j<numeroColunas; j++) {
            if (matriz[i][j] < menoresElementosLinhas[i]) {
                menoresElementosLinhas[i] = matriz[i][j];
            }
        }

    }

    //MAIORES ELEMENTOS COLUNAS
    for (i=0; i<numeroColunas; i++) {

        maioresElementosColunas[i] = matriz[0][i];

        for (j=1; j<numeroLinhas; j++) {
            if (matriz[j][i] > maioresElementosColunas[i]) {
                maioresElementosColunas[i] = matriz[j][i];
            }
        }

    }

    //PRINTANDO VETORES
    printf("\n\nVetor menores elementos das linhas: ");
    for (i=0; i<numeroLinhas; i++) {
        printf("  %.2f", menoresElementosLinhas[i]);
    }

    printf("\n\nVetor maiores elementos das colunas: ");
    for (i=0; i<numeroColunas; i++) {
        printf("  %.2f", maioresElementosColunas[i]);
    }

    printf("\n");

}