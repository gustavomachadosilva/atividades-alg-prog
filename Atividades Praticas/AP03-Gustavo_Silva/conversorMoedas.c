/* ATIVIDADE 01 - 05/04/2024 - Gustavo Machado Silva

O programa tem como objetivo ler uma moeda origem e uma moeda destino.
Ler um valor origem e calcular o valor para a moeda destino.

*/

#include <stdio.h>

#define REAL_PARA_DOLAR 0.19132101F
#define REAL_PARA_EURO 0.18119005F
#define DOLAR_PARA_EURO 0.94704732F

int main() {

    char moedaOrigem, moedaDestino;
    float valorOrigem, valorDestino;
    int validadorMoedaOrigem, validadorMoedaDestino;

    validadorMoedaOrigem = 1;
    validadorMoedaDestino = 1;

    printf("Digite a moeda de origem (use R/r para real. D/d para dolar e E/e para euro): ");
    scanf(" %c", &moedaOrigem);
    printf("Digite a moeda de destino (use R/r para real. D/d para dolar e E/e para euro): ");
    scanf(" %c", &moedaDestino);


    switch (moedaOrigem) {
        case 'R':
        case 'r':
            printf("Digite um montante em reais: ");
            scanf("%f", &valorOrigem);
            break;
        case 'D':
        case 'd':
            printf("Digite um montante em dolar: ");
            scanf("%f", &valorOrigem);
            break;
        case 'E':
        case 'e':
            printf("Digite um montante em euro: ");
            scanf("%f", &valorOrigem);
            break;
        default:
            printf("Moeda de origem nao valida!\n");
            validadorMoedaOrigem = 0;
    }

    switch (moedaDestino) {
        case 'R':
        case 'r':
            switch (moedaOrigem) {
                case 'D':
                case 'd':
                    valorDestino = valorOrigem / REAL_PARA_DOLAR;
                    break;
                case 'E':
                case 'e':
                    valorDestino = valorOrigem / REAL_PARA_EURO;
            }
            break;
        case 'D':
        case 'd':
            switch (moedaOrigem) {
                case 'R':
                case 'r':
                    valorDestino = valorOrigem * REAL_PARA_DOLAR;
                    break;
                case 'E':
                case 'e':
                    valorDestino = valorOrigem / DOLAR_PARA_EURO;
            }
            break;
        case 'E':
        case 'e':
            switch (moedaOrigem) {
                case 'R':
                case 'r':
                    valorDestino = valorOrigem * REAL_PARA_EURO;
                    break;
                case 'D':
                case 'd':
                    valorDestino = valorOrigem * DOLAR_PARA_EURO;
            }
            break;
        default:
            printf("Moeda de destino nao valida!\n");
            validadorMoedaDestino = 0;
    }

    if (validadorMoedaOrigem == 1 && validadorMoedaDestino == 1) {
        switch (moedaDestino) {
            case 'R':
            case 'r':
                printf("O montante corresponde a %.2f reais\n", valorDestino);
                break;
            case 'D':
            case 'd':
                printf("O montante corresponde a %.2f dolar\n", valorDestino);
                break;
            case 'E':
            case 'e':
                printf("O montante corresponde a %.2f euros\n", valorDestino);
                break;
        }
    }

    return 0;
}
