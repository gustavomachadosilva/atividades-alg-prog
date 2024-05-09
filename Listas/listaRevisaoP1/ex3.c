/* Uma sorveteria vende 3 produtos diferentes, cada um com um preço. Considere os dados da tabela abaixo já armazenados 
em 3 vetores, um deles vetor de strings (ou seja, uma matriz de caracteres). Ofereça ao cliente as opções de compra 
através de um menu com apenas 2 opções: 1 – Compra e 2 – Sai do Programa. Apresente as opções de compra ao usuário num menu, 
leia o código referente a escolha e o número de unidades compradas do produto e imprima o preço total a pagar. 
A cada passagem do laço de interação com o usuário, somente um produto é comprado e apresentado o valor da compra ao usuário. 
Os cálculos para o preço final e as informações apresentadas no menu devem usar as informações armazenadas nos arranjos. */

#include <stdio.h>

#define MAX_OPCOES 3
#define MAX_CARACTERES 50

#define COMPRAR 1
#define SAIR 2

#define TRUE 1
#define FALSE 0

int main() {

    int i;
    int opcao, quantidade, produtoEncontrado, indiceProdutoEncontrado;
    float totalAPagar;
    char codigoProdutoDesejado;
    char codigos[MAX_OPCOES] = {'A', 'B', 'C'};
    char nomesProdutos[MAX_OPCOES][MAX_CARACTERES] = {"refrigerante", "suco de laranja", "casquinha simples"};
    float precosProdutos[MAX_OPCOES] = {1.80, 2.50, 1.00};

    do {

        printf("\nLista de opcoes:\n");
        printf("\n1 - Comprar\n");
        printf("2 - Sair\n");
        printf("\nInforme a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case COMPRAR:
                
                printf("\nLista de produtos:\n");
                printf("\nA - refrigerante - R$ 1,80\n");
                printf("B - suco de laranja - R$ 2,50\n");
                printf("C - casquinha simples - R$ 1,00\n");
                printf("\nInforme o produto desejado: ");
                scanf(" %c", &codigoProdutoDesejado);

                produtoEncontrado = FALSE;
                i = 0;
                while (i<MAX_OPCOES && produtoEncontrado == FALSE) {

                    if (codigoProdutoDesejado == codigos[i]) {
                        produtoEncontrado = TRUE;
                        indiceProdutoEncontrado = i;
                    }

                    i++;
                }

                if (produtoEncontrado == TRUE) {
                    printf("Informe a quantidade desejada: ");
                    scanf("%d", &quantidade);

                    totalAPagar = quantidade * precosProdutos[indiceProdutoEncontrado];
                    printf("\nTotal a pagar: R$ %.2f\n", totalAPagar);
                } 
                else {
                    printf("\nProduto nao encontrado!\n");
                }

                break;
            case SAIR:

                printf("\nEncerrando Servico!\n");

                break;
            default:
                printf("\nOperacao invalida!\n");

        }

    } while (opcao != SAIR);


    return 0;
}