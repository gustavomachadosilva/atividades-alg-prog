/* O número 3025 possui a seguinte característica:

30 + 25 = 55 
55^2 = 3025

Fazer um programa que pesquise e imprima todos os números de quatro algarismos que apresentam tal característica. 
Para isto, utilizar uma função que determina se um número comporta-se como o 3025. */

#include <stdio.h>

void solicitaValorAoUsuario(int *ptrValor);
void verificaCondicaoValor(int valor);
void separaValor(int valor, int *ptrValorSeparado1, int *ptrValorSeparado2);

int main() {

    int valor;

    solicitaValorAoUsuario(&valor);
    verificaCondicaoValor(valor);

    return 0;
}

void solicitaValorAoUsuario(int *ptrValor) {

    printf("\nInforme o valor a ser verificado: ");
    scanf("%d", ptrValor);

}

void verificaCondicaoValor(int valor) {

    int valorSeparado1, valorSeparado2, soma, quadrado;

    separaValor(valor, &valorSeparado1, &valorSeparado2);

    soma = valorSeparado1 + valorSeparado2;
    quadrado = soma * soma;

    if (quadrado == valor) {
        printf("Valor pertence a condicao.\n");
    }
    else {
        printf("Valor NAO pertence a condicao.\n");
    }

}

void separaValor(int valor, int *ptrValorSeparado1, int *ptrValorSeparado2) {

    float valorFloat;
    float segundoValor;

    valorFloat = (float)valor / 100.00;
    *ptrValorSeparado1 = (int)valorFloat;

    segundoValor = valorFloat - *ptrValorSeparado1;
    segundoValor *= 100;
    *ptrValorSeparado2 = (int)segundoValor;

}