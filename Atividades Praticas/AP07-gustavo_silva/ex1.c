#include <stdio.h>
#include <math.h>

#define N 3

int main() {

    int i, j;
    int somatorio;
    float norma;
    int matriz[N][N];

    somatorio = 0;

    for (i=0; i<N; i++) {

        for (j=0; j<N; j++) {
            printf("Digite o elemento da posicao (%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            somatorio += pow(matriz[i][j], 2);
        }
    }

    norma = sqrt(somatorio);

    printf("O traco da matriz eh: %.2f\n", norma);

    return 0;
}