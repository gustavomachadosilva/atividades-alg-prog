#include <stdio.h>
#include <math.h>

#define MAX 4
#define MAX_CHAR 20
#define COLUNAS_RESULTADOS 4

#define COLUNA_VITORIAS 0
#define COLUNA_EMPATES 1
#define COLUNA_DERROTAS 2
#define COLUNA_PONTUACAO 3

#define PONTOS_POR_VITORIA 3
#define PONTOS_POR_EMPATE 1

int main() {

    int i, j;
    int pontuacaoCampeao, pontuacaoViceCampeao, infinito, indiceCampeao, indiceViceCampeao;
    char nomesClubes[MAX][MAX_CHAR];
    int resultadosClubes[MAX][COLUNAS_RESULTADOS];

    infinito = INFINITY;
    pontuacaoCampeao = infinito * -1;
    pontuacaoViceCampeao = infinito * -1;
    indiceCampeao = 0;
    indiceViceCampeao = 0;

    for (i=0; i<MAX; i++) {

        printf("\n");

        printf("Digite o nome do clube: ");
        gets(nomesClubes[i]);
        printf("Digite o numero de vitorias do clube %d: ", i+1);
        scanf("%d", &resultadosClubes[i][COLUNA_VITORIAS]);
        printf("Digite o numero de empates do clube %d: ", i+1);
        scanf("%d", &resultadosClubes[i][COLUNA_EMPATES]);
        printf("Digite o numero de derrotas do clube %d: ", i+1);
        scanf("%d", &resultadosClubes[i][COLUNA_DERROTAS]);
        getchar();

        resultadosClubes[i][COLUNA_PONTUACAO] = (PONTOS_POR_VITORIA * resultadosClubes[i][COLUNA_VITORIAS]) + (PONTOS_POR_EMPATE * resultadosClubes[i][COLUNA_EMPATES]);

        if (resultadosClubes[i][COLUNA_PONTUACAO] > pontuacaoCampeao) {
            pontuacaoViceCampeao = pontuacaoCampeao;
            indiceViceCampeao = indiceCampeao;
            pontuacaoCampeao = resultadosClubes[i][COLUNA_PONTUACAO];
            indiceCampeao = i;
        }
        else if ((resultadosClubes[i][COLUNA_PONTUACAO] > pontuacaoViceCampeao && resultadosClubes[i][COLUNA_PONTUACAO] < pontuacaoCampeao) || (indiceCampeao == indiceViceCampeao)) {
            pontuacaoViceCampeao = resultadosClubes[i][COLUNA_PONTUACAO];
            indiceViceCampeao = i;
        }

    }

    if (pontuacaoCampeao > 0) {
        printf("\nO clube campeao foi: %s\n", nomesClubes[indiceCampeao]);

        if (pontuacaoViceCampeao > 0) {
            printf("O clube vice-campeao foi: %s\n", nomesClubes[indiceViceCampeao]);
        }
    }

    return 0;
}