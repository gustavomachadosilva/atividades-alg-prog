/* Este programa serve para calcular o IMC de uma pessoa, tendo como dados de entrada a massa da pessoa e a altura da pessoa.
O programa retorna o valor do IMC da pessoa e a condição em que ela se encontra. */

#include <stdio.h>

int main() {

    int massaGramas, alturaCm;
    float massaQuilos, alturaMetro, imc;

    printf("Vamos calcular o IMC de uma pessoa!\n\n");
    printf("Informe a massa da pessoa (gramas): ");
    scanf("%d", &massaGramas);
    printf("Informe a altura da pessoa (centimetros): ");
    scanf("%d", &alturaCm);

    massaQuilos = (float) massaGramas / 1000;
    alturaMetro = (float) alturaCm / 100;
    imc = massaQuilos / (alturaMetro * alturaMetro);

    printf("\nO IMC da pessoa eh %.2f\n", imc);

    if (imc >= 0 && imc < 16) {
        printf("A pessoa esta em condicao de subpeso severo.\n");
    }

    if (imc >= 16 && imc < 20) {
        printf("A pessoa esta em condicao de subpeso.\n");
    }

    if (imc >= 20 && imc < 25) {
        printf("A pessoa esta em condicao de peso normal.\n");
    }

    if (imc >= 25 && imc < 30) {
        printf("A pessoa esta em condicao de sobrepeso.\n");
    }

    if (imc >= 30 && imc < 40) {
        printf("A pessoa esta em condicao de obesidade.\n");
    }

    if (imc >= 40) {
        printf("A pessoa esta em condicao de obesidade severa.\n");
    }

    return 0;
}
