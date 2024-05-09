/* Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos (1+3+5+7+9+...) até que esta soma 
seja igual a N, o número M de termos somados será igual a raiz quadrada de N.

Exemplo 1: N = 16 16 = 1 + 3 + 5 + 7 ou seja, M = 4 termos. Logo, a raiz quadrada de 16 é 4.

Exemplo 2: N = 81 81 = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 ou seja, M = 9 termos.
Logo, a raiz quadrada de 81 é 9.

Fazer um programa em C para ler um número inteiro e positivo N (fazer consistência) e responder se N é quadrado perfeito. */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {

    int i;
    int numero, somaNumerosImpares, contador;
    
    printf("Informe um numero positivo: ");
    scanf("%d", &numero);

    i = 1;
    somaNumerosImpares = 0;
    contador = 0;

    while (somaNumerosImpares < numero) {

        somaNumerosImpares += i;
        i += 2;
        contador++;

    }

    if (somaNumerosImpares == numero) {
        printf("\nO numero eh perfeito, sua raiz eh %d!\n", contador);
    }
    else {
        printf("\nO numero nao eh perfeito!\n");
    }

    return 0;
}