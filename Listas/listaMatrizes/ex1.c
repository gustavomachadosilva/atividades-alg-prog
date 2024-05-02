/* Dada uma matriz m (10, 20), preenchê-la por leitura e imprimir: 
a) omaiorelementodecadalinhadamatriz;
b) amédiadoselementosdecadacoluna;
c) oprodutodetodososelementosdiferentesdezero;
d) quantoselementossãonegativos;
e) posiçãoocupada(linha-coluna)porumelementocujovalorserálidopeloprograma. */

#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 20
#define TRUE 1
#define FALSE 0

int main() {

    int i, j;
    int indiceMaiorElementoLinha, somaElementosColuna, produtoElementosDiferenteDeZero, elementosNegativos;
    int elementoProcurado, linhaElementoProcurado, colunaElementoProcurado;
    int existeElementoDiferenteDeZero = FALSE;
    int elementoProcuradoEncontrado = FALSE;
    float mediaElementosColuna;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    produtoElementosDiferenteDeZero = 1;
    elementosNegativos = 0;

    printf("\n");

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] != 0) {
                produtoElementosDiferenteDeZero *= matriz[i][j];
                existeElementoDiferenteDeZero = TRUE;
            }

            if (matriz[i][j] < 0) {
                elementosNegativos++;
            }
        }
    }

    printf("\n");

    // O MAIOR ELEMENTO DE CADA LINHA DA MATRIZ
    for (i=0; i<MAX_LINHAS; i++) {

        indiceMaiorElementoLinha = 0;

        for (j=1; j<MAX_COLUNAS; j++) {
            if (matriz[i][j] > matriz[i][indiceMaiorElementoLinha]) {
                indiceMaiorElementoLinha = j;
            }
        }

        printf("Maior Elemento da linha %d esta na posicao %d e tem o valor de %d\n", i+1, indiceMaiorElementoLinha+1, matriz[i][indiceMaiorElementoLinha]);
    }

    printf("\n");

    //MEDIA DOS ELEMENTOS DE CADA COLUNA
    for (i=0; i<MAX_COLUNAS; i++) {
        
        somaElementosColuna = 0;

        for (j=0; j<MAX_LINHAS; j++) {
            somaElementosColuna += matriz[j][i];
        }

        mediaElementosColuna = (float) somaElementosColuna / MAX_LINHAS;

        printf("A media da coluna %d eh %.2f\n", i+1, mediaElementosColuna);
    }

    //PRODUTO DE TODOS ELEMENTOS DIFERENTES DE ZERO
    if (existeElementoDiferenteDeZero == TRUE) {
        printf("\nO produto de todos elementos difererentes de zero eh %d\n", produtoElementosDiferenteDeZero);
    }
    else  {
        printf("\nNao existem elementos diferentes de 0!\n");
    }

    //ELEMENTOS NEGATIVOS
    printf("\nA matriz tem %d elementos negativos!\n", elementosNegativos);

    //POSICAO DE UM ELEMENTO A SER LIDO PELO PROGRAMA

    printf("\nInforme um elemento a ser procurado na matriz: ");
    scanf("%d", &elementoProcurado);

    i = 0;
    while (i<MAX_LINHAS && elementoProcuradoEncontrado == FALSE) {

        j=0;
        while (j<MAX_COLUNAS && elementoProcuradoEncontrado == FALSE) {
            if (matriz[i][j] == elementoProcurado) {
                elementoProcuradoEncontrado = TRUE;
                linhaElementoProcurado = i;
                colunaElementoProcurado = j;
            }

            j++;
        }

        i++;
    }

    if (elementoProcuradoEncontrado == TRUE) {
        printf("O elemento esta na linha %d e coluna %d.\n", linhaElementoProcurado+1, colunaElementoProcurado+1);
    }
    else {
        printf("O elemento nao esta na matriz!\n");
    }

    return 0;
}