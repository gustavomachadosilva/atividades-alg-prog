/* Construa um programa que receba os códigos (inteiro) de 5 produtos de uma loja e o preço unitário de cada um deles (em reais). 
O programa deverá informar, com mensagens explicativas:
a) o código dos produtos cujo preço é superior a 20 reais;
b) o código e o preço correspondente dos produtos cujo preço é inferior a 10 reais; 
c) o preço médio dos produtos;
d) o número de produtos com preço inferior à média.
 */

#include <stdio.h>

int main() {

    int codigoProduto1, codigoProduto2, codigoProduto3, codigoProduto4, codigoProduto5;
    int quantidadeProdutosAbaixoMedia;
    float precoProduto1, precoProduto2, precoProduto3, precoProduto4, precoProduto5;
    float precoMedioProdutos;

    printf("\nInforme o codigo e preco de 5 produtos:\n");
    printf("\nCodigo produto 1: ");
    scanf("%d", &codigoProduto1);
    printf("Preco produto 1: ");
    scanf("%f", &precoProduto1);

    printf("\nCodigo produto 2: ");
    scanf("%d", &codigoProduto2);
    printf("Preco produto 2: ");
    scanf("%f", &precoProduto2);

    printf("\nCodigo produto 3: ");
    scanf("%d", &codigoProduto3);
    printf("Preco produto 3: ");
    scanf("%f", &precoProduto3);

    printf("\nCodigo produto 4: ");
    scanf("%d", &codigoProduto4);
    printf("Preco produto 4: ");
    scanf("%f", &precoProduto4);

    printf("\nCodigo produto 5: ");
    scanf("%d", &codigoProduto5);
    printf("Preco produto 5: ");
    scanf("%f", &precoProduto5);


    printf("\nOs seguintes produtos tem preco superior a 20 reais: ");
    
    if (precoProduto1 > 20)
        printf("\n%d", codigoProduto1);
    if (precoProduto2 > 20)
        printf("\n%d", codigoProduto2);
    if (precoProduto3 > 20)
        printf("\n%d", codigoProduto3);
    if (precoProduto4 > 20)
        printf("\n%d", codigoProduto4);
    if (precoProduto5 > 20)
        printf("\n%d", codigoProduto5);

    printf("\n\nOs seguintes produtos tem preco inferior a 10 reais: ");
    
    if (precoProduto1 < 10)
        printf("\n%d (R$ %.2f)", codigoProduto1, precoProduto1);
    if (precoProduto2 < 10)
        printf("\n%d (R$ %.2f)", codigoProduto2, precoProduto2);
    if (precoProduto3 < 10)
        printf("\n%d (R$ %.2f)", codigoProduto3, precoProduto3);
    if (precoProduto4 < 10)
        printf("\n%d (R$ %.2f)", codigoProduto4, precoProduto4);
    if (precoProduto5 < 10)
        printf("\n%d (R$ %.2f)", codigoProduto5, precoProduto5);
    
    precoMedioProdutos = (precoProduto1+precoProduto2+precoProduto3+precoProduto4+precoProduto5)/5;
    printf("\n\nO preco medio dos produtos eh R$ %.2f\n", precoMedioProdutos);

    quantidadeProdutosAbaixoMedia = 0;

    if (precoProduto1 < precoMedioProdutos)
        quantidadeProdutosAbaixoMedia++;
    if (precoProduto2 < precoMedioProdutos)
        quantidadeProdutosAbaixoMedia++;
    if (precoProduto3 < precoMedioProdutos)
        quantidadeProdutosAbaixoMedia++;
    if (precoProduto4 < precoMedioProdutos)
        quantidadeProdutosAbaixoMedia++;
    if (precoProduto5 < precoMedioProdutos)
        quantidadeProdutosAbaixoMedia++;

    printf("A quantidade de produtos com o preco abaixo da media eh %d\n", quantidadeProdutosAbaixoMedia);


    return 0;
}
