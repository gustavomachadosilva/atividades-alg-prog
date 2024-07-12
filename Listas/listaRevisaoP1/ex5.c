/* Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos (1+3+5+7+9+...) até que esta soma seja 
igual a N, o número M de termos somados será igual a raiz quadrada de N.

Exemplo 1: N = 16 16 = 1 + 3 + 5 + 7 ou seja, M = 4 termos. Logo, a raiz quadrada de 16 é 4.
Exemplo 2: N = 81 81 = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 ou seja, M = 9 termos. Logo, a raiz quadrada de 81 é 9.

Fazer um programa em C para ler um número inteiro e positivo N (fazer consistência) e responder se N é quadrado perfeito. */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {

    int numero, somatorio, proximoImpar, numeroTermos;

    do {

        printf("\nInforme o numero: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Numero deve ser positivo e diferente de 0!");
        }

    } while (numero <= 0);

    somatorio = 0;
    proximoImpar = 1;
    numeroTermos = 0;
    while (somatorio < numero) {
        somatorio += proximoImpar;
        proximoImpar += 2;
        numeroTermos++;
    }

    if (somatorio == numero) {
        printf("\nO numero eh quadrado perfeito. Logo a raiz quadrade de %d eh %d.\n", numero, numeroTermos);
    }
    else {
        printf("\nO numero NAO eh quadrado perfeito.\n");
    }

    return 0;
}