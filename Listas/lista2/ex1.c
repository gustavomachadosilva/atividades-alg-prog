/* Escreva um programa que informe se existe estoque para atender um pedido feito a uma fábrica. 
O programa deverá receber como entradas o número de itens em estoque e o número de itens a serem fornecidos, 
informando como saída o estoque atualizado ou uma mensagem indicando não haver itens suficientes em estoque para atender ao pedido.
 */

#include <stdio.h>

int main() {

    int itensEstoque, itensPedido;

    printf("Informe a quantidade de itens em estoque: ");
    scanf("%d", &itensEstoque);
    printf("Informe a quantidade de itens do pedido: ");
    scanf("%d", &itensPedido);

    if (itensPedido <= itensEstoque) {
        printf("\n\nPedido Realizado!\n");

        itensEstoque -= itensPedido;
        printf("Estoque atualizado: %d\n", itensEstoque);

    }
    else {
        printf("\n\nO pedido excede o número de itens dispniveis em estoque!\n");
        printf("Estoque atual: %d\n", itensEstoque);
    }
    

    return 0;
}