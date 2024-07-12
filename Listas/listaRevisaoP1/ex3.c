/* Uma sorveteria vende 3 produtos diferentes, cada um com um preço. Considere os dados da tabela abaixo já armazenados 
em 3 vetores, um deles vetor de strings (ou seja, uma matriz de caracteres). Ofereça ao cliente as opções de compra através 
de um menu com apenas 2 opções: 1 – Compra e 2 – Sai do Programa. Apresente as opções de compra ao usuário num menu, 
leia o código referente a escolha e o número de unidades compradas do produto e imprima o preço total a pagar. 
A cada passagem do laço de interação com o usuário, somente um produto é comprado e apresentado o valor da compra ao usuário. 
Os cálculos para o preço final e as informações apresentadas no menu devem usar as informações armazenadas nos arranjos. */

#include <stdio.h>

#define OPCAO_COMPRAR 1
#define OPCAO_SAIR 2

#define MAX_OPCOES 3

#define TRUE 1
#define FALSE 0

int main() {

    int i;
    int opcaoAtendimento, quantidadeProduto, compraCorreta;
    char codigoProduto;
    float precoTotal;
    char codigosProdutos[MAX_OPCOES] = {'A', 'B', 'C'};
    float precosProdutos[MAX_OPCOES] = {1.80, 2.50, 1.00};

    printf("\nCatalogo de produtos:\n");
    printf("COD -      PRODUTO      - PRECO (R$)\n");
    printf(" A  -    Refrigerante   -    1.80\n");
    printf(" B  -  Suco de Laranja  -    2.50\n");
    printf(" C  - Casquinha Simples -    1.00\n");

    do {

        printf("\nOpcoes para atendimento:\n");
        printf("1 - Comprar\n");
        printf("2 - Sair\n");
        printf("Informe a opcao desejada: ");
        scanf("%d", &opcaoAtendimento);

        switch (opcaoAtendimento) {
            case OPCAO_COMPRAR:

                printf("\nInforme o codigo do produto desejado: ");
                scanf(" %c", &codigoProduto);
                printf("Informe a quantidade do produto: ");
                scanf("%d", &quantidadeProduto);
                
                compraCorreta = FALSE;
                precoTotal = 0.0;

                i = 0;
                while (i<MAX_OPCOES && compraCorreta == FALSE) {
                    if (codigoProduto == codigosProdutos[i] && quantidadeProduto > 0) {
                        compraCorreta = TRUE;
                        precoTotal = precosProdutos[i] * quantidadeProduto;
                    }
                    i++;
                }

                if (compraCorreta == TRUE) {
                    printf("Total: R$ %.2f\n", precoTotal);
                } else {
                    printf("Compra inválida!\n");
                }

                break;
            case OPCAO_SAIR:
                printf("\nSaindo do sistema.\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcaoAtendimento != OPCAO_SAIR);

    return 0;
}