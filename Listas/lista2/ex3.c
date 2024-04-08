/* Uma loja fornece 5% de desconto para funcionários e 10% de desconto para clientes especiais. 
Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor total da compra efetuada 
e um código que identifique se o comprador é um cliente comum ou um dos dois tipos de clientes que recebem desconto. */

#include <stdio.h>

int main() {

    int codigoIdentificador;
    float valorTotalCompra;

    printf("\n********************\n");
    printf("\nTipos de clientes:\n");
    printf("\n1 - Cliente normal\n");
    printf("2 - Funcionário\n");
    printf("3 - Cliente especial\n");
    printf("\n********************\n");

    printf("\nInforme o valor total da compra: ");
    scanf("%f", &valorTotalCompra);
    printf("Informe o tipo de cliente: ");
    scanf("%d", &codigoIdentificador);

    switch (codigoIdentificador) {
        case 1:
            printf("\nO valor total da compra eh de R$ %.2f\n", valorTotalCompra);
            break;
        case 2:
            valorTotalCompra *= 0.95;
            printf("\nO valor total da compra eh de R$ %.2f\n", valorTotalCompra);
            break;
        case 3:
            valorTotalCompra *= 0.9;
            printf("\nO valor total da compra eh de R$ %.2f\n", valorTotalCompra);
            break;
        default:
            printf("\nTipo de cliente nao encontrado!\n");
    }

    return 0;
}