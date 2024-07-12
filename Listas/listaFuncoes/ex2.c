/* Escrevaumafunçãoquecalculeon-ésimotermodasériedeFibonacci.AsériedeFibonaccié a seguinte:

0 1 1 2 3 5 8 13 21 34 ... ou seja: - o primeiro termo vale zero;
- o segundo termo vale 1;
- ti vale (ti-1 + ti-2), para i ≥ 3.

Escreva um programa que utilize esta função para calcular o termo solicitado por um usuário. */

#include <stdio.h>

void solicitaTermoAoUsuario(int *ptr);
void calculaValorNesimoTermofibonacci(int termo, int *valorTermo);
void informaValorNesimoTermoFibonacci(int termo, int *valorTermo);

int main() {

    int termo;
    int valorTermo;

    solicitaTermoAoUsuario(&termo);
    calculaValorNesimoTermofibonacci(termo, &valorTermo);
    informaValorNesimoTermoFibonacci(termo, &valorTermo);

    return 0;
}

void solicitaTermoAoUsuario(int *ptr) {

    printf("\nInforme o termo desejado: ");
    scanf("%d", ptr);

}

void calculaValorNesimoTermofibonacci(int termo, int *valorTermo) {

    int i;
    int termo1 = 0;
    int termo2 = 1;

    if (termo == 0) {
        *valorTermo = termo1;
    }
    else if (termo == 1) {
        *valorTermo = termo2;
    }
    else if (termo > 1) {
        for (i=2; i<termo; i++) {
            *valorTermo = termo1 + termo2;
            termo1 = termo2;
            termo2 = *valorTermo;
        }
    }
    else {
        *valorTermo = -1;
    }

}

void informaValorNesimoTermoFibonacci(int termo, int *valorTermo) {

    if (*valorTermo != -1) {
        printf("\nO valor do %d° termo de fibonacci eh: %d\n", termo, *valorTermo);
    }
    else {
        printf("\nErro! Nao foi possivel encontrar o valor do termo %d.\n", termo);
    }

}