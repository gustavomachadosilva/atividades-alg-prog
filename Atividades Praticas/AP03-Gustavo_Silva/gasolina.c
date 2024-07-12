/* ATIVIDADE 01 - 05/04/2024 - Gustavo Machado Silva

O programa tem como objetivo ler os precos de etanol, gasolina comum e gasolina aditivada.
Entao retornar qual o melhor combustivel.

*/

#include <stdio.h>

int main() {

    float valorEtanol, valorGasolinaComum, valorGasolinaAditivada;
    float razaoEtanolEComum, razaoEtanolEAditivada;

    printf("Digite o valor do etanol (R$/l): ");
    scanf("%f", &valorEtanol);
    printf("Digite o valor da gasolina comum (R$/l): ");
    scanf("%f", &valorGasolinaComum);
    printf("Digite o valor da gasolina aditivada (R$/l): ");
    scanf("%f", &valorGasolinaAditivada);

    razaoEtanolEComum = valorEtanol / valorGasolinaComum;
    razaoEtanolEAditivada = valorEtanol / valorGasolinaAditivada;

    if (razaoEtanolEComum < 0.7F || razaoEtanolEAditivada < 0.7F) {
        printf("Abastecer com etanol eh mais vantajoso!\n");
    }
    else if (razaoEtanolEComum == 0.7F || razaoEtanolEAditivada == 0.7F) {
        if (valorGasolinaComum < valorGasolinaAditivada) {
            printf("Nao ha preferencia por combustivel!\n");
        }
        else {
            printf("Abastecer com gasolina aditivada eh mais vantajoso!\n");
        }
    }
    else {
        if (valorGasolinaAditivada <= valorGasolinaComum) {
            printf("Abastecer com gasolina aditivada eh mais vantajoso!\n");
        }
        else {
            printf("Abastecer com gasolina comum eh mais vantajoso!\n");
        }
    }

    return 0;
}
