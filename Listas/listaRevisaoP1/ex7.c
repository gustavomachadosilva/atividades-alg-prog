/* Uma empresa comercial possui um programa para controle de estoques que usa, para guardar informações, dois arranjos:

a) uma matriz bidimensional ESTOQUE na qual a primeira dimensão corresponde aos 50 produtos vendidos na empresa e 
a segunda dimensão, às 4 lojas da empresa;
b) um vetor ESTOQUE_TOTAL onde são armazenados os totais em estoque de cada produto no conjunto das 4 lojas.

Faça um programa que:

a) preencha a matriz ESTOQUE por leitura;
b) atualize o vetor ESTOQUE_TOTAL a partir dos dados da matriz;
c) emita um relatório com os códigos (iguais aos índices) dos produtos que apresentam estoque inferior a 10 unidades 
em qualquer uma das lojas, indicando também em qual a loja. */

#include<stdio.h>

#define MAX_PRODUTOS 4
#define MAX_LOJAS 3
#define LIMITE_MINIMO_ESTOQUE 10

#define TRUE 1
#define FALSE 0

int main() {

    int i, j;
    int possuiProdutosComEstoqueBaixo = FALSE;
    int estoque[MAX_PRODUTOS][MAX_LOJAS];
    int estoqueTotal[MAX_PRODUTOS] = {};

    for (i=0; i<MAX_PRODUTOS; i++) {

        printf("\n");

        for (j=0; j<MAX_LOJAS; j++) {

            printf("Informe a quantidade em estoque do produto %d na loja %d: ", i+1, j+1);
            scanf("%d", &estoque[i][j]);

            estoqueTotal[i] += estoque[i][j];

        }

    }


    printf("\nEstoque total por produto:\n");
    for (i=0; i<MAX_PRODUTOS; i++) {
        printf("Produto %d: %d\n", i+1, estoqueTotal[i]);
    }

    printf("\nProdutos com estoque baixo:\n");

    for (i=0; i<MAX_PRODUTOS; i++) {
        for (j=0; j<MAX_LOJAS; j++) {
            if (estoque[i][j] < LIMITE_MINIMO_ESTOQUE) {
                printf("O produto %d apresenta estoque inferior a 10 na loja %d!\n", i+1, j+1);
                possuiProdutosComEstoqueBaixo = TRUE;
            }
        }
    }

    if (possuiProdutosComEstoqueBaixo == FALSE) {
        printf("Não existem produtos com estoque baixo!\n");
    }

    return 0;
}