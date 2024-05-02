/* Você precisa desenvolver um programa que permite o controle e a análise do estoque de um supermercado. 
Este programa utiliza duas matrizes, quantidades e preços, que armazenam, respectivamente as quantidades vendidas 
e os preços de cada produto, em cada dia da semana. Este programa também utiliza um vetor para armazenar os códigos 
de cada produto. Faça um algoritmo que lês as duas matrizes (quantidades e preços), de 4X7 (4 produtos, 7 dias). A seguir, 
o programa deve criar uma nova matriz total, de 4X7, que armazena o total vendido para cada produto em cada dia da semana. 
O programa também deve determinar qual o código do produto que teve o maior total de vendas entre todos. 
Se mais de um produto tiver o mesmo total máximo, basta informar qualquer um deles. */

#include <stdio.h>
#include <math.h>

#define MAX_PRODUTOS 4
#define DIAS_SEMANAS 3

int main() {

    int i, j;
    int infinito, codigoMaiorValor;
    float maiorValor, somaValores;
    int quantidadeProdutosVendidosSemana[MAX_PRODUTOS][DIAS_SEMANAS];
    float precoProdutosVendidosSemana[MAX_PRODUTOS][DIAS_SEMANAS];
    float totalValorProdutosVendidosSemana[MAX_PRODUTOS][DIAS_SEMANAS];
    int codigosProdutos[MAX_PRODUTOS];

    infinito = INFINITY;
    maiorValor = (float) infinito * -1;

    printf("\n");

    for (i=0; i<MAX_PRODUTOS; i++) {
        printf("Informe o codigo do %d° produto: ", i+1);
        scanf("%d", &codigosProdutos[i]);
    }

    for (i=0; i<MAX_PRODUTOS; i++) {

        printf("\n");

        for (j=0; j<DIAS_SEMANAS; j++) {
            printf("Informe a quantidade de vendas do produto %d no %d° dia da semana: ", codigosProdutos[i], j+1);
            scanf("%d", &quantidadeProdutosVendidosSemana[i][j]);
            printf("Informe o preco do produto %d no %d° dia da semana: ", codigosProdutos[i], j+1);
            scanf("%f", &precoProdutosVendidosSemana[i][j]);

            totalValorProdutosVendidosSemana[i][j] = (float) quantidadeProdutosVendidosSemana[i][j] * precoProdutosVendidosSemana[i][j];

        }

    }

    for (i=0; i<MAX_PRODUTOS; i++) {

        somaValores = 0;

        for (j=0; j<DIAS_SEMANAS; j++) {
            somaValores += totalValorProdutosVendidosSemana[i][j];
        }

        if (somaValores > maiorValor) {
            maiorValor = somaValores;
            codigoMaiorValor = codigosProdutos[i];
        }

    }

    printf("\nMatriz Valor Total:\n");

    for (i=0; i<MAX_PRODUTOS; i++) {

        printf("\nProduto %2d:", codigosProdutos[i]);

        for (j=0; j<DIAS_SEMANAS; j++) {
            printf("  %.2f", totalValorProdutosVendidosSemana[i][j]);
        }

    }

    printf("\n\nO produto que teve a melhor venda foi o %d\n", codigoMaiorValor);

    return 0;
}