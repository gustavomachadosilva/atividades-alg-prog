/* Um distribuidor de brinquedos fez um acordo de compra de um lote de brinquedos pequenos embalados em caixas de 
formato retangular de tamanhos variados em função do brinquedo. Ele pretende reembalar estes brinquedos em esferas de plástico 
e revendê-las como pacotes surpresa. As esferas são fornecidas com quatro diâmetros diferentes: 10, 15, 20 e 25 cm. 
Para pedir as esferas ele precisa saber quantas de cada diâmetro necessita. 
Sabendo que a diagonal maior (D) de uma caixa retangular com dimensões A, B, e C é dada por
D^2 = A^2 + B^2 + C^2
determinar o número de esferas, de cada tamanho e total, necessárias para embalar o lote de brinquedos. 
Determine também a quantidade de caixas que possuem diagonal maior que o diâmetro da maior esfera. 
As dimensões das caixas retangulares são lidas através do teclado. Um valor negativo ou nulo para a primeira dimensão 
lida servirá como marca de final de introdução de dados. */

#include <stdio.h>
#include <math.h>

#define DIAMETRO_ESFERA_MENOR 10
#define DIAMETRO_ESFERA_PEQUENA 15
#define DIAMETRO_ESFERA_GRANDE 20
#define DIAMETRO_ESFERA_MAIOR 25

int main() {

    int dimensaoA, dimensaoB, dimensaoC, diametro;
    int quantidadeEsferaMenor, quantidadeEsferaPequena, quantidadeEsferaGrande, quantidadeEsferaMaior, quantidadeTotalEsferas;
    int quantidadeCaixaMuitoGrande;

    quantidadeEsferaMenor = 0;
    quantidadeEsferaPequena = 0;
    quantidadeEsferaGrande = 0;
    quantidadeEsferaMaior = 0;
    quantidadeTotalEsferas = 0;
    quantidadeCaixaMuitoGrande = 0;

    do {

        printf("\nInforme as dimensoes da caixa:\n");
        printf("Dimensao A em cm: ");
        scanf("%d", &dimensaoA);

        if (dimensaoA > 0) {
            printf("Dimensao B em cm: ");
            scanf("%d", &dimensaoB);
            printf("Dimensao C em cm: ");
            scanf("%d", &dimensaoC);

            diametro = sqrt((dimensaoA * dimensaoA) + (dimensaoB * dimensaoB) + (dimensaoC * dimensaoC));

            if (diametro > 0 && diametro <= 10) {
                quantidadeEsferaMenor++;
            }
            else if (diametro > 10 && diametro <= 15) {
                quantidadeEsferaPequena++;
            }
            else if (diametro > 15 && diametro <= 20) {
                quantidadeEsferaGrande++;
            }
            else if (diametro > 20 && diametro <= 25) {
                quantidadeEsferaMaior++;
            }
            else {
                quantidadeCaixaMuitoGrande++;
            }

        }

    } while (dimensaoA > 0);

    quantidadeTotalEsferas = quantidadeEsferaMenor + quantidadeEsferaPequena + quantidadeEsferaGrande + quantidadeEsferaMaior;

    printf("\nQuantidade de esferas necessarias por tamanho:\n");
    printf("Esferas de 10 cm: %d\n", quantidadeEsferaMenor);
    printf("Esferas de 15 cm: %d\n", quantidadeEsferaPequena);
    printf("Esferas de 20 cm: %d\n", quantidadeEsferaGrande);
    printf("Esferas de 25 cm: %d\n", quantidadeEsferaMaior);
    printf("Totalizando %d esferas\n", quantidadeTotalEsferas);

    printf("\n%d caixas necessitam de uma esfera maior que a maior disponivel.\n", quantidadeCaixaMuitoGrande);

    return 0;
}