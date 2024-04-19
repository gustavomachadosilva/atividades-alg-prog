/* [Pascal Estruturado - H. Farrer et al.] Um aço é classificado de acordo com o resultado de três testes, 
que devem verificar se o mesmo satisfaz às seguintes especificações:
Teste 1 - conteúdo de carbono abaixo de 7%;
Teste 2 - dureza Rokwell maior que 50;
Teste 3 - resistência à tração maior do que 80.000 psi.
Ao aço é atribuído o grau 10, se passa pelos três testes; 9, se passa apenas nos testes 1 e 2; 8, se passa no teste 1; e 7, 
se não passou nos três testes. Lidas as informações de amostras: número da amostra, conteúdo de carbono (em %), 
a dureza Rokwell e a resistência à tração (em psi) - fazer um programa que dê a classificação de uma amostra até que o 
número de amostra fornecido seja negativo.
Escrever para cada amostra: número da amostra e grau obtido. */

#include <stdio.h>

#define LIMITE_CONTEUDO_CARBONO 7
#define LIMITE_DUREZA_ROCWELL 50
#define LIMITE_RESISTENCIA_TRACAO 80000

int main() {

    int numeroAmostra, conteudoCarbono, durezaRokwell, resistenciaTracao, grau;

    printf("\nClassificador de aco!\n");

    do {

        printf("\nInforme o numero da amostra ou -1 para sair: ");
        scanf("%d", &numeroAmostra);

        if (numeroAmostra >= 0) {
            printf("Informe o conteudo de carbono em %%: ");
            scanf("%d", &conteudoCarbono);
            printf("Informe a dureza Rokwell: ");
            scanf("%d", &durezaRokwell);
            printf("Informe a resistencia a tracao em psi: ");
            scanf("%d", &resistenciaTracao);

            if (conteudoCarbono < LIMITE_CONTEUDO_CARBONO && durezaRokwell > LIMITE_DUREZA_ROCWELL && resistenciaTracao > LIMITE_RESISTENCIA_TRACAO) {
                grau = 10;
            }
            else if (conteudoCarbono < LIMITE_CONTEUDO_CARBONO && durezaRokwell > LIMITE_DUREZA_ROCWELL) {
                grau = 9;
            }
            else if (conteudoCarbono < LIMITE_CONTEUDO_CARBONO) {
                grau = 8;
            }
            else {
                grau = 7;
            }

            printf("Numero da amostra: %d\n", numeroAmostra);
            printf("grau obtido: %d\n", grau);
            
        }

    } while (numeroAmostra >= 0);

    return 0;
}