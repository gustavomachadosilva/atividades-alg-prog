/* Uma empresa comercial possui um programa para controle de estoques que usa, para guardar informações, dois arranjos:

a) uma matriz bidimensional ESTOQUE na qual a primeira dimensão corresponde aos 50 produtos vendidos na empresa e 
a segunda dimensão, às 4 lojas da empresa;
b) um vetor ESTOQUE_TOTAL onde são armazenados os totais em estoque de cada produto no conjunto das 4 lojas.

Faça um programa que:
a) preencha a matriz ESTOQUE por leitura;
b) atualize o vetor ESTOQUE_TOTAL a partir dos dados da matriz;
c) emita um relatório com os códigos (iguais aos índices) dos produtos que apresentam estoque inferior a 10 unidades 
em qualquer uma das lojas, indicando também em qual a loja. */

#include <stdio.h>

#define MAX_PRODUTOS 3
#define MAX_LOJAS 2
#define LIMITE_UNIDADES 10

int main() {

    int i, j;
    int estoque[MAX_PRODUTOS][MAX_LOJAS];
    int estoqueTotal[MAX_LOJAS] = {};

    printf("\nPreenchendo o estoque:\n");
    for (i=0; i<MAX_PRODUTOS; i++) {

        printf("\n");

        for (j=0; j<MAX_LOJAS; j++) {
            printf("Quantidade de produtos %d da loja %d: ", i+1, j+1);
            scanf("%d", &estoque[i][j]);
        }
    }

    printf("\nEstoque total lojas:\n");
    for (i=0; i<MAX_LOJAS; i++) {
        for (j=0; j<MAX_PRODUTOS; j++) {
            estoqueTotal[i] += estoque[j][i];
        }
        printf("Loja %d: %d\n", i+1, estoqueTotal[i]);
    }

    printf("\nProdutos com menos de %d unidades:\n", LIMITE_UNIDADES);
    for (i=0; i<MAX_PRODUTOS; i++) {
        for (j=0; j<MAX_LOJAS; j++) {
            if (estoque[i][j] < LIMITE_UNIDADES) {
                printf("Produto %d na loja %d\n", i+1, j+1);
            }
        }
    }



    return 0;
}