/* Uma empresa vende 30 artigos. Cada artigo é identificado por um código e os artigos possuem preços variados. 
Usando variáveis indexadas para armazenar estas informações, determine:
a) o código e o preço dos três artigos mais caros;
b) média dos preços destes artigos;
c) quais os códigos dos artigos com preço superior à média. */

#include <stdio.h>

#define MAX_ARTIGOS 30

int main() {

    int i, indicePrimeiroMaisCaro, indiceSegundoMaisCaro, indiceTerceiroMaisCaro;
    float somaPrecos, mediaPrecos;
    int codigosArtigos[MAX_ARTIGOS];
    float precosArtigos[MAX_ARTIGOS];

    somaPrecos = 0;
    indicePrimeiroMaisCaro = 0;
    indiceSegundoMaisCaro = 0;
    indiceTerceiroMaisCaro = 0;

    printf("\nCadastro de artigos:\n");

    for (i=0; i<MAX_ARTIGOS; i++) {
        printf("\nInforme o codigo do artigo: ");
        scanf("%d", &codigosArtigos[i]);
        printf("Informe o preco do artigo: ");
        scanf("%f", &precosArtigos[i]);

        somaPrecos += precosArtigos[i];

        if (precosArtigos[i] > precosArtigos[indicePrimeiroMaisCaro]) {
            indiceTerceiroMaisCaro = indiceSegundoMaisCaro;
            indiceSegundoMaisCaro = indicePrimeiroMaisCaro;
            indicePrimeiroMaisCaro = i;
        }
        else if (precosArtigos[i] > precosArtigos[indiceSegundoMaisCaro]) {
            indiceTerceiroMaisCaro = indiceSegundoMaisCaro;
            indiceSegundoMaisCaro = i;
        }
        else if (precosArtigos[i] > precosArtigos[indiceTerceiroMaisCaro]) {
            indiceTerceiroMaisCaro = i;
        }
    }

    printf("\nArtigos mais caros:\n");
    printf("1°) Codigo: %d - Preco: R$ %.2f\n", codigosArtigos[indicePrimeiroMaisCaro], precosArtigos[indicePrimeiroMaisCaro]);
    printf("2°) Codigo: %d - Preco: R$ %.2f\n", codigosArtigos[indiceSegundoMaisCaro], precosArtigos[indiceSegundoMaisCaro]);
    printf("3°) Codigo: %d - Preco: R$ %.2f\n", codigosArtigos[indiceTerceiroMaisCaro], precosArtigos[indiceTerceiroMaisCaro]);

    mediaPrecos = (float) somaPrecos/MAX_ARTIGOS;
    printf("\nMedia dos precos dos artigos: R$ %.2f\n", mediaPrecos);

    printf("\nArtigos com preco superior a media:\n");
    for (i=0; i<MAX_ARTIGOS; i++) {
        if (precosArtigos[i] > mediaPrecos) {
            printf("Codigo: %d\n", codigosArtigos[i]);
        }
    }



    return 0;
}