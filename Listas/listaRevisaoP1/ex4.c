/* Fazer um programa em C para armazenar em dois arranjos unidimensionais, os maiores valores de cada coluna e 
os menores valores de cada linha de uma matriz lida do teclado. O tamanho máximo da matriz é 10x10. O programa deve 
seguir os seguintes passos:

a) Ler dois inteiros nl e nc, 2 >= nl, nc <= 10, correspondentes ao número de linhas e de colunas da matriz;
b) Ler uma matriz de elementos reais com nl linhas e nc colunas;
c) Preencher um vetor maior com os maiores elementos de cada coluna da matriz; 
d) Preencher um vetor menor, com os menores elementos de cada linha da matriz. */

#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10
#define MIN_LINHAS 2
#define MIN_COLUNAS 1

#define TRUE 1
#define FALSE 0

int main() {

    int i, j;
    int numLinhas, numColunas;
    int matrizDentroDosLimites = FALSE;
    int indiceMaiorElementoColuna, indiceMenorElementoLinha;
    float matriz[MAX_LINHAS][MAX_COLUNAS];
    float maioresElementosColunas[MAX_COLUNAS];
    float menoresElementosLinhas[MAX_LINHAS];


    // ESTIPULANDO O TAMANHO DA MATRIZ
    do {

        printf("\nInforme o numero de linhas da matriz (entre 2 e 10): ");
        scanf("%d", &numLinhas);
        printf("Informe o numero de colunas da matriz (entre 1 e 10): ");
        scanf("%d", &numColunas);

        if (numLinhas >= MIN_LINHAS && numLinhas <= MAX_LINHAS && numColunas >= MIN_LINHAS && numColunas <= MAX_COLUNAS) {
            matrizDentroDosLimites = TRUE;
        }
        else {
            printf("\nOs valores informados excedem os limites estipulados, tente novamente!\n");
        }

    } while (matrizDentroDosLimites == FALSE);

    //PREENCHENDO A MATRIZ
    for (i=0; i<numLinhas; i++) {

        printf("\n");

        for (j=0; j<numColunas; j++) {
            printf("Informe o elemento da posicao (%d,%d): ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }

    }

    //PREENCHENDO O VETOR COM O MAIOR ELEMENTO DE CADA COLUNA
    for (i=0; i<numColunas; i++) {

        indiceMaiorElementoColuna = 0;
        for (j=1; j<numLinhas; j++) {

            if (matriz[j][i] > matriz[indiceMaiorElementoColuna][i]) {
                indiceMaiorElementoColuna = j;
            }

        }

        maioresElementosColunas[i] = matriz[indiceMaiorElementoColuna][i];

    }

    //PREENCHENDO O VETOR COM O MENOR ELEMENTO DE CADA LINHA
    for (i=0; i<numLinhas; i++) {

        indiceMenorElementoLinha = 0;
        for (j=1; j<numColunas; j++) {

            if (matriz[i][j] < matriz[i][indiceMenorElementoLinha]) {
                indiceMenorElementoLinha = j;
            }

        }

        menoresElementosLinhas[i] = matriz[i][indiceMenorElementoLinha];

    }

    //PRINTANDO A MATRIZ LIDA
    printf("\nMatriz Lida:\n");
    for (i=0; i<numLinhas; i++) {

        printf("\n");

        for (j=0; j<numColunas; j++) {
            printf("\t%.2f", matriz[i][j]);
        }

    }

    //PRINTANDO VETORES
    printf("\n\nVetor menores elementos das linhas: ");
    for (i=0; i<numLinhas; i++) {
        printf("  %.2f", menoresElementosLinhas[i]);
    }

    printf("\nVetor maiores elementos das colunas: ");
    for (i=0; i<numColunas; i++) {
        printf("  %.2f", maioresElementosColunas[i]);
    }

    printf("\n");

    return 0;
}