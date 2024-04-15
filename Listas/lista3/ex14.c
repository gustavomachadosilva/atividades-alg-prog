/* [Algoritmos Estruturados - Farrer] Uma pesquisa sobre algumas características físicas da população de uma determinada 
região coletou os seguintes dados, referentes a cada habitante, para análise:
a) sexo (masculino, feminino);
b) cordosolhos(azuis,verdes,castanhos);
c) cor dos cabelos (louros, castanhos, pretos);
d) idade em anos.
Para cada habitante foi preenchido um cartão com estes dados e o último cartão, que não corresponde a ninguém, 
contém o valor de idade igual a -1. Fazer um programa que determine e escreva:
a) a maior idade dos habitantes;
b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos, inclusive, e que
tenham olhos verdes e cabelos louros. */

#include <stdio.h>

#define SEXO_MASCULINO 1
#define SEXO_FEMININO 2
#define SEXO_OUTRO 3

#define OLHOS_AZUIS 1
#define OLHOS_VERDES 2
#define OLHOS_CASTANHOS 3

#define CABELOS_LOUROS 1
#define CABELOS_CASTANHOS 2
#define CABELOS_PRETOS 3

int main() {

    int sexo, olhos, cabelo, idade, maiorIdade, individuoAlvo, pessoas;
    float relacaoAlvoComPessoas;

    maiorIdade = 0;
    individuoAlvo = 0;
    pessoas = 0;

    do {

        printf("\nCadastro de habitante:\n");
        printf("Informe o seu sexo (1-masculino, 2-feminino, 3-outro): ");
        scanf("%d", &sexo);
        printf("Informe a cor dos seus olhos (1-azuis, 2-verdes, 3-castanhos): ");
        scanf("%d", &olhos);
        printf("Informe a cor do seu cabelo (1-louros, 2-castanhos, 3-pretos): ");
        scanf("%d", &cabelo);
        printf("Informe a sua idade: ");
        scanf(" %d", &idade);

        if (idade >= 0) {

            if (idade > maiorIdade) {
                maiorIdade = idade;
            }

            if (sexo == SEXO_FEMININO && idade >= 18 && idade <= 35 && olhos == OLHOS_VERDES && cabelo == CABELOS_LOUROS) {
                individuoAlvo++;
            }

            pessoas++;
        }

    } while (idade != -1);

    printf("\nA maior idade entre os habitantes eh %d anos.\n", maiorIdade);

    relacaoAlvoComPessoas = (float) (individuoAlvo / pessoas) * 100;
    printf("A porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos, inclusive, e que tenham olhos verdes e cabelos louros eh %.2f%%.\n", relacaoAlvoComPessoas);

    return 0;
}