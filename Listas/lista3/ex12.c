/* Uma sorveteria vende 5 produtos diferentes, cada um com um preço, de acordo com a tabela abaixo
O programa deverá apresentar um menu indicando os preços dos produtos. Cada venda efetuada pode ser composta por 
diversas unidades de diversos produtos, e cada produto é identificado através de seu código. 
O programa deve efetuar diversas vendas, informando o preço a pagar em cada uma delas, e parando quando o usuário 
inserir o código S (Sair). No final do dia o programa deverá emitir um relatório com as seguintes informações:
a) número total de itens vendidos em cada produto;
b) total pago para cada produto;
c) total arrecadado (somando todos os produtos); e
d) média de valor pago por pedido. */

#include <stdio.h>

#define PRECO_A 0.60
#define PRECO_B 1.00
#define PRECO_C 1.20
#define PRECO_D 1.50
#define PRECO_E 2.00

int main() {

    char item;
    int quantidade, vendasA, vendasB, vendasC, vendasD, vendasE, pedidos;
    float valor, valorA, valorB, valorC, valorD, valorE, valorTotal, media;

    vendasA = 0;
    vendasB = 0;
    vendasC = 0;
    vendasD = 0;
    vendasE = 0;
    pedidos = 0;
    valorA = 0;
    valorB = 0;
    valorC = 0;
    valorD = 0;
    valorE = 0;
    valorTotal = 0;

    printf("Cardapio:\n\n");
    printf("Codigo -      Produto      - Preco (R$)\n");
    printf("---------------------------------------\n");
    printf("   A   -   refrigerante    -    0,60   \n");
    printf("   B   - casquinha simples -    1,00\n");
    printf("   C   -  casquinha dupla  -    1,20\n");
    printf("   D   -       sundae      -    1,50\n");
    printf("   E   -   banana split    -    2,00\n");
    printf("---------------------------------------\n");

    do {
        printf("\nInforme o codigo do item desejado ou S para sair: ");
        scanf(" %c", &item);

        if (item != 'S') {
            printf("Informe a quantidade desejada: ");
            scanf("%d", &quantidade);

            switch (item) {
                case 'A':
                    valor = quantidade * PRECO_A;
                    vendasA += quantidade;
                    valorA += valor;
                    break;
                case 'B':
                    valor = quantidade * PRECO_B;
                    vendasB += quantidade;
                    valorB += valor;
                    break;
                case 'C':
                    valor = quantidade * PRECO_C;
                    vendasC += quantidade;
                    valorC += valor;
                    break;
                case 'D':
                    valor = quantidade * PRECO_D;
                    vendasD += quantidade;
                    valorD += valor;
                    break;
                case 'E':
                    valor = quantidade * PRECO_E;
                    vendasE += quantidade;
                    valorE += valor;
                    break;
                case 'S':
                    break;
                default:
                    printf("Comando nao valido!\n");
            }

            printf("O valor eh de R$ %.2f\n", valor);

            pedidos++;
            valorTotal += valor;
        }

    } while (item != 'S');

    printf("\nVenda fechada!\n");

    printf("Total de itens produto A vendidos: %d\n", vendasA);
    printf("Valor total pago produto A: %.2f\n", valorA);
    printf("Total de itens produto B vendidos: %d\n", vendasB);
    printf("Valor total pago produto B: %.2f\n", valorB);
    printf("Total de itens produto C vendidos: %d\n", vendasC);
    printf("Valor total pago produto C: %.2f\n", valorC);
    printf("Total de itens produto D vendidos: %d\n", vendasD);
    printf("Valor total pago produto D: %.2f\n", valorD);
    printf("Total de itens produto E vendidos: %d\n", vendasE);
    printf("Valor total pago produto E: %.2f\n", valorE);

    printf("\nValor total arrecadado nas vendas foi de R$ %.2f\n", valorTotal);

    media = valorTotal / pedidos;

    printf("A media do valor pago por pedido foi de R$ %.2f\n", media);

    return 0;
}