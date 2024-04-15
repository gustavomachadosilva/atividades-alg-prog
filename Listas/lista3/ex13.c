/* Uma confecção fabrica os produtos da tabela abaixo, identificados pelo seu código e com o preço correspondente:
Faça um programa que processe diversos pedidos feitos a esta confecção. Em cada pedido serão especificados os produtos pedidos, 
identificados através de seu código, e a quantidade pedida de cada produto. O programa deverá calcular o total 
a pagar de cada pedido. No final dos pedidos, o programa deverá fornecer um relatório de vendas, com as seguintes informações:
a) número de unidades vendidadas de cada produto;
b) total de unidades vendidas no período;
c) total vendido em reais;
d) valor médio de pedido(em reais);e
e) número de pedidos processados.
 */

#include <stdio.h>

#define COD_CAMISETA_BRANCA 1
#define COD_CAMISETA_COLORIDA 2
#define COD_MOLETOM 3
#define COD_CALCA 4
#define COD_ABRIGO 5
#define COD_BONE 6
#define COD_SAIR 0

#define PRECO_CAMISETA_BRANCA 7.00
#define PRECO_CAMISETA_COLORIDA 9.00
#define PRECO_MOLETOM 17.00
#define PRECO_CALCA 12.00
#define PRECO_ABRIGO 25.00
#define PRECO_BONE 5.00

int main() {

    int codigo, quantidade, pedidos, vendasTotal;
    int vendasCamisetaBranca, vendasCamisetaColorida, vendasMoletom, vendasCalca, vendasAbrigo, vendasBone;
    float valor, valorTotal, media;

    vendasCamisetaBranca = 0;
    vendasCamisetaColorida = 0;
    vendasMoletom = 0;
    vendasCalca = 0;
    vendasAbrigo = 0;
    vendasBone = 0;
    valorTotal = 0;
    pedidos = 0;

    printf("\nCatalogo:\n");
    printf("------------------------------------------------\n");
    printf("CODIGO -      PRODUTO      - PRECO UNITARIO (R$)\n");
    printf("------------------------------------------------\n");
    printf("   1   -  camiseta branca  -         7,00       \n");
    printf("   2   - camiseta colorida -         9,00\n");
    printf("   3   -      moletom      -        17,00\n");
    printf("   4   -  calça comprida   -        12,00\n");
    printf("   5   -      abrigo       -        25,00\n");
    printf("   6   -       bone        -         5,00\n");
    printf("------------------------------------------------\n");

    do {

        printf("\nInforme o codigo do produto desejado ou 0 para sair: ");
        scanf("%d", &codigo);

        if (codigo != COD_SAIR) {
            printf("Informe a quantidade desejada do produto: ");
            scanf("%d", &quantidade);

            switch (codigo) {
                case COD_CAMISETA_BRANCA:
                    vendasCamisetaBranca += quantidade;
                    valor = quantidade * PRECO_CAMISETA_BRANCA;
                    break;
                case COD_CAMISETA_COLORIDA:
                    vendasCamisetaColorida += quantidade;
                    valor = quantidade * PRECO_CAMISETA_COLORIDA;
                    break;
                case COD_MOLETOM:
                    vendasMoletom += quantidade;
                    valor = quantidade * PRECO_MOLETOM;
                    break;
                case COD_CALCA:
                    vendasCalca += quantidade;
                    valor = quantidade * PRECO_CALCA;
                    break;
                case COD_ABRIGO:
                    vendasAbrigo += quantidade;
                    valor = quantidade * PRECO_ABRIGO;
                    break;
                case COD_BONE:
                    vendasBone += quantidade;
                    valor = quantidade * PRECO_BONE;
                    break;
                default:
                    printf("Codigo invalido!\n");
                    valor = 0;
                    pedidos--;
            }

            printf("O valor do pedido eh de R$ %.2f", valor);

            valorTotal += valor;
            pedidos++;
        }
    } while (codigo != COD_SAIR);

    printf("\nTotal de unidades vendidas por produto:\n");
    printf("Camiseta branca: %d\n", vendasCamisetaBranca);
    printf("Camiseta colorida: %d\n", vendasCamisetaColorida);
    printf("Moletom: %d\n", vendasMoletom);
    printf("Calca comprida: %d\n", vendasCalca);
    printf("Abrigo: %d\n", vendasAbrigo);
    printf("Bone: %d\n", vendasBone);

    vendasTotal = vendasCamisetaBranca+vendasCamisetaColorida+vendasMoletom+vendasCalca+vendasAbrigo+vendasBone;
    printf("\nForam vendidas ao total %d unidades no periodo.\n", vendasTotal);

    printf("Foram processado %d pedidos.\n", pedidos);
    printf("Valor total vendido foi de R$ %.2f\n", valorTotal);

    media = valorTotal / pedidos;
    printf("O valor medio por pedido foi de R$ %.2f\n", media);

    return 0;
}