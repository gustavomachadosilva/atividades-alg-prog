/* Este programa tem como pbjetivo ler um valor inteiro que representa um tempo em segundos e imprimir
na tela o correspondente em horas, minutos e segundos no formato 00:00:00 */

#include <stdio.h>

int main() {

    int numeroSegundos, horas, restoHoras, minutos, segundos;

    printf("Digite o número de segundos: ");
    scanf("%d", &numeroSegundos);

    horas = numeroSegundos / 3600;
    restoHoras = numeroSegundos % 3600;

    minutos = restoHoras / 60;
    segundos = restoHoras % 60;

    printf("%d segundos eh o equivalente a %02d:%02d:%02d\n", numeroSegundos, horas, minutos, segundos);

    return 0;
}