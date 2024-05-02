/* Façaumprogramaquepreencheumamatriz4X4comvaloresinformadospelo usuário. Depois, o programa deve informar os valores 
maiores que a média (dos valores da matriz), juntamente com a sua posição (linha e coluna).
 */

#include <stdio.h>

#define MAX_LINHAS 2
#define MAX_COLUNAS 2

int main() {

    int i, j;
    int somaValores, numElementos;
    float media;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    somaValores = 0;
    numElementos = MAX_LINHAS * MAX_COLUNAS;

    for (i=0; i<MAX_LINHAS; i++) {

        printf("\n");

        for (j=0; j<MAX_COLUNAS; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            somaValores += matriz[i][j];
        }

    }

    media = (float) somaValores / numElementos;

    printf("\nElementos acima da media:\n");

    for (i=0; i<MAX_LINHAS; i++) {

        for (j=0; j<MAX_COLUNAS; j++) {
            
            if (matriz[i][j] > media) {
                printf("%d\n", matriz[i][j]);
            }

        }

    }

    return 0;
}