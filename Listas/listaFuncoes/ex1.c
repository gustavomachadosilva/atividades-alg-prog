/* Uma loja mantém o controle de estoques de suas mercadorias, armazenando os seguintes dados:

• um vetor com o número de itens em estoque de cada mercadoria, correspondendo o índice do vetor ao código da mercadoria;
• uma matriz com a previsão de venda de suas mercadorias por mês, correspondendo cada linha da matriz a uma mercadoria 
(código = índice da linha + 1) e cada coluna associada ao número correspondente ao mês (12 colunas).

Supondo que a loja apresente 5 diferentes mercadorias, faça um programa que atende a consultas sobre até que mês determinadas 
mercadorias apresentam estoque suficiente. O programa deverá utilizar uma função tipada mes(...), que recebe como parâmetros 
a matriz, o vetor e o código da mercadoria a ser pesquisada e devolve ao programa que a acionou o número do último mês com 
estoque suficiente. O número de mercadorias pesquisado pelo programa deverá ficar a critério do usuário do programa. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_MERCADORIAS 5
#define MAX_MESES 12

void solicitaEstoqueMercadorias(int *ptr);
void geraPrevisaoVendasPorMes(int *ptr);
void solicitaCodigoMercadoria(int *ptr);
void apresentaPrevisaoVendasMes (int previsaoVendasMes[MAX_MERCADORIAS][MAX_MESES]);
void confereDuracaoEstoqueMercadoria(int estoque[MAX_MERCADORIAS], int previsaoVendasMes[MAX_MERCADORIAS][MAX_MESES], int codigoMercadoria);

int main() {

    int codigoMercadoria;
    int estoquePorMercadoria[MAX_MERCADORIAS];
    int previsaoVendasPorMes[MAX_MERCADORIAS][MAX_MESES];

    solicitaEstoqueMercadorias(estoquePorMercadoria);
    geraPrevisaoVendasPorMes(&previsaoVendasPorMes[0][0]);
    solicitaCodigoMercadoria(&codigoMercadoria);
    apresentaPrevisaoVendasMes(previsaoVendasPorMes);
    confereDuracaoEstoqueMercadoria(estoquePorMercadoria, previsaoVendasPorMes, codigoMercadoria);

    return 0;
}

void solicitaEstoqueMercadorias(int *ptr) {

    int i;

    printf("\nInforme as quantidades de cada mercadoria presente no estoque:\n");

    for (i=0; i<MAX_MERCADORIAS; i++) {
        printf("Mercadoria %d: ", i+1);
        scanf("%d", ptr+i);
    }

}

void geraPrevisaoVendasPorMes(int *ptr) {

    srand(time(NULL));

    int i, j;

    for (i=0; i<MAX_MERCADORIAS; i++) {
        for (j=0; j<MAX_MESES; j++) {
            *ptr = rand() % 30;
            ptr++;
        }
    }

}

void solicitaCodigoMercadoria(int *ptr) {

    printf("\nInforme o codigo da mercadoria a ser pesquisada: ");
    scanf("%d", ptr);

}

void apresentaPrevisaoVendasMes (int previsaoVendasMes[MAX_MERCADORIAS][MAX_MESES]) {

    int i, j;

    printf("\nPrevisao vendas por mes:\n");

    printf("Mercadoria - JAN - FEV - MAR - ABR - MAI - JUN - JUL - AGO - SET - OUT - NOV - DEZ");
    for (i=0; i<MAX_MERCADORIAS; i++) {
        printf("\n    %02d      ", i+1);
        for (j=0; j<MAX_MESES; j++) {
            printf("  %02d  ", previsaoVendasMes[i][j]);
        }
    }

}

void confereDuracaoEstoqueMercadoria(int estoque[MAX_MERCADORIAS], int previsaoVendasMes[MAX_MERCADORIAS][MAX_MESES], int codigoMercadoria) {

    int i;
    int codigoDePesquisaMercadoria = codigoMercadoria - 1;
    int quantidadeMercadoriaEstoque = estoque[codigoDePesquisaMercadoria];

    i = 0;
    while (quantidadeMercadoriaEstoque > 0 && i < MAX_MESES) {
        quantidadeMercadoriaEstoque -= previsaoVendasMes[codigoDePesquisaMercadoria][i];
    }

    printf("\n\nA mercadoria tem estoque ateh o mes %d\n", i + 1);

}
