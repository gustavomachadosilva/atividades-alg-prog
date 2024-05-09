/* FaçaumprogramaqueleiaumvalorinteirodereferênciaVReumamatriz4X4de inteiros. Depois de ler a matriz, você deve percorrê-la 
e substituir cada valor inferior a VR pelo valor VR. O programa deve imprimir a matriz resultante. */

#include <stdio.h>

#define MAX_LINHAS 4
#define MAX_COLUNAS 4

int main() {

    int i, j;
    int valorReferencia;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da posicao(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }

    }

    printf("\nInforme o valor de referencia: ");
    scanf("%d", &valorReferencia);

    for (i=0; i<MAX_LINHAS; i++) {

        for (j=0; j<MAX_COLUNAS; j++) {
            if (matriz[i][j] < valorReferencia) {
                matriz[i][j] = valorReferencia;
            }
        }

    }

    printf("\nMatriz Resultado:\n");

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("\t%d", matriz[i][j]);
        }

    }

    printf("\n");

    return 0;
}