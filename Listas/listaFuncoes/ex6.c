/* Fazer um programa em C que calcule a média móvel. A média móvel é efetuada sobre um número especificado de pontos. 
Quando se introduz um novo dado, descarta-se o valor mais antigo, dando-se lugar à nova introdução. 
Este esquema de substituição faz da média móvel um instrumento valioso na análise de tendências. 
Quanto menor o número de dados, mais sensível será com relação à média. O programa aqui desenvolvido deverá executar um 
laço de leitura de valores inteiros e positivos, até que a introdução de um valor negativo indique o término do programa. 
Para cada valor fornecido, a média calculada deverá ser impressa. Considerar, para a solução deste problema, 
5 pontos (valores) e assumir que pelo menos 5 pontos válidos serão fornecidos até que a média seja informada pela 1a vez.

Usar obrigatoriamente:
a) uma função void para armazenar cada valor no vetor de valores;
b) uma função tipada para calcular as médias sucessivas.

No programa principal, a cada valor introduzido (após os quatro primeiros) deverá ser apresentada a média calculada e 
os valores considerados no seu cálculo. */

#include <stdio.h>

#define MAX_VALORES 5
#define TRUE 1
#define FALSE 0

void solicitaValor(int *ptrValor);
int verificaValorValido(int valor);
void adicionaValorAoVetor(int valor, int *ptrVetor);
float calculaMediaValores(int *ptrValores);

int main() {

    int valor, contador;
    int valores[MAX_VALORES] = {};
    float media;

    contador = 0;

    do {

        solicitaValor(&valor);

        if (verificaValorValido(valor) == TRUE) {

            contador++;
            adicionaValorAoVetor(valor, valores);

            if (contador >= 5) {

                media = calculaMediaValores(valores);
                printf("Media movel = %.2f\n", media);

            }

        }

    } while(verificaValorValido(valor) == TRUE);

    return 0;
}

void solicitaValor(int *ptrValor) {

    printf("\nInforme um valor inteiro positivo (ou negativo para sair): ");
    scanf("%d", ptrValor);

}

int verificaValorValido(int valor) {

    if (valor >= 0) {
        return TRUE;
    }
    else {
        return FALSE;
    }

}

void adicionaValorAoVetor(int valor, int *ptrVetor) {

    int i;

    for (i=0; i<(MAX_VALORES - 1); i++) {

        *(ptrVetor + i) = *(ptrVetor + i + 1);

    }

    *(ptrVetor + MAX_VALORES - 1) = valor;

}

float calculaMediaValores(int *ptrValores) {

    int i;
    float media, soma;

    soma = 0.0;

    for (i=0; i<MAX_VALORES; i++) {
        soma += *(ptrValores + i);
    }

    media = soma / MAX_VALORES;

    return media;

}