/* Fazer um programa C que calcule a média móvel. O programa deverá executar um laço de leitura de valores inteiros e positivos; 
a introdução de valores negativos servirá como indicador de término do programa. Para cada valor fornecido deverá ser 
impressa a média calculada. A média móvel é efetuada sobre um número especificado de pontos. Quando se introduz um novo dado, 
descarta-se o valor mais antigo dando-se lugar à nova introdução. Este esquema de substituição faz da média móvel um instrumento 
valioso na análise de tendências. Quanto menor o número de dados, mais sensível será com relação à média. 
Considerar para a solução deste problema 5 pontos (valores).
 */

#include <stdio.h>

#define MAX_PONTOS 5

int main() {

    int i, valor, soma;
    float media;
    int pontos[MAX_PONTOS] = {};

    printf("\nCalculo media movel!\n");

    do {
        
        soma = 0;
        media = 0;

        printf("\nDigite um numero inteiro positivo (ou um numero negativo para sair): ");
        scanf("%d", &valor);

        if (valor >= 0) {

            for (i=0; i<(MAX_PONTOS-1); i++) {
                pontos[i] = pontos[i+1];
                soma += pontos[i];
            }

            pontos[MAX_PONTOS-1] = valor;
            soma += valor;

            media = (float) soma/MAX_PONTOS;

            printf("media movel: %.2f\n", media);

            for (i=0; i<MAX_PONTOS; i++) {
                printf("  %d", pontos[i]);
            }

            printf("\n");
            
        }

    } while (valor >= 0);
    

    return 0;
}