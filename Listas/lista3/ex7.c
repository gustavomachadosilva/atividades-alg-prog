/* Uma fábrica tem 5 representantes. Cada um recebe uma comissão calculada a partir do número de itens de um pedido, 
segundo os seguintes critérios:
a) para mais de 20 itens vendidos, a comissão é de 10% do valor total do pedido; 
b) para pedidos de 20 e 49 itens, acomissão é de 15% do valor total do pedido; 
c) para pedidos de 50 a 74 itens, a comissão é de 20% do valor total do pedido; e 
d) parapedidosiguaisousuperiores,a75itensacomissãoéde25%.

Faça um programa que processe um número fixo de pedidos (informado pelo usuário). 
Para cada pedido o programa deve ler o código do representante (1 a 5) e o total de itens do pedido. O programa deve informar:
- o valor da comissão de cada pedido;
- o total de vendas dos pedidos processados;
- o total de comissões para cada representante; e
- o total de comissões que a companhia pagou aos seus representantes. */

#include <stdio.h>

int main() {

    int numeroPedidos, i, codigoRepresentante, totalVendas, itensPedido;
    float comissaoRepresentante1, comissaoRepresentante2, comissaoRepresentante3, comissaoRepresentante4, comissaoRepresentante5;
    float comissao, valorPedido, totalComissoes, totalValor;

    comissaoRepresentante1 = 0;
    comissaoRepresentante2 = 0;
    comissaoRepresentante3 = 0;
    comissaoRepresentante4 = 0;
    comissaoRepresentante5 = 0;
    totalVendas = 0;
    totalValor = 0;
    totalComissoes = 0;

    printf("Informe o numero de pedidos que deseja cadastrar: ");
    scanf("%d", &numeroPedidos);

    for  (i = 0; i < numeroPedidos; i++) {
        printf("\nInforme o codigo do representante (1 a 5): ");
        scanf("%d", &codigoRepresentante);
        printf("Informe o total de itens do pedido: ");
        scanf("%d", &itensPedido);
        printf("Informe o valor total do pedido (R$): ");
        scanf("%f", &valorPedido);

        if (itensPedido < 20) {
            comissao = valorPedido * 0.1;
        }
        else if (itensPedido >= 20 && itensPedido < 50) {
            comissao = valorPedido * 0.15;
        }
        else if (itensPedido >= 50 && itensPedido < 75) {
            comissao = valorPedido * 0.2;
        }
        else {
            comissao = valorPedido * 0.25;
        }

        printf("Comissao do pedido: R$ %.2f\n", comissao);

        switch (codigoRepresentante) {
            case 1:
                comissaoRepresentante1 += comissao;
                break;
            case 2:
                comissaoRepresentante2 += comissao;
                break;
            case 3:
                comissaoRepresentante3 += comissao;
                break;
            case 4:
                comissaoRepresentante4 += comissao;
                break;
            case 5:
                comissaoRepresentante5 += comissao;
                break;
            default:
                printf("Nao foi possivel identificar o codigo do representante do pedido.\n");
        }

        totalVendas += itensPedido;
        totalValor += valorPedido;
        totalComissoes += comissao;

    }

    printf("\nPedidos fechados!\n");
    printf("Total de itens vendidos: %d\n", totalVendas);
    printf("Valor total dos pedidos: R$ %.2f\n", totalValor);
    printf("Total de comissao paga aos representantes: R$ %.2f\n", totalComissoes);

    printf("\nComissao representante 1: R$ %.2f\n", comissaoRepresentante1);
    printf("Comissao representante 2: R$ %.2f\n", comissaoRepresentante2);
    printf("Comissao representante 3: R$ %.2f\n", comissaoRepresentante3);
    printf("Comissao representante 4: R$ %.2f\n", comissaoRepresentante4);
    printf("Comissao representante 5: R$ %.2f\n", comissaoRepresentante5);
    

    return 0;
}