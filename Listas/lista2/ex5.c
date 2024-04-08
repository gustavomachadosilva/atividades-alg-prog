/* Construa um programa que receba os códigos (inteiro) de 5 clientes de uma loja e o valor (em reais) 
que cada um destes clientes pagou por sua compra. O programa deverá informar:
a) o valor total pago pelos 5 clientes;
b) o valor da compra média efetuada;
c) o código dos clientes que efetuaram compras superiores a 20 reais; 
d) o número de clientes que efetuaram compras inferiores a 50 reais. */

#include <stdio.h>

int main() {

    int codigoCliente1, codigoCliente2, codigoCliente3, codigoCliente4, codigoCliente5;
    int quantidadeClientesValorInferiorACinquenta;
    float valorCliente1, valorCliente2, valorCliente3, valorCliente4, valorCliente5;
    float valorMedioClientes, valorTotalClientes;

    printf("\nInforme o codigo e valor de 5 Clientes:\n");
    printf("\nCodigo Cliente 1: ");
    scanf("%d", &codigoCliente1);
    printf("valor Cliente 1: ");
    scanf("%f", &valorCliente1);

    printf("\nCodigo Cliente 2: ");
    scanf("%d", &codigoCliente2);
    printf("valor Cliente 2: ");
    scanf("%f", &valorCliente2);

    printf("\nCodigo Cliente 3: ");
    scanf("%d", &codigoCliente3);
    printf("valor Cliente 3: ");
    scanf("%f", &valorCliente3);

    printf("\nCodigo Cliente 4: ");
    scanf("%d", &codigoCliente4);
    printf("valor Cliente 4: ");
    scanf("%f", &valorCliente4);

    printf("\nCodigo Cliente 5: ");
    scanf("%d", &codigoCliente5);
    printf("valor Cliente 5: ");
    scanf("%f", &valorCliente5);


    valorTotalClientes = (valorCliente1+valorCliente2+valorCliente3+valorCliente4+valorCliente5);
    printf("\nO valor total dos clientes eh R$ %.2f", valorTotalClientes);

    valorMedioClientes = (valorCliente1+valorCliente2+valorCliente3+valorCliente4+valorCliente5)/5;
    printf("\n\nO valor medio dos Clientes eh R$ %.2f\n", valorMedioClientes);

    printf("\nOs seguintes Clientes tem valor superior a 20 reais: ");
    
    if (valorCliente1 > 20)
        printf("\n%d", codigoCliente1);
    if (valorCliente2 > 20)
        printf("\n%d", codigoCliente2);
    if (valorCliente3 > 20)
        printf("\n%d", codigoCliente3);
    if (valorCliente4 > 20)
        printf("\n%d", codigoCliente4);
    if (valorCliente5 > 20)
        printf("\n%d", codigoCliente5);

    quantidadeClientesValorInferiorACinquenta = 0;
    
    if (valorCliente1 < 50)
        quantidadeClientesValorInferiorACinquenta++;
    if (valorCliente2 < 50)
        quantidadeClientesValorInferiorACinquenta++;
    if (valorCliente3 < 50)
        quantidadeClientesValorInferiorACinquenta++;
    if (valorCliente4 < 50)
        quantidadeClientesValorInferiorACinquenta++;
    if (valorCliente5 < 50)
        quantidadeClientesValorInferiorACinquenta++;
    
    printf("\n\n%d Clientes tem valor inferior a 50 reais.\n", quantidadeClientesValorInferiorACinquenta);


    return 0;
}
